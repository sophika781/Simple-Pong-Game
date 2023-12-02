----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:07:31 11/06/2023 
-- Design Name: 
-- Module Name:    VGA - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

--include front and back porch for vertical and horizontal
-- sync, back porch, active image, front porch

entity VGA is
	PORT(
		clk: in STD_LOGIC;
		DAC_CLK: out STD_LOGIC; --pixel clock
		switches: in STD_LOGIC_VECTOR (3 downto 0);
		H: out STD_LOGIC; 	-- Horizontal Sync
		V: out STD_LOGIC; 	--Vertical Sync
		green: out STD_LOGIC_VECTOR (7 downto 0);
		red: out std_logic_vector (7 downto 0);
		blue: out std_logic_vector (7 downto 0)
	);
end VGA;

architecture Behavioral of VGA is
--VGA: 640 x 480

	signal H_pixel_counter: integer := 0 ; -- for columns     
	signal V_pixel_counter: integer := 0; --for rows       
 
	signal clk1: std_logic := '0';   --pixel clock
	signal clk_counter: integer := 0;
	signal Hor_image: integer := 639;
	signal Hor_sync: integer := 96;
	signal H_backporch: integer := 48;
	signal H_frontporch: integer := 16;
	
	signal Ver_image: integer := 479;
	signal Ver_sync: integer := 2;
	signal V_backporch: integer := 33;
	signal V_frontporch: integer := 10;
	
	signal Ballx: integer := 310;
	signal Bally: integer := 230;
	
	signal Paddle1Y: integer:= 180; 
	signal Paddle2Y: integer:= 180;
	
	signal active : std_logic := '0';
	signal new_frame: std_logic := '0';
	signal ball_speed: integer:= 1;
	signal frames: integer := 0;
	signal borders: std_logic_vector(1 downto 0) := "00";
	
	signal points1: integer := 0;
	signal points2: integer := 0;
	
begin
	
	ClockGeneration: process(clk)
	begin
		if(clk'event and clk= '1') then
			clk_counter <= clk_counter + 1;
			if(clk_counter = 0) then
				clk1 <= '1';
			else
				if(clk_counter = 1) then
					clk_counter <= 0;
				end if;
				clk1 <= '0';
			end if;
		end if;
	end process;
	
	Pixel_Clock: process(clk1)
	begin
		DAC_CLK <= clk1;
	end process;
	
	H_PixelCount: process(clk1, H_pixel_counter, Hor_image, Hor_sync, H_backporch, H_frontporch)
	begin
		if(clk1'event and clk1= '1') then
			if(H_pixel_counter = (Hor_image + Hor_sync + H_backporch + H_frontporch)) then                  
				H_pixel_counter <= 0 ;
			else
				H_pixel_counter <= H_pixel_counter + 1;
			end if;
		end if;
	end process;
	
	V_PixelCount: process(clk1, H_pixel_counter, Hor_image, Hor_sync, H_backporch, H_frontporch, V_pixel_counter, Ver_image, Ver_sync, V_backporch, V_frontporch)
	begin
		if(clk1'event and clk1= '1') then
			if(H_pixel_counter = (Hor_image + Hor_sync + H_backporch + H_frontporch)) then                  
				if(V_pixel_counter = (Ver_image + Ver_sync + V_backporch + V_frontporch)) then 
					V_pixel_counter <= 0 ;
					frames <= frames + 1;
				else
					V_pixel_counter <= V_pixel_counter + 1;
				end if;
			end if;
			if(frames = ball_speed) then
				new_frame <= '1';
				frames <= 0;
			else
				new_frame <= '0';
			end if;
		end if;
	end process;
	
	HSync: process(clk1, H_pixel_counter, V_pixel_counter)
	begin
		if(clk1'event and clk1= '1') then
			if((H_pixel_counter <= (Hor_image + H_frontporch))or (H_pixel_counter > (Hor_image + H_frontporch + Hor_sync))) then
				H <= '1';
			else
				H <= '0';
			end if;
		end if;
	end process;
	
	VSync: process(clk1, H_pixel_counter, V_pixel_counter)
	begin
		if(clk1'event and clk1= '1') then
			if((V_pixel_counter <= (Ver_image + V_frontporch)) or (V_pixel_counter > (Ver_image + V_frontporch + Ver_sync))) then
				V <= '1';
			else
				V <= '0';
			end if;
		end if;
	end process;

	ActiveSet: process(clk1, H_pixel_counter, V_pixel_counter)
	begin
		if(clk1'event and clk1= '1') then 
			if(H_pixel_counter <= Hor_image and V_pixel_counter <= Ver_image) then
				active <= '1';
			else
				active <= '0';
			end if;
		end if;
	end process;
	
	Ball_Position_Change: process(new_frame, clk1, Ballx, Bally, borders)  --Changing the position of the Ball every new frame
	begin
		if(clk1'event and clk1= '1') then
			if(new_frame = '1') then
				if(borders= "00") then
					Ballx <= Ballx + 1;
					Bally <= Bally + 1;
				elsif(borders= "01") then
					Ballx <= Ballx + 1;
					Bally <= Bally - 1;
				elsif(borders= "10")  then
					Ballx <=  Ballx - 1;
					Bally <= Bally - 1;
				elsif(borders= "11") then
					Ballx <= Ballx - 1;
					Bally <= Bally + 1;
				end if;
				if((Bally + 20) = 439 and borders = "00") then --Hitting Bottom Border
					Bally <= Bally - 1;
					borders <= "01";
				elsif((Bally + 20) = 439 and borders= "11") then
					Bally <= Bally - 1;
					borders <= "10";
				elsif((Ballx + 20) = 589 and borders= "01" and ((Bally + 20) < 160 or Bally > 320)) then --Hitting Right Border
					Ballx <=  Ballx - 1;
					borders <= "10";
				elsif((Ballx + 20) = 589 and borders= "00" and ((Bally + 20) < 160 or Bally > 320)) then 
					Ballx <=  Ballx - 1;
					borders <= "11";
				elsif(Bally = 41 and borders= "01") then --Hitting Top Border
					borders <= "00";
				elsif(Bally = 41 and borders= "10") then
					Ballx <=  Ballx - 1;
					borders <= "11";
				elsif(Ballx = 51 and borders= "11" and ((Bally + 20) < 160 or Bally > 320)) then  --Hitting Left Border
					borders <= "00";
				elsif(Ballx = 51 and borders= "10" and ((Bally + 20) < 160 or Bally > 320)) then
					borders <= "01";
				elsif(Ballx = 81 and borders = "10") then --Hitting Left Paddle
					if(((Bally > Paddle1Y) and (Bally < (Paddle1Y + 120))) or (((Bally + 20) < (Paddle1Y + 120)) and ((Bally + 20) > Paddle1Y))) then
						borders <= "01";
					end if;
				elsif(Ballx = 81 and borders = "11") then
					if(((Bally > Paddle1Y) and (Bally < (Paddle1Y + 120))) or (((Bally + 20) < (Paddle1Y + 120)) and ((Bally + 20) > Paddle1Y))) then
						borders <= "00";
					end if;
				elsif((Ballx + 20) = 559 and borders = "01") then --Hitting Right Paddle
					if(((Bally > Paddle2Y) and (Bally < (Paddle2Y + 120))) or (((Bally + 20) < (Paddle2Y + 120)) and ((Bally + 20) > Paddle2Y))) then
						borders <= "10";
					end if;
				elsif ((Ballx + 20) = 559 and borders = "00") then
					if(((Bally > Paddle2Y) and (Bally < (Paddle2Y + 120))) or (((Bally + 20) < (Paddle2Y + 120)) and ((Bally + 20) > Paddle2Y))) then
						borders <= "11";
					end if;
				end if;
				if(((Ballx + 20) < 50 or Ballx > 590) and (Bally > 160 and Bally < 320) and switches(2)= '1' and switches(3)= '1') then  --Reset after Goal
					Ballx <= 310;
					Bally <= 230;
				elsif((points1= 3 or points2= 3) and switches(2)= '1' and switches(3)= '1') then
					Ballx <= 310;
					Bally <= 230;
					borders <= "00";
				elsif(switches(2)= '0' and switches(3)= '0') then
					Ballx <= 310;
					Bally <= 230;
				end if;
			end if;
		end if;
	end process;
	
	Paddle_Position_Change: process(new_frame, switches)
	begin
		if(clk1'event and clk1= '1') then
			if(new_frame= '1') then
				if(switches(0)= '1' and (Paddle1Y > 50) and switches(2)= '1') then
					Paddle1Y <= Paddle1Y - 2;
				elsif(switches(0)= '0' and ((Paddle1Y + 120) < 430) and switches(2)= '1') then
					Paddle1Y <= Paddle1Y + 2;
				end if;
				if (switches(1)= '1' and (Paddle2Y > 50) and switches(3)= '1') then
					Paddle2Y <= Paddle2Y - 2;
				elsif(switches(1)= '0' and ((Paddle2Y + 120) < 430) and switches(3)= '1') then
					Paddle2Y <= Paddle2Y + 2;
				elsif(switches(2)= '0' and switches(3)= '0') then
					Paddle1Y <= 180;
					Paddle2Y <= 180;
				end if;
			end if;
		end if;
	end process;
	
	Points_Generation: process(clk1, Ballx, Bally, new_frame)
	begin
		if(clk1'event and clk1= '1') then
			if(new_frame= '1') then
				if((Ballx + 20) < 50 and (Bally > 160 and Bally < 320)) then
					points2 <= points2 + 1;
				elsif(Ballx > 590 and (Bally > 160 and Bally < 320)) then
					points1 <= points1 + 1;
				end if;
				if(points1 = 3 or points2= 3) then
					points1 <= 0;
					points2 <= 0;
				end if;
			end if;
		end if;
	end process;
	
	--Changing Individual Pixel Colours
	Static_Background: process(clk1, H_pixel_counter, V_pixel_counter, active, Ballx, Bally)
	begin
		if(clk1'event and clk1 = '1') then
			if(active = '1') then   --Green Field
				red <= "00000000";
				green <= "11111111";
				blue <= "00000000";
				if(((H_pixel_counter >= 30 and H_pixel_counter < 50) or (H_pixel_counter >= 590 and H_pixel_counter < 610)) and ((V_pixel_counter >= 20 and V_pixel_counter <160) or (V_pixel_counter >= 320 and V_pixel_counter <460))) then --White Border
					red <= "11111111";
					green <= "11111111";
					blue <= "11111111";
				elsif((H_pixel_counter >= 50 and H_pixel_counter < 590) and ((V_pixel_counter >= 20 and V_pixel_counter <40) or (V_pixel_counter >= 440 and V_pixel_counter <460))) then   --White Border
					red <= "11111111";
					green <= "11111111";
					blue <= "11111111";
				elsif((H_pixel_counter >= 60 and H_pixel_counter < 80) and (V_pixel_counter >= Paddle1Y and V_pixel_counter <(Paddle1Y + 120))) then  --Left Paddle
					red <= "00000000";
					green <= "00000000";
					blue <= "11111111";
				elsif((H_pixel_counter >= 560 and H_pixel_counter < 580) and (V_pixel_counter >= Paddle2Y and V_pixel_counter < (Paddle2Y + 120))) then --Right Paddle
					red <= "11111111";
					green <= "00000000";
					blue <= "11111111";
				elsif(((H_pixel_counter >= Ballx)  and (H_pixel_counter < (Ballx+20)))and ((V_pixel_counter >= Bally) and (V_pixel_counter < (Bally+20)))) then
					if((((Ballx + 20) > 590) or (Ballx <50)) and (Bally > 160 and Bally < 320)) then
						red <= "11111111";
						green <= "00000000";
						blue <= "00000000";
					else
						red <= "11111111";
						green <= "11111111";
						blue <= "00000000";
					end if;
				elsif((H_pixel_counter >= 317 and H_pixel_counter < 323) and ((V_pixel_counter >= 70 and V_pixel_counter <110) or (V_pixel_counter >= 130 and V_pixel_counter <170) or (V_pixel_counter >= 190 and V_pixel_counter <230) or (V_pixel_counter >= 250 and V_pixel_counter <290) or (V_pixel_counter >= 310 and V_pixel_counter <350) or (V_pixel_counter >= 370 and V_pixel_counter <410))) then  --Black Segmented Line in Middle
					red <= "00000000";
					green <= "00000000";
					blue <= "00000000";
				elsif(H_pixel_counter >= 10 and H_pixel_counter<20) then
					if(points1= 1) then
						if(V_pixel_counter >= 20 and V_pixel_counter < 30) then
							red <= "00000000";
							green <= "00000000";
							blue <= "11111111";
						end if;
					elsif(points1= 2) then
						if(V_pixel_counter >= 20 and V_pixel_counter < 40) then
							red <= "00000000";
							green <= "00000000";
							blue <= "11111111";
						end if;
					elsif(points1= 3) then
						if(V_pixel_counter >= 20 and V_pixel_counter < 60) then
							red <= "00000000";
							green <= "00000000";
							blue <= "11111111";
						end if;
					else
						red<= "00000000";
						green <= "11111111";
						blue <= "00000000";
					end if;
				elsif(H_pixel_counter >= 620 and H_pixel_counter<630) then
					if(points2= 1) then
						if(V_pixel_counter >= 20 and V_pixel_counter < 30) then
							red <= "11111111";
							green <= "00000000";
							blue <= "11111111";
						end if;
					elsif(points2= 2) then
						if(V_pixel_counter >= 20 and V_pixel_counter < 40) then
							red <= "11111111";
							green <= "00000000";
							blue <= "11111111";
						end if;
					elsif(points2= 3) then
						if(V_pixel_counter >= 20 and V_pixel_counter < 60) then
							red <= "11111111";
							green <= "00000000";
							blue <= "11111111";
						end if;
					else
						red<= "00000000";
						green <= "11111111";
						blue <= "00000000";
					end if;
				end if;
			else
				red <= "00000000";
				green <= "00000000";
				blue <= "00000000";
			end if;
		end if;
	end process;
	
end Behavioral;


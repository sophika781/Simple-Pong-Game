/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/student2/sgoban/coe758/VGA/VGA.vhd";



static void work_a_1110640149_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 2792U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 7368);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 0);
    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 1);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 7432);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 7432);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 7368);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void work_a_1110640149_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    char *t12;
    int t13;
    int t14;
    char *t15;
    int t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2592U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7208);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t4 = (t0 + 2952U);
    t10 = *((char **)t4);
    t11 = *((int *)t10);
    t4 = (t0 + 3112U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t14 = (t11 + t13);
    t4 = (t0 + 3272U);
    t15 = *((char **)t4);
    t16 = *((int *)t15);
    t17 = (t14 + t16);
    t4 = (t0 + 3432U);
    t18 = *((char **)t4);
    t19 = *((int *)t18);
    t20 = (t17 + t19);
    t21 = (t9 == t20);
    if (t21 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t11 = (t9 + 1);
    t2 = (t0 + 7496);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((int *)t12) = t11;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 7496);
    t22 = (t4 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((int *)t25) = 0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void work_a_1110640149_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    char *t12;
    int t13;
    int t14;
    char *t15;
    int t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    unsigned char t21;
    char *t22;
    int t23;
    char *t24;
    int t25;
    char *t26;
    int t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2592U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7224);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t4 = (t0 + 2952U);
    t10 = *((char **)t4);
    t11 = *((int *)t10);
    t4 = (t0 + 3112U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t14 = (t11 + t13);
    t4 = (t0 + 3272U);
    t15 = *((char **)t4);
    t16 = *((int *)t15);
    t17 = (t14 + t16);
    t4 = (t0 + 3432U);
    t18 = *((char **)t4);
    t19 = *((int *)t18);
    t20 = (t17 + t19);
    t21 = (t9 == t20);
    if (t21 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 2472U);
    t22 = *((char **)t4);
    t23 = *((int *)t22);
    t4 = (t0 + 3592U);
    t24 = *((char **)t4);
    t25 = *((int *)t24);
    t4 = (t0 + 3752U);
    t26 = *((char **)t4);
    t27 = *((int *)t26);
    t28 = (t25 + t27);
    t4 = (t0 + 3272U);
    t29 = *((char **)t4);
    t30 = *((int *)t29);
    t31 = (t28 + t30);
    t4 = (t0 + 3432U);
    t32 = *((char **)t4);
    t33 = *((int *)t32);
    t34 = (t31 + t33);
    t35 = (t23 == t34);
    if (t35 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t11 = (t9 + 1);
    t2 = (t0 + 7560);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((int *)t12) = t11;
    xsi_driver_first_trans_fast(t2);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 7560);
    t36 = (t4 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((int *)t39) = 0;
    xsi_driver_first_trans_fast(t4);
    goto LAB12;

}

static void work_a_1110640149_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    unsigned char t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    int t23;
    char *t24;
    int t25;
    int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2592U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7240);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 2312U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t4 = (t0 + 2952U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t4 = (t0 + 3432U);
    t13 = *((char **)t4);
    t14 = *((int *)t13);
    t15 = (t12 + t14);
    t16 = (t10 <= t15);
    if (t16 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2312U);
    t17 = *((char **)t4);
    t18 = *((int *)t17);
    t4 = (t0 + 2952U);
    t19 = *((char **)t4);
    t20 = *((int *)t19);
    t4 = (t0 + 3432U);
    t21 = *((char **)t4);
    t22 = *((int *)t21);
    t23 = (t20 + t22);
    t4 = (t0 + 3112U);
    t24 = *((char **)t4);
    t25 = *((int *)t24);
    t26 = (t23 + t25);
    t27 = (t18 > t26);
    t8 = t27;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7624);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 7624);
    t28 = (t4 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

}

static void work_a_1110640149_3212880686_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    unsigned char t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    int t23;
    char *t24;
    int t25;
    int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2592U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7256);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 2472U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t4 = (t0 + 3592U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t4 = (t0 + 4072U);
    t13 = *((char **)t4);
    t14 = *((int *)t13);
    t15 = (t12 + t14);
    t16 = (t10 <= t15);
    if (t16 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2472U);
    t17 = *((char **)t4);
    t18 = *((int *)t17);
    t4 = (t0 + 3592U);
    t19 = *((char **)t4);
    t20 = *((int *)t19);
    t4 = (t0 + 4072U);
    t21 = *((char **)t4);
    t22 = *((int *)t21);
    t23 = (t20 + t22);
    t4 = (t0 + 3752U);
    t24 = *((char **)t4);
    t25 = *((int *)t24);
    t26 = (t23 + t25);
    t27 = (t18 > t26);
    t8 = t27;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 7688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(126, ng0);
    t4 = (t0 + 7688);
    t28 = (t4 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

}

static void work_a_1110640149_3212880686_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    unsigned char t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2592U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7272);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 2312U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t4 = (t0 + 2952U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t13 = (t10 <= t12);
    if (t13 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7752);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 7752);
    t19 = (t4 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t4 = (t0 + 2472U);
    t14 = *((char **)t4);
    t15 = *((int *)t14);
    t4 = (t0 + 3592U);
    t16 = *((char **)t4);
    t17 = *((int *)t16);
    t18 = (t15 <= t17);
    t8 = t18;
    goto LAB13;

}

static void work_a_1110640149_3212880686_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2592U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7288);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 4232U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 10985);
    t5 = (t0 + 7816);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 10993);
    t5 = (t0 + 7880);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 11001);
    t5 = (t0 + 7944);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(149, ng0);
    t4 = (t0 + 10961);
    t12 = (t0 + 7816);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 8U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 10969);
    t5 = (t0 + 7880);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 10977);
    t5 = (t0 + 7944);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB9;

}


extern void work_a_1110640149_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1110640149_3212880686_p_0,(void *)work_a_1110640149_3212880686_p_1,(void *)work_a_1110640149_3212880686_p_2,(void *)work_a_1110640149_3212880686_p_3,(void *)work_a_1110640149_3212880686_p_4,(void *)work_a_1110640149_3212880686_p_5,(void *)work_a_1110640149_3212880686_p_6};
	xsi_register_didat("work_a_1110640149_3212880686", "isim/VGA_isim_beh.exe.sim/work/a_1110640149_3212880686.didat");
	xsi_register_executes(pe);
}

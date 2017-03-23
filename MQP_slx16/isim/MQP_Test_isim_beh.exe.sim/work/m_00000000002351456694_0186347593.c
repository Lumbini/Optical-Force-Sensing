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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//storage.wpi.edu/home/My_Documents/MQP/MQP_slx16/MQP_Test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {12, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {16, 0};
static const char *ng7 = "Time:%t Next Data: %b Data Out: %b SI:%b";



static void Always_76_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);

LAB4:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_84_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);

LAB4:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 125000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 125000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_92_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);

LAB4:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5072);
    xsi_process_wait(t2, 512000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5072);
    xsi_process_wait(t2, 512000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Always_100_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6328);
    *((int *)t2) = 1;
    t3 = (t0 + 5544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_105_4(char *t0)
{
    char t17[8];
    char t29[8];
    char t30[8];
    char t34[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6344);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(108, ng0);

LAB9:    xsi_set_current_line(109, ng0);
    t13 = (t0 + 3048);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng3)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB11;

LAB10:    t19 = (t16 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t15) > *((unsigned int *)t16))
        goto LAB12;

LAB13:    t21 = (t17 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB20;

LAB19:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB21;

LAB22:    t14 = (t17 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t17);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(123, ng0);

LAB34:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = xsi_vlog_time(t34, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 3688);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng7, 5, t0, (char)118, t34, 64, (char)118, t5, 12, (char)118, t13, 12, (char)118, t15, 1);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 12, t4, 12, t5, 12);
    t6 = (t0 + 3848);
    xsi_vlogvar_assign_value(t6, t17, 0, 0, 12);

LAB26:
LAB17:    goto LAB8;

LAB11:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t17) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(110, ng0);

LAB18:    xsi_set_current_line(111, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 5, t4, 5, t5, 5);
    t6 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t6, t17, 0, 0, 5, 0LL);
    goto LAB17;

LAB20:    t13 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t17) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(116, ng0);

LAB27:    xsi_set_current_line(117, ng0);
    t15 = ((char*)((ng5)));
    t16 = (t0 + 3688);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t30, 0, 8);
    t20 = (t30 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t30) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t26 & 2047U);
    t31 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t31 & 2047U);
    xsi_vlogtype_concat(t29, 12, 12, 2U, t30, 11, t15, 1);
    t27 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t27, t29, 0, 0, 12, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t17) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 11);
    t22 = (t12 & 1);
    *((unsigned int *)t5) = t22;
    t7 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t7, t17, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t5) == 0)
        goto LAB28;

LAB30:    t6 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t6) = 1;

LAB31:    t7 = (t17 + 4);
    t13 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    *((unsigned int *)t17) = t23;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB33;

LAB32:    t32 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t32 & 1U);
    t33 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t33 & 1U);
    t14 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t14, t17, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 5, t4, 5, t5, 5);
    t6 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t6, t17, 0, 0, 5, 0LL);
    goto LAB26;

LAB28:    *((unsigned int *)t17) = 1;
    goto LAB31;

LAB33:    t24 = *((unsigned int *)t17);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t17) = (t24 | t25);
    t26 = *((unsigned int *)t7);
    t31 = *((unsigned int *)t13);
    *((unsigned int *)t7) = (t26 | t31);
    goto LAB32;

}

static void Initial_133_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);

LAB4:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 5816);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5816);
    xsi_process_wait(t2, 5000000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5816);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}


extern void work_m_00000000002351456694_0186347593_init()
{
	static char *pe[] = {(void *)Always_76_0,(void *)Always_84_1,(void *)Always_92_2,(void *)Always_100_3,(void *)Always_105_4,(void *)Initial_133_5};
	xsi_register_didat("work_m_00000000002351456694_0186347593", "isim/MQP_Test_isim_beh.exe.sim/work/m_00000000002351456694_0186347593.didat");
	xsi_register_executes(pe);
}

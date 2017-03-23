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
static const char *ng0 = "//storage.wpi.edu/home/My_Documents/MQP/MQP_slx16/SPI_to_USB.v";
static int ng1[] = {8, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {16U, 0U};



static void Cont_37_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t26[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3368);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t19);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t42, 8);

LAB21:    t51 = (t0 + 6432);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t55, 0, 8);
    t56 = 1U;
    t57 = t56;
    t58 = (t3 + 4);
    t59 = *((unsigned int *)t3);
    t56 = (t56 & t59);
    t60 = *((unsigned int *)t58);
    t57 = (t57 & t60);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 | t56);
    t63 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t63 | t57);
    xsi_driver_vfirst_trans(t51, 0, 0);
    t64 = (t0 + 6256);
    *((int *)t64) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 7);
    t31 = (t30 & 1);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 7);
    t34 = (t33 & 1);
    *((unsigned int *)t27) = t34;
    goto LAB14;

LAB15:    t39 = (t0 + 2888);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 7);
    t47 = (t46 & 1);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 7);
    t50 = (t49 & 1);
    *((unsigned int *)t43) = t50;
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 1, t26, 1, t42, 1);
    goto LAB21;

LAB19:    memcpy(t3, t26, 8);
    goto LAB21;

}

static void Always_38_1(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6272);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    t5 = (t0 + 3048);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t7 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t7, 2, t6, 1);
    t18 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 3, 0LL);
    goto LAB2;

}

static void Always_41_2(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6288);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    t5 = (t0 + 3208);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t7 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t7, 2, t6, 1);
    t18 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 3, 0LL);
    goto LAB2;

}

static void NetDecl_44_3(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 6496);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0U);
    t44 = (t0 + 6304);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void NetDecl_45_4(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 6560);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0U);
    t44 = (t0 + 6320);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void NetDecl_47_5(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 5688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t3 + 4);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    *((unsigned int *)t3) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 6624);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t3 + 4);
    t40 = *((unsigned int *)t3);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0U);
    t45 = (t0 + 6336);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t3) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB8;

}

static void Always_50_6(char *t0)
{
    char t20[8];
    char t30[8];
    char t32[8];
    char t49[8];
    char t83[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;

LAB0:    t1 = (t0 + 5936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6352);
    *((int *)t2) = 1;
    t3 = (t0 + 5968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB55;

LAB56:
LAB57:
LAB11:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(55, ng0);

LAB12:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t20, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t12);
    t17 = (t15 | t16);
    t25 = (~(t17));
    t26 = (t14 & t25);
    if (t26 != 0)
        goto LAB36;

LAB33:    if (t17 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t20) = 1;

LAB36:    memset(t30, 0, 8);
    t19 = (t20 + 4);
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = *((unsigned int *)t20);
    t38 = (t29 & t28);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t19) != 0)
        goto LAB39;

LAB40:    t22 = (t30 + 4);
    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t22);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB41;

LAB42:    memcpy(t49, t30, 8);

LAB43:    t77 = (t49 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t49);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB11;

LAB13:    xsi_set_current_line(58, ng0);

LAB16:    xsi_set_current_line(59, ng0);
    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    t19 = ((char*)((ng1)));
    memset(t20, 0, 8);
    t21 = (t18 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB18;

LAB17:    t22 = (t19 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t18) > *((unsigned int *)t19))
        goto LAB19;

LAB20:    t24 = (t20 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t30, 0, 8);
    t11 = (t30 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t30) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t10 & 127U);
    t13 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t13 & 127U);
    xsi_vlogtype_concat(t20, 8, 8, 2U, t30, 7, t2, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t18, t20, 0, 0, 8, 0LL);

LAB24:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t20, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB26;

LAB25:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB27;

LAB28:    t19 = (t20 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t20);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB15;

LAB18:    t23 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t20) = 1;
    goto LAB20;

LAB22:    xsi_set_current_line(60, ng0);
    t31 = ((char*)((ng4)));
    t33 = (t0 + 2728);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 127U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 127U);
    xsi_vlogtype_concat(t30, 8, 8, 2U, t32, 7, t31, 1);
    t44 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t44, t30, 0, 0, 8, 0LL);
    goto LAB24;

LAB26:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t20) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(64, ng0);
    t21 = (t0 + 3368);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 5, t23, 5, t24, 5);
    t31 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 5, 0LL);
    goto LAB32;

LAB35:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t30) = 1;
    goto LAB40;

LAB39:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB40;

LAB41:    t23 = (t0 + 3528);
    t24 = (t23 + 56U);
    t31 = *((char **)t24);
    memset(t32, 0, 8);
    t33 = (t31 + 4);
    t43 = *((unsigned int *)t33);
    t45 = (~(t43));
    t46 = *((unsigned int *)t31);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t33) != 0)
        goto LAB46;

LAB47:    t50 = *((unsigned int *)t30);
    t51 = *((unsigned int *)t32);
    t52 = (t50 & t51);
    *((unsigned int *)t49) = t52;
    t35 = (t30 + 4);
    t36 = (t32 + 4);
    t37 = (t49 + 4);
    t53 = *((unsigned int *)t35);
    t54 = *((unsigned int *)t36);
    t55 = (t53 | t54);
    *((unsigned int *)t37) = t55;
    t56 = *((unsigned int *)t37);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB43;

LAB44:    *((unsigned int *)t32) = 1;
    goto LAB47;

LAB46:    t34 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB47;

LAB48:    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t49) = (t58 | t59);
    t44 = (t30 + 4);
    t60 = (t32 + 4);
    t61 = *((unsigned int *)t30);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t32);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t73 & t71);
    t74 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t74 & t72);
    t75 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t75 & t71);
    t76 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t76 & t72);
    goto LAB50;

LAB51:    xsi_set_current_line(67, ng0);

LAB54:    xsi_set_current_line(68, ng0);
    t84 = ((char*)((ng2)));
    t86 = (t0 + 1048U);
    t87 = *((char **)t86);
    memset(t85, 0, 8);
    t86 = (t85 + 4);
    t88 = (t87 + 4);
    t89 = *((unsigned int *)t87);
    t90 = (t89 >> 7);
    *((unsigned int *)t85) = t90;
    t91 = *((unsigned int *)t88);
    t92 = (t91 >> 7);
    *((unsigned int *)t86) = t92;
    t93 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t93 & 31U);
    t94 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t94 & 31U);
    t95 = ((char*)((ng4)));
    xsi_vlogtype_concat(t83, 8, 8, 3U, t95, 2, t85, 5, t84, 1);
    t96 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t96, t83, 0, 0, 8, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t30) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t10 & 127U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 127U);
    xsi_vlogtype_concat(t20, 8, 8, 2U, t30, 7, t2, 1);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t20, 0, 0, 8, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB53;

LAB55:    xsi_set_current_line(77, ng0);

LAB58:    xsi_set_current_line(78, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1048U);
    t18 = *((char **)t12);
    memset(t30, 0, 8);
    t12 = (t30 + 4);
    t19 = (t18 + 4);
    t13 = *((unsigned int *)t18);
    t14 = (t13 >> 7);
    *((unsigned int *)t30) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 >> 7);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t17 & 31U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 31U);
    t21 = ((char*)((ng4)));
    xsi_vlogtype_concat(t20, 8, 8, 3U, t21, 2, t30, 5, t11, 1);
    t22 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t22, t20, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t30) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t10 & 127U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 127U);
    xsi_vlogtype_concat(t20, 8, 8, 2U, t30, 7, t2, 1);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t20, 0, 0, 8, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB57;

}


extern void work_m_00000000002162432532_2945506979_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Always_38_1,(void *)Always_41_2,(void *)NetDecl_44_3,(void *)NetDecl_45_4,(void *)NetDecl_47_5,(void *)Always_50_6};
	xsi_register_didat("work_m_00000000002162432532_2945506979", "isim/MQP_Test_isim_beh.exe.sim/work/m_00000000002162432532_2945506979.didat");
	xsi_register_executes(pe);
}

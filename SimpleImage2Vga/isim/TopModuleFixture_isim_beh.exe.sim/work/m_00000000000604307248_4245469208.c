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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/K n z o/Documents/Xilinx/SimpleImage2Vga/VgaDriver.v";
static const char *ng1 = "log.txt";
static const char *ng2 = "w";
static int ng3[] = {40, 0};
static const char *ng4 = "%d ns: %b %b %b00 %b00 %b00";
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static const char *ng7 = "%d";
static unsigned int ng8[] = {5U, 0U};



static void Initial_46_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(46, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 4408);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t4[8];
    char t32[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 7384);
    *((int *)t2) = 1;
    t3 = (t0 + 5608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t5 = (t0 + 3768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = (t0 + 2728U);
    t15 = *((char **)t14);
    t14 = (t0 + 2888U);
    t16 = *((char **)t14);
    t14 = (t0 + 3608);
    t25 = (t14 + 56U);
    t26 = *((char **)t25);
    memset(t4, 0, 8);
    t27 = (t4 + 4);
    t28 = (t26 + 4);
    t9 = *((unsigned int *)t26);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t28);
    t13 = (t12 >> 7);
    t17 = (t13 & 1);
    *((unsigned int *)t27) = t17;
    t29 = (t0 + 3608);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t31 + 4);
    t18 = *((unsigned int *)t31);
    t19 = (t18 >> 4);
    t20 = (t19 & 1);
    *((unsigned int *)t32) = t20;
    t21 = *((unsigned int *)t34);
    t22 = (t21 >> 4);
    t23 = (t22 & 1);
    *((unsigned int *)t33) = t23;
    t35 = (t0 + 3608);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t40 = (t37 + 4);
    t24 = *((unsigned int *)t37);
    t41 = (t24 >> 1);
    t42 = (t41 & 1);
    *((unsigned int *)t38) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 1);
    t45 = (t44 & 1);
    *((unsigned int *)t39) = t45;
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 1, 0, 0, ng4, 7, t0, (char)119, t8, 32, (char)118, t15, 1, (char)118, t16, 1, (char)118, t4, 1, (char)118, t32, 1, (char)118, t38, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

}

static void Always_58_2(char *t0)
{
    char t8[8];
    char t11[8];
    char t34[8];
    char t35[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;

LAB0:    t1 = (t0 + 5824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7400);
    *((int *)t2) = 1;
    t3 = (t0 + 5856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 3928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 10, t7, 32);
    t9 = (t0 + 472);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t8 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t10);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t26 = (t11 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(66, ng0);

LAB31:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 10, t5, 32);
    t6 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 10, 0LL);

LAB12:    goto LAB2;

LAB8:    t25 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(61, ng0);

LAB13:    xsi_set_current_line(62, ng0);
    t32 = ((char*)((ng6)));
    t33 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 10, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t4, 10, t5, 32);
    t6 = (t0 + 1152);
    t7 = *((char **)t6);
    memset(t35, 0, 8);
    t6 = (t34 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t34);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB17;

LAB14:    if (t22 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t35) = 1;

LAB17:    memset(t11, 0, 8);
    t12 = (t35 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t35);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB21:    t26 = (t11 + 4);
    t36 = *((unsigned int *)t11);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB22;

LAB23:    t39 = *((unsigned int *)t11);
    t40 = (~(t39));
    t41 = *((unsigned int *)t26);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t26) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t11) > 0)
        goto LAB28;

LAB29:    memcpy(t8, t46, 8);

LAB30:    t47 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t47, t8, 0, 0, 10, 0LL);
    goto LAB12;

LAB16:    t10 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t11) = 1;
    goto LAB21;

LAB20:    t25 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB21;

LAB22:    t32 = ((char*)((ng6)));
    goto LAB23;

LAB24:    t33 = (t0 + 4088);
    t43 = (t33 + 56U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng5)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t44, 10, t45, 32);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t8, 32, t32, 32, t46, 32);
    goto LAB30;

LAB28:    memcpy(t8, t32, 8);
    goto LAB30;

}

static void Cont_72_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 6072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 608);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
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

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 7560);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 7416);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng6)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng5)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t23, 32, t28, 32);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Cont_73_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 6320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1288);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
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

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 7624);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 7432);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng6)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng5)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t23, 32, t28, 32);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Cont_75_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char t11[8];
    char t14[8];
    char t32[8];
    char t33[8];
    char t36[8];
    char t44[8];
    char t92[8];
    char t94[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;

LAB0:    t1 = (t0 + 6568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 608);
    t8 = *((char **)t7);
    t7 = (t0 + 744);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    memset(t11, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB7;

LAB6:    *((unsigned int *)t11) = 1;

LAB7:    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t11);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB12:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB13;

LAB14:    memcpy(t44, t14, 8);

LAB15:    memset(t4, 0, 8);
    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t76) != 0)
        goto LAB30;

LAB31:    t83 = (t4 + 4);
    t84 = *((unsigned int *)t4);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB32;

LAB33:    t95 = *((unsigned int *)t4);
    t96 = (~(t95));
    t97 = *((unsigned int *)t83);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t83) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t4) > 0)
        goto LAB38;

LAB39:    memcpy(t3, t90, 8);

LAB40:    t99 = (t0 + 7688);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    memset(t103, 0, 8);
    t104 = 1023U;
    t105 = t104;
    t106 = (t3 + 4);
    t107 = *((unsigned int *)t3);
    t104 = (t104 & t107);
    t108 = *((unsigned int *)t106);
    t105 = (t105 & t108);
    t109 = (t103 + 4);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t110 | t104);
    t111 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t111 | t105);
    xsi_driver_vfirst_trans(t99, 0, 9);
    t112 = (t0 + 7448);
    *((int *)t112) = 1;

LAB1:    return;
LAB5:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB11:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    t26 = (t0 + 3928);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 472);
    t30 = *((char **)t29);
    t29 = (t0 + 1016);
    t31 = *((char **)t29);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t30, 32, t31, 32);
    memset(t33, 0, 8);
    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB17;

LAB16:    t34 = (t32 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t28) < *((unsigned int *)t32))
        goto LAB18;

LAB19:    memset(t36, 0, 8);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t37) != 0)
        goto LAB23;

LAB24:    t45 = *((unsigned int *)t14);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t14 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t33) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t36) = 1;
    goto LAB24;

LAB23:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB25:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t14 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t14);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB27;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB30:    t82 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB31;

LAB32:    t87 = (t0 + 3928);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t0 + 608);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    xsi_vlog_unsigned_minus(t92, 32, t89, 10, t91, 32);
    t90 = (t0 + 744);
    t93 = *((char **)t90);
    memset(t94, 0, 8);
    xsi_vlog_unsigned_minus(t94, 32, t92, 32, t93, 32);
    goto LAB33;

LAB34:    t90 = ((char*)((ng6)));
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t3, 32, t94, 32, t90, 32);
    goto LAB40;

LAB38:    memcpy(t3, t94, 8);
    goto LAB40;

}

static void Cont_78_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char t11[8];
    char t14[8];
    char t32[8];
    char t33[8];
    char t36[8];
    char t44[8];
    char t92[8];
    char t94[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;

LAB0:    t1 = (t0 + 6816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1288);
    t8 = *((char **)t7);
    t7 = (t0 + 1424);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    memset(t11, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB7;

LAB6:    *((unsigned int *)t11) = 1;

LAB7:    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t11);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB12:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB13;

LAB14:    memcpy(t44, t14, 8);

LAB15:    memset(t4, 0, 8);
    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t76) != 0)
        goto LAB30;

LAB31:    t83 = (t4 + 4);
    t84 = *((unsigned int *)t4);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB32;

LAB33:    t95 = *((unsigned int *)t4);
    t96 = (~(t95));
    t97 = *((unsigned int *)t83);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t83) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t4) > 0)
        goto LAB38;

LAB39:    memcpy(t3, t90, 8);

LAB40:    t99 = (t0 + 7752);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    memset(t103, 0, 8);
    t104 = 1023U;
    t105 = t104;
    t106 = (t3 + 4);
    t107 = *((unsigned int *)t3);
    t104 = (t104 & t107);
    t108 = *((unsigned int *)t106);
    t105 = (t105 & t108);
    t109 = (t103 + 4);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t110 | t104);
    t111 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t111 | t105);
    xsi_driver_vfirst_trans(t99, 0, 9);
    t112 = (t0 + 7464);
    *((int *)t112) = 1;

LAB1:    return;
LAB5:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB11:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    t26 = (t0 + 4088);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 1152);
    t30 = *((char **)t29);
    t29 = (t0 + 1696);
    t31 = *((char **)t29);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t30, 32, t31, 32);
    memset(t33, 0, 8);
    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB17;

LAB16:    t34 = (t32 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t28) < *((unsigned int *)t32))
        goto LAB18;

LAB19:    memset(t36, 0, 8);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t37) != 0)
        goto LAB23;

LAB24:    t45 = *((unsigned int *)t14);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t14 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t33) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t36) = 1;
    goto LAB24;

LAB23:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB25:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t14 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t14);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB27;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB30:    t82 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB31;

LAB32:    t87 = (t0 + 4088);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t0 + 1288);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    xsi_vlog_unsigned_minus(t92, 32, t89, 10, t91, 32);
    t90 = (t0 + 1424);
    t93 = *((char **)t90);
    memset(t94, 0, 8);
    xsi_vlog_unsigned_minus(t94, 32, t92, 32, t93, 32);
    goto LAB33;

LAB34:    t90 = ((char*)((ng6)));
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t3, 32, t94, 32, t90, 32);
    goto LAB40;

LAB38:    memcpy(t3, t94, 8);
    goto LAB40;

}

static void Always_85_7(char *t0)
{
    char t8[8];
    char t9[8];
    char t12[8];
    char t30[8];
    char t31[8];
    char t34[8];
    char t42[8];
    char t74[8];
    char t92[8];
    char t93[8];
    char t96[8];
    char t104[8];
    char t136[8];
    char t154[8];
    char t155[8];
    char t158[8];
    char t166[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t94;
    char *t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t156;
    char *t157;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    int t190;
    int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;

LAB0:    t1 = (t0 + 7064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 7480);
    *((int *)t2) = 1;
    t3 = (t0 + 7096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t6, 10);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB6:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB9:    memset(t12, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t42, t12, 8);

LAB17:    memset(t74, 0, 8);
    t75 = (t42 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t42);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t75) != 0)
        goto LAB32;

LAB33:    t82 = (t74 + 4);
    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB34;

LAB35:    memcpy(t104, t74, 8);

LAB36:    memset(t136, 0, 8);
    t137 = (t104 + 4);
    t138 = *((unsigned int *)t137);
    t139 = (~(t138));
    t140 = *((unsigned int *)t104);
    t141 = (t140 & t139);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t137) != 0)
        goto LAB51;

LAB52:    t144 = (t136 + 4);
    t145 = *((unsigned int *)t136);
    t146 = *((unsigned int *)t144);
    t147 = (t145 || t146);
    if (t147 > 0)
        goto LAB53;

LAB54:    memcpy(t166, t136, 8);

LAB55:    t198 = (t166 + 4);
    t199 = *((unsigned int *)t198);
    t200 = (~(t199));
    t201 = *((unsigned int *)t166);
    t202 = (t201 & t200);
    t203 = (t202 != 0);
    if (t203 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(97, ng0);

LAB72:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB70:    goto LAB2;

LAB7:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t24 = (t0 + 3928);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 472);
    t28 = *((char **)t27);
    t27 = (t0 + 1016);
    t29 = *((char **)t27);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t28, 32, t29, 32);
    memset(t31, 0, 8);
    t27 = (t26 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB18:    t32 = (t30 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t26) < *((unsigned int *)t30))
        goto LAB20;

LAB21:    memset(t34, 0, 8);
    t35 = (t31 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t35) != 0)
        goto LAB25;

LAB26:    t43 = *((unsigned int *)t12);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t12 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t33 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t34) = 1;
    goto LAB26;

LAB25:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB26;

LAB27:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t12 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB29;

LAB30:    *((unsigned int *)t74) = 1;
    goto LAB33;

LAB32:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB33;

LAB34:    t86 = (t0 + 4088);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t0 + 1288);
    t90 = *((char **)t89);
    t89 = (t0 + 1424);
    t91 = *((char **)t89);
    memset(t92, 0, 8);
    xsi_vlog_unsigned_add(t92, 32, t90, 32, t91, 32);
    memset(t93, 0, 8);
    t89 = (t88 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB38;

LAB37:    t94 = (t92 + 4);
    if (*((unsigned int *)t94) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t88) < *((unsigned int *)t92))
        goto LAB40;

LAB39:    *((unsigned int *)t93) = 1;

LAB40:    memset(t96, 0, 8);
    t97 = (t93 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t97) != 0)
        goto LAB44;

LAB45:    t105 = *((unsigned int *)t74);
    t106 = *((unsigned int *)t96);
    t107 = (t105 & t106);
    *((unsigned int *)t104) = t107;
    t108 = (t74 + 4);
    t109 = (t96 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB36;

LAB38:    t95 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t96) = 1;
    goto LAB45;

LAB44:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB45;

LAB46:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t74 + 4);
    t119 = (t96 + 4);
    t120 = *((unsigned int *)t74);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (~(t122));
    t124 = *((unsigned int *)t96);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (~(t126));
    t128 = (t121 & t123);
    t129 = (t125 & t127);
    t130 = (~(t128));
    t131 = (~(t129));
    t132 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t131);
    t134 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t134 & t130);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t131);
    goto LAB48;

LAB49:    *((unsigned int *)t136) = 1;
    goto LAB52;

LAB51:    t143 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB52;

LAB53:    t148 = (t0 + 4088);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    t151 = (t0 + 1152);
    t152 = *((char **)t151);
    t151 = (t0 + 1696);
    t153 = *((char **)t151);
    memset(t154, 0, 8);
    xsi_vlog_unsigned_minus(t154, 32, t152, 32, t153, 32);
    memset(t155, 0, 8);
    t151 = (t150 + 4);
    if (*((unsigned int *)t151) != 0)
        goto LAB57;

LAB56:    t156 = (t154 + 4);
    if (*((unsigned int *)t156) != 0)
        goto LAB57;

LAB60:    if (*((unsigned int *)t150) < *((unsigned int *)t154))
        goto LAB58;

LAB59:    memset(t158, 0, 8);
    t159 = (t155 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t155);
    t163 = (t162 & t161);
    t164 = (t163 & 1U);
    if (t164 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t159) != 0)
        goto LAB63;

LAB64:    t167 = *((unsigned int *)t136);
    t168 = *((unsigned int *)t158);
    t169 = (t167 & t168);
    *((unsigned int *)t166) = t169;
    t170 = (t136 + 4);
    t171 = (t158 + 4);
    t172 = (t166 + 4);
    t173 = *((unsigned int *)t170);
    t174 = *((unsigned int *)t171);
    t175 = (t173 | t174);
    *((unsigned int *)t172) = t175;
    t176 = *((unsigned int *)t172);
    t177 = (t176 != 0);
    if (t177 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB55;

LAB57:    t157 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t157) = 1;
    goto LAB59;

LAB58:    *((unsigned int *)t155) = 1;
    goto LAB59;

LAB61:    *((unsigned int *)t158) = 1;
    goto LAB64;

LAB63:    t165 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t165) = 1;
    goto LAB64;

LAB65:    t178 = *((unsigned int *)t166);
    t179 = *((unsigned int *)t172);
    *((unsigned int *)t166) = (t178 | t179);
    t180 = (t136 + 4);
    t181 = (t158 + 4);
    t182 = *((unsigned int *)t136);
    t183 = (~(t182));
    t184 = *((unsigned int *)t180);
    t185 = (~(t184));
    t186 = *((unsigned int *)t158);
    t187 = (~(t186));
    t188 = *((unsigned int *)t181);
    t189 = (~(t188));
    t190 = (t183 & t185);
    t191 = (t187 & t189);
    t192 = (~(t190));
    t193 = (~(t191));
    t194 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t194 & t192);
    t195 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t195 & t193);
    t196 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t196 & t192);
    t197 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t197 & t193);
    goto LAB67;

LAB68:    xsi_set_current_line(93, ng0);

LAB71:    xsi_set_current_line(94, ng0);
    t204 = (t0 + 2568U);
    t205 = *((char **)t204);
    t204 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t204, t205, 0, 0, 8, 0LL);
    goto LAB70;

}


extern void work_m_00000000000604307248_4245469208_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Always_50_1,(void *)Always_58_2,(void *)Cont_72_3,(void *)Cont_73_4,(void *)Cont_75_5,(void *)Cont_78_6,(void *)Always_85_7};
	xsi_register_didat("work_m_00000000000604307248_4245469208", "isim/TopModuleFixture_isim_beh.exe.sim/work/m_00000000000604307248_4245469208.didat");
	xsi_register_executes(pe);
}

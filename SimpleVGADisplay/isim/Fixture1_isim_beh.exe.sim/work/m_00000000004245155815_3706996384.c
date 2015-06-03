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
static const char *ng0 = "C:/Users/K n z o/Documents/Xilinx/VGADriver/TopModule.v";
static const char *ng1 = "log.txt";
static const char *ng2 = "w";
static int ng3[] = {40, 0};
static const char *ng4 = "%d ns: %b %b %b00 %b00 %b00";
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static const char *ng7 = "%d y %d";



static void Initial_38_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(38, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t4[8];
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
    char *t32;

LAB0:    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 6728);
    *((int *)t2) = 1;
    t3 = (t0 + 5448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 3608);
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
    t25 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4088);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = (t0 + 2568U);
    t15 = *((char **)t14);
    t14 = (t0 + 2728U);
    t16 = *((char **)t14);
    t14 = (t0 + 3128);
    t25 = (t14 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 3288);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3448);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 1, 0, 0, ng4, 7, t0, (char)119, t8, 32, (char)118, t15, 1, (char)118, t16, 1, (char)118, t26, 1, (char)118, t29, 1, (char)118, t32, 1);
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

static void Always_50_2(char *t0)
{
    char t8[8];
    char t11[8];
    char t19[8];
    char t20[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;

LAB0:    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6744);
    *((int *)t2) = 1;
    t3 = (t0 + 5696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 472);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t8, 32, t10, 32);
    t9 = (t11 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);

LAB23:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t17 = ((char*)((ng6)));
    t18 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t4, 32, t5, 32);
    t6 = (t0 + 1152);
    t7 = *((char **)t6);
    memset(t20, 0, 8);
    xsi_vlog_signed_equal(t20, 32, t19, 32, t7, 32);
    memset(t11, 0, 8);
    t6 = (t20 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t20);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t6) != 0)
        goto LAB12;

LAB13:    t10 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t10);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB14;

LAB15:    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t10);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t10) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t11) > 0)
        goto LAB20;

LAB21:    memcpy(t8, t31, 8);

LAB22:    t32 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t32, t8, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB12:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB14:    t17 = ((char*)((ng6)));
    goto LAB15;

LAB16:    t18 = (t0 + 3928);
    t28 = (t18 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t29, 32, t30, 32);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t8, 32, t17, 32, t31, 32);
    goto LAB22;

LAB20:    memcpy(t8, t17, 8);
    goto LAB22;

}

static void Cont_64_3(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
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
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3768);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 608);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    memset(t4, 0, 8);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 6872);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 6760);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng6)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng5)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_65_4(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
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
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1288);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    memset(t4, 0, 8);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 6936);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 6776);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng6)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng5)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_70_5(char *t0)
{
    char t10[8];
    char t11[8];
    char t12[8];
    char t27[8];
    char t28[8];
    char t29[8];
    char t36[8];
    char t68[8];
    char t86[8];
    char t87[8];
    char t88[8];
    char t95[8];
    char t127[8];
    char t145[8];
    char t146[8];
    char t147[8];
    char t154[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    int t178;
    int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;

LAB0:    t1 = (t0 + 6408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 6440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3928);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)119, t6, 32, (char)119, t9, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    memset(t11, 0, 8);
    xsi_vlog_signed_greatereq(t11, 32, t4, 32, t10, 32);
    memset(t12, 0, 8);
    t5 = (t11 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t5) != 0)
        goto LAB8;

LAB9:    t9 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    memcpy(t36, t12, 8);

LAB12:    memset(t68, 0, 8);
    t69 = (t36 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t36);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t69) != 0)
        goto LAB22;

LAB23:    t76 = (t68 + 4);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB24;

LAB25:    memcpy(t95, t68, 8);

LAB26:    memset(t127, 0, 8);
    t128 = (t95 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t95);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t128) != 0)
        goto LAB36;

LAB37:    t135 = (t127 + 4);
    t136 = *((unsigned int *)t127);
    t137 = *((unsigned int *)t135);
    t138 = (t136 || t137);
    if (t138 > 0)
        goto LAB38;

LAB39:    memcpy(t154, t127, 8);

LAB40:    t186 = (t154 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t154);
    t190 = (t189 & t188);
    t191 = (t190 != 0);
    if (t191 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(85, ng0);

LAB52:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB50:    goto LAB2;

LAB6:    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB8:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB10:    t21 = (t0 + 3768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 472);
    t25 = *((char **)t24);
    t24 = (t0 + 1016);
    t26 = *((char **)t24);
    memset(t27, 0, 8);
    xsi_vlog_signed_minus(t27, 32, t25, 32, t26, 32);
    memset(t28, 0, 8);
    xsi_vlog_signed_less(t28, 32, t23, 32, t27, 32);
    memset(t29, 0, 8);
    t24 = (t28 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t24) != 0)
        goto LAB15;

LAB16:    t37 = *((unsigned int *)t12);
    t38 = *((unsigned int *)t29);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t12 + 4);
    t41 = (t29 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t29) = 1;
    goto LAB16;

LAB15:    t35 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB16;

LAB17:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t12 + 4);
    t51 = (t29 + 4);
    t52 = *((unsigned int *)t12);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t29);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB19;

LAB20:    *((unsigned int *)t68) = 1;
    goto LAB23;

LAB22:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB23;

LAB24:    t80 = (t0 + 3928);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 1288);
    t84 = *((char **)t83);
    t83 = (t0 + 1424);
    t85 = *((char **)t83);
    memset(t86, 0, 8);
    xsi_vlog_signed_add(t86, 32, t84, 32, t85, 32);
    memset(t87, 0, 8);
    xsi_vlog_signed_greatereq(t87, 32, t82, 32, t86, 32);
    memset(t88, 0, 8);
    t83 = (t87 + 4);
    t89 = *((unsigned int *)t83);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t83) != 0)
        goto LAB29;

LAB30:    t96 = *((unsigned int *)t68);
    t97 = *((unsigned int *)t88);
    t98 = (t96 & t97);
    *((unsigned int *)t95) = t98;
    t99 = (t68 + 4);
    t100 = (t88 + 4);
    t101 = (t95 + 4);
    t102 = *((unsigned int *)t99);
    t103 = *((unsigned int *)t100);
    t104 = (t102 | t103);
    *((unsigned int *)t101) = t104;
    t105 = *((unsigned int *)t101);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t88) = 1;
    goto LAB30;

LAB29:    t94 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB30;

LAB31:    t107 = *((unsigned int *)t95);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t95) = (t107 | t108);
    t109 = (t68 + 4);
    t110 = (t88 + 4);
    t111 = *((unsigned int *)t68);
    t112 = (~(t111));
    t113 = *((unsigned int *)t109);
    t114 = (~(t113));
    t115 = *((unsigned int *)t88);
    t116 = (~(t115));
    t117 = *((unsigned int *)t110);
    t118 = (~(t117));
    t119 = (t112 & t114);
    t120 = (t116 & t118);
    t121 = (~(t119));
    t122 = (~(t120));
    t123 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t123 & t121);
    t124 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t124 & t122);
    t125 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t125 & t121);
    t126 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t126 & t122);
    goto LAB33;

LAB34:    *((unsigned int *)t127) = 1;
    goto LAB37;

LAB36:    t134 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB37;

LAB38:    t139 = (t0 + 3928);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    t142 = (t0 + 1152);
    t143 = *((char **)t142);
    t142 = (t0 + 1696);
    t144 = *((char **)t142);
    memset(t145, 0, 8);
    xsi_vlog_signed_minus(t145, 32, t143, 32, t144, 32);
    memset(t146, 0, 8);
    xsi_vlog_signed_less(t146, 32, t141, 32, t145, 32);
    memset(t147, 0, 8);
    t142 = (t146 + 4);
    t148 = *((unsigned int *)t142);
    t149 = (~(t148));
    t150 = *((unsigned int *)t146);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t142) != 0)
        goto LAB43;

LAB44:    t155 = *((unsigned int *)t127);
    t156 = *((unsigned int *)t147);
    t157 = (t155 & t156);
    *((unsigned int *)t154) = t157;
    t158 = (t127 + 4);
    t159 = (t147 + 4);
    t160 = (t154 + 4);
    t161 = *((unsigned int *)t158);
    t162 = *((unsigned int *)t159);
    t163 = (t161 | t162);
    *((unsigned int *)t160) = t163;
    t164 = *((unsigned int *)t160);
    t165 = (t164 != 0);
    if (t165 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB40;

LAB41:    *((unsigned int *)t147) = 1;
    goto LAB44;

LAB43:    t153 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB44;

LAB45:    t166 = *((unsigned int *)t154);
    t167 = *((unsigned int *)t160);
    *((unsigned int *)t154) = (t166 | t167);
    t168 = (t127 + 4);
    t169 = (t147 + 4);
    t170 = *((unsigned int *)t127);
    t171 = (~(t170));
    t172 = *((unsigned int *)t168);
    t173 = (~(t172));
    t174 = *((unsigned int *)t147);
    t175 = (~(t174));
    t176 = *((unsigned int *)t169);
    t177 = (~(t176));
    t178 = (t171 & t173);
    t179 = (t175 & t177);
    t180 = (~(t178));
    t181 = (~(t179));
    t182 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t182 & t180);
    t183 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t183 & t181);
    t184 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t184 & t180);
    t185 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t185 & t181);
    goto LAB47;

LAB48:    xsi_set_current_line(78, ng0);

LAB51:    xsi_set_current_line(80, ng0);
    t192 = ((char*)((ng5)));
    t193 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t193, t192, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB50;

}


extern void work_m_00000000004245155815_3706996384_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_42_1,(void *)Always_50_2,(void *)Cont_64_3,(void *)Cont_65_4,(void *)Always_70_5};
	xsi_register_didat("work_m_00000000004245155815_3706996384", "isim/Fixture1_isim_beh.exe.sim/work/m_00000000004245155815_3706996384.didat");
	xsi_register_executes(pe);
}

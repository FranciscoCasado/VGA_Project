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
static const char *ng0 = "C:/Users/K n z o/Documents/Xilinx/SimpleImage2Vga/ImageController.v";
static unsigned int ng1[] = {72U, 0U};
static int ng2[] = {7, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};



static void Always_11_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    t9 = (t0 + 1928);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 0);
    t22 = (t18 & 1);
    *((unsigned int *)t7) = t22;
    t25 = *((unsigned int *)t9);
    t27 = (t25 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t5) = t28;
    memset(t6, 0, 8);
    t10 = (t7 + 4);
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t10) == 0)
        goto LAB8;

LAB10:    t11 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t11) = 1;

LAB11:    t12 = (t6 + 4);
    t13 = (t7 + 4);
    t36 = *((unsigned int *)t7);
    t37 = (~(t36));
    *((unsigned int *)t6) = t37;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB12:    t42 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t42 & 1U);
    t43 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t43 & 1U);
    t14 = (t0 + 1928);
    t17 = (t0 + 1928);
    t21 = (t17 + 72U);
    t44 = *((char **)t21);
    t45 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t8, t44, 2, t45, 32, 1);
    t46 = (t8 + 4);
    t47 = *((unsigned int *)t46);
    t16 = (!(t47));
    if (t16 == 1)
        goto LAB14;

LAB15:    goto LAB2;

LAB6:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t26, *((unsigned int *)t7), t30, 0LL);
    goto LAB7;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB13:    t38 = *((unsigned int *)t6);
    t39 = *((unsigned int *)t13);
    *((unsigned int *)t6) = (t38 | t39);
    t40 = *((unsigned int *)t12);
    t41 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t40 | t41);
    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t14, t6, 0, *((unsigned int *)t8), 1, 0LL);
    goto LAB15;

}


extern void work_m_00000000000573055627_2637160935_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000000573055627_2637160935", "isim/TopModule_isim_beh.exe.sim/work/m_00000000000573055627_2637160935.didat");
	xsi_register_executes(pe);
}

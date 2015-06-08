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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000604307248_4245469208_init();
    xilinxcorelib_ver_m_00000000001358910285_0873813277_init();
    xilinxcorelib_ver_m_00000000001687936702_4227985496_init();
    xilinxcorelib_ver_m_00000000000277421008_1841297131_init();
    xilinxcorelib_ver_m_00000000002055014830_2765796456_init();
    work_m_00000000000403262735_0416790573_init();
    work_m_00000000003083954798_2637160935_init();
    work_m_00000000002707300959_3706996384_init();
    work_m_00000000000907547353_0603217135_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000907547353_0603217135");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

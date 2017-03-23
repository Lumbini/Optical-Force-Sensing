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
    work_m_00000000001039112746_2334270396_init();
    work_m_00000000004082357804_0369272063_init();
    work_m_00000000003247591518_3088632620_init();
    work_m_00000000002162432532_2945506979_init();
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000004091665089_2267496751_init();
    unisims_ver_m_00000000003084551676_3599229701_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000001746138489_2141960024_init();
    unisims_ver_m_00000000002304772977_3342287592_init();
    work_m_00000000002088490680_3883954941_init();
    work_m_00000000002351456694_0186347593_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002351456694_0186347593");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

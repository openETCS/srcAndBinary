/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MinDis_GP_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::MinDis_GP */
void MinDis_GP_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::acc */GP_DMI_Control_Pkg_Sub_func *acc,
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::visable */kcg_bool visable,
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::start_gp */kcg_real start_gp,
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::end_gp */kcg_real end_gp,
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::acc_out */GP_DMI_Control_Pkg_Sub_func *acc_out,
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::visable_out */kcg_bool *visable_out,
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::start_out */kcg_real *start_out,
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::end_out */kcg_real *end_out)
{
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::MinDis_GP::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (start_gp >= 0.0) & (end_gp - start_gp > 1.0) & visable;
  if (IfBlock1_clock) {
    *visable_out = kcg_true;
    (*acc_out).visable = kcg_true;
    (*acc_out).start_gp = start_gp;
    (*acc_out).end_gp = end_gp;
    *start_out = start_gp;
    *end_out = end_gp;
  }
  else {
    else_clock_IfBlock1 = (start_gp <= 0.0) & (end_gp > 1.0) & visable;
    if (else_clock_IfBlock1) {
      *visable_out = kcg_true;
      (*acc_out).visable = kcg_true;
      (*acc_out).start_gp = 0.0;
      (*acc_out).end_gp = end_gp;
      *start_out = 0.0;
      *end_out = end_gp;
    }
    else {
      *visable_out = kcg_false;
      (*acc_out).visable = kcg_false;
      (*acc_out).start_gp = start_gp;
      (*acc_out).end_gp = end_gp;
      *start_out = start_gp;
      *end_out = end_gp;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MinDis_GP_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */


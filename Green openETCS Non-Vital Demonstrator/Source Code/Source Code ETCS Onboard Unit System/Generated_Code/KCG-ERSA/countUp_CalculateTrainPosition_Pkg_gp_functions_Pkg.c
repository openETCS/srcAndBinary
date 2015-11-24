/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
  outC->counter = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */ kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */ kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */ kcg_int tmp1;
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */ kcg_int tmp;
  
  /* 2 */ if (reset) {
    outC->counter = 0;
  }
  else {
    /* fby_1_init_1 */ if (outC->init) {
      tmp1 = 0;
    }
    else {
      tmp1 = outC->counter;
    }
    /* 1 */ if (count) {
      tmp = 1;
    }
    else {
      tmp = 0;
    }
    outC->counter = tmp1 + tmp;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */


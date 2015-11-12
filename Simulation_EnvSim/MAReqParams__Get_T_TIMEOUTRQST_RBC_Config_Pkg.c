/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST */
T_TIMEOUTRQST MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg(
  /* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST::inMAReqParams */MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST::out_T_TIMEOUTRQST */
  static T_TIMEOUTRQST out_T_TIMEOUTRQST;
  
  out_T_TIMEOUTRQST = (*inMAReqParams).t_timeoutrqst;
  return out_T_TIMEOUTRQST;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */


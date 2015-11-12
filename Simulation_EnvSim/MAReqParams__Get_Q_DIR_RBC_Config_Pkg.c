/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_Q_DIR_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::MAReqParams__Get_Q_DIR */
Q_DIR MAReqParams__Get_Q_DIR_RBC_Config_Pkg(
  /* RBC_Config_Pkg::MAReqParams__Get_Q_DIR::inMAReqParams */MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_Q_DIR::out_Q_DIR */
  static Q_DIR out_Q_DIR;
  
  out_Q_DIR = (*inMAReqParams).q_dir;
  return out_Q_DIR;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MAReqParams__Get_Q_DIR_RBC_Config_Pkg.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */


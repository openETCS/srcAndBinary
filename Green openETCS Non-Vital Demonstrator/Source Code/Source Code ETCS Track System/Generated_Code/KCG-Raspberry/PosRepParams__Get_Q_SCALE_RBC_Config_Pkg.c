/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_Q_SCALE_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__Get_Q_SCALE */
Q_SCALE PosRepParams__Get_Q_SCALE_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__Get_Q_SCALE::inPosRepParams */PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_Q_SCALE::out_Q_SCALE */ Q_SCALE out_Q_SCALE;
  
  out_Q_SCALE = (*inPosRepParams).q_scale;
  return out_Q_SCALE;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosRepParams__Get_Q_SCALE_RBC_Config_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */


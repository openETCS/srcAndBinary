/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_Q_SCALE_RBC_C.h"

/* RBC_Config_Pkg::PosRepParams__Get_Q_SCALE */
Q_SCALE PosRepParams__Get_Q_SCALE_RBC_C(
  /* RBC_Config_Pkg::PosRepParams__Get_Q_SCALE::inPosRepParams */ PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_Q_SCALE::out_Q_SCALE */
  static Q_SCALE out_Q_SCALE;
  
  out_Q_SCALE = (*inPosRepParams).q_scale;
  return out_Q_SCALE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__Get_Q_SCALE_RBC_C.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


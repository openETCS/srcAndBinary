/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetPosRepParams_.h"

/* RBC_Config_Pkg::DynamicConfig__GetPosRepParams */
void DynamicConfig__GetPosRepParams_(
  /* RBC_Config_Pkg::DynamicConfig__GetPosRepParams::inDynamicConfig */ DynamicConfig_T *inDynamicConfig,
  /* RBC_Config_Pkg::DynamicConfig__GetPosRepParams::outPosRepParams */ PosRepParams_T *outPosRepParams)
{
  kcg_copy_PosRepParams_T(outPosRepParams, &(*inDynamicConfig).m_PosRepParams);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DynamicConfig__GetPosRepParams_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


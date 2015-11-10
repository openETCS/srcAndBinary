/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetMAReqParams_R.h"

/* RBC_Config_Pkg::DynamicConfig__GetMAReqParams */
void DynamicConfig__GetMAReqParams_R(
  /* RBC_Config_Pkg::DynamicConfig__GetMAReqParams::inDynamicConfig */ DynamicConfig_T *inDynamicConfig,
  /* RBC_Config_Pkg::DynamicConfig__GetMAReqParams::outMaReqParams */ MAReqParams_T *outMaReqParams)
{
  kcg_copy_MAReqParams_T(outMaReqParams, &(*inDynamicConfig).m_MAReqParams);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DynamicConfig__GetMAReqParams_R.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetNationalParam.h"

/* RBC_Config_Pkg::DynamicConfig__GetNationalParams */
void DynamicConfig__GetNationalParam(
  /* RBC_Config_Pkg::DynamicConfig__GetNationalParams::inDynamicConfig */ DynamicConfig_T *inDynamicConfig,
  /* RBC_Config_Pkg::DynamicConfig__GetNationalParams::outNationalParams */ NationalParams_T *outNationalParams)
{
  kcg_copy_NationalParams_T(
    outNationalParams,
    &(*inDynamicConfig).m_NationalParams);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DynamicConfig__GetNationalParam.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


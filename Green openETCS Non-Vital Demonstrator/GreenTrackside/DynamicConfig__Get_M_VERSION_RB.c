/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__Get_M_VERSION_RB.h"

/* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION */
M_VERSION DynamicConfig__Get_M_VERSION_RB(
  /* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION::inDynamicConfig */ DynamicConfig_T *inDynamicConfig)
{
  /* RBC_Config_Pkg::DynamicConfig__Get_M_VERSION::out_M_VERSION */
  static M_VERSION out_M_VERSION;
  
  out_M_VERSION = (*inDynamicConfig).m_version;
  return out_M_VERSION;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DynamicConfig__Get_M_VERSION_RB.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


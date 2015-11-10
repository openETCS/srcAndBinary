/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_T_CYCLOC_RBC_.h"

/* RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC */
T_CYCLOC PosRepParams__Get_T_CYCLOC_RBC_(
  /* RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC::inPosRepParams */ PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_T_CYCLOC::out_T_CYCLOC */
  static T_CYCLOC out_T_CYCLOC;
  
  out_T_CYCLOC = (*inPosRepParams).t_cycloc;
  return out_T_CYCLOC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__Get_T_CYCLOC_RBC_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


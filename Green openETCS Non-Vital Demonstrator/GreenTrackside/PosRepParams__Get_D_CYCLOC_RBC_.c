/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_D_CYCLOC_RBC_.h"

/* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC */
D_CYCLOC PosRepParams__Get_D_CYCLOC_RBC_(
  /* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC::inPosRepParams */ PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC::out_D_CYCLOC */
  static D_CYCLOC out_D_CYCLOC;
  
  out_D_CYCLOC = (*inPosRepParams).d_cycloc;
  return out_D_CYCLOC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosRepParams__Get_D_CYCLOC_RBC_.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


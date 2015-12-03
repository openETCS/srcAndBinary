/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC */
D_CYCLOC PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC::inPosRepParams */PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC::out_D_CYCLOC */ D_CYCLOC out_D_CYCLOC;
  
  out_D_CYCLOC = (*inPosRepParams).d_cycloc;
  return out_D_CYCLOC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */


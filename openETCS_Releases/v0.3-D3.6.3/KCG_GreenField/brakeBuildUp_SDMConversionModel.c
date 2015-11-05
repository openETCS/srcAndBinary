/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakeBuildUp_SDMConversionModel.h"

/* SDMConversionModelPkg::brakeBuildUp */
void brakeBuildUp_SDMConversionModel(
  /* SDMConversionModelPkg::brakeBuildUp::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakeBuildUp::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDMConversionModelPkg::brakeBuildUp::T_b */ t_Brake_t_SDMModelPkg *T_b)
{
  static kcg_int i;
  /* SDMConversionModelPkg::brakeBuildUp::_L15 */
  static t_Brake_t_SDMModelPkg _L15;
  
  /* 1 */ brakePosition_SDMConversionMode(trainData, &_L15);
  kcg_copy_t_BrakeVt_t_SDMModelPk(&(*T_b).service, &_L15.service);
  /* 1 */ for (i = 0; i < 2; i++) {
    (*T_b).emergency[i] = (*NationalValues).m_nvktint * _L15.emergency[i];
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakeBuildUp_SDMConversionModel.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


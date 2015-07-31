/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakeBuildUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakeBuildUp */
void brakeBuildUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakeBuildUp::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakeBuildUp::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::brakeBuildUp::T_b */t_Brake_t_SDMConversionModelPkg *T_b)
{
  static kcg_int i;
  /* SDMConversionModelPkg::brakeBuildUp::_L15 */
  static t_Brake_t_SDMConversionModelPkg _L15;
  
  /* 1 */ brakePosition_SDMConversionModelPkg(trainData, &_L15);
  kcg_copy_t_BrakeVt_t_SDMConversionModelPkg(&(*T_b).service, &_L15.service);
  for (i = 0; i < 2; i++) {
    (*T_b).emergency[i] = (*NationalValues).m_nvktint * _L15.emergency[i];
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** brakeBuildUp_SDMConversionModelPkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakeBuildUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakeBuildUp */
void brakeBuildUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakeBuildUp::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakeBuildUp::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::brakeBuildUp::T_b */ t_Brake_t_SDMModelPkg *T_b)
{
  kcg_int i;
  /* SDMConversionModelPkg::brakeBuildUp::_L15 */ t_Brake_t_SDMModelPkg _L15;
  
  /* 1 */ brakePosition_SDMConversionModelPkg(trainData, &_L15);
  kcg_copy_t_BrakeVt_t_SDMModelPkg(&(*T_b).service, &_L15.service);
  /* 1 */ for (i = 0; i < 2; i++) {
    (*T_b).emergency[i] = (*NationalValues).m_nvktint * _L15.emergency[i];
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakeBuildUp_SDMConversionModelPkg.c
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */


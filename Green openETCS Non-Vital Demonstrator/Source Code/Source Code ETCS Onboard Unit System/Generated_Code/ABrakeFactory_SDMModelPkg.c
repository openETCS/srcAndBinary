/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ABrakeFactory_SDMModelPkg.h"

/* SDMModelPkg::ABrakeFactory */
void ABrakeFactory_SDMModelPkg(
  /* SDMModelPkg::ABrakeFactory::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::ABrakeFactory::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDMModelPkg::ABrakeFactory::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* SDMModelPkg::ABrakeFactory::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::ABrakeFactory::aBrakeService */ ASafe_T_CalcBrakingCurves_types *aBrakeService)
{
  /* SDMModelPkg::ABrakeFactory */
  static ASafe_T_CalcBrakingCurves_types tmp1;
  /* SDMModelPkg::ABrakeFactory */
  static av_MergedMap_t_SDMConversionMod tmp;
  /* SDMModelPkg::ABrakeFactory::_L10 */
  static a_Brake_t_SDMConversionModelPkg _L10;
  
  /* 1 */ brakeBuildUp_SDMConversionModel(trainData, NationalValues, T_b);
  /* 1 */ brakePercentToABrake_SDMConvers(trainData, &_L10);
  /* 1 */
  A_brake_safe_SDMConversionModel(&_L10, trainData, NationalValues, &tmp);
  /* 1 */ InflateABrakeSafe_SDMConversion(&tmp, &tmp1);
  /* 1 */
  LimitToReducedAdhesion_SDMModel(&tmp1, trainData, NationalValues, aBrakeSafe);
  /* 1 */ InflateABrakeService_SDMConvers(&_L10, aBrakeService);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ABrakeFactory_SDMModelPkg.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


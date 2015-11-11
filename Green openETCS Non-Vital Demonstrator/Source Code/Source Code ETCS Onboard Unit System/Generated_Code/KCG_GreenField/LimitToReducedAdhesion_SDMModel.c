/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LimitToReducedAdhesion_SDMModel.h"

/* SDMModelPkg::LimitToReducedAdhesion */
void LimitToReducedAdhesion_SDMModel(
  /* SDMModelPkg::LimitToReducedAdhesion::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::LimitToReducedAdhesion::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::LimitToReducedAdhesion::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDMModelPkg::LimitToReducedAdhesion::A_brake_safe_reduced */ ASafe_T_CalcBrakingCurves_types *A_brake_safe_reduced)
{
  kcg_copy_ASafeDistanceDefinitio(
    &(*A_brake_safe_reduced).distance_definition,
    &(*aBrakeSafe).distance_definition);
  kcg_copy_ASafeSpeedDefinition_T(
    &(*A_brake_safe_reduced).speed_definition,
    &(*aBrakeSafe).speed_definition);
  kcg_copy_ASafe_Data_T_CalcBraki(
    &(*A_brake_safe_reduced).data,
    &(*aBrakeSafe).data);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LimitToReducedAdhesion_SDMModel.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */


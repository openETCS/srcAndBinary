/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LimitToReducedAdhesion_SDMModelPkg.h"

/* SDMModelPkg::LimitToReducedAdhesion */
void LimitToReducedAdhesion_SDMModelPkg(
  /* SDMModelPkg::LimitToReducedAdhesion::aBrakeSafe */ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::LimitToReducedAdhesion::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDMModelPkg::LimitToReducedAdhesion::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMModelPkg::LimitToReducedAdhesion::A_brake_safe_reduced */ASafe_T_CalcBrakingCurves_types *A_brake_safe_reduced)
{
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &(*A_brake_safe_reduced).distance_definition,
    &(*aBrakeSafe).distance_definition);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &(*A_brake_safe_reduced).speed_definition,
    &(*aBrakeSafe).speed_definition);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(
    &(*A_brake_safe_reduced).data,
    &(*aBrakeSafe).data);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LimitToReducedAdhesion_SDMModelPkg.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */


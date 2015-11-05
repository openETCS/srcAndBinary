/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeService_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeService */
void InflateABrakeService_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeService::aBrake */ a_Brake_t_SDMConversionModelPkg *aBrake,
  /* SDMConversionModelPkg::InflateABrakeService::aBrakeService */ ASafe_T_CalcBrakingCurves_types *aBrakeService)
{
  /* SDMConversionModelPkg::InflateABrakeService */
  static kcg_int acc2;
  /* SDMConversionModelPkg::InflateABrakeService */
  static kcg_int acc;
  /* SDMConversionModelPkg::InflateABrakeService */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types tmp1;
  /* SDMConversionModelPkg::InflateABrakeService */
  static ASafe_Data_T_CalcBrakingCurves_types tmp;
  /* SDMConversionModelPkg::InflateABrakeService::_L13 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* SDMConversionModelPkg::InflateABrakeService::_L36 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L36;
  /* SDMConversionModelPkg::InflateABrakeService::_L37 */
  static array_real_100_6 _L37;
  /* SDMConversionModelPkg::InflateABrakeService::_L39 */
  static array_real_6 _L39;
  static kcg_int i;
  
  _L13 = 0;
  _L36 = 0;
  /* 1 */ for (i = 0; i < 6; i++) {
    acc2 = _L13;
    /* 1 */
    InflateABrakeSpeeds_SDMConversionModelPkg(
      acc2,
      (*aBrake).service.v[i],
      &_L13,
      &_L39[i]);
    acc = _L36;
    /* 1 */
    InflateABrakeRow_SDMConversionModelPkg(
      acc,
      (*aBrake).service.a[i],
      &_L36,
      &_L37[i]);
  }
  kcg_copy_array_real_6(&tmp1[0], &_L39);
  for (i = 0; i < 8; i++) {
    (&tmp1[6])[i] = _L39[5];
  }
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &(*aBrakeService).speed_definition,
    &tmp1);
  kcg_copy_array_real_100_6(&tmp[0], &_L37);
  for (i = 0; i < 8; i++) {
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&(&tmp[6])[i], &_L37[5]);
  }
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&(*aBrakeService).data, &tmp);
  for (i = 0; i < 100; i++) {
    (*aBrakeService).distance_definition[i] = 0.0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeService_SDMConversionModelPkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */


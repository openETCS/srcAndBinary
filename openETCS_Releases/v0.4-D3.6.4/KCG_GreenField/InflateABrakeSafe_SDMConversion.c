/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSafe_SDMConversion.h"

/* SDMConversionModelPkg::InflateABrakeSafe */
void InflateABrakeSafe_SDMConversion(
  /* SDMConversionModelPkg::InflateABrakeSafe::aBrakeSafe_cm */ av_MergedMap_t_SDMConversionMod *aBrakeSafe_cm,
  /* SDMConversionModelPkg::InflateABrakeSafe::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe)
{
  /* SDMConversionModelPkg::InflateABrakeSafe */
  static kcg_int acc1;
  /* SDMConversionModelPkg::InflateABrakeSafe */
  static kcg_int acc;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L9 */
  static V_internal_Type_Obu_BasicTypes_ _L9;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L31 */
  static array_real_100_13 _L31;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L35 */
  static A_internal_Type_Obu_BasicTypes_ _L35;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L37 */
  static array_real_13 _L37;
  static kcg_int i;
  
  _L9 = 0;
  _L35 = 0;
  /* 2 */ for (i = 0; i < 13; i++) {
    acc1 = _L9;
    /* 1 */
    InflateABrakeSpeeds_SDMConversi(
      acc1,
      (*aBrakeSafe_cm).v[i],
      &_L9,
      &_L37[i]);
    acc = _L35;
    /* InflateABrakeRow */
    InflateABrakeRow_SDMConversionM(
      acc,
      (*aBrakeSafe_cm).a[i],
      &_L35,
      &_L31[i]);
  }
  kcg_copy_array_real_13(&(*aBrakeSafe).speed_definition[0], &_L37);
  (&(*aBrakeSafe).speed_definition[13])[0] = _L37[12];
  kcg_copy_array_real_100_13(&(*aBrakeSafe).data[0], &_L31);
  kcg_copy_ASafeRow_T_CalcBraking(&(&(*aBrakeSafe).data[13])[0], &_L31[12]);
  for (i = 0; i < 100; i++) {
    (*aBrakeSafe).distance_definition[i] = 0.0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeSafe_SDMConversion.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


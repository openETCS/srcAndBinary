/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "A_brake_safe_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::A_brake_safe */
void A_brake_safe_SDMConversionModelPkg(
  /* SDMConversionModelPkg::A_brake_safe::aBrake */ a_Brake_t_SDMConversionModelPkg *aBrake,
  /* SDMConversionModelPkg::A_brake_safe::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::A_brake_safe::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::A_brake_safe::aBrakeSafe_cm */ av_MergedMap_t_SDMConversionModelPkg *aBrakeSafe_cm)
{
  /* SDMConversionModelPkg::A_brake_safe */
  static av_Map_t_SDMConversionModelPkg mk_struct;
  /* SDMConversionModelPkg::A_brake_safe */
  static kcg_int tmp1;
  /* SDMConversionModelPkg::A_brake_safe */
  static kcg_int acc;
  /* SDMConversionModelPkg::A_brake_safe */
  static array_int_6 tmp;
  static kcg_int i;
  /* SDMConversionModelPkg::A_brake_safe::_L10 */
  static kcg_int _L10;
  
  _L10 = /* 1 */ Kr_intLookUp_SDMConversionModelPkg(NationalValues, trainData);
  tmp1 = 0;
  /* 2 */ for (i = 0; i < 6; i++) {
    acc = tmp1;
    /* 2 */ if (acc >= (*aBrake).emergency.a[i]) {
      tmp1 = acc;
    }
    else {
      tmp1 = (*aBrake).emergency.a[i];
    }
    tmp[i] = _L10 * (*aBrake).emergency.a[i] / 100;
  }
  kcg_copy_array_int_6(&mk_struct.a, &tmp);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(
    &mk_struct.v,
    &(*aBrake).emergency.v);
  /* 1 */
  Kv_intConstructor_SDMConversionModelPkg(
    trainData,
    NationalValues,
    tmp1,
    &mk_struct,
    aBrakeSafe_cm);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** A_brake_safe_SDMConversionModelPkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */


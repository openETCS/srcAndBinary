/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeRow_SDMConversionM.h"

/* SDMConversionModelPkg::InflateABrakeRow */
void InflateABrakeRow_SDMConversionM(
  /* SDMConversionModelPkg::InflateABrakeRow::Akku */ A_internal_Type_Obu_BasicTypes_ Akku,
  /* SDMConversionModelPkg::InflateABrakeRow::A */ A_internal_Type_Obu_BasicTypes_ A,
  /* SDMConversionModelPkg::InflateABrakeRow::Akku_out */ A_internal_Type_Obu_BasicTypes_ *Akku_out,
  /* SDMConversionModelPkg::InflateABrakeRow::ASafeRow */ ASafeRow_T_CalcBrakingCurves_ty *ASafeRow)
{
  /* SDMConversionModelPkg::InflateABrakeRow::_L2 */
  static A_internal_real_Type_SDM_Types_ _L2;
  static kcg_int i;
  
  /* 1 */ if (A > 0) {
    *Akku_out = A;
  }
  else {
    *Akku_out = Akku;
  }
  _L2 = /* 1 */ TransformA_intToA_real_SDM_Type(*Akku_out);
  for (i = 0; i < 100; i++) {
    (*ASafeRow)[i] = _L2;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeRow_SDMConversionM.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


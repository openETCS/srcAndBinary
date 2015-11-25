/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeRow_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeRow */
void InflateABrakeRow_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeRow::Akku */ A_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* SDMConversionModelPkg::InflateABrakeRow::A */ A_internal_Type_Obu_BasicTypes_Pkg A,
  /* SDMConversionModelPkg::InflateABrakeRow::Akku_out */ A_internal_Type_Obu_BasicTypes_Pkg *Akku_out,
  /* SDMConversionModelPkg::InflateABrakeRow::ASafeRow */ ASafeRow_T_CalcBrakingCurves_types *ASafeRow)
{
  /* SDMConversionModelPkg::InflateABrakeRow::_L2 */ A_internal_real_Type_SDM_Types_Pkg _L2;
  kcg_int i;
  
  /* 1 */ if (A > 0) {
    *Akku_out = A;
  }
  else {
    *Akku_out = Akku;
  }
  _L2 = /* 1 */ TransformA_intToA_real_SDM_Types_Pkg(*Akku_out);
  for (i = 0; i < 100; i++) {
    (*ASafeRow)[i] = _L2;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeRow_SDMConversionModelPkg.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */


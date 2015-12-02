/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSpeeds_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeSpeeds */
void InflateABrakeSpeeds_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Akku */ V_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::V */ V_internal_Type_Obu_BasicTypes_Pkg V,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Akku_out */ V_internal_Type_Obu_BasicTypes_Pkg *Akku_out,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Vint */ V_internal_real_Type_SDM_Types_Pkg *Vint)
{
  /* 1 */ if (V > 0) {
    *Akku_out = V;
  }
  else {
    *Akku_out = Akku;
  }
  *Vint = /* 1 */ TransformV_intToV_real_SDM_Types_Pkg(*Akku_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeSpeeds_SDMConversionModelPkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */


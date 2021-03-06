/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSpeeds_SDMConversi.h"

/* SDMConversionModelPkg::InflateABrakeSpeeds */
void InflateABrakeSpeeds_SDMConversi(
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Akku */ V_internal_Type_Obu_BasicTypes_ Akku,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::V */ V_internal_Type_Obu_BasicTypes_ V,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Akku_out */ V_internal_Type_Obu_BasicTypes_ *Akku_out,
  /* SDMConversionModelPkg::InflateABrakeSpeeds::Vint */ V_internal_real_Type_SDM_Types_ *Vint)
{
  /* 1 */ if (V > 0) {
    *Akku_out = V;
  }
  else {
    *Akku_out = Akku;
  }
  *Vint = /* 1 */ TransformV_intToV_real_SDM_Type(*Akku_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeSpeeds_SDMConversi.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


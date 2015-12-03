/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectGradientLocations_SDMMod.h"

/* SDMModelPkg::collectGradientLocations */
void collectGradientLocations_SDMMod(
  /* SDMModelPkg::collectGradientLocations::last_loc */ L_internal_real_Type_SDM_Types_ last_loc,
  /* SDMModelPkg::collectGradientLocations::Gsection */ A_gradient_element_t_SDM_Gradie *Gsection,
  /* SDMModelPkg::collectGradientLocations::location_ */ L_internal_real_Type_SDM_Types_ *location_,
  /* SDMModelPkg::collectGradientLocations::location */ L_internal_real_Type_SDM_Types_ *location)
{
  /* 1 */ if ((*Gsection).valid) {
    *location_ = (*Gsection).position;
  }
  else {
    *location_ = last_loc;
  }
  *location = *location_;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** collectGradientLocations_SDMMod.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


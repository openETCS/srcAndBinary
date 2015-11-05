/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectGradientLocations_SDMModelPkg.h"

/* SDMModelPkg::collectGradientLocations */
void collectGradientLocations_SDMModelPkg(
  /* SDMModelPkg::collectGradientLocations::last_loc */ L_internal_real_Type_SDM_Types_Pkg last_loc,
  /* SDMModelPkg::collectGradientLocations::Gsection */ A_gradient_element_t_SDM_GradientAcceleration_types *Gsection,
  /* SDMModelPkg::collectGradientLocations::location_ */ L_internal_real_Type_SDM_Types_Pkg *location_,
  /* SDMModelPkg::collectGradientLocations::location */ L_internal_real_Type_SDM_Types_Pkg *location)
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
** collectGradientLocations_SDMModelPkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */


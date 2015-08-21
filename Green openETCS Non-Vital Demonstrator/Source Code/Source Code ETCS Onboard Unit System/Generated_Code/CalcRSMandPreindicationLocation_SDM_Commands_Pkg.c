/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRSMandPreindicationLocation_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRSMandPreindicationLocation */
void CalcRSMandPreindicationLocation_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::isPreIndicationLocation */kcg_bool *isPreIndicationLocation,
  /* SDM_Commands_Pkg::CalcRSMandPreindicationLocation::isRSMLocation */kcg_bool *isRSMLocation)
{
  *isRSMLocation = (((*trainLocations).d_maxSafeFrontEndPos >
        (*locations).EBD_RSM_start_location) &
      (*locations).RSM_start_location_EBD_valid) |
    ((*locations).RSM_start_location_SBD_valid &
      ((*trainLocations).d_est_frontendPos >
        (*locations).SBD_RSM_start_location));
  *isPreIndicationLocation = (((*trainLocations).d_maxSafeFrontEndPos >
        (*locations).EBD_preindication_location) &
      (*locations).Preindication_EBD_location_valid) |
    ((*locations).Preindication_SBD_location_valid &
      ((*trainLocations).d_est_frontendPos >
        (*locations).SBD_preindication_location));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcRSMandPreindicationLocation_SDM_Commands_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


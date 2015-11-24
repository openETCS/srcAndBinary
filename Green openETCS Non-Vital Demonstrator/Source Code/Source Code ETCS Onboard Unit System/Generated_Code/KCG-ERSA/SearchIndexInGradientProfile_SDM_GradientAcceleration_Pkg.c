/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */
kcg_int SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::position */ L_internal_real_Type_SDM_Types_Pkg position)
{
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */ kcg_int acc;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */ kcg_bool cond_iterw;
  kcg_int i;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::index */ kcg_int index;
  
  index = - 1;
  /* 1 */ if ((*GradientProfile)[0].valid) {
    /* 1 */ for (i = 0; i < 50; i++) {
      acc = index;
      /* 1 */
      SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg(
        i,
        acc,
        position,
        GradientProfile,
        &cond_iterw,
        &index);
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  return index;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientProfile_SD.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */
kcg_int SearchIndexInGradientProfile_SD(
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::position */ L_internal_real_Type_SDM_Types_ position)
{
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */
  static kcg_int acc;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile::index */
  static kcg_int index;
  
  index = - 1;
  /* 1 */ if ((*GradientProfile)[0].valid) {
    /* 1 */ for (i = 0; i < 50; i++) {
      acc = index;
      /* 1 */
      SearchIndexInGradientprofileInt(
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
** SearchIndexInGradientProfile_SD.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


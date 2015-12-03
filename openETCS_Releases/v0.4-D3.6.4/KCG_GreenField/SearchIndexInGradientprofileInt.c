/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientprofileInt.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal */
void SearchIndexInGradientprofileInt(
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::indexOfPosition */ kcg_int indexOfPosition,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::position */ L_internal_real_Type_SDM_Types_ position,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::cond */ kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::indexOfPositionOut */ kcg_int *indexOfPositionOut)
{
  /* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal::_L5 */
  static Gradient_section_real_t_SDM_Gra _L5;
  
  if ((0 <= index) & (index < 50)) {
    kcg_copy_Gradient_section_real_(&_L5, &(*GradientProfile)[index]);
  }
  else {
    _L5.location = 0.0;
    _L5.gradient = 0.0;
    _L5.valid = kcg_false;
  }
  *cond = (position >= _L5.location) & _L5.valid;
  /* 1 */ if (*cond) {
    *indexOfPositionOut = index;
  }
  else {
    *indexOfPositionOut = indexOfPosition;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SearchIndexInGradientprofileInt.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


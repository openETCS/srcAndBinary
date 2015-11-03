/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addNewSection_SDM_GradientAccel.h"

/* SDM_GradientAcceleration_Pkg::addNewSection */
void addNewSection_SDM_GradientAccel(
  /* SDM_GradientAcceleration_Pkg::addNewSection::newGradientSection */ Gradient_real_t_SDM_GradientAcc newGradientSection,
  /* SDM_GradientAcceleration_Pkg::addNewSection::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::addNewSection::Accu */ ACC_SDM_GradientAcceleration_Pk *Accu,
  /* SDM_GradientAcceleration_Pkg::addNewSection::modifiedProfile */ GradientProfile_real_compensate *modifiedProfile)
{
  kcg_copy_GradientProfile_real_c(
    modifiedProfile,
    &(*Accu).compensatedGradientProfile);
  if ((0 <= index) & (index < 100)) {
    (*modifiedProfile)[index].location = (*Accu).frontPos;
    (*modifiedProfile)[index].gradient = newGradientSection;
    (*modifiedProfile)[index].valid = kcg_true;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addNewSection_SDM_GradientAccel.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


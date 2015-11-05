/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addNewSection_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::addNewSection */
void addNewSection_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::addNewSection::newGradientSection */ Gradient_real_t_SDM_GradientAcceleration_types newGradientSection,
  /* SDM_GradientAcceleration_Pkg::addNewSection::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::addNewSection::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::addNewSection::modifiedProfile */ GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *modifiedProfile)
{
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    modifiedProfile,
    &(*Accu).compensatedGradientProfile);
  if ((0 <= index) & (index < 100)) {
    (*modifiedProfile)[index].location = (*Accu).frontPos;
    (*modifiedProfile)[index].gradient = newGradientSection;
    (*modifiedProfile)[index].valid = kcg_true;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addNewSection_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator */
void NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator::inTrainPosition */kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator::inSpeedProfile_Distance */kcg_real inSpeedProfile_Distance,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator::outFirstIndexOfNextSpeedProfiles */kcg_bool *outFirstIndexOfNextSpeedProfiles,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator::AccOut */kcg_real *AccOut)
{
  *AccOut = inTrainPosition;
  *outFirstIndexOfNextSpeedProfiles = *AccOut >= inSpeedProfile_Distance;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */


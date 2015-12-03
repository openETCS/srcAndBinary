/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients */
void NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inTrainPosition */kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsStart */array_real_32 *inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsEnd */array_real_32 *inGradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsValue */array_real_32 *inGradientsValue,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsStartDMI */array_real_32 *GradientsStartDMI,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsEndDMI */array_real_32 *GradientsEndDMI,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsValueDMI */array_real_32 *GradientsValueDMI)
{
  kcg_copy_array_real_32(GradientsValueDMI, inGradientsValue);
  kcg_copy_array_real_32(GradientsEndDMI, inGradientsEnd);
  kcg_copy_array_real_32(GradientsStartDMI, inGradientsStart);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.c
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */


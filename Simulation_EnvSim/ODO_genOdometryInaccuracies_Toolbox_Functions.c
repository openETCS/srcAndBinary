/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"

void ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
}

/* Toolbox::Functions::ODO_genOdometryInaccuracies */
void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC)
{
  outC->_L16 = (kcg_real) trueLocation;
  outC->odometryLocations.o_nominal = (kcg_int)
      ((*odometryProperties).o_nominal * outC->_L16);
  outC->odometryLocations.o_min = (kcg_int)
      ((*odometryProperties).o_min * outC->_L16);
  outC->odometryLocations.o_max = (kcg_int)
      ((*odometryProperties).o_max * outC->_L16);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genOdometryInaccuracies_Toolbox_Functions.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

void ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
}

/* Toolbox::Functions::ODO_genSpeedInaccuracies */
void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::trueVelocity */Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC)
{
  outC->_L8 = (kcg_real) trueVelocity;
  outC->odometrySpeeds.v_rawNominal = (kcg_int)
      ((*odometryProperties).o_nominal * outC->_L8);
  outC->odometrySpeeds.v_lower = (kcg_int)
      ((*odometryProperties).o_min * outC->_L8);
  outC->_L12 = (*odometryProperties).o_max * outC->_L8;
  outC->odometrySpeeds.v_safeNominal = (kcg_int) (0.99 * outC->_L12);
  outC->odometrySpeeds.v_upper = (kcg_int) outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genSpeedInaccuracies_Toolbox_Functions.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */


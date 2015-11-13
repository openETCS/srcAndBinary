/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genOdometryInaccuracies_Too.h"

/* Toolbox::Functions::ODO_genOdometryInaccuracies */
void ODO_genOdometryInaccuracies_Too(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */ L_internal_Type_Obu_BasicTypes_ trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */ odometryFactors_T_Toolbox *odometryProperties,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryLocations */ OdometryLocations_T_Obu_BasicTy *odometryLocations)
{
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L16 */
  static kcg_real _L16;
  
  _L16 = (kcg_real) trueLocation;
  (*odometryLocations).o_nominal = (kcg_int)
      ((*odometryProperties).o_nominal * _L16);
  (*odometryLocations).o_min = (kcg_int) ((*odometryProperties).o_min * _L16);
  (*odometryLocations).o_max = (kcg_int) ((*odometryProperties).o_max * _L16);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_genOdometryInaccuracies_Too.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */
#ifndef _ODO_genSpeedInaccuracies_Toolbox_Functions_H_
#define _ODO_genSpeedInaccuracies_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometrySpeeds */ odometrySpeeds;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L12 */ _L12;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L8 */ _L8;
} outC_ODO_genSpeedInaccuracies_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_genSpeedInaccuracies */
extern void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::trueVelocity */Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);

extern void ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);

#endif /* _ODO_genSpeedInaccuracies_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genSpeedInaccuracies_Toolbox_Functions.h
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */


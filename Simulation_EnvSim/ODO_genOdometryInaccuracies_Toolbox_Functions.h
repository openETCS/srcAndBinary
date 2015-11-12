/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */
#ifndef _ODO_genOdometryInaccuracies_Toolbox_Functions_H_
#define _ODO_genOdometryInaccuracies_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryLocations */ odometryLocations;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L16 */ _L16;
} outC_ODO_genOdometryInaccuracies_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_genOdometryInaccuracies */
extern void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);

extern void ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);

#endif /* _ODO_genOdometryInaccuracies_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genOdometryInaccuracies_Toolbox_Functions.h
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */


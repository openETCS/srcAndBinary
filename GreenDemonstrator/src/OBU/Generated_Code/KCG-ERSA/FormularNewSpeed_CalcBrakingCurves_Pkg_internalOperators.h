/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:15:59
*************************************************************$ */
#ifndef _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_
#define _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "Square_mathext_V_internal_real_Type.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
extern void FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inAcceleration */ A_internal_real_Type_SDM_Types_Pkg inAcceleration,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD0 */ L_internal_real_Type_SDM_Types_Pkg inD0,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD1 */ L_internal_real_Type_SDM_Types_Pkg inD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inBeginSpeed */ V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::outSpeedAtD1 */ V_internal_real_Type_SDM_Types_Pkg *outSpeedAtD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::valid */ kcg_bool *valid);

#endif /* _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2015-12-10T15:15:59
*************************************************************$ */


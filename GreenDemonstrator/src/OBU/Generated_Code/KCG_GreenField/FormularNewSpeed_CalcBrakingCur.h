/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _FormularNewSpeed_CalcBrakingCu
#define _FormularNewSpeed_CalcBrakingCu

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "Square_mathext_V_internal_real_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
extern void FormularNewSpeed_CalcBrakingCur(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inAcceleration */ A_internal_real_Type_SDM_Types_ inAcceleration,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD0 */ L_internal_real_Type_SDM_Types_ inD0,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD1 */ L_internal_real_Type_SDM_Types_ inD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inBeginSpeed */ V_internal_real_Type_SDM_Types_ inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::outSpeedAtD1 */ V_internal_real_Type_SDM_Types_ *outSpeedAtD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::valid */ kcg_bool *valid);

#endif /* _FormularNewSpeed_CalcBrakingCu */
/* $**************** KCG Version 6.4 (build i21) ****************
** FormularNewSpeed_CalcBrakingCur.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */


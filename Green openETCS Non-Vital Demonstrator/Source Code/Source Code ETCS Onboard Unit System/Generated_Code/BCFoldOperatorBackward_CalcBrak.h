/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _BCFoldOperatorBackward_CalcBra
#define _BCFoldOperatorBackward_CalcBra

#include "kcg_types.h"
#include "OneCycle_CalcBrakingCurves_Pkg_.h"
#include "setArc_CalcBrakingCurves_Pkg_in.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward */
extern void BCFoldOperatorBackward_CalcBrak(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Index */ kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC_acc */ BCAccumulator_type_CalcBrakingC *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::d_est_front */ L_internal_real_Type_SDM_Types_ d_est_front,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::exitCond */ kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC */ BCAccumulator_type_CalcBrakingC *BC);

#endif /* _BCFoldOperatorBackward_CalcBra */
/* $**************** KCG Version 6.4 (build i21) ****************
** BCFoldOperatorBackward_CalcBrak.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _BCFoldOperatorForward_CalcBrak
#define _BCFoldOperatorForward_CalcBrak

#include "kcg_types.h"
#include "OneCycle_CalcBrakingCurves_Pkg_.h"
#include "setArc_CalcBrakingCurves_Pkg_in.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward */
extern void BCFoldOperatorForward_CalcBraki(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::Index */ kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::BC_acc */ BCAccumulator_type_CalcBrakingC *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::LOA_MRSP_Target_speed */ V_internal_real_Type_SDM_Types_ LOA_MRSP_Target_speed,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::exitCond */ kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::BC */ BCAccumulator_type_CalcBrakingC *BC);

#endif /* _BCFoldOperatorForward_CalcBrak */
/* $**************** KCG Version 6.4 (build i21) ****************
** BCFoldOperatorForward_CalcBraki.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */


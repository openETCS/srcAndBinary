/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */
#ifndef _InitalValues_CalcBrakingCurves_Pkg_internalOperators_H_
#define _InitalValues_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.h"
#include "CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.h"
#include "InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::InitalValues */
extern void InitalValues_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::target */Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::aSafe */ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::BCAcc */BCAccumulator_type_CalcBrakingCurves_Pkg *BCAcc);

#endif /* _InitalValues_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InitalValues_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */


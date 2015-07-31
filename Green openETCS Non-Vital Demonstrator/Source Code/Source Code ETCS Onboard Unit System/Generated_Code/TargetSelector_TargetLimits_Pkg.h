/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _TargetSelector_TargetLimits_Pkg_H_
#define _TargetSelector_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "TargetIterator_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::TargetSelector */
extern void TargetSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetSelector::Targets */TargetCollection_T_TargetManagement_types *Targets,
  /* TargetLimits_Pkg::TargetSelector::Curves */CurveCollection_T_CalcBrakingCurves_types *Curves,
  /* TargetLimits_Pkg::TargetSelector::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::TargetSelector::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::TargetSelector::T_b */t_Brake_t_SDMConversionModelPkg *T_b,
  /* TargetLimits_Pkg::TargetSelector::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveTarget */Target_real_T_TargetManagement_types *MostRestrictiveTarget,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveCurve */ParabolaCurve_T_CalcBrakingCurves_types *MostRestrictiveCurve,
  /* TargetLimits_Pkg::TargetSelector::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::TargetSelector::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::TargetSelector::GUICurveEnabled */kcg_bool *GUICurveEnabled,
  /* TargetLimits_Pkg::TargetSelector::V_Target */V_internal_real_Type_SDM_Types_Pkg *V_Target,
  /* TargetLimits_Pkg::TargetSelector::D_EOA */L_internal_real_Type_SDM_Types_Pkg *D_EOA,
  /* TargetLimits_Pkg::TargetSelector::D_SvL */L_internal_real_Type_SDM_Types_Pkg *D_SvL,
  /* TargetLimits_Pkg::TargetSelector::v_est */V_internal_real_Type_SDM_Types_Pkg *v_est,
  /* TargetLimits_Pkg::TargetSelector::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::TargetSelector::V_ura */V_internal_real_Type_SDM_Types_Pkg *V_ura,
  /* TargetLimits_Pkg::TargetSelector::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::TargetSelector::D_SBI2 */L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::valid_D_SBI2 */kcg_bool *valid_D_SBI2);

#endif /* _TargetSelector_TargetLimits_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TargetSelector_TargetLimits_Pkg.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */


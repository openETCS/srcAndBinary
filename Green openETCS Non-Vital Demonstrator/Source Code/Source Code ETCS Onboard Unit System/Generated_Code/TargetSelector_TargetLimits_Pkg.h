/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _TargetSelector_TargetLimits_Pk
#define _TargetSelector_TargetLimits_Pk

#include "kcg_types.h"
#include "TransformL_realToL_int_SDM_Type.h"
#include "TransformV_realToV_int_SDM_Type.h"
#include "selectLEValid_TargetLimits_Pkg.h"
#include "v_SBI1_TargetLimits_Pkg.h"
#include "TargetIterator_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::TargetSelector */
extern void TargetSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetSelector::Targets */ TargetCollection_T_TargetManage *Targets,
  /* TargetLimits_Pkg::TargetSelector::Curves */ CurveCollection_T_CalcBrakingCu *Curves,
  /* TargetLimits_Pkg::TargetSelector::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::TargetSelector::trainData_int */ trainData_internal_t_SDM_Types_ *trainData_int,
  /* TargetLimits_Pkg::TargetSelector::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::TargetSelector::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* TargetLimits_Pkg::TargetSelector::trainLocations */ TrainLocations_real_T_SDM_Types *trainLocations,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveDisplayedTarget */ Target_T_TargetManagement_types *MostRestrictiveDisplayedTarget,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveEBDCurve */ ParabolaCurve_T_CalcBrakingCurv *MostRestrictiveEBDCurve,
  /* TargetLimits_Pkg::TargetSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurv *SBDcurve,
  /* TargetLimits_Pkg::TargetSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::TargetSelector::GUICurveEnabled */ kcg_bool *GUICurveEnabled,
  /* TargetLimits_Pkg::TargetSelector::V_Target */ V_internal_real_Type_SDM_Types_ *V_Target,
  /* TargetLimits_Pkg::TargetSelector::V_P_MRDT */ V_internal_real_Type_SDM_Types_ *V_P_MRDT,
  /* TargetLimits_Pkg::TargetSelector::D_EOA */ L_internal_real_Type_SDM_Types_ *D_EOA,
  /* TargetLimits_Pkg::TargetSelector::D_SvL */ L_internal_real_Type_SDM_Types_ *D_SvL,
  /* TargetLimits_Pkg::TargetSelector::v_est */ V_internal_real_Type_SDM_Types_ *v_est,
  /* TargetLimits_Pkg::TargetSelector::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::TargetSelector::V_ura */ V_internal_real_Type_SDM_Types_ *V_ura,
  /* TargetLimits_Pkg::TargetSelector::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::TargetSelector::D_SBI2 */ L_internal_real_Type_SDM_Types_ *D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::valid_D_SBI2 */ kcg_bool *valid_D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::D_estfront */ L_internal_real_Type_SDM_Types_ *D_estfront,
  /* TargetLimits_Pkg::TargetSelector::D_maxsafefront */ L_internal_real_Type_SDM_Types_ *D_maxsafefront);

#endif /* _TargetSelector_TargetLimits_Pk */
/* $**************** KCG Version 6.4 (build i21) ****************
** TargetSelector_TargetLimits_Pkg.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 114; i++) {
    outC->_L99.distances[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->_L99.speeds[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->_L99.accelerations[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->_L99.valid[i] = kcg_true;
    outC->_L33.distances[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->_L33.speeds[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->_L33.accelerations[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->_L33.valid[i] = kcg_true;
  }
  for (i = 0; i < 200; i++) {
    for (i1 = 0; i1 < 114; i1++) {
      outC->MRSPCurves[i].distances[i1] = 0.0;
    }
    for (i1 = 0; i1 < 114; i1++) {
      outC->MRSPCurves[i].speeds[i1] = 0.0;
    }
    for (i1 = 0; i1 < 114; i1++) {
      outC->MRSPCurves[i].accelerations[i1] = 0.0;
    }
    for (i1 = 0; i1 < 114; i1++) {
      outC->MRSPCurves[i].valid[i1] = kcg_true;
      outC->curveCollection.MRSP_EBD_curves[i].distances[i1] = 0.0;
    }
    for (i1 = 0; i1 < 114; i1++) {
      outC->curveCollection.MRSP_EBD_curves[i].speeds[i1] = 0.0;
    }
    for (i1 = 0; i1 < 114; i1++) {
      outC->curveCollection.MRSP_EBD_curves[i].accelerations[i1] = 0.0;
    }
    for (i1 = 0; i1 < 114; i1++) {
      outC->curveCollection.MRSP_EBD_curves[i].valid[i1] = kcg_true;
    }
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.EOA_SBD_curve.distances[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.EOA_SBD_curve.speeds[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.EOA_SBD_curve.accelerations[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.EOA_SBD_curve.valid[i] = kcg_true;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.SvL_LoA_EBD_curve.distances[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.SvL_LoA_EBD_curve.speeds[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.SvL_LoA_EBD_curve.accelerations[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.SvL_LoA_EBD_curve.valid[i] = kcg_true;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.GUI_curve.distances[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.GUI_curve.speeds[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.GUI_curve.accelerations[i] = 0.0;
  }
  for (i = 0; i < 114; i++) {
    outC->curveCollection.GUI_curve.valid[i] = kcg_true;
  }
  outC->curveCollection.GUI_curve_enabled = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
void CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::TrainLocations */ TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Safe */ ASafe_T_CalcBrakingCurves_types *A_Safe,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Expected */ ASafe_T_CalcBrakingCurves_types *A_Expected,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool cond_iterw;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static ParabolaCurve_T_CalcBrakingCurves_types _2_op_call;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool _3_op_call;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static ParabolaCurve_T_CalcBrakingCurves_types op_call;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
  static kcg_bool _1_op_call;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::emptyCurve */
  static ParabolaCurve_T_CalcBrakingCurves_types emptyCurve;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L72 */
  static kcg_int _L72;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L83 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L83;
  static kcg_int i;
  
  outC->curveCollection.GUI_curve_enabled = kcg_false;
  /* 1 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&emptyCurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.GUI_curve,
    &emptyCurve);
  if ((*targetCollection).updatedTargetList) {
    /* 5 */
    CalculateBrakingCurve_CalcBrakingCurves_Pkg(
      A_Safe,
      &(*targetCollection).SvL_LoA_target,
      (*TrainLocations).d_est_frontendPos,
      &_3_op_call,
      &_2_op_call);
    /* 3 */
    CalculateBrakingCurve_CalcBrakingCurves_Pkg(
      A_Expected,
      &(*targetCollection).EOA_target,
      (*TrainLocations).d_est_frontendPos,
      &_1_op_call,
      &op_call);
    for (i = 0; i < 200; i++) {
      /* 1 */
      CalculateBrakingCurve_CalcBrakingCurves_Pkg(
        A_Safe,
        &(*targetCollection).MRSP_targetList[i],
        (*TrainLocations).d_est_frontendPos,
        &cond_iterw,
        &_L83[i]);
      _L72 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L72 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L72; i < 200; i++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L83[i], &emptyCurve);
  }
#endif /* KCG_MAPW_CPY */
  
  /* ck_targetsUpdated */ if ((*targetCollection).updatedTargetList) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L33, &op_call);
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &outC->MRSPCurves,
      &_L83);
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L99, &_2_op_call);
  }
  else if (outC->init) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L33, &emptyCurve);
    for (i = 0; i < 200; i++) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        &outC->MRSPCurves[i],
        &emptyCurve);
    }
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L99, &emptyCurve);
  }
  outC->init = kcg_false;
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->curveCollection.MRSP_EBD_curves,
    &outC->MRSPCurves);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.EOA_SBD_curve,
    &outC->_L33);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.SvL_LoA_EBD_curve,
    &outC->_L99);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */


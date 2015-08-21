/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h"

void CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
void CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Safe */ASafe_T_CalcBrakingCurves_types *A_Safe,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::TrainPosition */TrainLocations_real_T_SDM_Types_Pkg *TrainPosition,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::targetCollection */TargetCollection_T_TargetManagement_types *targetCollection,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC)
{
  static kcg_bool tmp;
  static kcg_int i;
  static array__82019 tmp1;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::emptyCurve */
  static ParabolaCurve_T_CalcBrakingCurves_types emptyCurve;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L72 */
  static kcg_int _L72;
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L83 */
  static array__82019 _L83;
  
  outC->curveCollection.GUI_curve_enabled = kcg_false;
  /* 1 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&emptyCurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.GUI_curve,
    &emptyCurve);
  if ((*targetCollection).updatedTargetList) {
    /* 3 */
    CalculateBrakingCurve_CalcBrakingCurves_Pkg(
      A_Safe,
      &(*targetCollection).EOA_target,
      (*TrainPosition).d_est_frontendPos,
      &tmp,
      &outC->_L33);
    for (i = 0; i < 200; i++) {
      /* 1 */
      CalculateBrakingCurve_CalcBrakingCurves_Pkg(
        A_Safe,
        &(*targetCollection).MRSP_targetList[i],
        (*TrainPosition).d_est_frontendPos,
        &tmp,
        &_L83[i]);
      _L72 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    if (outC->init) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        &outC->_L33,
        &emptyCurve);
    }
    _L72 = 0;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.EOA_SBD_curve,
    &outC->_L33);
  if (outC->init) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L99, &emptyCurve);
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->curveCollection.SvL_EBD_curve,
    &outC->_L99);
#ifdef KCG_MAPW_CPY
  
  for (i = _L72; i < 200; i++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L83[i], &emptyCurve);
  }
#endif /* KCG_MAPW_CPY */
  
  for (i = 0; i < 200; i++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp1[i], &emptyCurve);
  }
  if ((*targetCollection).updatedTargetList) {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &outC->MRSPCurves,
      &_L83);
  }
  else if (outC->init) {
    kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &outC->MRSPCurves,
      &tmp1);
  }
  outC->init = kcg_false;
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &outC->curveCollection.MRSP_EBD_curves,
    &outC->MRSPCurves);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


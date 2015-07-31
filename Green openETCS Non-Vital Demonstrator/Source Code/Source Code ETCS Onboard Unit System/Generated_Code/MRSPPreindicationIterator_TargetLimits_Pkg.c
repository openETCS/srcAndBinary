/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationIterator */
void MRSPPreindicationIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationIterator::i */kcg_int i,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_preindication_mix */MRSP_internal_section_T_TargetManagement_types *MRSP_preindication_mix,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_sect_n */MRSP_internal_section_T_TargetManagement_types *MRSP_sect_n,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::goOn */kcg_bool *goOn,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_preindication_next */MRSP_internal_section_T_TargetManagement_types *MRSP_preindication_next)
{
  static L_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::D_I */
  static L_internal_real_Type_SDM_Types_Pkg D_I;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::simpleCaseFulfilled */
  static kcg_bool simpleCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::cornerCaseFulfilled */
  static kcg_bool cornerCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::done */
  static kcg_bool done;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::currentlyValid */
  static kcg_bool currentlyValid;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::finalCaseFulfilled */
  static kcg_bool finalCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L35 */
  static V_internal_real_Type_SDM_Types_Pkg _L35;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L116 */
  static kcg_bool _L116;
  
  if ((*MRSP_sect_n).valid) {
    /* 1 */
    d_I_MRSP_TargetLimits_Pkg(
      (*MRSP_sect_n).MRS,
      EBDcurve,
      guiCurveEnabled,
      GUIcurve,
      T,
      &currentlyValid,
      &D_I);
  }
  else {
    currentlyValid = kcg_false;
    D_I = 0.0;
  }
  finalCaseFulfilled = currentlyValid & (i == MRSPMaxSections_TrackAtlasTypes -
      1);
  done = (*MRSP_preindication_mix).Loc_Abs <= (*MRSP_sect_n).Loc_Abs;
  cornerCaseFulfilled = !done & (*MRSP_preindication_mix).valid & (D_I <
      (*MRSP_sect_n).Loc_Abs);
  _L116 = finalCaseFulfilled | cornerCaseFulfilled;
  simpleCaseFulfilled = (*MRSP_preindication_mix).valid & done;
  done = _L116 | !currentlyValid | simpleCaseFulfilled;
  *goOn = currentlyValid & !done;
  (*MRSP_preindication_next).valid = simpleCaseFulfilled | cornerCaseFulfilled |
    finalCaseFulfilled | *goOn;
  if (_L116) {
    _L35 = (*MRSP_sect_n).MRS;
  }
  else {
    _L35 = (*MRSP_preindication_mix).MRS;
  }
  (*MRSP_preindication_next).MRS = _L35;
  if (done) {
    if (_L116) {
      if (cornerCaseFulfilled) {
        tmp = (*MRSP_sect_n).Loc_Abs;
      }
      else {
        tmp = D_I;
      }
    }
    else {
      tmp = (*MRSP_preindication_mix).Loc_Abs;
    }
    (*MRSP_preindication_next).Loc_Abs = tmp - _L35 *
      T_preindication_SDM_Types_Pkg;
  }
  else {
    (*MRSP_preindication_next).Loc_Abs = D_I;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSPPreindicationIterator_TargetLimits_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:16
*************************************************************$ */
#ifndef _CalcBrakingCurves_integration_
#define _CalcBrakingCurves_integration_

#include "kcg_types.h"
#include "CalculateBrakingCurve_CalcBraki.h"
#include "makeEmptyParabolaCurve_CalcBrak.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CurveCollection_T_CalcBrakingCu /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::curveCollection */ curveCollection;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ParabolaCurve_list_MRSP_T_CalcB /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::MRSPCurves */ MRSPCurves;
  ParabolaCurve_T_CalcBrakingCurv /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L33 */ _L33;
  ParabolaCurve_T_CalcBrakingCurv /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::_L99 */ _L99;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CalcBrakingCurves_integrat;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration */
extern void CalcBrakingCurves_integration_C(
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::TrainLocations */ TrainLocations_real_T_SDM_Types *TrainLocations,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::targetCollection */ TargetCollection_T_TargetManage *targetCollection,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Safe */ ASafe_T_CalcBrakingCurves_types *A_Safe,
  /* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration::A_Expected */ ASafe_T_CalcBrakingCurves_types *A_Expected,
  outC_CalcBrakingCurves_integrat *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcBrakingCurves_integration_r(
  outC_CalcBrakingCurves_integrat *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcBrakingCurves_integration_i(
  outC_CalcBrakingCurves_integrat *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CalcBrakingCurves_integration_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcBrakingCurves_integration_C.h
** Generation date: 2015-12-07T14:50:16
*************************************************************$ */


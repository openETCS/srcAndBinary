/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:18
*************************************************************$ */
#ifndef _linkingIsUsed_CalculateTrainPo
#define _linkingIsUsed_CalculateTrainPo

#include "kcg_types.h"
#include "positionDerivedFromPassedBG_Cal.h"
#include "indexOfLastPassedBG_CalculateTr.h"
#include "indexOfLastBG_CalculateTrainPos.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::linkingIsUsed */ linkingIsUsed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L7 */ _L7;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L6 */ _L6;
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L10 */ _L10;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L9 */ _L9;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_linkingIsUsed_CalculateTra;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
extern void linkingIsUsed_CalculateTrainPos(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::recalculateBGs */ kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTra *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void linkingIsUsed_reset_CalculateTr(
  outC_linkingIsUsed_CalculateTra *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void linkingIsUsed_init_CalculateTra(
  outC_linkingIsUsed_CalculateTra *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _linkingIsUsed_CalculateTrainPo */
/* $**************** KCG Version 6.4 (build i21) ****************
** linkingIsUsed_CalculateTrainPos.h
** Generation date: 2015-12-07T14:50:18
*************************************************************$ */

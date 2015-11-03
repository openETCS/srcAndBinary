/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _Receive_BaliseTelegram_Receive
#define _Receive_BaliseTelegram_Receive

#include "kcg_types.h"
#include "BuildBGMessage_Receive_TrackSid.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSide_ForCheck_T_Common_Typ /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::outTrackMessage_for_check */ outTrackMessage_for_check;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BuildBGMessage_Receive_Tra /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Receive_BaliseTelegram_Rec;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram */
extern void Receive_BaliseTelegram_Receive_(
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pk *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Rec *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_BaliseTelegram_reset_Re(
  outC_Receive_BaliseTelegram_Rec *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_BaliseTelegram_init_Rec(
  outC_Receive_BaliseTelegram_Rec *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Receive_BaliseTelegram_Receive */
/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_BaliseTelegram_Receive_.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */
#ifndef _Receive_MA_RequestParameters_T
#define _Receive_MA_RequestParameters_T

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P057_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_Request::Receive_MA_RequestParameters::IsNew */ IsNew;
  P57_MovementAuthorityRequestPar /* TA_MA_Request::Receive_MA_RequestParameters::MA_RequestParams */ MA_RequestParams;
  kcg_bool /* TA_MA_Request::Receive_MA_RequestParameters::ma_received */ ma_received;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Receive_MA_RequestParamete;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::Receive_MA_RequestParameters */
extern void Receive_MA_RequestParameters_TA(
  /* TA_MA_Request::Receive_MA_RequestParameters::message_in */ ReceivedMessage_T_Common_Types_ *message_in,
  outC_Receive_MA_RequestParamete *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_MA_RequestParameters_re(
  outC_Receive_MA_RequestParamete *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_MA_RequestParameters_in(
  outC_Receive_MA_RequestParamete *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Receive_MA_RequestParameters_T */
/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_MA_RequestParameters_TA.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */


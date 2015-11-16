/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG-ERSA/balise\kcg_s2c_config.txt
** Generation date: 2015-11-16T14:56:40
*************************************************************$ */
#ifndef _Send_telegram_balise_API_Examples_H_
#define _Send_telegram_balise_API_Examples_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  BaliseTelegramHeader_int_T_TM /* API_Examples::Send_telegram_balise::Header */ Header;
  P042_trackside_int_T_TM /* API_Examples::Send_telegram_balise::P042_in */ P042_in;
  P046_trackside_int_T_TM /* API_Examples::Send_telegram_balise::P046_1_in */ P046_1_in;
  P046_trackside_int_T_TM /* API_Examples::Send_telegram_balise::P046_2_in */ P046_2_in;
  P003V1_trackside_int_T_TM_baseline2 /* API_Examples::Send_telegram_balise::P003_in */ P003_in;
} inC_Send_telegram_balise_API_Examples;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* API_Examples::Send_telegram_balise::telegram_out */ telegram_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Send_telegram_balise_API_Examples;

/* ===========  node initialization and cycle functions  =========== */
/* API_Examples::Send_telegram_balise */
extern void Send_telegram_balise_API_Examples(
  inC_Send_telegram_balise_API_Examples *inC,
  outC_Send_telegram_balise_API_Examples *outC);

extern void Send_telegram_balise_reset_API_Examples(
  outC_Send_telegram_balise_API_Examples *outC);

#endif /* _Send_telegram_balise_API_Examples_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_telegram_balise_API_Examples.h
** Generation date: 2015-11-16T14:56:40
*************************************************************$ */


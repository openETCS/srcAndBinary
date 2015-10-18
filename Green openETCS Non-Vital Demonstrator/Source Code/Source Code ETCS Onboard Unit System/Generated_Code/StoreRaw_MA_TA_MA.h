/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _StoreRaw_MA_TA_MA_H_
#define _StoreRaw_MA_TA_MA_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "MA_storage_TA_MA.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA::StoreRaw_MA::vald_MA */ vald_MA;
  kcg_bool /* TA_MA::StoreRaw_MA::new_MA */ new_MA;
  P015_OBU_T_TM /* TA_MA::StoreRaw_MA::MA_onboard_out */ MA_onboard_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_StoreRaw_MA_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::StoreRaw_MA */
extern void StoreRaw_MA_TA_MA(
  /* TA_MA::StoreRaw_MA::packets_in */ CompressedPackets_T_Common_Types_Pkg *packets_in,
  outC_StoreRaw_MA_TA_MA *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void StoreRaw_MA_reset_TA_MA(outC_StoreRaw_MA_TA_MA *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void StoreRaw_MA_init_TA_MA(outC_StoreRaw_MA_TA_MA *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _StoreRaw_MA_TA_MA_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** StoreRaw_MA_TA_MA.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _Build_MA_TA_MA_H_
#define _Build_MA_TA_MA_H_

#include "kcg_types.h"
#include "Decode_P015_TA_MA.h"
#include "StoreRaw_MA_TA_MA.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA::Build_MA::new_MA */ new_MA;
  kcg_bool /* TA_MA::Build_MA::vald_MA */ vald_MA;
  MovementAuthority_t_TrackAtlasTypes /* TA_MA::Build_MA::MA_onboard_out */ MA_onboard_out;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MA::Build_MA::currentEOA */ currentEOA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_StoreRaw_MA_TA_MA /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MA_TA_MA;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::Build_MA */
extern void Build_MA_TA_MA(
  /* TA_MA::Build_MA::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA::Build_MA::NV_onboard_in */ P003V1_OBU_T_TM_baseline2 *NV_onboard_in,
  /* TA_MA::Build_MA::reject_new_MA */ kcg_bool reject_new_MA,
  /* TA_MA::Build_MA::updatedEOA_from_EM */ kcg_bool updatedEOA_from_EM,
  /* TA_MA::Build_MA::newEOA_from_EM */ L_internal_Type_Obu_BasicTypes_Pkg newEOA_from_EM,
  outC_Build_MA_TA_MA *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MA_reset_TA_MA(outC_Build_MA_TA_MA *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MA_init_TA_MA(outC_Build_MA_TA_MA *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_MA_TA_MA_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_TA_MA.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */


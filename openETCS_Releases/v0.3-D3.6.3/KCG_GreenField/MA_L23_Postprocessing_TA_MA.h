/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _MA_L23_Postprocessing_TA_MA_H_
#define _MA_L23_Postprocessing_TA_MA_H_

#include "kcg_types.h"
#include "MA_Normalize_MA_LRBG_TA_MA.h"
#include "Update_MA_TA_MA.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasT /* TA_MA::MA_L23_Postprocessing::MA_at_LRBG */ MA_at_LRBG;
  MovementAuthority_t_TrackAtlasT /* TA_MA::MA_L23_Postprocessing::MA_absolute */ MA_absolute;
  kcg_bool /* TA_MA::MA_L23_Postprocessing::MA_available */ MA_available;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Update_MA_TA_MA /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MA_L23_Postprocessing_TA_M;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA::MA_L23_Postprocessing */
extern void MA_L23_Postprocessing_TA_MA(
  /* TA_MA::MA_L23_Postprocessing::Profile_in */ MovementAuthority_t_TrackAtlasT *Profile_in,
  /* TA_MA::MA_L23_Postprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  outC_MA_L23_Postprocessing_TA_M *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_L23_Postprocessing_reset_TA_(
  outC_MA_L23_Postprocessing_TA_M *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_L23_Postprocessing_init_TA_M(
  outC_MA_L23_Postprocessing_TA_M *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MA_L23_Postprocessing_TA_MA_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MA_L23_Postprocessing_TA_MA.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


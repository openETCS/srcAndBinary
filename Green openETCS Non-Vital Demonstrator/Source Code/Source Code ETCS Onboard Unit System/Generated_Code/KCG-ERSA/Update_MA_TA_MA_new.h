/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:38
*************************************************************$ */
#ifndef _Update_MA_TA_MA_new_H_
#define _Update_MA_TA_MA_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* TA_MA_new::Update_MA::MA_in_force */ MA_in_force;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Update_MA_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Update_MA */
extern void Update_MA_TA_MA_new(
  /* TA_MA_new::Update_MA::ProfileIn */ MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  outC_Update_MA_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Update_MA_reset_TA_MA_new(outC_Update_MA_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Update_MA_init_TA_MA_new(outC_Update_MA_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Update_MA_TA_MA_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Update_MA_TA_MA_new.h
** Generation date: 2015-12-07T14:47:38
*************************************************************$ */


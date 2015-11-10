/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _C_compr_P003_TM_TrainToTrack_H
#define _C_compr_P003_TM_TrainToTrack_H

#include "kcg_types.h"
#include "CAST_NID_PACKET_to_int_TM_conve.h"
#include "CAST_L_PACKET_to_int_TM_convers.h"
#include "CAST_N_ITER_to_int_TM_conversio.h"
#include "Decode_NID_PACKET_TM_TrainToTra.h"
#include "Filter_Variable_TM_TrainToTrack.h"
#include "C_P003_flatten_sections_TM_Trai.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_TM_TrainToTrack /* TM_TrainToTrack::C_compr_P003::P003_out */ P003_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  P003_nid_radio_list_int_t_TM_Tr /* TM_TrainToTrack::C_compr_P003::_L89 */ _L89;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_C_compr_P003_TM_TrainToTra;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::C_compr_P003 */
extern void C_compr_P003_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P003::P003_int */ P003_TrainTrack_int_TM_TrainToT *P003_int,
  outC_C_compr_P003_TM_TrainToTra *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_compr_P003_reset_TM_TrainToTr(
  outC_C_compr_P003_TM_TrainToTra *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_compr_P003_init_TM_TrainToTra(
  outC_C_compr_P003_TM_TrainToTra *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _C_compr_P003_TM_TrainToTrack_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P003_TM_TrainToTrack.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


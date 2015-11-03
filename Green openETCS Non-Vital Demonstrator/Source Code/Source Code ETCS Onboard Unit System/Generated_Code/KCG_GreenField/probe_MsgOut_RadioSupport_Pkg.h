/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */
#ifndef _probe_MsgOut_RadioSupport_Pkg_
#define _probe_MsgOut_RadioSupport_Pkg_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_MESSAGE /* RadioSupport_Pkg::probe_MsgOut::Msg_0ut */ Msg_0ut;
  T_TRAIN /* RadioSupport_Pkg::probe_MsgOut::outTTrain */ outTTrain;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_probe_MsgOut_RadioSupport_;

/* ===========  node initialization and cycle functions  =========== */
/* RadioSupport_Pkg::probe_MsgOut */
extern void probe_MsgOut_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_MsgOut::fromEVC */ M_TrainTrack_Message_T_TM_radio *fromEVC,
  /* RadioSupport_Pkg::probe_MsgOut::show136 */ kcg_bool show136,
  outC_probe_MsgOut_RadioSupport_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void probe_MsgOut_reset_RadioSupport(
  outC_probe_MsgOut_RadioSupport_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void probe_MsgOut_init_RadioSupport_(
  outC_probe_MsgOut_RadioSupport_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _probe_MsgOut_RadioSupport_Pkg_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** probe_MsgOut_RadioSupport_Pkg.h
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */


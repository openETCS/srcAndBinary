/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _TransitionBuffer_InformationFi
#define _TransitionBuffer_InformationFi

#include "kcg_types.h"
#include "TransitionBuffer_write_only_Inf.h"
#include "TransitionBuffer_read_write_Inf.h"
#include "TransitionBuffer_read_only_Info.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_ /* InformationFilter_Pkg::TransitionBuffer::Out */ Out;
  kcg_int /* InformationFilter_Pkg::TransitionBuffer::outStacksize */ outStacksize;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TransitionBuffer_T_InformationF /* InformationFilter_Pkg::TransitionBuffer::buffer */ buffer;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TransitionBuffer_Informati;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::TransitionBuffer */
extern void TransitionBuffer_InformationFil(
  /* InformationFilter_Pkg::TransitionBuffer::In */ ReceivedMessage_T_Common_Types_ *In,
  /* InformationFilter_Pkg::TransitionBuffer::Write */ kcg_bool Write,
  /* InformationFilter_Pkg::TransitionBuffer::Reset */ kcg_bool Reset,
  outC_TransitionBuffer_Informati *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransitionBuffer_reset_Informat(
  outC_TransitionBuffer_Informati *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransitionBuffer_init_Informati(
  outC_TransitionBuffer_Informati *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TransitionBuffer_InformationFi */
/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_InformationFil.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */


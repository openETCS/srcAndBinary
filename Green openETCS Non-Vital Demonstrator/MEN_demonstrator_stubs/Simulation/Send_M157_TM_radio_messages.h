/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Send_M157_TM_radio_messages_H_
#define _Send_M157_TM_radio_messages_H_

#include "kcg_types.h"
#include "BufferMsg_TM_lib_internal.h"
#include "C_P004_train_compr_TM_TrainToTrack.h"
#include "C_P005_train_compr_TM_TrainToTrack.h"
#include "C_P044_train_compr_TM_TrainToTrack.h"
#include "C_P000_train_compr_TM_TrainToTrack.h"
#include "C_P001_train_compr_TM_TrainToTrack.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"
#include "C_M157_to_header_TM_RBC_conversions.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_radio_messages::Send_M157::MessageBus_out */ MessageBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* 1 */ _8_Context_1;
  outC_BufferMsg_TM_lib_internal /* 1 */ _7_Context_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* 1 */ _6_Context_1;
  outC_Merge_PacketsToMessage_TM_TrainToTrack /* 1 */ _5_Context_1;
  outC_C_M157_to_header_TM_RBC_conversions /* 2 */ _4_Context_2;
  outC_C_P044_train_compr_TM_TrainToTrack /* 1 */ _3_Context_1;
  outC_C_P005_train_compr_TM_TrainToTrack /* 1 */ _2_Context_1;
  outC_C_P004_train_compr_TM_TrainToTrack /* 1 */ Context_1;
  outC_C_P001_train_compr_TM_TrainToTrack /* 2 */ _1_Context_2;
  outC_C_P000_train_compr_TM_TrainToTrack /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P004_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L9 */ _L9;
  P005_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L10 */ _L10;
  P044_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L11 */ _L11;
  P044_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L19 */ _L19;
  P005_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L17 */ _L17;
  P004_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L15 */ _L15;
  M_157_T_TM_radio_messages /* TM_radio_messages::Send_M157::_L26 */ _L26;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* TM_radio_messages::Send_M157::_L24 */ _L24;
  P001_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L42 */ _L42;
  kcg_int /* TM_radio_messages::Send_M157::_L41 */ _L41;
  array_int_23 /* TM_radio_messages::Send_M157::_L40 */ _L40;
  array_int_20 /* TM_radio_messages::Send_M157::_L39 */ _L39;
  M_VERSION /* TM_radio_messages::Send_M157::_L38 */ _L38;
  P000_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L37 */ _L37;
  kcg_bool /* TM_radio_messages::Send_M157::_L36 */ _L36;
  array_int_2 /* TM_radio_messages::Send_M157::_L35 */ _L35;
  kcg_bool /* TM_radio_messages::Send_M157::_L34 */ _L34;
  kcg_bool /* TM_radio_messages::Send_M157::_L33 */ _L33;
  P000_TrainTrack_int_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L32 */ _L32;
  P000_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L31 */ _L31;
  P001_TM_TrainToTrack /* TM_radio_messages::Send_M157::_L27 */ _L27;
  array_int_50 /* TM_radio_messages::Send_M157::_L45 */ _L45;
  array_int_48 /* TM_radio_messages::Send_M157::_L44 */ _L44;
  T_internal_Type_Obu_BasicTypes_Pkg /* TM_radio_messages::Send_M157::_L54 */ _L54;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_radio_messages::Send_M157::_L51 */ _L51;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_radio_messages::Send_M157::_L48 */ _L48;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_radio_messages::Send_M157::_L46 */ _L46;
  M_TrainTrack_Message_T_TM_radio_messages /* TM_radio_messages::Send_M157::_L49 */ _L49;
  kcg_bool /* TM_radio_messages::Send_M157::_L55 */ _L55;
  kcg_int /* TM_radio_messages::Send_M157::_L53 */ _L53;
  kcg_bool /* TM_radio_messages::Send_M157::_L52 */ _L52;
  kcg_int /* TM_radio_messages::Send_M157::_L56 */ _L56;
} outC_Send_M157_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M157 */
extern void Send_M157_TM_radio_messages(
  /* TM_radio_messages::Send_M157::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M157::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M157::m_version */M_VERSION _3_m_version,
  /* TM_radio_messages::Send_M157::P000 */P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M157::P001 */P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M157::P004 */P004_TM_TrainToTrack *P004,
  /* TM_radio_messages::Send_M157::P005 */P005_TM_TrainToTrack *P005,
  /* TM_radio_messages::Send_M157::P044 */P044_TM_TrainToTrack *P044,
  /* TM_radio_messages::Send_M157::Message_157_in */M_157_T_TM_radio_messages *Message_157_in,
  outC_Send_M157_TM_radio_messages *outC);

extern void Send_M157_reset_TM_radio_messages(
  outC_Send_M157_TM_radio_messages *outC);

#endif /* _Send_M157_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M157_TM_radio_messages.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


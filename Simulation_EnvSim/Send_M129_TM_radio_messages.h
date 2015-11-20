/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T13:23:26
*************************************************************$ */
#ifndef _Send_M129_TM_radio_messages_H_
#define _Send_M129_TM_radio_messages_H_

#include "kcg_types.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"
#include "C_P001_train_compr_TM_TrainToTrack.h"
#include "C_P000_train_compr_TM_TrainToTrack.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"
#include "C_P011_train_compr_TM_TrainToTrack.h"
#include "C_M129_to_header_TM_RBC_conversions.h"
#include "BufferMsg_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TM_radio_messages::Send_M129::MessageBus_out */ MessageBus_out;
  kcg_int /* TM_radio_messages::Send_M129::t_train_assigned */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferMsg_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Send_M129_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M129 */
extern void Send_M129_TM_radio_messages(
  /* TM_radio_messages::Send_M129::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M129::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M129::Message_129_in */M_129_T_TM_radio_messages *Message_129_in,
  /* TM_radio_messages::Send_M129::P000 */P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M129::P001 */P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M129::P011 */P011_TM_TrainToTrack *P011,
  /* TM_radio_messages::Send_M129::m_version */M_VERSION m_version,
  outC_Send_M129_TM_radio_messages *outC);

extern void Send_M129_reset_TM_radio_messages(
  outC_Send_M129_TM_radio_messages *outC);

#endif /* _Send_M129_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M129_TM_radio_messages.h
** Generation date: 2015-11-20T13:23:26
*************************************************************$ */

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Read_M003_TM_radio_messages_H_
#define _Read_M003_TM_radio_messages_H_

#include "kcg_types.h"
#include "Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_radio_messages::Read_M003::received */ received;
  M_003_T_TM_radio_messages /* TM_radio_messages::Read_M003::M003_out */ M003_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy /* 1 */ _1_Context_1;
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_003_T_TM_radio_messages /* TM_radio_messages::Read_M003::_L1 */ _L1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_radio_messages::Read_M003::_L2 */ _L2;
  NID_MESSAGE /* TM_radio_messages::Read_M003::_L3 */ _L3;
  kcg_int /* TM_radio_messages::Read_M003::_L34 */ _L34;
  kcg_int /* TM_radio_messages::Read_M003::_L35 */ _L35;
  kcg_bool /* TM_radio_messages::Read_M003::_L36 */ _L36;
} outC_Read_M003_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Read_M003 */
extern void Read_M003_TM_radio_messages(
  /* TM_radio_messages::Read_M003::RadioHeaderUniversalIn */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeaderUniversalIn,
  outC_Read_M003_TM_radio_messages *outC);

extern void Read_M003_reset_TM_radio_messages(
  outC_Read_M003_TM_radio_messages *outC);

#endif /* _Read_M003_TM_radio_messages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_M003_TM_radio_messages.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


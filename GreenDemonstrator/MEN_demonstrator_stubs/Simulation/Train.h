/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Train_H_
#define _Train_H_

#include "kcg_types.h"
#include "Read_M003_TM_radio_messages.h"
#include "Send_M157_TM_radio_messages.h"
#include "compressed_to_Radio_Track_TM_RBC_conversions_legacy.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "Read_P041_TM.h"
#include "Read_P005_TM.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Read_P003V1_TM_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_003_T_TM_radio_messages /* Train::M003_out */ M003_out;
  P003V1_OBU_T_TM_baseline2 /* Train::P003V1_OBU_out */ P003V1_OBU_out;
  kcg_bool /* Train::received */ received;
  P027V1_OBU_T_TM_baseline2 /* Train::P027V1_out */ P027V1_out;
  P005_OBU_T_TM /* Train::P005_OBU_out */ P005_OBU_out;
  P015_OBU_T_TM /* Train::P015_OBU_out */ P015_OBU_out;
  P021_OBU_T_TM /* Train::P021_OBU_out */ P021_OBU_out;
  P041_OBU_T_TM /* Train::P041_OBU_out */ P041_OBU_out;
  BaliseTelegramHeader_int_T_TM /* Train::BaliseTelegram */ BaliseTelegram;
  M_TrainTrack_Message_T_TM_radio_messages /* Train::MessageOut */ MessageOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P003V1_TM_baseline2 /* 1 */ _7_Context_1;
  outC_Read_P027V1_TM_baseline2 /* 1 */ _6_Context_1;
  outC_Read_P005_TM /* 1 */ _5_Context_1;
  outC_Read_P015_TM /* 1 */ _4_Context_1;
  outC_Read_P021_TM /* 1 */ _3_Context_1;
  outC_Read_P041_TM /* 1 */ _2_Context_1;
  outC_Read_M003_TM_radio_messages /* 1 */ _1_Context_1;
  outC_Send_M157_TM_radio_messages /* 2 */ Context_2;
  outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_003_T_TM_radio_messages /* Train::_L3 */ _L3;
  kcg_bool /* Train::_L2 */ _L2;
  P015_OBU_T_TM /* Train::_L5 */ _L5;
  kcg_bool /* Train::_L4 */ _L4;
  P021_OBU_T_TM /* Train::_L7 */ _L7;
  kcg_bool /* Train::_L6 */ _L6;
  P041_OBU_T_TM /* Train::_L9 */ _L9;
  kcg_bool /* Train::_L8 */ _L8;
  P005_OBU_T_TM /* Train::_L11 */ _L11;
  kcg_bool /* Train::_L10 */ _L10;
  P027V1_OBU_T_TM_baseline2 /* Train::_L13 */ _L13;
  kcg_bool /* Train::_L12 */ _L12;
  P003V1_OBU_T_TM_baseline2 /* Train::_L15 */ _L15;
  kcg_bool /* Train::_L14 */ _L14;
  CompressedBaliseMessage_TM /* Train::_L17 */ _L17;
  CompressedPackets_T_Common_Types_Pkg /* Train::_L19 */ _L19;
  BaliseTelegramHeader_int_T_TM /* Train::_L18 */ _L18;
  M_TrackTrain_Radio_T_TM_radio_messages /* Train::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* Train::_L23 */ _L23;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* Train::_L24 */ _L24;
  kcg_int /* Train::_L25 */ _L25;
  M_TrainTrack_Message_T_TM_radio_messages /* Train::_L26 */ _L26;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* Train::_L27 */ _L27;
  M_VERSION /* Train::_L28 */ _L28;
  P000_TM_TrainToTrack /* Train::_L29 */ _L29;
  P001_TM_TrainToTrack /* Train::_L30 */ _L30;
  P004_TM_TrainToTrack /* Train::_L31 */ _L31;
  P005_TM_TrainToTrack /* Train::_L32 */ _L32;
  P044_TM_TrainToTrack /* Train::_L33 */ _L33;
  M_157_T_TM_radio_messages /* Train::_L34 */ _L34;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Train::_L35 */ _L35;
} outC_Train;

/* ===========  node initialization and cycle functions  =========== */
/* Train */
extern void Train(
  /* Train::RadioMessage_in */M_TrackTrain_Radio_T_TM_radio_messages *RadioMessage_in,
  /* Train::RadioPackets_in */CompressedPackets_T_Common_Types_Pkg *RadioPackets_in,
  /* Train::BaliseMessage_in */CompressedBaliseMessage_TM *BaliseMessage_in,
  outC_Train *outC);

extern void Train_reset(outC_Train *outC);

#endif /* _Train_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Train.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


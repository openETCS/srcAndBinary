/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Test_TrainTrack_H_
#define _Test_TrainTrack_H_

#include "kcg_types.h"
#include "Train.h"
#include "Track.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_157_T_TM_radio_messages /* Test_TrainTrack::Message_157_out */ Message_157_out;
  P000_TM_TrainToTrack /* Test_TrainTrack::P000 */ P000;
  P001_TM_TrainToTrack /* Test_TrainTrack::P001 */ P001;
  P004_TM_TrainToTrack /* Test_TrainTrack::P004 */ P004;
  P005_TM_TrainToTrack /* Test_TrainTrack::P005 */ P005;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Track /* 1 */ _1_Context_1;
  outC_Train /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* Test_TrainTrack::_L10 */ _L10;
  BaliseTelegramHeader_int_T_TM /* Test_TrainTrack::_L9 */ _L9;
  P041_OBU_T_TM /* Test_TrainTrack::_L8 */ _L8;
  P021_OBU_T_TM /* Test_TrainTrack::_L7 */ _L7;
  P015_OBU_T_TM /* Test_TrainTrack::_L6 */ _L6;
  P005_OBU_T_TM /* Test_TrainTrack::_L5 */ _L5;
  P027V1_OBU_T_TM_baseline2 /* Test_TrainTrack::_L4 */ _L4;
  kcg_bool /* Test_TrainTrack::_L3 */ _L3;
  P003V1_OBU_T_TM_baseline2 /* Test_TrainTrack::_L2 */ _L2;
  M_003_T_TM_radio_messages /* Test_TrainTrack::_L1 */ _L1;
  CompressedBaliseMessage_TM /* Test_TrainTrack::_L18 */ _L18;
  CompressedPackets_T_Common_Types_Pkg /* Test_TrainTrack::_L17 */ _L17;
  M_TrackTrain_Radio_T_TM_radio_messages /* Test_TrainTrack::_L16 */ _L16;
  P005_TM_TrainToTrack /* Test_TrainTrack::_L15 */ _L15;
  P004_TM_TrainToTrack /* Test_TrainTrack::_L14 */ _L14;
  P001_TM_TrainToTrack /* Test_TrainTrack::_L13 */ _L13;
  P000_TM_TrainToTrack /* Test_TrainTrack::_L12 */ _L12;
  M_157_T_TM_radio_messages /* Test_TrainTrack::_L11 */ _L11;
  M_TrackTrain_Radio_T_TM_radio_messages /* Test_TrainTrack::_L19 */ _L19;
  CompressedPackets_T_Common_Types_Pkg /* Test_TrainTrack::_L20 */ _L20;
  CompressedBaliseMessage_TM /* Test_TrainTrack::_L21 */ _L21;
} outC_Test_TrainTrack;

/* ===========  node initialization and cycle functions  =========== */
/* Test_TrainTrack */
extern void Test_TrainTrack(outC_Test_TrainTrack *outC);

extern void Test_TrainTrack_reset(outC_Test_TrainTrack *outC);

#endif /* _Test_TrainTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Test_TrainTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


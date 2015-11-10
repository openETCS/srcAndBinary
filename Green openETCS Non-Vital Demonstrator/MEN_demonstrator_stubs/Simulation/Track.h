/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Track_H_
#define _Track_H_

#include "kcg_types.h"
#include "SendRBC.h"
#include "SendBalises.h"
#include "Read_M157_TM_radio_messages_trackside.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_157_T_TM_radio_messages /* Track::Message_157_out */ Message_157_out;
  P000_TM_TrainToTrack /* Track::P000 */ P000;
  P001_TM_TrainToTrack /* Track::P001 */ P001;
  P004_TM_TrainToTrack /* Track::P004 */ P004;
  P005_TM_TrainToTrack /* Track::P005 */ P005;
  M_TrackTrain_Radio_T_TM_radio_messages /* Track::RadioMessage_out */ RadioMessage_out;
  CompressedPackets_T_Common_Types_Pkg /* Track::RadioPackets_out */ RadioPackets_out;
  CompressedBaliseMessage_TM /* Track::BaliseMessage */ BaliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_M157_TM_radio_messages_trackside /* 1 */ _2_Context_1;
  outC_SendRBC /* 1 */ _1_Context_1;
  outC_SendBalises /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_TRAIN /* Track::_L8 */ _L8;
  M_VERSION /* Track::_L7 */ _L7;
  P044_TM_TrainToTrack /* Track::_L6 */ _L6;
  P005_TM_TrainToTrack /* Track::_L5 */ _L5;
  P004_TM_TrainToTrack /* Track::_L4 */ _L4;
  P001_TM_TrainToTrack /* Track::_L3 */ _L3;
  P000_TM_TrainToTrack /* Track::_L2 */ _L2;
  M_157_T_TM_radio_messages /* Track::_L1 */ _L1;
  kcg_int /* Track::_L15 */ _L15;
  M_TrackTrain_Radio_T_TM_radio_messages /* Track::_L16 */ _L16;
  CompressedPackets_T_Common_Types_Pkg /* Track::_L17 */ _L17;
  CompressedBaliseMessage_TM /* Track::_L18 */ _L18;
  M_TrainTrack_Message_T_TM_radio_messages /* Track::_L19 */ _L19;
  M_TrackTrain_Radio_T_TM_radio_messages /* Track::_L21 */ _L21;
  CompressedPackets_T_Common_Types_Pkg /* Track::_L22 */ _L22;
  kcg_bool /* Track::_L23 */ _L23;
  kcg_int /* Track::_L24 */ _L24;
  kcg_real /* Track::_L25 */ _L25;
} outC_Track;

/* ===========  node initialization and cycle functions  =========== */
/* Track */
extern void Track(
  /* Track::TrainTrackMessageIn */M_TrainTrack_Message_T_TM_radio_messages *TrainTrackMessageIn,
  outC_Track *outC);

extern void Track_reset(outC_Track *outC);

#endif /* _Track_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Track.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


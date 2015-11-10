/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */
#ifndef _Track_H_
#define _Track_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_Sheet06_Biljmer_integration.h"
#include "Amsterdam_Utrecht_Lijn1_balises1.h"
#include "Read_M157_TM_radio_messages_trackside.h"

/* ========================  input structure  ====================== */
typedef struct {
  M_TrainTrack_Message_T_TM_radio_messages /* Track::TrainTrackMessageIn */ TrainTrackMessageIn;
} inC_Track;

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
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Track;

/* ===========  node initialization and cycle functions  =========== */
/* Track */
extern void Track(inC_Track *inC, outC_Track *outC);

extern void Track_reset(outC_Track *outC);

#endif /* _Track_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Track.h
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */


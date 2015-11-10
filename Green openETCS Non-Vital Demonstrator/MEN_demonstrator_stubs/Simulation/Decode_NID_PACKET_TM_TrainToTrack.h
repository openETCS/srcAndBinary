/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Decode_NID_PACKET_TM_TrainToTrack_H_
#define _Decode_NID_PACKET_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_TrainToTrack::Decode_NID_PACKET::Valid */ Valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_TrainToTrack::Decode_NID_PACKET::_L1 */ _L1;
  kcg_int /* TM_TrainToTrack::Decode_NID_PACKET::_L2 */ _L2;
  kcg_bool /* TM_TrainToTrack::Decode_NID_PACKET::_L3 */ _L3;
} outC_Decode_NID_PACKET_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::Decode_NID_PACKET */
extern void Decode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Decode_NID_PACKET::Meta */kcg_int Meta,
  /* TM_TrainToTrack::Decode_NID_PACKET::Packet_ID */kcg_int Packet_ID,
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC);

extern void Decode_NID_PACKET_reset_TM_TrainToTrack(
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC);

#endif /* _Decode_NID_PACKET_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_NID_PACKET_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


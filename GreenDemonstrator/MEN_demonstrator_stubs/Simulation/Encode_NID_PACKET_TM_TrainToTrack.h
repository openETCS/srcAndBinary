/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Encode_NID_PACKET_TM_TrainToTrack_H_
#define _Encode_NID_PACKET_TM_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_TrainToTrack::Encode_NID_PACKET::meta */ meta;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_PACKET /* TM_TrainToTrack::Encode_NID_PACKET::_L1 */ _L1;
  kcg_bool /* TM_TrainToTrack::Encode_NID_PACKET::_L6 */ _L6;
  kcg_int /* TM_TrainToTrack::Encode_NID_PACKET::_L7 */ _L7;
  NID_PACKET /* TM_TrainToTrack::Encode_NID_PACKET::_L8 */ _L8;
  kcg_int /* TM_TrainToTrack::Encode_NID_PACKET::_L9 */ _L9;
  kcg_bool /* TM_TrainToTrack::Encode_NID_PACKET::_L10 */ _L10;
  kcg_int /* TM_TrainToTrack::Encode_NID_PACKET::_L11 */ _L11;
  kcg_int /* TM_TrainToTrack::Encode_NID_PACKET::_L13 */ _L13;
} outC_Encode_NID_PACKET_TM_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack::Encode_NID_PACKET */
extern void Encode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Encode_NID_PACKET::valid */kcg_bool valid,
  /* TM_TrainToTrack::Encode_NID_PACKET::nid_packet */NID_PACKET nid_packet,
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC);

extern void Encode_NID_PACKET_reset_TM_TrainToTrack(
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC);

#endif /* _Encode_NID_PACKET_TM_TrainToTrack_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Encode_NID_PACKET_TM_TrainToTrack.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"

void Encode_NID_PACKET_reset_TM_TrainToTrack(
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC)
{
}

/* TM_TrainToTrack::Encode_NID_PACKET */
void Encode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Encode_NID_PACKET::valid */kcg_bool valid,
  /* TM_TrainToTrack::Encode_NID_PACKET::nid_packet */NID_PACKET nid_packet,
  outC_Encode_NID_PACKET_TM_TrainToTrack *outC)
{
  outC->_L13 = nid_meta_p000_TM_radio_messages;
  outC->_L11 = 0;
  outC->_L1 = nid_packet;
  outC->_L10 = outC->_L1 == outC->_L11;
  if (outC->_L10) {
    outC->_L9 = outC->_L13;
  }
  else {
    outC->_L9 = outC->_L1;
  }
  outC->_L8 = INVALID_NID_PACKET_TM_TrainToTrack;
  outC->_L6 = valid;
  if (outC->_L6) {
    outC->_L7 = outC->_L9;
  }
  else {
    outC->_L7 = outC->_L8;
  }
  outC->meta = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Encode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */


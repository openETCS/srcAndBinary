/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"

void Decode_NID_PACKET_reset_TM_TrainToTrack(
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC)
{
}

/* TM_TrainToTrack::Decode_NID_PACKET */
void Decode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Decode_NID_PACKET::Meta */kcg_int Meta,
  /* TM_TrainToTrack::Decode_NID_PACKET::Packet_ID */kcg_int Packet_ID,
  outC_Decode_NID_PACKET_TM_TrainToTrack *outC)
{
  outC->_L1 = Meta;
  outC->_L2 = Packet_ID;
  outC->_L3 = outC->_L1 == outC->_L2;
  outC->Valid = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */


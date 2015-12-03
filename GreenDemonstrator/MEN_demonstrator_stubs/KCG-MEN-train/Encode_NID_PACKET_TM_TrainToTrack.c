/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"

/* TM_TrainToTrack::Encode_NID_PACKET */
kcg_int Encode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Encode_NID_PACKET::valid */kcg_bool valid,
  /* TM_TrainToTrack::Encode_NID_PACKET::nid_packet */NID_PACKET nid_packet)
{
  /* TM_TrainToTrack::Encode_NID_PACKET::meta */ kcg_int meta;
  
  if (valid) {
    if (nid_packet == 0) {
      meta = nid_meta_p000_TM_radio_messages;
    }
    else {
      meta = nid_packet;
    }
  }
  else {
    meta = INVALID_NID_PACKET_TM_TrainToTrack;
  }
  return meta;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Encode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */


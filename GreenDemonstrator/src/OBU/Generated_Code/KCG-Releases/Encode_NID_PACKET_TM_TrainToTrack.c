/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"

/* TM_TrainToTrack::Encode_NID_PACKET */
kcg_int Encode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Encode_NID_PACKET::valid */ kcg_bool valid,
  /* TM_TrainToTrack::Encode_NID_PACKET::nid_packet */ NID_PACKET nid_packet)
{
  /* TM_TrainToTrack::Encode_NID_PACKET::meta */
  static kcg_int meta;
  
  /* 1 */ if (valid) {
    /* 2 */ if (nid_packet == 0) {
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

/* $**************** KCG Version 6.4 (build i21) ****************
** Encode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */


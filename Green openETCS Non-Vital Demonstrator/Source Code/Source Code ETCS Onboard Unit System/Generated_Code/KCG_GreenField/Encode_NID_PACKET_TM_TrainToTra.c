/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Encode_NID_PACKET_TM_TrainToTra.h"

/* TM_TrainToTrack::Encode_NID_PACKET */
kcg_int Encode_NID_PACKET_TM_TrainToTra(
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
    meta = INVALID_NID_PACKET_TM_TrainToTr;
  }
  return meta;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Encode_NID_PACKET_TM_TrainToTra.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */


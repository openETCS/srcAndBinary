/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"

/* TM_TrainToTrack::Decode_NID_PACKET */
kcg_bool Decode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Decode_NID_PACKET::Meta */kcg_int Meta,
  /* TM_TrainToTrack::Decode_NID_PACKET::Packet_ID */kcg_int Packet_ID)
{
  /* TM_TrainToTrack::Decode_NID_PACKET::Valid */ kcg_bool Valid;
  
  Valid = Meta == Packet_ID;
  return Valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */


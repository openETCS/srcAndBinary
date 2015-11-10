/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_PACKET_TM_TrainToTra.h"

/* TM_TrainToTrack::Decode_NID_PACKET */
kcg_bool Decode_NID_PACKET_TM_TrainToTra(
  /* TM_TrainToTrack::Decode_NID_PACKET::Meta */ kcg_int Meta,
  /* TM_TrainToTrack::Decode_NID_PACKET::Packet_ID */ kcg_int Packet_ID)
{
  /* TM_TrainToTrack::Decode_NID_PACKET::Valid */
  static kcg_bool Valid;
  
  Valid = Meta == Packet_ID;
  return Valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Decode_NID_PACKET_TM_TrainToTra.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


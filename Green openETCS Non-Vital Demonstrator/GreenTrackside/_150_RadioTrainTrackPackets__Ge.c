/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_150_RadioTrainTrackPackets__Ge.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001 */
void _150_RadioTrainTrackPackets__Ge(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001::outRadioTrainTrackPacket */ PT1_PositionReport_2BG_T_Packet *outRadioTrainTrackPacket)
{
  kcg_copy_PT1_PositionReport_2BG(
    outRadioTrainTrackPacket,
    &(*inRadioTrainTrackPackets).p1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _150_RadioTrainTrackPackets__Ge.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


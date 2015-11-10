/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_147_RadioTrainTrackPackets__Ge.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005 */
void _147_RadioTrainTrackPackets__Ge(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005::outRadioTrainTrackPacket */ PT5_TrainRunningNumber_Packet_T *outRadioTrainTrackPacket)
{
  kcg_copy_PT5_TrainRunningNumber(
    outRadioTrainTrackPacket,
    &(*inRadioTrainTrackPackets).p5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _147_RadioTrainTrackPackets__Ge.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


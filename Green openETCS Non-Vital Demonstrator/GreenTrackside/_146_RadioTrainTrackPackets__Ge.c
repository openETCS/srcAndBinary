/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_146_RadioTrainTrackPackets__Ge.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004 */
void _146_RadioTrainTrackPackets__Ge(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004::outRadioTrainTrackPacket */ PT4_ErrorReporting_T_Packet_Tra *outRadioTrainTrackPacket)
{
  kcg_copy_PT4_ErrorReporting_T_P(
    outRadioTrainTrackPacket,
    &(*inRadioTrainTrackPackets).p4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _146_RadioTrainTrackPackets__Ge.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


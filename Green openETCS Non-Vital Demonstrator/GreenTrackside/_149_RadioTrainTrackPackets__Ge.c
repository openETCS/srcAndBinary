/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_149_RadioTrainTrackPackets__Ge.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000 */
void _149_RadioTrainTrackPackets__Ge(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000::outRadioTrainTrackPacket */ PT0_PositionReport_T_Packet_Tra *outRadioTrainTrackPacket)
{
  kcg_copy_PT0_PositionReport_T_P(
    outRadioTrainTrackPacket,
    &(*inRadioTrainTrackPackets).p0);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _149_RadioTrainTrackPackets__Ge.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__GetTr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities */
void RadioTrainTrackPacket011__GetTr(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packe *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities::outTractionIdentities */ aTractionIdentity_T_Packet_Trai *outTractionIdentities)
{
  kcg_copy_aTractionIdentity_T_Pa(
    outTractionIdentities,
    &(*inRadioTrainTrackPacket).tractionIdentity);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket011__GetTr.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


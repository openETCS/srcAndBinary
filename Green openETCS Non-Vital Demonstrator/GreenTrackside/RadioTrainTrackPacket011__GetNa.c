/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__GetNa.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities */
void RadioTrainTrackPacket011__GetNa(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packe *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities::outNationalSystemIdentities */ aNID_NTC_T_Packet_TrainTypes_Pk *outNationalSystemIdentities)
{
  kcg_copy_aNID_NTC_T_Packet_Trai(
    outNationalSystemIdentities,
    &(*inRadioTrainTrackPacket).nid_ntc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket011__GetNa.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


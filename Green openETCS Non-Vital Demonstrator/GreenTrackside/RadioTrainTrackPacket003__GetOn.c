/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket003__GetOn.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers */
void RadioTrainTrackPacket003__GetOn(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers::inRadioTrainTrackPacket */ PT3_OnboardTelephoneNumbers_T_P *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers::outOnboardPhoneNumbers */ aNID_RADIO_T_Packet_TrainTypes_ *outOnboardPhoneNumbers)
{
  kcg_copy_aNID_RADIO_T_Packet_Tr(
    outOnboardPhoneNumbers,
    &(*inRadioTrainTrackPacket).aNID_RADIO);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket003__GetOn.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


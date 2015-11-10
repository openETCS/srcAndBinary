/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_152_RadioTrainTrackPackets__Ge.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003 */
void _152_RadioTrainTrackPackets__Ge(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003::outRadioTrainTrackPacket */ PT3_OnboardTelephoneNumbers_T_P *outRadioTrainTrackPacket)
{
  kcg_copy_PT3_OnboardTelephoneNu(
    outRadioTrainTrackPacket,
    &(*inRadioTrainTrackPackets).p3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _152_RadioTrainTrackPackets__Ge.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


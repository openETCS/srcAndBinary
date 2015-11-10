/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutput_CheckEuroradioMessa.h"

/* CheckEuroradioMessage::BuildOutput */
void BuildOutput_CheckEuroradioMessa(
  /* CheckEuroradioMessage::BuildOutput::message */ ReceivedMessage_T_Common_Types_ *message,
  /* CheckEuroradioMessage::BuildOutput::valid */ kcg_bool valid,
  /* CheckEuroradioMessage::BuildOutput::ReceivedMessage */ ReceivedMessage_T_Common_Types_ *ReceivedMessage)
{
  (*ReceivedMessage).valid = (*message).valid & valid;
  (*ReceivedMessage).source = (*message).source;
  kcg_copy_RadioMetadata_T_Common(
    &(*ReceivedMessage).radioMetadata,
    &(*message).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_P(
    &(*ReceivedMessage).BG_Common_Header,
    &(*message).BG_Common_Header);
  kcg_copy__11_Radio_TrackTrain_H(
    &(*ReceivedMessage).Radio_Common_Header,
    &(*message).Radio_Common_Header);
  kcg_copy_CompressedPackets_T_Co(
    &(*ReceivedMessage).packets,
    &(*message).packets);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*ReceivedMessage).sendingRBC,
    &(*message).sendingRBC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildOutput_CheckEuroradioMessa.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */


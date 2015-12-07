/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineBufferMessage_Informat.h"

/* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage */
void DetermineBufferMessage_Informat(
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::messageForFilter2 */ ReceivedMessage_T_Common_Types_ *messageForFilter2,
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::inMessageForBuffer */ ReceivedMessage_T_Common_Types_ *inMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::outMessageForBuffer */ ReceivedMessage_T_Common_Types_ *outMessageForBuffer)
{
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage */
  static Metadata_T_Common_Types_Pkg tmp;
  static kcg_int i;
  
  (*outMessageForBuffer).valid = (*messageForFilter2).valid;
  (*outMessageForBuffer).source = (*messageForFilter2).source;
  kcg_copy_RadioMetadata_T_Common(
    &(*outMessageForBuffer).radioMetadata,
    &(*messageForFilter2).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_P(
    &(*outMessageForBuffer).BG_Common_Header,
    &(*messageForFilter2).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Heade(
    &(*outMessageForBuffer).Radio_Common_Header,
    &(*messageForFilter2).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*outMessageForBuffer).sendingRBC,
    &(*messageForFilter2).sendingRBC);
  kcg_copy_CompressedPackets_T_Co(
    &(*outMessageForBuffer).packets,
    &(*messageForFilter2).packets);
  /* 4 */ for (i = 0; i < 30; i++) {
    /* DetermineValidFlags */
    DetermineValidFlags_Information(
      &(*messageForFilter2).packets.PacketHeaders[i],
      &(*inMessageForBuffer).packets.PacketHeaders[i],
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Type(
    &(*outMessageForBuffer).packets.PacketHeaders,
    &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DetermineBufferMessage_Informat.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */


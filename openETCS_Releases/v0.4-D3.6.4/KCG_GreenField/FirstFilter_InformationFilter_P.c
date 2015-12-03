/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FirstFilter_InformationFilter_P.h"

/* InformationFilter_Pkg::FirstFilter::FirstFilter */
void FirstFilter_InformationFilter_P(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForFilter2 */ ReceivedMessage_T_Common_Types_ *messageForFilter2,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForBuffer */ ReceivedMessage_T_Common_Types_ *messageForBuffer,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::storeInBuffer1 */ kcg_bool *storeInBuffer1)
{
  static kcg_int tmp_1;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter */
  static Metadata_T_Common_Types_Pkg tmp1;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter */
  static Metadata_T_Common_Types_Pkg tmp;
  static kcg_int i;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L1 */
  static array_bool_30 _L1;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L114 */
  static array_bool_30 _L114;
  
  *storeInBuffer1 = kcg_false;
  (*messageForBuffer).valid = (*inMessage).valid;
  (*messageForBuffer).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common(
    &(*messageForBuffer).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_P(
    &(*messageForBuffer).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Heade(
    &(*messageForBuffer).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*messageForBuffer).sendingRBC,
    &(*inMessage).sendingRBC);
  (*messageForFilter2).valid = (*inMessage).valid;
  (*messageForFilter2).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common(
    &(*messageForFilter2).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_P(
    &(*messageForFilter2).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Heade(
    &(*messageForFilter2).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*messageForFilter2).sendingRBC,
    &(*inMessage).sendingRBC);
  for (i = 0; i < 30; i++) {
    tmp_1 = /* 1 */
      GetPacketId_InformationFilter_P(&(*inMessage).packets.PacketHeaders[i]);
    /* 1 */
    LevelFilter_InformationFilter_P(
      (*inFilterEvents).pendingL1Transition,
      (*inFilterEvents).pendingL12L3Transition,
      (*inFilterEvents).pendingAckOfTrainDataFromRBC,
      (*inFilterEvents).emergencyStopAccepted,
      (*inFilterEvents).lastAckTextMessageId,
      (*inFilterEvents).pendingNTCTransition,
      (*inFilterEvents).SPPAndGradientOnBoard,
      (*inFilterEvents).MACoverNotFullLength,
      inLevel,
      (*inMessage).source,
      tmp_1,
      &_L114[i],
      &_L1[i]);
  }
  kcg_copy_CompressedPackets_T_Co(
    &(*messageForFilter2).packets,
    &(*inMessage).packets);
  /* 2 */ for (i = 0; i < 30; i++) {
    *storeInBuffer1 = *storeInBuffer1 | _L114[i];
    /* 2 */
    SetValidFlag_InformationFilter_(
      _L1[i],
      &(*inMessage).packets.PacketHeaders[i],
      &tmp1[i]);
    /* 1 */
    SetValidFlag_InformationFilter_(
      _L114[i],
      &(*inMessage).packets.PacketHeaders[i],
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Type(
    &(*messageForFilter2).packets.PacketHeaders,
    &tmp1);
  kcg_copy_CompressedPackets_T_Co(
    &(*messageForBuffer).packets,
    &(*inMessage).packets);
  kcg_copy_Metadata_T_Common_Type(
    &(*messageForBuffer).packets.PacketHeaders,
    &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FirstFilter_InformationFilter_P.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


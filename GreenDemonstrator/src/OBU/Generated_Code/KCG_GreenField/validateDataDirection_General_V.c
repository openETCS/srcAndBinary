/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_General_V.h"

/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General */
void validateDataDirection_General_V(
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionFromBG */ Q_DIRTRAIN trainRunningDirectionFromBG,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::LRBGKnown */ kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::coordinateSystemAssigned */ kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::outMessage */ ReceivedMessage_T_Common_Types_ *outMessage)
{
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General */
  static Metadata_T_Common_Types_Pkg tmp;
  static kcg_int i;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPositionKnown */
  static kcg_bool trainPositionKnown;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L55 */
  static kcg_bool _L55;
  
  (*outMessage).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common(
    &(*outMessage).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_P(
    &(*outMessage).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy__11_Radio_TrackTrain_H(
    &(*outMessage).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*outMessage).sendingRBC,
    &(*inMessage).sendingRBC);
  trainPositionKnown = (*trainPosition).valid &
    !(*trainPosition).trainPositionIsUnknown;
  _L55 = (*inMessage).source == msrc_Euroradio_Common_Types_Pkg;
  (*outMessage).valid = ((((*inMessage).Radio_Common_Header.nid_message == 15) &
        ((((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Nominal) &
            (Q_DIRTRAIN_Nominal == trainRunningDirectionFromBG) &
            trainPositionKnown & coordinateSystemAssigned & LRBGKnown) |
          (((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Reverse) &
            (Q_DIRTRAIN_Reverse == trainRunningDirectionFromBG) &
            trainPositionKnown & coordinateSystemAssigned & LRBGKnown) |
          ((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Both_directions)) &
        _L55) | ((*inMessage).source == msrc_Eurobalise_Common_Types_Pk) |
      (_L55 & ((*inMessage).Radio_Common_Header.nid_message != 15))) &
    (*inMessage).valid;
  kcg_copy_CompressedPackets_T_Co(
    &(*outMessage).packets,
    &(*inMessage).packets);
  for (i = 0; i < 30; i++) {
    /* 1 */
    validateDataDirectionForSingleP(
      &(*inMessage).packets.PacketHeaders[i],
      trainRunningDirectionFromBG,
      LRBGKnown,
      trainPosition,
      coordinateSystemAssigned,
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Type(&(*outMessage).packets.PacketHeaders, &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirection_General_V.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


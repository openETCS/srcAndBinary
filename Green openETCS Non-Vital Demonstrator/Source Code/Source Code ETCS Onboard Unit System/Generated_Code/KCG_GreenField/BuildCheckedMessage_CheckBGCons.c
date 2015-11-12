/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildCheckedMessage_CheckBGCons.h"

/* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage */
void BuildCheckedMessage_CheckBGCons(
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::trackSideForCheck */ TrackSide_ForCheck_T_Common_Typ *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::checkedMessage */ ReceivedMessage_T_Common_Types_ *checkedMessage)
{
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage */
  static Telegram_T_BG_Types_Pkg tmp;
  
  (*checkedMessage).valid = (*trackSideForCheck).telegramHeaders.present;
  (*checkedMessage).source = cEurobalise_CheckBGConsistency_;
  kcg_copy_RadioMetadata_T_Common(
    &(*checkedMessage).radioMetadata,
    (RadioMetadata_T_Common_Types_Pk *) &cRadioMetadata_CheckBGConsisten);
  kcg_copy__11_Radio_TrackTrain_H(
    &(*checkedMessage).Radio_Common_Header,
    (_11_Radio_TrackTrain_Header_T_R *) &cNoRadioHeader_CheckBGConsisten);
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*checkedMessage).sendingRBC,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_CheckBGConsistency_);
  /* 1 */
  bildBGHeader_CheckBGConsistency(
    trackSideForCheck,
    q_nvlocacc,
    &(*checkedMessage).BG_Common_Header);
  /* 1 */
  MergAllPackets_Iter_CheckBGCons(
    &(*trackSideForCheck).telegramHeaders.Telegrams,
    &tmp);
  kcg_copy_CompressedPackets_T_Co(&(*checkedMessage).packets, &tmp.packets);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildCheckedMessage_CheckBGCons.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */


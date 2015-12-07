/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage */
void BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::checkedMessage */ ReceivedMessage_T_Common_Types_Pkg *checkedMessage)
{
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage */
  static Telegram_T_BG_Types_Pkg tmp;
  
  (*checkedMessage).valid = (*trackSideForCheck).telegramHeaders.present;
  (*checkedMessage).source = cEurobalise_CheckBGConsistency_Pkg;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*checkedMessage).radioMetadata,
    (RadioMetadata_T_Common_Types_Pkg *)
      &cRadioMetadata_CheckBGConsistency_Pkg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*checkedMessage).Radio_Common_Header,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNoRadioHeader_CheckBGConsistency_Pkg);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*checkedMessage).sendingRBC,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_CheckBGConsistency_Pkg);
  /* 1 */
  bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
    trackSideForCheck,
    q_nvlocacc,
    &(*checkedMessage).BG_Common_Header);
  /* 1 */
  MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &(*trackSideForCheck).telegramHeaders.Telegrams,
    &tmp);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*checkedMessage).packets,
    &tmp.packets);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */


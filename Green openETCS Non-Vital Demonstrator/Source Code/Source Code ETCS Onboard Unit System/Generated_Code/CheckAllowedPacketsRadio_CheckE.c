/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio_CheckE.h"

/* CheckEuroradioMessage::CheckAllowedPacketsRadio */
kcg_bool CheckAllowedPacketsRadio_CheckE(
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::rtmMessage */ ReceivedMessage_T_Common_Types_ *rtmMessage)
{
  static kcg_int i;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::valid */
  static kcg_bool valid;
  
  valid = kcg_true;
  /* 1 */ for (i = 0; i < 30; i++) {
    valid = /* 1 */
      CheckIfSinglePacketIsAllowedFor(
        valid,
        &(*rtmMessage).packets.PacketHeaders[i],
        (*rtmMessage).Radio_Common_Header.nid_message,
        (MetadataTruthtable_T1_CheckEuro *) &cPermittedRadioPackets1_CheckEu);
  }
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckAllowedPacketsRadio_CheckE.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::CheckAllowedPacketsRadio */
kcg_bool CheckAllowedPacketsRadio_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  kcg_int i;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::valid */ kcg_bool valid;
  
  valid = kcg_true;
  /* 1 */ for (i = 0; i < 30; i++) {
    valid = /* 1 */
      CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
        valid,
        &(*rtmMessage).packets.PacketHeaders[i],
        (*rtmMessage).Radio_Common_Header.nid_message,
        (MetadataTruthtable_T1_CheckEuroradioMessage *)
          &cPermittedRadioPackets1_CheckEuroradioMessage);
  }
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckAllowedPacketsRadio_CheckEuroradioMessage.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */


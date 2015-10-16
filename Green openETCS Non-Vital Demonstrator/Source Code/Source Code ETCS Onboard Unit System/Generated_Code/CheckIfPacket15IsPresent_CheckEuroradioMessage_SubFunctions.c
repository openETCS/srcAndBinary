/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent */
kcg_bool CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  static kcg_int i;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::result */
  static kcg_bool result;
  
  result = kcg_false;
  for (i = 0; i < 30; i++) {
    result = /* 1 */
      CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions(
        result,
        &(*rtmMessage).packets.PacketHeaders[i]);
  }
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */


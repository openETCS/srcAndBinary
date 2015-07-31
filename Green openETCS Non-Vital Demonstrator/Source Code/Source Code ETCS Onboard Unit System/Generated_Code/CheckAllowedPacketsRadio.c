/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio.h"

/* CheckAllowedPacketsRadio */
kcg_bool CheckAllowedPacketsRadio(
  /* CheckAllowedPacketsRadio::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  static kcg_int i;
  /* CheckAllowedPacketsRadio::valid */
  static kcg_bool valid;
  
  valid = kcg_true;
  for (i = 0; i < 30; i++) {
    valid = /* 3 */
      CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions(
        valid,
        &(*rtmMessage).packets.PacketHeaders[i],
        (*rtmMessage).Radio_Common_Header.nid_message,
        (MetadataTruthtable_T *) &cPermittedRadioPackets);
  }
  return valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckAllowedPacketsRadio.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


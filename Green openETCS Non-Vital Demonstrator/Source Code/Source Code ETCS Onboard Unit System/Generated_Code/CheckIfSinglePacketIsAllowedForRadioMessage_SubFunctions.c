/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions.h"

/* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
kcg_bool CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions(
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */kcg_bool accumulator,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */NID_MESSAGE nid_message,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */MetadataTruthtable_T *permittedPackets)
{
  static kcg_bool tmp;
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_packet */
  static kcg_int nid_packet;
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::valid */
  static kcg_bool valid;
  
  nid_packet = /* 1 */
    T_extract_nid_packet_from_metadata_selector_TM((*currentPacket).nid_packet);
  IfBlock2_clock = nid_packet != 0;
  if (IfBlock2_clock) {
    if ((*currentPacket).valid) {
      if ((0 <= nid_message) & (nid_message < 46) & ((0 <= nid_packet) &
          (nid_packet < 256))) {
        tmp = (*permittedPackets)[nid_message][nid_packet];
      }
      else {
        tmp = kcg_false;
      }
    }
    else {
      tmp = kcg_true;
    }
  }
  else {
    tmp = kcg_true;
  }
  valid = accumulator & tmp;
  return valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


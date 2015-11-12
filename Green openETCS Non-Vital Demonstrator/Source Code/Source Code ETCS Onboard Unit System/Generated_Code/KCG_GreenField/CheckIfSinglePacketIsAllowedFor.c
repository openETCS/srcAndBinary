/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfSinglePacketIsAllowedFor.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
kcg_bool CheckIfSinglePacketIsAllowedFor(
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */ kcg_bool accumulator,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */ MetadataElement_T_Common_Types_ *currentPacket,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */ NID_MESSAGE nid_message,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */ MetadataTruthtable_T1_CheckEuro *permittedPackets)
{
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
  static kcg_bool tmp;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_packet */
  static kcg_int nid_packet;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::valid */
  static kcg_bool valid;
  
  nid_packet = /* 1 */
    T_extract_nid_packet_from_metad((*currentPacket).nid_packet);
  IfBlock2_clock = nid_packet != 0;
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    /* ck_IfBlock1 */ if ((*currentPacket).valid) {
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

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckIfSinglePacketIsAllowedFor.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */


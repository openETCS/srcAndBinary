/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
kcg_bool CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */ kcg_bool accumulator,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */ MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */ NID_MESSAGE nid_message,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */ MetadataTruthtable_T1_CheckEuroradioMessage *permittedPackets)
{
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */ kcg_bool tmp;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2 */ kcg_bool IfBlock2_clock;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_packet */ kcg_int nid_packet;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::valid */ kcg_bool valid;
  
  nid_packet = /* 1 */
    T_extract_nid_packet_from_metadata_selector_TM((*currentPacket).nid_packet);
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
** CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */


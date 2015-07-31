/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions_H_
#define _CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions_H_

#include "kcg_types.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* =====================  no input structure  ====================== */


/* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
extern kcg_bool CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions(
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */kcg_bool accumulator,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */NID_MESSAGE nid_message,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */MetadataTruthtable_T *permittedPackets);

#endif /* _CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */


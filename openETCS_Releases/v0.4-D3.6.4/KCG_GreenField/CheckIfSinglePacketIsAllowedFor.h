/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _CheckIfSinglePacketIsAllowedFo
#define _CheckIfSinglePacketIsAllowedFo

#include "kcg_types.h"
#include "T_extract_nid_packet_from_metad.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
extern kcg_bool CheckIfSinglePacketIsAllowedFor(
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */ kcg_bool accumulator,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */ MetadataElement_T_Common_Types_ *currentPacket,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */ NID_MESSAGE nid_message,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */ MetadataTruthtable_T1_CheckEuro *permittedPackets);

#endif /* _CheckIfSinglePacketIsAllowedFo */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckIfSinglePacketIsAllowedFor.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */


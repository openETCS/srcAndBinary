/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacketRadioMetadataElementIsPacket15_SubFunctions.h"

/* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15 */
kcg_bool CheckIfPacketRadioMetadataElementIsPacket15_SubFunctions(
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::accumulatorInput */kcg_bool accumulatorInput,
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::metadataElement */MetadataElement_T_Common_Types_Pkg *metadataElement)
{
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::result */
  static kcg_bool result;
  
  result = accumulatorInput | (/* 1 */
      T_extract_nid_packet_from_metadata_selector_TM(
        (*metadataElement).nid_packet) == 15);
  return result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfPacketRadioMetadataElementIsPacket15_SubFunctions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirectionForSingleP.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket */
void validateDataDirectionForSingleP(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inMetadataElement */ MetadataElement_T_Common_Types_ *inMetadataElement,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inTrainRunningDirection */ Q_DIRTRAIN inTrainRunningDirection,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::LRBGKnown */ kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::coordinateSystemAssigned */ kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::outMetadataElement */ MetadataElement_T_Common_Types_ *outMetadataElement)
{
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::trainPositionKnown */
  static kcg_bool trainPositionKnown;
  
  IfBlock1_clock = (*inMetadataElement).nid_packet != 44;
  trainPositionKnown = !(*trainPosition).trainPositionIsUnknown;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    (*outMetadataElement).nid_packet = (*inMetadataElement).nid_packet;
    (*outMetadataElement).q_dir = (*inMetadataElement).q_dir;
    (*outMetadataElement).valid = (*inMetadataElement).valid &
      ((((*inMetadataElement).q_dir == Q_DIR_Nominal) & (Q_DIRTRAIN_Nominal ==
            inTrainRunningDirection) & trainPositionKnown &
          coordinateSystemAssigned & LRBGKnown) |
        (((*inMetadataElement).q_dir == Q_DIR_Reverse) & (Q_DIRTRAIN_Reverse ==
            inTrainRunningDirection) & trainPositionKnown &
          coordinateSystemAssigned & LRBGKnown) | ((*inMetadataElement).q_dir ==
          Q_DIR_Both_directions));
    (*outMetadataElement).startAddress = (*inMetadataElement).startAddress;
    (*outMetadataElement).endAddress = (*inMetadataElement).endAddress;
  }
  else {
    kcg_copy_MetadataElement_T_Comm(outMetadataElement, inMetadataElement);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirectionForSingleP.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


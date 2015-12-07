/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _validateDataDirectionForSingle
#define _validateDataDirectionForSingle

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket */
extern void validateDataDirectionForSingleP(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inMetadataElement */ MetadataElement_T_Common_Types_ *inMetadataElement,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inTrainRunningDirection */ Q_DIRTRAIN inTrainRunningDirection,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::LRBGKnown */ kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::coordinateSystemAssigned */ kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::outMetadataElement */ MetadataElement_T_Common_Types_ *outMetadataElement);

#endif /* _validateDataDirectionForSingle */
/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirectionForSingleP.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */


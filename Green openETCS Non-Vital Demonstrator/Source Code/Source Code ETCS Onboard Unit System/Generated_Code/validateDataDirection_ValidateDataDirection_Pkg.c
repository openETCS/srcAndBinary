/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"

/* ValidateDataDirection_Pkg::validateDataDirection */
void validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ReceivedMessage_T_Common_Types_Pkg *outMessage)
{
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L13 */
  static positionedBG_T_TrainPosition_Types_Pck _L13_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*inMessage).source == msrc_Eurobalise_Common_Types_Pkg;
  if (IfBlock1_clock) {
    /* 2 */
    validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
      inMessage,
      (*inMessage).BG_Common_Header.trainRunningDirectionToBG,
      kcg_true,
      trainPosition,
      (kcg_bool)
        !(*inMessage).BG_Common_Header.noCoordinateSystemHasBeenAssigned,
      outMessage);
  }
  else {
    else_clock_IfBlock1 = (*inMessage).source ==
      msrc_Euroradio_Common_Types_Pkg;
    if (else_clock_IfBlock1) {
      /* 2 */
      getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
        inMessage,
        inPositionedBGs,
        &_L13_IfBlock1);
      /* 1 */
      validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
        inMessage,
        _L13_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG,
        (*inLRBG).valid,
        trainPosition,
        (kcg_bool)
          !_L13_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned,
        outMessage);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessage, inMessage);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirection_ValidateDataDirection_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


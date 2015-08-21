/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
void getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inPositionedBGs */positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::outLRBG */positionedBG_T_TrainPosition_Types_Pck *outLRBG)
{
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  static kcg_int i;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L10 */
  static NID_BG _L10;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L9 */
  static NID_C _L9;
  
  /* 1 */
  DECODE_NID_LRBG_TM_conversions(
    (*inMessage).Radio_Common_Header.nid_lrbg,
    &_L9,
    &_L10);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    outLRBG,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cEmptyLRBG_ValidateDataDirection_Pkg);
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, outLRBG);
    /* 1 */
    getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &tmp,
      _L9,
      _L10,
      &(*inPositionedBGs)[i],
      outLRBG);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


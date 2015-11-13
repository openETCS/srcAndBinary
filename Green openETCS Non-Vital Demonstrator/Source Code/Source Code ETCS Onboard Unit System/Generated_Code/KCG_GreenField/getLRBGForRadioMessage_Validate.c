/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessage_Validate.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
void getLRBGForRadioMessage_Validate(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inPositionedBGs */ positionedBGs_T_TrainPosition_T *inPositionedBGs,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::outLRBG */ positionedBG_T_TrainPosition_Ty *outLRBG)
{
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
  static positionedBG_T_TrainPosition_Ty acc;
  static kcg_int i;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L10 */
  static NID_BG _L10;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L9 */
  static NID_C _L9;
  
  /* 1 */
  Decode_NID_LRBG_TM((*inMessage).Radio_Common_Header.nid_lrbg, &_L9, &_L10);
  kcg_copy_positionedBG_T_TrainPo(
    outLRBG,
    (positionedBG_T_TrainPosition_Ty *) &cEmptyLRBG_ValidateDataDirectio);
  for (i = 0; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPo(&acc, outLRBG);
    /* 1 */
    getLRBGForRadioMessageIterator_(
      &acc,
      _L9,
      _L10,
      &(*inPositionedBGs)[i],
      outLRBG);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGForRadioMessage_Validate.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


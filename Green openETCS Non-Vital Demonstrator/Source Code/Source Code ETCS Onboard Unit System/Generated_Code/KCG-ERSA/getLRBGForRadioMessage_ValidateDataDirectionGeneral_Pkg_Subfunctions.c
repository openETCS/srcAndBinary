/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
void getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inPositionedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::outLRBG */ positionedBG_T_TrainPosition_Types_Pck *outLRBG)
{
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
  static positionedBG_T_TrainPosition_Types_Pck acc;
  static kcg_int i;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L10 */
  static NID_BG _L10;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L9 */
  static NID_C _L9;
  
  /* 1 */
  Decode_NID_LRBG_TM((*inMessage).Radio_Common_Header.nid_lrbg, &_L9, &_L10);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    outLRBG,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cEmptyLRBG_ValidateDataDirection_Pkg);
  for (i = 0; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&acc, outLRBG);
    /* 1 */
    getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &acc,
      _L9,
      _L10,
      &(*inPositionedBGs)[i],
      outLRBG);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */


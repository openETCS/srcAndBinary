/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_ValidateD.h"

/* ValidateDataDirection_Pkg::validateDataDirection */
void validateDataDirection_ValidateD(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */ positionedBG_T_TrainPosition_Ty *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */ positionedBGs_T_TrainPosition_T *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_ *outMessage)
{
  /* ValidateDataDirection_Pkg::validateDataDirection */
  static Q_DIRTRAIN tmp1;
  /* ValidateDataDirection_Pkg::validateDataDirection */
  static kcg_bool tmp;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L48 */
  static positionedBG_T_TrainPosition_Ty _L48_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::trainRunningDirection */
  static Q_DIRTRAIN trainRunningDirection_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::coordinateSystemAssigned */
  static kcg_bool coordinateSystemAssigned_IfBloc;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L22 */
  static positionedBG_T_TrainPosition_Ty _L22_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L107 */
  static kcg_bool _L107_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*inMessage).source == msrc_Eurobalise_Common_Types_Pk;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 2 */
    validateDataDirection_General_V(
      inMessage,
      (*inMessage).BG_Common_Header.trainRunningDirectionToBG,
      kcg_true,
      trainPosition,
      (kcg_bool) !(*inMessage).BG_Common_Header.noCoordinateSystemHasBeenAssign,
      outMessage);
  }
  else {
    else_clock_IfBlock1 = (*inMessage).source ==
      msrc_Euroradio_Common_Types_Pkg;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* 10 */
      getLRBGForRadioMessage_Validate(
        inMessage,
        inPositionedBGs,
        &_L22_IfBlock1);
      _L107_IfBlock1 = (*trainPosition).valid &
        !(*trainPosition).trainPositionIsUnknown;
      /* 12 */ if (_L22_IfBlock1.valid) {
        trainRunningDirection_IfBlock1 =
          _L22_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG;
        coordinateSystemAssigned_IfBloc =
          !_L22_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign;
      }
      else {
        trainRunningDirection_IfBlock1 = Q_DIRTRAIN_Unknown;
        coordinateSystemAssigned_IfBloc = kcg_false;
      }
      IfBlock2_clock_IfBlock1 = (*inMessage).radioMetadata.q_dir &
        !((((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Nominal) &
            (Q_DIRTRAIN_Nominal == trainRunningDirection_IfBlock1) &
            _L107_IfBlock1 & coordinateSystemAssigned_IfBloc &
            (*inLRBG).valid) | (((*inMessage).Radio_Common_Header.q_dir ==
              Q_DIR_Reverse) & (Q_DIRTRAIN_Reverse ==
              trainRunningDirection_IfBlock1) & _L107_IfBlock1 &
            coordinateSystemAssigned_IfBloc & (*inLRBG).valid) |
          ((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Both_directions));
      /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
        kcg_copy_ReceivedMessage_T_Comm(outMessage, inMessage);
        (*outMessage).valid = kcg_false;
      }
      else {
        /* 6 */
        getLRBGForRadioMessage_Validate(
          inMessage,
          inPositionedBGs,
          &_L48_IfBlock1_IfBlock2);
        /* 9 */ if (_L48_IfBlock1_IfBlock2.valid) {
          tmp1 =
            _L48_IfBlock1_IfBlock2.infoFromPassing.BG_Header.trainRunningDirectionToBG;
          tmp =
            !_L48_IfBlock1_IfBlock2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign;
        }
        else {
          tmp = kcg_false;
          tmp1 = Q_DIRTRAIN_Unknown;
        }
        /* 6 */
        validateDataDirection_General_V(
          inMessage,
          tmp1,
          (*inLRBG).valid,
          trainPosition,
          tmp,
          outMessage);
      }
    }
    else {
      kcg_copy_ReceivedMessage_T_Comm(outMessage, inMessage);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirection_ValidateD.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


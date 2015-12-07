/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passing_a_BG_CalculateTrainPosi.h"

/* CalculateTrainPosition_Pkg::passing_a_BG */
void passing_a_BG_CalculateTrainPosi(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Ty *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBGSeqNo */ kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passing_a_BG::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedPositionedBG */ positionedBG_T_TrainPosition_Ty *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out,
  /* CalculateTrainPosition_Pkg::passing_a_BG::overrun */ kcg_bool *overrun,
  /* CalculateTrainPosition_Pkg::passing_a_BG::foundNotWhereAnnounced */ kcg_bool *foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGpassedInUnexpectedDirection */ kcg_bool *BGpassedInUnexpectedDirection)
{
  /* CalculateTrainPosition_Pkg::passing_a_BG */
  static positionedBG_T_TrainPosition_Ty tmp1;
  /* CalculateTrainPosition_Pkg::passing_a_BG */
  static positionedBGs_T_TrainPosition_T tmp;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L16 */
  static positionedBGs_T_TrainPosition_T _L16;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L17 */
  static kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L21 */
  static positionedBGs_T_TrainPosition_T _L21;
  /* CalculateTrainPosition_Pkg::passing_a_BG::_L22 */
  static kcg_bool _L22;
  static kcg_int i;
  
  /* 1 */
  indexOfPassedBG_by_id_Calculate(
    passedBG,
    BGs_in,
    (*passedBG).valid,
    &i,
    &_L22,
    &_L17);
  /* 1 */ if (_L22) {
    if ((0 <= i) & (i < 41)) {
      kcg_copy_positionedBG_T_TrainPo(&tmp1, &(*BGs_in)[i]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPo(
        &tmp1,
        (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
    }
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp1,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  /* 1 */
  passedBG_2_positionedBG_Calcula(
    passedBG,
    &tmp1,
    previouslyPassedLinkedBG,
    passedBGSeqNo,
    trainProperties,
    passedPositionedBG,
    foundNotWhereAnnounced,
    BGpassedInUnexpectedDirection,
    (linkedBGs_asPositionedBGs_T_Tra *) &tmp[0]);
  /* 2 */
  mergeBG_onTrack_CalculateTrainP(passedPositionedBG, BGs_in, &_L16, &_L17);
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPo(
      &(&tmp[33])[i],
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  /* 1 */ mergeBGs_onTrack_CalculateTrain(&_L16, &tmp, &_L21, &_L22);
  *overrun = _L22 | _L17;
  /* 1 */ trimSeqNoOnTrack_CalculateTrain(&_L21, BGs_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** passing_a_BG_CalculateTrainPosi.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */


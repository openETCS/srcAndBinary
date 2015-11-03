/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "prevPassedLinkedBG_CalculateTra.h"

/* CalculateTrainPosition_Pkg::prevPassedLinkedBG */
void prevPassedLinkedBG_CalculateTra(
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::last_BGs */ positionedBGs_T_TrainPosition_T *last_BGs,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::previouslyPassedBG */ positionedBG_T_TrainPosition_Ty *previouslyPassedBG)
{
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG */
  static kcg_bool tmp;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L61 */
  static kcg_bool _L61;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L60 */
  static kcg_int _L60;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L64 */
  static positionedBG_T_TrainPosition_Ty _L64;
  
  /* 1 */
  indexOfLastPassedBG_CalculateTr(
    kcg_true,
    last_BGs,
    (*passedBG).valid,
    &_L60,
    &_L61,
    &tmp);
  if ((0 <= _L60) & (_L60 < 41)) {
    kcg_copy_positionedBG_T_TrainPo(&_L64, &(*last_BGs)[_L60]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &_L64,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  tmp = /* 1 */
    nidBG_nidc_equal_CalculateTrain(
      _L64.nid_c,
      _L64.nid_bg,
      (*passedBG).BG_Header.nid_c,
      (*passedBG).BG_Header.nid_bg);
  /* 1 */ if (_L61 & !tmp) {
    kcg_copy_positionedBG_T_TrainPo(previouslyPassedBG, &_L64);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      previouslyPassedBG,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** prevPassedLinkedBG_CalculateTra.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */


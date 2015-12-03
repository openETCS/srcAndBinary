/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genPassedBG_SeqNo_CalculateTrai.h"

#ifndef KCG_USER_DEFINED_INIT
void genPassedBG_SeqNo_init_Calculat(outC_genPassedBG_SeqNo_Calculat *outC)
{
  outC->seqNo = 0;
  /* 1 */ countUp_init_CalculateTrainPosi(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void genPassedBG_SeqNo_reset_Calcula(outC_genPassedBG_SeqNo_Calculat *outC)
{
  /* 1 */ countUp_reset_CalculateTrainPos(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
void genPassedBG_SeqNo_CalculateTrai(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */ kcg_bool reset,
  outC_genPassedBG_SeqNo_Calculat *outC)
{
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::keepPassedBGSeqNo */
  static kcg_bool keepPassedBGSeqNo;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L4 */
  static kcg_int _L4;
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::_L8 */
  static positionedBG_T_TrainPosition_Ty _L8;
  
  /* 1 */
  indexOfPassedBG_by_id_Calculate(
    passedBG,
    BGs,
    (*passedBG).valid,
    &_L4,
    &_L5,
    &keepPassedBGSeqNo);
  if ((0 <= _L4) & (_L4 < 41)) {
    kcg_copy_positionedBG_T_TrainPo(&_L8, &(*BGs)[_L4]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &_L8,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  keepPassedBGSeqNo = _L8.valid & _L8.infoFromPassing.valid & _L5;
  /* 1 */
  countUp_CalculateTrainPosition_(
    (kcg_bool) (!keepPassedBGSeqNo & (*passedBG).valid),
    reset,
    &outC->Context_1);
  /* 1 */ if (keepPassedBGSeqNo) {
    outC->seqNo = _L8.seqNoOnTrack;
  }
  else {
    outC->seqNo = outC->Context_1.counter;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** genPassedBG_SeqNo_CalculateTrai.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


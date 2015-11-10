/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addAnnouncedBGs_CalculateTrainP.h"

/* CalculateTrainPosition_Pkg::addAnnouncedBGs */
void addAnnouncedBGs_CalculateTrainP(
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::overrun */ kcg_bool *overrun)
{
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs */
  static positionedBGs_T_TrainPosition_T tmp1;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs */
  static positionedBG_T_TrainPosition_Ty tmp;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L10 */
  static NID_BG _L10;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L9 */
  static NID_C _L9;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L14 */
  static kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::_L33 */
  static positionedBGs_T_TrainPosition_T _L33;
  static kcg_int i;
  
  _L11 = (*passedBG).valid & (*passedBG).linkedBGs[0].valid;
  /* 1 */
  NIDLRBG_2_nidC_nidBG_CalculateT(
    _L11,
    (*passedBG).linkedBGs[0].nid_LRBG,
    &_L9,
    &_L10);
  kcg_copy_positionedBG_T_TrainPo(
    &tmp,
    (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  tmp.valid = _L11;
  tmp.nid_c = _L9;
  tmp.nid_bg = _L10;
  /* 1 */ indexOfBG_by_id_CalculateTrainP(&tmp, BGs_in, _L11, &i, &_L13, &_L14);
  if ((0 <= i) & (i < 41)) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &(*BGs_in)[i]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  /* 1 */
  positionLinkedBGs_CalculateTrai(
    &tmp,
    &(*passedBG).linkedBGs,
    trainProperties,
    (linkedBGs_asPositionedBGs_T_Tra *) &tmp1[0]);
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPo(
      &(&tmp1[33])[i],
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  /* 1 */ mergeBGs_onTrack_CalculateTrain(BGs_in, &tmp1, &_L33, overrun);
  /* 1 */ trimSeqNoOnTrack_CalculateTrain(&_L33, BGs_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addAnnouncedBGs_CalculateTrainP.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */


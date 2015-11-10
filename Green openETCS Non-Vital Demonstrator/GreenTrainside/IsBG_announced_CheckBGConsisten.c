/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsBG_announced_CheckBGConsisten.h"

/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
void IsBG_announced_CheckBGConsisten(
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::recivedBG_header */ BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::storedBGs */ positionedBGs_T_TrainPosition_T *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */ kcg_bool *isAnnounced,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */ Q_LINKORIENTATION *q_linkorintation)
{
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
  static positionedBG_T_TrainPosition_Ty tmp;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L2 */
  static positionedBG_T_TrainPosition_Ty _L2_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isStored */
  static kcg_bool isStored;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::indexLocal */
  static kcg_int indexLocal;
  
  /* 1 */
  isStored_iter_CheckBGConsistenc(
    storedBGs,
    recivedBG_header,
    &indexLocal,
    &isStored);
  /* ck_isStored */ if (isStored) {
    if ((0 <= indexLocal) & (indexLocal < 41)) {
      kcg_copy_positionedBG_T_TrainPo(&_L2_IfBlock1, &(*storedBGs)[indexLocal]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPo(
        &_L2_IfBlock1,
        (positionedBG_T_TrainPosition_Ty *) &cNoStoredBG_CheckBGConsistency_);
    }
    *isAnnounced = _L2_IfBlock1.infoFromLinking.valid;
    *q_linkorintation =
      _L2_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
  }
  else {
    *isAnnounced = kcg_false;
    if ((0 <= indexLocal) & (indexLocal < 41)) {
      kcg_copy_positionedBG_T_TrainPo(&tmp, &(*storedBGs)[indexLocal]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPo(
        &tmp,
        (positionedBG_T_TrainPosition_Ty *) &cNoStoredBG_CheckBGConsistency_);
    }
    *q_linkorintation = tmp.infoFromLinking.linkingInfo.q_linkorientation;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsBG_announced_CheckBGConsisten.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */


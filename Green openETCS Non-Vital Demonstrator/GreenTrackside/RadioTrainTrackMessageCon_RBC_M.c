/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageCon_RBC_M.h"

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackMessageCon_init_(outC_RadioTrainTrackMessageCon_ *outC)
{
  outC->outIsConsistent = kcg_true;
  outC->init = kcg_true;
  outC->lastReceivedRadioTrainTrackMess = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackMessageCon_reset(outC_RadioTrainTrackMessageCon_ *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg */
void RadioTrainTrackMessageCon_RBC_M(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageCon_ *outC)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::currentRecivedRadioTrainTrackMessageTimestamp */
  static T_TRAIN currentRecivedRadioTrainTrackMe;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::consistencyCheckConditionSatisfied */
  static kcg_bool consistencyCheckConditionSatisf;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L2 */
  static Radio_TrainTrack_Header_T_Radio _L2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::_L43 */
  static T_TRAIN _L43;
  
  /* 1 */ RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &_L2);
  currentRecivedRadioTrainTrackMe = /* 1 */
    RadioTrainTrackHeader__Get_T_TR(&_L2);
  /* last_init_ck_lastReceivedRadioTrainTrackMessageTimestamp */ if (outC->init) {
    outC->init = kcg_false;
    _L43 = - 1;
  }
  else {
    _L43 = outC->lastReceivedRadioTrainTrackMess;
  }
  consistencyCheckConditionSatisf = (currentRecivedRadioTrainTrackMe > _L43) &
    (currentRecivedRadioTrainTrackMe >= T_TRAIN_MIN) &
    (currentRecivedRadioTrainTrackMe <= T_TRAIN_MAX) & /* 1 */
    RadioTrainTrackMessage__IsPrese(inRadioTrainTrackMessage) & /* 1 */
    RadioTrainTrackHeader__IsPresen(&_L2);
  /* ck_consistencyCheckConditionSatisfied */ if (consistencyCheckConditionSatisf) {
    _L3_IfBlock1 = /* 1 */
      RadioTrainTrackMessageConsisten(inRadioTrainTrackMessage) & /* 1 */
      _87_RadioTrainTrackMessageConsi(inRadioTrainTrackMessage);
    outC->outIsConsistent = _L3_IfBlock1;
    /* 1 */ if (_L3_IfBlock1) {
      outC->lastReceivedRadioTrainTrackMess = currentRecivedRadioTrainTrackMe;
    }
    else {
      outC->lastReceivedRadioTrainTrackMess = _L43;
    }
  }
  else {
    outC->outIsConsistent = kcg_false;
    outC->lastReceivedRadioTrainTrackMess = _L43;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessageCon_RBC_M.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


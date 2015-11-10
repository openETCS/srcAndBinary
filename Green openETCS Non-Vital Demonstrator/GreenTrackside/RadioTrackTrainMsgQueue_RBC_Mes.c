/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMsgQueue_RBC_Mes.h"

/* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue */
void RadioTrackTrainMsgQueue_RBC_Mes(
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outDataBus */ RBC_Data_T_RBC_DataBus_Pkg *outDataBus,
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue */
  static _6_Radio_TrackTrain_Header_T_TM tmp2;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue */
  static _6_Radio_TrackTrain_Header_T_TM tmp1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue */
  static T_TRAIN tmp;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L35 */
  static RadioTrackTrainMessageQueueEntr _L35_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L34 */
  static _9_RadioTrackTrainMessageQueue_ _L34_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1::then::_L36 */
  static CompressedRadioMessage_TM _L36_IfBlock1;
  /* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = /* 2 */
    _76_RadioTrackTrainMessageQueue(&(*inDataBus).messageQueue) <
    _15_RADIO_TRACK_TRAIN_MESSAGE_Q;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 2 */
    _72_RadioTrackTrainMessageQueue(
      &(*inDataBus).messageQueue,
      &_L34_IfBlock1,
      &_L35_IfBlock1);
    /* 2 */ _70_RadioTrackTrainMessageQueue(&_L35_IfBlock1, &_L36_IfBlock1);
    /* 2 */ RadioTrackTrainMessage__GetHead(&_L36_IfBlock1, &tmp1);
    tmp = /* 2 */ Clock__GetSeconds_RBC_Time_Pkg(&(*inDataBus).clockk);
    /* 2 */ _103_RadioTrackTrainHeader__Set(&tmp1, tmp, &tmp2);
    /* 2 */
    RadioTrackTrainMessage__SetHead(
      &_L36_IfBlock1,
      &tmp2,
      outRadioTrackTrainMessage);
    kcg_copy_RBC_Data_T_RBC_DataBus(outDataBus, inDataBus);
    kcg_copy__9_RadioTrackTrainMess(
      &(*outDataBus).messageQueue,
      &_L34_IfBlock1);
    kcg_copy_CompressedRadioMessage(
      &(*outDataBus).lastSentTrackTrainMessage,
      outRadioTrackTrainMessage);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus(outDataBus, inDataBus);
    kcg_copy__9_RadioTrackTrainMess(
      &(*outDataBus).messageQueue,
      &(*inDataBus).messageQueue);
    /* 2 */ RadioTrackTrainFactory__CreateD(outRadioTrackTrainMessage);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMsgQueue_RBC_Mes.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


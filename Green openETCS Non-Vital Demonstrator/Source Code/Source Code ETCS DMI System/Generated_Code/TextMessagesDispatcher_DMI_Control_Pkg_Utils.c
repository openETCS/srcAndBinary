/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TextMessagesDispatcher_DMI_Control_Pkg_Utils.h"

void TextMessagesDispatcher_reset_DMI_Control_Pkg_Utils(
  outC_TextMessagesDispatcher_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  /* 3 */ MSGQueue_reset_DMI_Control_Pkg_Utils(&outC->Context_3);
  /* 2 */ MSGQueue_reset_DMI_Control_Pkg_Utils(&outC->Context_2);
  /* 1 */ MSGQueue_reset_DMI_Control_Pkg_Utils(&outC->Context_1);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->_1_Context_1);
}

/* DMI_Control_Pkg::Utils::TextMessagesDispatcher */
void TextMessagesDispatcher_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::dmi_txt_msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_txt_msg,
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::DeleteAckMsg */kcg_bool DeleteAckMsg,
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::SystemTime */kcg_int SystemTime,
  outC_TextMessagesDispatcher_DMI_Control_Pkg_Utils *outC)
{
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::IfBlock5::else::else */
  static kcg_bool else_clock_IfBlock5;
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::InfMsgQ_isEmpty */
  static kcg_bool last_InfMsgQ_isEmpty;
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::InfMsgQueue */
  static array__15402 last_InfMsgQueue;
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::ImpMsgQueue */
  static array__15402 last_ImpMsgQueue;
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::IfBlock5 */
  static kcg_bool IfBlock5_clock;
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::ImportantMsg */
  static kcg_bool ImportantMsg;
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::InfoMsg */
  static kcg_bool InfoMsg;
  /* DMI_Control_Pkg::Utils::TextMessagesDispatcher::_L11 */
  static kcg_bool _L11;
  
  if (outC->init) {
    _L11 = kcg_true;
    last_InfMsgQ_isEmpty = kcg_true;
    kcg_copy_array__15402(
      &last_InfMsgQueue,
      (array__15402 *) &cMsgStructQueue_DMI_Control_Pkg);
    kcg_copy_array__15402(
      &last_ImpMsgQueue,
      (array__15402 *) &cMsgStructQueue_DMI_Control_Pkg);
  }
  else {
    last_InfMsgQ_isEmpty = outC->InfMsgQ_isEmpty;
    kcg_copy_array__15402(&last_InfMsgQueue, &outC->InfMsgQueue);
    _L11 = outC->ImpMsgQ_isEmpty;
    kcg_copy_array__15402(&last_ImpMsgQueue, &outC->ImpMsgQueue);
  }
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    kcg_false,
    _L11,
    SystemTime,
    kcg_true,
    100,
    &outC->_1_Context_1);
  /* 1 */
  MsgDispatcherController_DMI_Control_Pkg_Utils(
    dmi_txt_msg,
    &else_clock_IfBlock5,
    &InfoMsg,
    &ImportantMsg);
  IfBlock5_clock = else_clock_IfBlock5 | DeleteAckMsg;
  if (IfBlock5_clock) {
    /* 1 */
    MSGQueue_DMI_Control_Pkg_Utils(
      dmi_txt_msg,
      (kcg_bool) !DeleteAckMsg,
      DeleteAckMsg,
      0,
      &outC->Context_1);
    kcg_copy_array__15402(&outC->AckMsgQueue, &outC->Context_1.queue);
    outC->AckMsgQ_isEmpty = outC->Context_1.isEmpty;
    kcg_copy_array__15402(&outC->ImpMsgQueue, &last_ImpMsgQueue);
    outC->ImpMsgQ_isEmpty = _L11;
    kcg_copy_array__15402(&outC->InfMsgQueue, &last_InfMsgQueue);
    outC->InfMsgQ_isEmpty = last_InfMsgQ_isEmpty;
  }
  else {
    if (outC->init) {
      outC->AckMsgQ_isEmpty = kcg_true;
      kcg_copy_array__15402(
        &outC->AckMsgQueue,
        (array__15402 *) &cMsgStructQueue_DMI_Control_Pkg);
    }
    if (InfoMsg) {
      /* 2 */
      MSGQueue_DMI_Control_Pkg_Utils(
        dmi_txt_msg,
        kcg_true,
        kcg_false,
        0,
        &outC->Context_2);
      kcg_copy_array__15402(&outC->ImpMsgQueue, &last_ImpMsgQueue);
      outC->ImpMsgQ_isEmpty = _L11;
      kcg_copy_array__15402(&outC->InfMsgQueue, &outC->Context_2.queue);
      outC->InfMsgQ_isEmpty = outC->Context_2.isEmpty;
    }
    else {
      else_clock_IfBlock5 = ImportantMsg | outC->_1_Context_1.expired;
      if (else_clock_IfBlock5) {
        /* 3 */
        MSGQueue_DMI_Control_Pkg_Utils(
          dmi_txt_msg,
          (kcg_bool) !outC->_1_Context_1.expired,
          outC->_1_Context_1.expired,
          0,
          &outC->Context_3);
        kcg_copy_array__15402(&outC->ImpMsgQueue, &outC->Context_3.queue);
        outC->ImpMsgQ_isEmpty = outC->Context_3.isEmpty;
      }
      else {
        kcg_copy_array__15402(&outC->ImpMsgQueue, &last_ImpMsgQueue);
        outC->ImpMsgQ_isEmpty = _L11;
      }
      kcg_copy_array__15402(&outC->InfMsgQueue, &last_InfMsgQueue);
      outC->InfMsgQ_isEmpty = last_InfMsgQ_isEmpty;
    }
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TextMessagesDispatcher_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */


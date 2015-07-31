/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MSGQueue_DMI_Control_Pkg_Utils.h"

void MSGQueue_reset_DMI_Control_Pkg_Utils(
  outC_MSGQueue_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  /* QueueController */
  QueueController_reset_DMI_Control_Pkg_Utils(&outC->Context_QueueController);
}

/* DMI_Control_Pkg::Utils::MSGQueue */
void MSGQueue_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::MSGQueue::msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Utils::MSGQueue::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Utils::MSGQueue::delete */kcg_bool delete,
  /* DMI_Control_Pkg::Utils::MSGQueue::pos */kcg_int pos,
  outC_MSGQueue_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int tmp;
  /* DMI_Control_Pkg::Utils::MSGQueue::StatusQueue_IfBlock::else */
  static kcg_bool else_clock_StatusQueue_IfBlock;
  /* DMI_Control_Pkg::Utils::MSGQueue::OperationQueue_IfBlock::else */
  static kcg_bool else_clock_OperationQueue_IfBlock;
  /* DMI_Control_Pkg::Utils::MSGQueue::queue */
  static array__15402 last_queue;
  /* DMI_Control_Pkg::Utils::MSGQueue::StatusQueue_IfBlock */
  static kcg_bool StatusQueue_IfBlock_clock;
  /* DMI_Control_Pkg::Utils::MSGQueue::_L13 */
  static kcg_bool _L13;
  
  if (insert) {
    tmp = 1;
  }
  else {
    else_clock_OperationQueue_IfBlock = delete;
    if (else_clock_OperationQueue_IfBlock) {
      tmp = - 1;
    }
    else {
      tmp = 0;
    }
  }
  if (outC->init) {
    _L13 = kcg_false;
    kcg_copy_array__15402(
      &last_queue,
      (array__15402 *) &cListMsgStructure_DMI_Control_Pkg);
    outC->init = kcg_false;
    StatusQueue_IfBlock_clock = kcg_false;
  }
  else {
    _L13 = outC->isFull;
    kcg_copy_array__15402(&last_queue, &outC->queue);
    StatusQueue_IfBlock_clock = outC->isEmpty;
  }
  /* QueueController */
  QueueController_DMI_Control_Pkg_Utils(
    tmp,
    delete,
    StatusQueue_IfBlock_clock,
    insert,
    _L13,
    &outC->Context_QueueController);
  outC->N = outC->Context_QueueController.NumElem;
  StatusQueue_IfBlock_clock = outC->N >= 0;
  if (StatusQueue_IfBlock_clock) {
    outC->isFull = kcg_true;
    outC->isEmpty = kcg_false;
  }
  else {
    else_clock_StatusQueue_IfBlock = outC->N <= 0;
    if (else_clock_StatusQueue_IfBlock) {
      outC->isEmpty = kcg_true;
      outC->isFull = _L13;
    }
    else {
      outC->isFull = kcg_false;
      outC->isEmpty = kcg_false;
    }
  }
  if (insert) {
    /* 1 */
    FIFO_Insert_Op_DMI_Control_Pkg_Utils(outC->N - 1, msg, &outC->queue);
  }
  else if (else_clock_OperationQueue_IfBlock) {
    /* 2 */
    FIFO_Delete_Op_DMI_Control_Pkg_Utils(pos, &last_queue, &outC->queue);
  }
  else {
    kcg_copy_array__15402(&outC->queue, &last_queue);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MSGQueue_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */


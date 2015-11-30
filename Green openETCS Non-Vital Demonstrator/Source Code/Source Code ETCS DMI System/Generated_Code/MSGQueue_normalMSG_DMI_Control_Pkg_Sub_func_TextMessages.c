/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-30T15:42:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

void MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
  /* 24 */
  FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_24);
  /* 25 */
  FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_25);
  /* 2 */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_2);
  /* 3 */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_3);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG */
void MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::msg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::isImportant */kcg_bool isImportant,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::num_last */kcg_int num_last,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::localTime */array_real_4 *localTime,
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_int tmp1;
  kcg_int tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::OperationQueue_IfBlock::then::IfBlock1 */ kcg_bool IfBlock1_clock_OperationQueue_IfBlock;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::StatusQueue_IfBlock::else */ kcg_bool else_clock_StatusQueue_IfBlock;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_auxi */ array_real_10 last_Local_mm_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_auxi */ array_real_10 last_Local_hh_array_auxi;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_hh_array_imp */ array_real_10 last_Local_hh_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::Local_mm_array_imp */ array_real_10 last_Local_mm_array_imp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::auxiQueue */ array__31757 last_auxiQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::impQueue */ array__31757 last_impQueue;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::StatusQueue_IfBlock */ kcg_bool StatusQueue_IfBlock_clock;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::ins */ kcg_bool ins;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG::_L13 */ kcg_bool _L13;
  
  /* 1 */
  CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages(
    msg,
    isImportant,
    &ins,
    &StatusQueue_IfBlock_clock,
    &else_clock_StatusQueue_IfBlock);
  if (ins) {
    IfBlock1_clock_OperationQueue_IfBlock = else_clock_StatusQueue_IfBlock;
    if (IfBlock1_clock_OperationQueue_IfBlock) {
      tmp = 0;
    }
    else {
      tmp = 1;
    }
  }
  else {
    tmp = 0;
  }
  if (outC->init) {
    _L13 = kcg_false;
    kcg_copy_array_real_10(
      &last_Local_mm_array_auxi,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
    kcg_copy_array_real_10(
      &last_Local_hh_array_auxi,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
    kcg_copy_array_real_10(
      &last_Local_hh_array_imp,
      (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
    kcg_copy_array_real_10(
      &last_Local_mm_array_imp,
      (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
    kcg_copy_array__31757(
      &last_auxiQueue,
      (array__31757 *) &cMsgStructQueueMax_DMI_Control_Pkg);
    kcg_copy_array__31757(
      &last_impQueue,
      (array__31757 *) &cMsgStructQueueMax_DMI_Control_Pkg);
    tmp1 = 0;
  }
  else {
    kcg_copy_array_real_10(
      &last_Local_mm_array_auxi,
      &outC->Local_mm_array_auxi);
    kcg_copy_array_real_10(
      &last_Local_hh_array_auxi,
      &outC->Local_hh_array_auxi);
    kcg_copy_array_real_10(&last_Local_hh_array_imp, &outC->Local_hh_array_imp);
    kcg_copy_array_real_10(&last_Local_mm_array_imp, &outC->Local_mm_array_imp);
    kcg_copy_array__31757(&last_auxiQueue, &outC->auxiQueue);
    kcg_copy_array__31757(&last_impQueue, &outC->impQueue);
    _L13 = outC->isFull;
    tmp1 = outC->NumAuxi;
  }
  /* 3 */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    StatusQueue_IfBlock_clock,
    _L13,
    tmp,
    tmp1,
    &outC->Context_3);
  outC->NumAuxi = outC->Context_3.NumElem;
  if (ins) {
    if (IfBlock1_clock_OperationQueue_IfBlock) {
      tmp1 = 1;
    }
    else {
      tmp1 = 0;
    }
  }
  else {
    tmp1 = 0;
  }
  if (outC->init) {
    tmp = 0;
  }
  else {
    tmp = outC->NumImp;
  }
  /* 2 */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    else_clock_StatusQueue_IfBlock,
    _L13,
    tmp1,
    tmp,
    &outC->Context_2);
  outC->NumImp = outC->Context_2.NumElem;
  if (ins) {
    if (IfBlock1_clock_OperationQueue_IfBlock) {
      /* 25 */
      FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
        outC->NumImp - 1,
        msg,
        (*localTime)[2],
        (*localTime)[3],
        _L13,
        &outC->Context_25);
      kcg_copy_array__31757(&outC->impQueue, &outC->Context_25.queue);
      kcg_copy_array__31757(&outC->auxiQueue, &last_auxiQueue);
      kcg_copy_array_real_10(
        &outC->Local_mm_array_imp,
        &outC->Context_25.mm_array);
      kcg_copy_array_real_10(
        &outC->Local_hh_array_imp,
        &outC->Context_25.hh_array);
      kcg_copy_array_real_10(
        &outC->Local_hh_array_auxi,
        &last_Local_hh_array_auxi);
      kcg_copy_array_real_10(
        &outC->Local_mm_array_auxi,
        &last_Local_mm_array_auxi);
    }
    else {
      /* 24 */
      FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
        outC->NumAuxi - 1,
        msg,
        (*localTime)[2],
        (*localTime)[3],
        _L13,
        &outC->Context_24);
      kcg_copy_array__31757(&outC->impQueue, &last_impQueue);
      kcg_copy_array__31757(&outC->auxiQueue, &outC->Context_24.queue);
      kcg_copy_array_real_10(
        &outC->Local_mm_array_imp,
        &last_Local_mm_array_imp);
      kcg_copy_array_real_10(
        &outC->Local_hh_array_imp,
        &last_Local_hh_array_imp);
      kcg_copy_array_real_10(
        &outC->Local_hh_array_auxi,
        &outC->Context_24.hh_array);
      kcg_copy_array_real_10(
        &outC->Local_mm_array_auxi,
        &outC->Context_24.mm_array);
    }
    /* 9 */
    MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->NumAuxi,
      &outC->impQueue,
      &outC->auxiQueue,
      &outC->queue);
    /* 2 */
    MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->NumAuxi,
      &outC->Local_mm_array_auxi,
      &outC->Local_mm_array_imp,
      &outC->mm_array);
    /* 1 */
    MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->NumAuxi,
      &outC->Local_hh_array_auxi,
      &outC->Local_hh_array_imp,
      &outC->hh_array);
    tmp1 = 1;
  }
  else {
    if (outC->init) {
      kcg_copy_array__31757(
        &outC->queue,
        (array__31757 *) &cMsgStructQueueMax_DMI_Control_Pkg);
      kcg_copy_array_real_10(
        &outC->mm_array,
        (array_real_10 *) &cArray_mm_leer_DMI_Control_Pkg);
      kcg_copy_array_real_10(
        &outC->hh_array,
        (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
    }
    kcg_copy_array__31757(&outC->impQueue, &last_impQueue);
    kcg_copy_array__31757(&outC->auxiQueue, &last_auxiQueue);
    kcg_copy_array_real_10(&outC->Local_mm_array_imp, &last_Local_mm_array_imp);
    kcg_copy_array_real_10(&outC->Local_hh_array_imp, &last_Local_hh_array_imp);
    kcg_copy_array_real_10(
      &outC->Local_hh_array_auxi,
      &last_Local_hh_array_auxi);
    kcg_copy_array_real_10(
      &outC->Local_mm_array_auxi,
      &last_Local_mm_array_auxi);
    tmp1 = 0;
  }
  outC->init = kcg_false;
  /* 1 */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    ins,
    _L13,
    tmp1,
    num_last,
    &outC->Context_1);
  outC->NumE = outC->Context_1.NumElem;
  StatusQueue_IfBlock_clock = outC->NumE >= cDIM_MSGQueueMax_DMI_Control_Pkg;
  if (StatusQueue_IfBlock_clock) {
    outC->isEmpty = kcg_false;
    outC->isFull = kcg_true;
  }
  else {
    else_clock_StatusQueue_IfBlock = outC->NumE <= 0;
    if (else_clock_StatusQueue_IfBlock) {
      outC->isEmpty = kcg_true;
      outC->isFull = _L13;
    }
    else {
      outC->isEmpty = kcg_false;
      outC->isFull = kcg_false;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-30T15:42:57
*************************************************************$ */


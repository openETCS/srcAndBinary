/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-30T15:42:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"

void NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager */
void NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Queue */array__31757 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::hh_array */array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::mm_array */array_real_10 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::numE */kcg_int numE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollUp */kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollDown */kcg_bool scrollDown,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  array__31757 tmp5;
  array__31757 tmp4;
  kcg_int tmp3;
  kcg_bool tmp2;
  array_real_10 tmp1;
  array_real_10 tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L21 */ array__31757 _L21;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L217 */ array_int_10 _L217;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L229 */ array_real_10 _L229;
  
  outC->isImportantMsg = kcg_true;
  outC->IndexFixedMsg[0] = 0;
  outC->IndexFixedMsg[1] = 0;
  outC->IndexFixedMsg[2] = 0;
  outC->IndexFixedMsg[3] = 0;
  outC->IndexFixedMsg[4] = 0;
  for (i = 0; i < 10; i++) {
    kcg_copy_MsgStructure(&_L21[i], &(*Queue)[9 - i]);
  }
  kcg_copy_array__31757(
    &tmp5,
    (array__31757 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  for (i = 0; i < 10; i++) {
    kcg_copy_array__31757(&tmp4, &tmp5);
    /* 1 */
    SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp4,
      &_L21,
      numE,
      &tmp5);
    tmp1[i] = (*hh_array)[9 - i];
  }
  if (outC->init) {
    tmp3 = 0;
    outC->init = kcg_false;
    tmp2 = kcg_false;
  }
  else {
    tmp3 = outC->scrollLevel;
    tmp2 = outC->rem_isMoreThanFive;
  }
  /* 1 */
  ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
    &tmp5,
    tmp3,
    &outC->ArrayPlainText,
    &outC->rem_isMoreThanFive,
    &_L217);
  /* 1 */
  ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
    scrollUp,
    scrollDown,
    tmp2,
    numE,
    &outC->Context_1);
  outC->ScrollUpEnableIndex_toDisplay = outC->Context_1.scrollUpTypeIndex;
  outC->scrollLevel = outC->Context_1.scrollLevel;
  outC->ScrollDownEnableIndex_toDisplay = outC->Context_1.scrollDownTypeIndex;
  kcg_copy_array_real_10(
    &tmp,
    (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  for (i = 0; i < 10; i++) {
    kcg_copy_array_real_10(&_L229, &tmp);
    /* 2 */
    SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &_L229,
      &tmp1,
      numE,
      &tmp);
  }
  kcg_copy_array_real_5(&outC->Array_hh, (array_real_5 *) &tmp[0]);
  for (i = 0; i < 10; i++) {
    _L229[i] = (*mm_array)[9 - i];
  }
  kcg_copy_array_real_10(
    &tmp1,
    (array_real_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  for (i = 0; i < 10; i++) {
    kcg_copy_array_real_10(&tmp, &tmp1);
    /* 1 */
    SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      &_L229,
      numE,
      &tmp1);
  }
  kcg_copy_array_real_5(&outC->Array_mm, (array_real_5 *) &tmp1[0]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-30T15:42:57
*************************************************************$ */


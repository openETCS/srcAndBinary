/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager */
void NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Queue */array__30249 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::hh_array */array_real_5 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::mm_array */array_real_5 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::numE */kcg_int numE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::IndexFixedMsg */array_int_5 *IndexFixedMsg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::ArrayPlainText */array_char_30_5 *ArrayPlainText,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Array_hh */array_real_5 *Array_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Array_mm */array_real_5 *Array_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::isImportantMsg */kcg_bool *isImportantMsg)
{
  array__30249 tmp2;
  array_real_5 tmp1;
  kcg_int i;
  array_int_5 tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::LocalArray */ array__30249 LocalArray;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L21 */ array__30249 _L21;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L164 */ kcg_int _L164;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L165 */ kcg_int _L165;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L166 */ kcg_int _L166;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L167 */ kcg_int _L167;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L169 */ kcg_int _L169;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L174 */ array_int_5 _L174;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L182 */ array_real_5 _L182;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L183 */ array_real_5 _L183;
  
  *isImportantMsg = kcg_true;
  for (i = 0; i < 5; i++) {
    kcg_copy_MsgStructure(&_L21[i], &(*Queue)[4 - i]);
  }
  kcg_copy_array__30249(
    &LocalArray,
    (array__30249 *) &cMsgStructQueue_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_array__30249(&tmp2, &LocalArray);
    /* 1 */
    SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp2,
      &_L21,
      numE,
      &LocalArray);
    _L183[i] = (*hh_array)[4 - i];
  }
  /* 1 */
  ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
    &LocalArray,
    ArrayPlainText,
    &_L164,
    &_L165,
    &_L166,
    &_L167,
    &_L169);
  _L174[0] = _L164;
  _L174[1] = _L165;
  _L174[2] = _L166;
  _L174[3] = _L167;
  _L174[4] = _L169;
  kcg_copy_array_real_5(
    Array_hh,
    (array_real_5 *) &cArray_hh_leer_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_real_5(&tmp1, Array_hh);
    /* 1 */
    SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp1,
      &_L183,
      &_L174,
      numE,
      Array_hh);
    _L182[i] = (*mm_array)[4 - i];
  }
  kcg_copy_array_real_5(
    Array_mm,
    (array_real_5 *) &cArray_mm_leer_DMI_Control_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_real_5(&tmp1, Array_mm);
    /* 2 */
    SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp1,
      &_L182,
      &_L174,
      numE,
      Array_mm);
    tmp[i] = /* 1 */
      ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages(
        i,
        &LocalArray[i]);
  }
  /* 1 */
  ShowMsg_FixIndex_DMI_Control_Pkg_Sub_func_TextMessages(
    _L164,
    _L165,
    _L166,
    _L167,
    _L169,
    &tmp,
    IndexFixedMsg);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain */
void ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::Msgarray */array__30249 *Msgarray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::Output */array_char_30_5 *Output,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::numMsg1 */kcg_int *numMsg1,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::numMsg2 */kcg_int *numMsg2,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::numMsg3 */kcg_int *numMsg3,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::numMsg4 */kcg_int *numMsg4,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::numMsg5 */kcg_int *numMsg5)
{
  MsgStructure tmp2;
  array_char_30_5 tmp1;
  array_char_30_5 tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L15 */ array_char_30_5 _L15;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L65 */ kcg_bool _L65;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L121 */ array_char_30_5 _L121;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L138 */ kcg_bool _L138;
  
  /* 1 */
  CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
    &(*Msgarray)[0],
    &_L138,
    &_L65);
  if (_L65) {
    kcg_copy_MsgStructure(
      &tmp2,
      (MsgStructure *) &cMsgStructure_fix_DMI_Control_Pkg);
  }
  else {
    kcg_copy_MsgStructure(&tmp2, &(*Msgarray)[0]);
  }
  /* 1 */ SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&tmp2, &tmp1);
  /* 2 */
  CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
    &(*Msgarray)[1],
    &_L65,
    &_L138);
  if (_L138) {
    kcg_copy_MsgStructure(
      &tmp2,
      (MsgStructure *) &cMsgStructure_fix_DMI_Control_Pkg);
  }
  else {
    kcg_copy_MsgStructure(&tmp2, &(*Msgarray)[1]);
  }
  /* 2 */ SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&tmp2, &_L15);
  *numMsg1 = /* 1 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&tmp1);
  kcg_copy_array_char_30_5(&tmp, &tmp1);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_char_30_5(&_L121, &tmp);
    /* 2 */
    MergeTwoMessages_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &_L121,
      &tmp1,
      &_L15,
      *numMsg1,
      &tmp);
  }
  /* 3 */
  CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
    &(*Msgarray)[2],
    &_L138,
    &_L65);
  if (_L65) {
    kcg_copy_MsgStructure(
      &tmp2,
      (MsgStructure *) &cMsgStructure_fix_DMI_Control_Pkg);
  }
  else {
    kcg_copy_MsgStructure(&tmp2, &(*Msgarray)[2]);
  }
  /* 3 */ SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&tmp2, &_L121);
  *numMsg2 = /* 2 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&tmp);
  kcg_copy_array_char_30_5(&_L15, &tmp);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_char_30_5(&tmp1, &_L15);
    /* 1 */
    MergeTwoMessages_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp1,
      &tmp,
      &_L121,
      *numMsg2,
      &_L15);
  }
  /* 4 */
  CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
    &(*Msgarray)[3],
    &_L65,
    &_L138);
  if (_L138) {
    kcg_copy_MsgStructure(
      &tmp2,
      (MsgStructure *) &cMsgStructure_fix_DMI_Control_Pkg);
  }
  else {
    kcg_copy_MsgStructure(&tmp2, &(*Msgarray)[3]);
  }
  /* 4 */ SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&tmp2, &_L121);
  *numMsg3 = /* 3 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L15);
  kcg_copy_array_char_30_5(&tmp1, &_L15);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_char_30_5(&tmp, &tmp1);
    /* 3 */
    MergeTwoMessages_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      &_L15,
      &_L121,
      *numMsg3,
      &tmp1);
  }
  /* 5 */
  CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
    &(*Msgarray)[4],
    &_L138,
    &_L65);
  if (_L65) {
    kcg_copy_MsgStructure(
      &tmp2,
      (MsgStructure *) &cMsgStructure_fix_DMI_Control_Pkg);
  }
  else {
    kcg_copy_MsgStructure(&tmp2, &(*Msgarray)[4]);
  }
  /* 5 */ SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&tmp2, &_L121);
  *numMsg4 = /* 4 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&tmp1);
  kcg_copy_array_char_30_5(Output, &tmp1);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_char_30_5(&_L15, Output);
    /* 4 */
    MergeTwoMessages_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &_L15,
      &tmp1,
      &_L121,
      *numMsg4,
      Output);
  }
  *numMsg5 = /* 5 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(Output);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */


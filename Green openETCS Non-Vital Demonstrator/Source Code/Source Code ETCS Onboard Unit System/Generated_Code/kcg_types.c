/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array__80217(array__80217 *kcg_c1, array__80217 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80211(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80227(array__80227 *kcg_c1, array__80227 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80220(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80242(array__80242 *kcg_c1, array__80242 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80230(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80252(array__80252 *kcg_c1, array__80252 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80245(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80297(array__80297 *kcg_c1, array__80297 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80291(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80307(array__80307 *kcg_c1, array__80307 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80300(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80318(array__80318 *kcg_c1, array__80318 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80310(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80326(array__80326 *kcg_c1, array__80326 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80321(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80382(array__80382 *kcg_c1, array__80382 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80368(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_500(array_int_500 *kcg_c1, array_int_500 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80396(array__80396 *kcg_c1, array__80396 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80388(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80415(array__80415 *kcg_c1, array__80415 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80404(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_231(array_int_231 *kcg_c1, array_int_231 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80553(array__80553 *kcg_c1, array__80553 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80542(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80577(array__80577 *kcg_c1, array__80577 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80571(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80603(array__80603 *kcg_c1, array__80603 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80542(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80660(array__80660 *kcg_c1, array__80660 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80648(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80672(array__80672 *kcg_c1, array__80672 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80663(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80682(array__80682 *kcg_c1, array__80682 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80675(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_99(array_int_99 *kcg_c1, array_int_99 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80726(array__80726 *kcg_c1, array__80726 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80699(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80737(array__80737 *kcg_c1, array__80737 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80729(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_128(array_int_128 *kcg_c1, array_int_128 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 128; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_15(array_int_15 *kcg_c1, array_int_15 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80802(array__80802 *kcg_c1, array__80802 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80796(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80814(array__80814 *kcg_c1, array__80814 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80805(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80832(array__80832 *kcg_c1, array__80832 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80824(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80843(array__80843 *kcg_c1, array__80843 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80835(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_64(array_int_64 *kcg_c1, array_int_64 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80873(array__80873 *kcg_c1, array__80873 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80866(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80882(array__80882 *kcg_c1, array__80882 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80876(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_66(array_int_66 *kcg_c1, array_int_66 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 66; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80908(array__80908 *kcg_c1, array__80908 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80898(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__80918(array__80918 *kcg_c1, array__80918 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80911(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81004(array__81004 *kcg_c1, array__81004 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80989(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81007(array__81007 *kcg_c1, array__81007 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80997(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81010(array__81010 *kcg_c1, array__81010 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80321(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_32(array_int_32 *kcg_c1, array_int_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_24(array_int_24 *kcg_c1, array_int_24 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 24; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81066(array__81066 *kcg_c1, array__81066 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81046(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81092(array__81092 *kcg_c1, array__81092 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81087(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81095(array__81095 *kcg_c1, array__81095 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 11; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array__81092(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81104(array__81104 *kcg_c1, array__81104 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 363; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81098(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_33(array_int_33 *kcg_c1, array_int_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_33_11(
  array_int_33_11 *kcg_c1,
  array_int_33_11 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 11; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81141(array__81141 *kcg_c1, array__81141 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 11; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81136(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81144(array__81144 *kcg_c1, array__81144 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 200; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81129(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81219(array__81219 *kcg_c1, array__81219 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81214(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81258(array__81258 *kcg_c1, array__81258 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81253(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81381(array__81381 *kcg_c1, array__81381 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81376(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81549(array__81549 *kcg_c1, array__81549 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81543(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81566(array__81566 *kcg_c1, array__81566 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81561(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81588(array__81588 *kcg_c1, array__81588 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81582(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81683(array__81683 *kcg_c1, array__81683 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 17; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81686(array__81686 *kcg_c1, array__81686 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array__81683(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81689(array__81689 *kcg_c1, array__81689 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81692(array__81692 *kcg_c1, array__81692 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array__81689(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_256(array_bool_256 *kcg_c1, array_bool_256 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_256_46(
  array_bool_256_46 *kcg_c1,
  array_bool_256_46 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 46; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_bool_256(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81717(array__81717 *kcg_c1, array__81717 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81710(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__81798(array__81798 *kcg_c1, array__81798 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 31; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81787(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_char_9(array_char_9 *kcg_c1, array_char_9 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_char_255(array_char_255 *kcg_c1, array_char_255 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 255; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_3(array_real_3 *kcg_c1, array_real_3 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_2(array_real_2 *kcg_c1, array_real_2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_25(array_bool_25 *kcg_c1, array_bool_25 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 25; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_25(array_real_25 *kcg_c1, array_real_25 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 25; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82019(array__82019 *kcg_c1, array__82019 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 200; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81996(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82030(array__82030 *kcg_c1, array__82030 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 200; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__82013(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82074(array__82074 *kcg_c1, array__82074 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 200; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__82068(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_15(array_real_15 *kcg_c1, array_real_15 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_15_10(
  array_real_15_10 *kcg_c1,
  array_real_15_10 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_real_15(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_10(array_real_10 *kcg_c1, array_real_10 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_14(array_bool_14 *kcg_c1, array_bool_14 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 14; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82327(array__82327 *kcg_c1, array__82327 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__82322(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82335(array__82335 *kcg_c1, array__82335 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80997(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82343(array__82343 *kcg_c1, array__82343 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81129(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_20(array_bool_20 *kcg_c1, array_bool_20 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 20; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82690(array__82690 *kcg_c1, array__82690 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81770(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82755(array__82755 *kcg_c1, array__82755 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__82730(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_4(array_bool_4 *kcg_c1, array_bool_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_1(array_bool_1 *kcg_c1, array_bool_1 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_1(array_real_1 *kcg_c1, array_real_1 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82772(array__82772 *kcg_c1, array__82772 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__82013(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_8(array_bool_8 *kcg_c1, array_bool_8 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_30(array_bool_30 *kcg_c1, array_bool_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82781(array__82781 *kcg_c1, array__82781 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80517(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82784(array__82784 *kcg_c1, array__82784 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81527(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82787(array__82787 *kcg_c1, array__82787 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 11; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81098(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82790(array__82790 *kcg_c1, array__82790 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80805(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82793(array__82793 *kcg_c1, array__82793 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80321(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__82796(array__82796 *kcg_c1, array__82796 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80542(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_24(array_real_24 *kcg_c1, array_real_24 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 24; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_24(array_bool_24 *kcg_c1, array_bool_24 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 24; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__85687(array__85687 *kcg_c1, array__85687 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 199; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__82013(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__86192(array__86192 *kcg_c1, array__86192 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80805(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__86199(array__86199 *kcg_c1, array__86199 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__81087(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__86240(array__86240 *kcg_c1, array__86240 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 31; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80321(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__86322(array__86322 *kcg_c1, array__86322 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__80542(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80211(struct__80211 *kcg_c1, struct__80211 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint_l == kcg_c2->m_nvkrint_l);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint_l == kcg_c2->l_nvkrint_l);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80220(struct__80220 *kcg_c1, struct__80220 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_km_23 == kcg_c2->m_nvkvint_km_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_km_12 == kcg_c2->m_nvkvint_km_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint_k_m == kcg_c2->v_nvkvint_k_m);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80230(struct__80230 *kcg_c1, struct__80230 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80227(
      &kcg_c1->n_iter_k_m_list,
      &kcg_c2->n_iter_k_m_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_k_m == kcg_c2->n_iter_k_m);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_k_23 == kcg_c2->m_nvkvint_k_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_k_12 == kcg_c2->m_nvkvint_k_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint_k == kcg_c2->v_nvkvint_k);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp23_k == kcg_c2->a_nvp23_k);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp12_k == kcg_c2->a_nvp12_k);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkvintset_k == kcg_c2->q_nvkvintset_k);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80245(struct__80245 *kcg_c1, struct__80245 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_n_23 == kcg_c2->m_nvkvint_n_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_n_12 == kcg_c2->m_nvkvint_n_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint_n == kcg_c2->v_nvkvint_n);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80255(struct__80255 *kcg_c1, struct__80255 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvktint == kcg_c2->m_nvktint);
  kcg_equ = kcg_equ & kcg_comp_array__80217(
      &kcg_c1->n_iter_l_list,
      &kcg_c2->n_iter_l_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_l == kcg_c2->n_iter_l);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint == kcg_c2->m_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint == kcg_c2->l_nvkrint);
  kcg_equ = kcg_equ & kcg_comp_array__80242(
      &kcg_c1->n_iter_k_list,
      &kcg_c2->n_iter_k_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_k == kcg_c2->n_iter_k);
  kcg_equ = kcg_equ & kcg_comp_array__80252(
      &kcg_c1->n_iter_n_list,
      &kcg_c2->n_iter_n_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_n == kcg_c2->n_iter_n);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_23 == kcg_c2->m_nvkvint_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_12 == kcg_c2->m_nvkvint_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint == kcg_c2->v_nvkvint);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp23 == kcg_c2->a_nvp23);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp12 == kcg_c2->a_nvp12);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkvintset == kcg_c2->q_nvkvintset);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkint == kcg_c2->q_nvkint);
  kcg_equ = kcg_equ & (kcg_c1->m_nvebcl == kcg_c2->m_nvebcl);
  kcg_equ = kcg_equ & (kcg_c1->m_nvavadh == kcg_c2->m_nvavadh);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh3 == kcg_c2->a_nvmaxredadh3);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh2 == kcg_c2->a_nvmaxredadh2);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh1 == kcg_c2->a_nvmaxredadh1);
  kcg_equ = kcg_equ & (kcg_c1->q_nvinhsnicperm == kcg_c2->q_nvinhsnicperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbfbperm == kcg_c2->q_nvsbfbperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvguiperm == kcg_c2->q_nvguiperm);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80286(struct__80286 *kcg_c1, struct__80286 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_nvlimsuperv == kcg_c2->v_nvlimsuperv);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80291(struct__80291 *kcg_c1, struct__80291 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint == kcg_c2->m_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint == kcg_c2->l_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80300(struct__80300 *kcg_c1, struct__80300 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint23 == kcg_c2->m_nvkvint23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint12 == kcg_c2->m_nvkvint12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint == kcg_c2->v_nvkvint);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80310(struct__80310 *kcg_c1, struct__80310 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80307(
      &kcg_c1->nvkintArray,
      &kcg_c2->nvkintArray);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp23 == kcg_c2->a_nvp23);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp12 == kcg_c2->a_nvp12);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkvintset == kcg_c2->q_nvkvintset);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80321(struct__80321 *kcg_c1, struct__80321 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80329(struct__80329 *kcg_c1, struct__80329 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvktint == kcg_c2->m_nvktint);
  kcg_equ = kcg_equ & kcg_comp_array__80297(
      &kcg_c1->nvkrintArray,
      &kcg_c2->nvkrintArray);
  kcg_equ = kcg_equ & kcg_comp_array__80318(
      &kcg_c1->nvkvintsetArray,
      &kcg_c2->nvkvintsetArray);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkint == kcg_c2->q_nvkint);
  kcg_equ = kcg_equ & (kcg_c1->m_nvebcl == kcg_c2->m_nvebcl);
  kcg_equ = kcg_equ & (kcg_c1->m_nvavadh == kcg_c2->m_nvavadh);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh3 == kcg_c2->a_nvmaxredadh3);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh2 == kcg_c2->a_nvmaxredadh2);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh1 == kcg_c2->a_nvmaxredadh1);
  kcg_equ = kcg_equ & (kcg_c1->q_nvdriver_adhes == kcg_c2->q_nvdriver_adhes);
  kcg_equ = kcg_equ & (kcg_c1->d_nvstff == kcg_c2->d_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->m_nvderun == kcg_c2->m_nvderun);
  kcg_equ = kcg_equ & (kcg_c1->t_nvcontact == kcg_c2->t_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->m_nvcontact == kcg_c2->m_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->d_nvpotrp == kcg_c2->d_nvpotrp);
  kcg_equ = kcg_equ & (kcg_c1->t_nvovtrp == kcg_c2->t_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->d_nvovtrp == kcg_c2->d_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvsupovtrp == kcg_c2->v_nvsupovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvallowovtrp == kcg_c2->v_nvallowovtrp);
  kcg_equ = kcg_equ & (kcg_c1->q_nvinhsmicperm == kcg_c2->q_nvinhsmicperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbfbperm == kcg_c2->q_nvsbfbperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvguiperm == kcg_c2->q_nvguiperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvemrrls == kcg_c2->q_nvemrrls);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbtsmperm == kcg_c2->q_nvsbtsmperm);
  kcg_equ = kcg_equ & (kcg_c1->d_nvroll == kcg_c2->d_nvroll);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  kcg_equ = kcg_equ & (kcg_c1->v_nvunfit == kcg_c2->v_nvunfit);
  kcg_equ = kcg_equ & (kcg_c1->v_nvlimsuperv == kcg_c2->v_nvlimsuperv);
  kcg_equ = kcg_equ & (kcg_c1->v_nvonsight == kcg_c2->v_nvonsight);
  kcg_equ = kcg_equ & (kcg_c1->v_nvstff == kcg_c2->v_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->v_nvshunt == kcg_c2->v_nvshunt);
  kcg_equ = kcg_equ & kcg_comp_array__80326(
      &kcg_c1->nid_cArray,
      &kcg_c2->nid_cArray);
  kcg_equ = kcg_equ & (kcg_c1->d_validnv == kcg_c2->d_validnv);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80368(struct__80368 *kcg_c1, struct__80368 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_locacc == kcg_c2->q_locacc);
  kcg_equ = kcg_equ & (kcg_c1->q_linkreaction == kcg_c2->q_linkreaction);
  kcg_equ = kcg_equ & (kcg_c1->q_linkorientation == kcg_c2->q_linkorientation);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_newcountry == kcg_c2->q_newcountry);
  kcg_equ = kcg_equ & (kcg_c1->d_link == kcg_c2->d_link);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_LRBG == kcg_c2->nid_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80388(struct__80388 *kcg_c1, struct__80388 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80399(struct__80399 *kcg_c1, struct__80399 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_int_500(
      &kcg_c1->PacketData,
      &kcg_c2->PacketData);
  kcg_equ = kcg_equ & kcg_comp_array__80396(
      &kcg_c1->PacketHeaders,
      &kcg_c2->PacketHeaders);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80404(struct__80404 *kcg_c1, struct__80404 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_locacc == kcg_c2->q_locacc);
  kcg_equ = kcg_equ & (kcg_c1->q_linkreaction == kcg_c2->q_linkreaction);
  kcg_equ = kcg_equ & (kcg_c1->q_linkorientation == kcg_c2->q_linkorientation);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_newcountry == kcg_c2->q_newcountry);
  kcg_equ = kcg_equ & (kcg_c1->d_link == kcg_c2->d_link);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80418(struct__80418 *kcg_c1, struct__80418 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80415(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80433(struct__80433 *kcg_c1, struct__80433 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->receivedSystemTime ==
      kcg_c2->receivedSystemTime);
  kcg_equ = kcg_equ & (kcg_c1->radioDevice == kcg_c2->radioDevice);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80451(struct__80451 *kcg_c1, struct__80451 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80463(struct__80463 *kcg_c1, struct__80463 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->device_id == kcg_c2->device_id);
  kcg_equ = kcg_equ & (kcg_c1->rbc_id == kcg_c2->rbc_id);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80470(struct__80470 *kcg_c1, struct__80470 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_upper == kcg_c2->v_upper);
  kcg_equ = kcg_equ & (kcg_c1->v_lower == kcg_c2->v_lower);
  kcg_equ = kcg_equ & (kcg_c1->v_rawNominal == kcg_c2->v_rawNominal);
  kcg_equ = kcg_equ & (kcg_c1->v_safeNominal == kcg_c2->v_safeNominal);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80477(struct__80477 *kcg_c1, struct__80477 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80483(struct__80483 *kcg_c1, struct__80483 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->motionDirection == kcg_c2->motionDirection);
  kcg_equ = kcg_equ & (kcg_c1->motionState == kcg_c2->motionState);
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & kcg_comp_struct__80470(&kcg_c1->speed, &kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_struct__80477(&kcg_c1->odo, &kcg_c2->odo);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80493(struct__80493 *kcg_c1, struct__80493 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_max == kcg_c2->d_max);
  kcg_equ = kcg_equ & (kcg_c1->d_min == kcg_c2->d_min);
  kcg_equ = kcg_equ & (kcg_c1->nominal == kcg_c2->nominal);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80499(struct__80499 *kcg_c1, struct__80499 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainRunningDirectionToBG ==
      kcg_c2->trainRunningDirectionToBG);
  kcg_equ = kcg_equ & (kcg_c1->trainOrientationToBG ==
      kcg_c2->trainOrientationToBG);
  kcg_equ = kcg_equ & (kcg_c1->noCoordinateSystemHasBeenAssigned ==
      kcg_c2->noCoordinateSystemHasBeenAssigned);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->BG_centerDetectionInaccuraccuracies,
      &kcg_c2->BG_centerDetectionInaccuraccuracies);
  kcg_equ = kcg_equ & kcg_comp_struct__80483(
      &kcg_c1->bgPosition,
      &kcg_c2->bgPosition);
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80517(struct__80517 *kcg_c1, struct__80517 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80463(
      &kcg_c1->sendingRBC,
      &kcg_c2->sendingRBC);
  kcg_equ = kcg_equ & kcg_comp_struct__80399(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct__80433(
      &kcg_c1->Radio_Common_Header,
      &kcg_c2->Radio_Common_Header);
  kcg_equ = kcg_equ & kcg_comp_struct__80499(
      &kcg_c1->BG_Common_Header,
      &kcg_c2->BG_Common_Header);
  kcg_equ = kcg_equ & kcg_comp_struct__80451(
      &kcg_c1->radioMetadata,
      &kcg_c2->radioMetadata);
  kcg_equ = kcg_equ & (kcg_c1->source == kcg_c2->source);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80527(struct__80527 *kcg_c1, struct__80527 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80382(
      &kcg_c1->linkedBGs,
      &kcg_c2->linkedBGs);
  kcg_equ = kcg_equ & kcg_comp_struct__80499(
      &kcg_c1->BG_Header,
      &kcg_c2->BG_Header);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80533(struct__80533 *kcg_c1, struct__80533 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80368(
      &kcg_c1->linkingInfo,
      &kcg_c2->linkingInfo);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(&kcg_c1->d_link, &kcg_c2->d_link);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->expectedLocation,
      &kcg_c2->expectedLocation);
  kcg_equ = kcg_equ & (kcg_c1->nid_c_fromLinkingBG ==
      kcg_c2->nid_c_fromLinkingBG);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg_fromLinkingBG ==
      kcg_c2->nid_bg_fromLinkingBG);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80542(struct__80542 *kcg_c1, struct__80542 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80527(
      &kcg_c1->infoFromPassing,
      &kcg_c2->infoFromPassing);
  kcg_equ = kcg_equ & kcg_comp_struct__80533(
      &kcg_c1->infoFromLinking,
      &kcg_c2->infoFromLinking);
  kcg_equ = kcg_equ & (kcg_c1->seqNoOnTrack == kcg_c2->seqNoOnTrack);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->location,
      &kcg_c2->location);
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80556(struct__80556 *kcg_c1, struct__80556 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->BGFound == kcg_c2->BGFound);
  kcg_equ = kcg_equ & (kcg_c1->noOfFoundBGs == kcg_c2->noOfFoundBGs);
  kcg_equ = kcg_equ & (kcg_c1->index == kcg_c2->index);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80562(struct__80562 *kcg_c1, struct__80562 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->passedTotalBGsCount ==
      kcg_c2->passedTotalBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->passedLinkedBGsCount ==
      kcg_c2->passedLinkedBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->passedUnlinkedBGsCount ==
      kcg_c2->passedUnlinkedBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->totalBGsCount == kcg_c2->totalBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->linkedBGsCount == kcg_c2->linkedBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->unlinkedBGsCount == kcg_c2->unlinkedBGsCount);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80571(struct__80571 *kcg_c1, struct__80571 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->subsequentLinkedBG_idx ==
      kcg_c2->subsequentLinkedBG_idx);
  kcg_equ = kcg_equ & (kcg_c1->currentIndex == kcg_c2->currentIndex);
  kcg_equ = kcg_equ & (kcg_c1->previousLinkedBG_idx ==
      kcg_c2->previousLinkedBG_idx);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80580(struct__80580 *kcg_c1, struct__80580 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->centerDetectionAcc_DefaultValue,
      &kcg_c2->centerDetectionAcc_DefaultValue);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->locationAccuracy_DefaultValue,
      &kcg_c2->locationAccuracy_DefaultValue);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->d_frontend_2_rearend,
      &kcg_c2->d_frontend_2_rearend);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->d_baliseAntenna_2_frontend,
      &kcg_c2->d_baliseAntenna_2_frontend);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_operational == kcg_c2->nid_operational);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80590(struct__80590 *kcg_c1, struct__80590 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->sumOfBestDistances,
      &kcg_c2->sumOfBestDistances);
  kcg_equ = kcg_equ & (kcg_c1->recalculate == kcg_c2->recalculate);
  kcg_equ = kcg_equ & kcg_comp_struct__80542(
      &kcg_c1->prevUnlinkedBG,
      &kcg_c2->prevUnlinkedBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80542(
      &kcg_c1->prevLinkedBG,
      &kcg_c2->prevLinkedBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80542(&kcg_c1->refBG, &kcg_c2->refBG);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80598(struct__80598 *kcg_c1, struct__80598 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->overrun == kcg_c2->overrun);
  kcg_equ = kcg_equ & kcg_comp_array__80553(&kcg_c1->BGs, &kcg_c2->BGs);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80606(struct__80606 *kcg_c1, struct__80606 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80542(&kcg_c1->bg, &kcg_c2->bg);
  kcg_equ = kcg_equ & (kcg_c1->doubleRepositioningError ==
      kcg_c2->doubleRepositioningError);
  kcg_equ = kcg_equ & (kcg_c1->twoConsecutiveLinkedBGs_missed ==
      kcg_c2->twoConsecutiveLinkedBGs_missed);
  kcg_equ = kcg_equ & (kcg_c1->BG_LinkingConsistencyError ==
      kcg_c2->BG_LinkingConsistencyError);
  kcg_equ = kcg_equ & (kcg_c1->BGpassedInUnexpectedDirection ==
      kcg_c2->BGpassedInUnexpectedDirection);
  kcg_equ = kcg_equ & (kcg_c1->linkedBGMissed == kcg_c2->linkedBGMissed);
  kcg_equ = kcg_equ & (kcg_c1->positionCalculation_inconsistent ==
      kcg_c2->positionCalculation_inconsistent);
  kcg_equ = kcg_equ & (kcg_c1->passedBG_foundNotWhereExpected ==
      kcg_c2->passedBG_foundNotWhereExpected);
  kcg_equ = kcg_equ & (kcg_c1->outOfMemSpace == kcg_c2->outOfMemSpace);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80618(struct__80618 *kcg_c1, struct__80618 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->linkingIsUsedOnboard ==
      kcg_c2->linkingIsUsedOnboard);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_struct__80542(
      &kcg_c1->lastPassedUnlinkedBG,
      &kcg_c2->lastPassedUnlinkedBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80542(
      &kcg_c1->lastPassedLinkedBG,
      &kcg_c2->lastPassedLinkedBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80542(
      &kcg_c1->prevPassedLinkedBG,
      &kcg_c2->prevPassedLinkedBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->trainPositionDerivedFromLastUnlinkedBG,
      &kcg_c2->trainPositionDerivedFromLastUnlinkedBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->trainPositionDerivedFromLastLinkedBG,
      &kcg_c2->trainPositionDerivedFromLastLinkedBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->trainPosition,
      &kcg_c2->trainPosition);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80631(struct__80631 *kcg_c1, struct__80631 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->linkingIsUsedOnboard ==
      kcg_c2->linkingIsUsedOnboard);
  kcg_equ = kcg_equ & (kcg_c1->trainRunningDirectionToLRBG ==
      kcg_c2->trainRunningDirectionToLRBG);
  kcg_equ = kcg_equ & (kcg_c1->trainOrientationToLRBG ==
      kcg_c2->trainOrientationToLRBG);
  kcg_equ = kcg_equ & (kcg_c1->nominalOrReverseToLRBG ==
      kcg_c2->nominalOrReverseToLRBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80542(
      &kcg_c1->prvLRBG,
      &kcg_c2->prvLRBG);
  kcg_equ = kcg_equ & kcg_comp_struct__80542(&kcg_c1->LRBG, &kcg_c2->LRBG);
  kcg_equ = kcg_equ & (kcg_c1->maxSafeFrontEndPostion ==
      kcg_c2->maxSafeFrontEndPostion);
  kcg_equ = kcg_equ & (kcg_c1->minSafeFrontEndPosition ==
      kcg_c2->minSafeFrontEndPosition);
  kcg_equ = kcg_equ & (kcg_c1->estimatedFrontEndPosition ==
      kcg_c2->estimatedFrontEndPosition);
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->trainPosition,
      &kcg_c2->trainPosition);
  kcg_equ = kcg_equ & (kcg_c1->noCoordinateSystemHasBeenAssigned ==
      kcg_c2->noCoordinateSystemHasBeenAssigned);
  kcg_equ = kcg_equ & (kcg_c1->trainPositionIsUnknown ==
      kcg_c2->trainPositionIsUnknown);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80648(struct__80648 *kcg_c1, struct__80648 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_mamode == kcg_c2->q_mamode);
  kcg_equ = kcg_equ & (kcg_c1->l_ackmamode == kcg_c2->l_ackmamode);
  kcg_equ = kcg_equ & (kcg_c1->l_mamode == kcg_c2->l_mamode);
  kcg_equ = kcg_equ & (kcg_c1->v_mamode == kcg_c2->v_mamode);
  kcg_equ = kcg_equ & (kcg_c1->m_mamode == kcg_c2->m_mamode);
  kcg_equ = kcg_equ & (kcg_c1->d_mamode == kcg_c2->d_mamode);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80663(struct__80663 *kcg_c1, struct__80663 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->g_a == kcg_c2->g_a);
  kcg_equ = kcg_equ & (kcg_c1->q_gdir == kcg_c2->q_gdir);
  kcg_equ = kcg_equ & (kcg_c1->d_gradient == kcg_c2->d_gradient);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80675(struct__80675 *kcg_c1, struct__80675 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->g_a == kcg_c2->g_a);
  kcg_equ = kcg_equ & (kcg_c1->q_gdir == kcg_c2->q_gdir);
  kcg_equ = kcg_equ & (kcg_c1->d_gradient == kcg_c2->d_gradient);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80685(struct__80685 *kcg_c1, struct__80685 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80682(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80699(struct__80699 *kcg_c1, struct__80699 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_releaseol == kcg_c2->v_releaseol);
  kcg_equ = kcg_equ & (kcg_c1->d_ol == kcg_c2->d_ol);
  kcg_equ = kcg_equ & (kcg_c1->t_ol == kcg_c2->t_ol);
  kcg_equ = kcg_equ & (kcg_c1->d_startol == kcg_c2->d_startol);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & (kcg_c1->v_releasedp == kcg_c2->v_releasedp);
  kcg_equ = kcg_equ & (kcg_c1->d_dp == kcg_c2->d_dp);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstartloc ==
      kcg_c2->d_endtimerstartloc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_endsection == kcg_c2->l_endsection);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc_k ==
      kcg_c2->d_sectiontimerstoploc_k);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer_k == kcg_c2->t_sectiontimer_k);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer_k == kcg_c2->q_sectiontimer_k);
  kcg_equ = kcg_equ & (kcg_c1->l_section == kcg_c2->l_section);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80729(struct__80729 *kcg_c1, struct__80729 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_section == kcg_c2->l_section);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80740(struct__80740 *kcg_c1, struct__80740 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_releaseol == kcg_c2->v_releaseol);
  kcg_equ = kcg_equ & (kcg_c1->d_ol == kcg_c2->d_ol);
  kcg_equ = kcg_equ & (kcg_c1->t_ol == kcg_c2->t_ol);
  kcg_equ = kcg_equ & (kcg_c1->d_startol == kcg_c2->d_startol);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & (kcg_c1->v_releasedp == kcg_c2->v_releasedp);
  kcg_equ = kcg_equ & (kcg_c1->d_dp == kcg_c2->d_dp);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstartloc ==
      kcg_c2->d_endtimerstartloc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_endsection == kcg_c2->l_endsection);
  kcg_equ = kcg_equ & kcg_comp_array__80737(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80774(struct__80774 *kcg_c1, struct__80774 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_reverse == kcg_c2->v_reverse);
  kcg_equ = kcg_equ & (kcg_c1->d_reverse == kcg_c2->d_reverse);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80782(struct__80782 *kcg_c1, struct__80782 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_reversearea == kcg_c2->l_reversearea);
  kcg_equ = kcg_equ & (kcg_c1->d_startreverse == kcg_c2->d_startreverse);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80790(struct__80790 *kcg_c1, struct__80790 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_srstop == kcg_c2->q_srstop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80796(struct__80796 *kcg_c1, struct__80796 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_diff == kcg_c2->v_diff);
  kcg_equ = kcg_equ & (kcg_c1->nc_diff == kcg_c2->nc_diff);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80805(struct__80805 *kcg_c1, struct__80805 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80802(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_front == kcg_c2->q_front);
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->d_static == kcg_c2->d_static);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80817(struct__80817 *kcg_c1, struct__80817 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80814(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80824(struct__80824 *kcg_c1, struct__80824 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_diff == kcg_c2->v_diff);
  kcg_equ = kcg_equ & (kcg_c1->nc_diff == kcg_c2->nc_diff);
  kcg_equ = kcg_equ & (kcg_c1->nc_cddiff == kcg_c2->nc_cddiff);
  kcg_equ = kcg_equ & (kcg_c1->q_diff == kcg_c2->q_diff);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80835(struct__80835 *kcg_c1, struct__80835 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80832(
      &kcg_c1->diffArray,
      &kcg_c2->diffArray);
  kcg_equ = kcg_equ & (kcg_c1->q_front == kcg_c2->q_front);
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->d_static == kcg_c2->d_static);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80846(struct__80846 *kcg_c1, struct__80846 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80843(
      &kcg_c1->SSPArray,
      &kcg_c2->SSPArray);
  kcg_equ = kcg_equ & kcg_comp_array__80832(
      &kcg_c1->diffArray,
      &kcg_c2->diffArray);
  kcg_equ = kcg_equ & (kcg_c1->q_front == kcg_c2->q_front);
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->d_static == kcg_c2->d_static);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80857(struct__80857 *kcg_c1, struct__80857 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80866(struct__80866 *kcg_c1, struct__80866 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80876(struct__80876 *kcg_c1, struct__80876 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80885(struct__80885 *kcg_c1, struct__80885 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80882(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80898(struct__80898 *kcg_c1, struct__80898 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_ackleveltr == kcg_c2->l_ackleveltr);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->d_leveltr == kcg_c2->d_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80911(struct__80911 *kcg_c1, struct__80911 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_ackleveltr == kcg_c2->l_ackleveltr);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80921(struct__80921 *kcg_c1, struct__80921 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80918(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->d_leveltr == kcg_c2->d_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80930(struct__80930 *kcg_c1, struct__80930 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_releaseol == kcg_c2->v_releaseol);
  kcg_equ = kcg_equ & (kcg_c1->d_ol == kcg_c2->d_ol);
  kcg_equ = kcg_equ & (kcg_c1->t_ol == kcg_c2->t_ol);
  kcg_equ = kcg_equ & (kcg_c1->d_startol == kcg_c2->d_startol);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & (kcg_c1->v_releasedp == kcg_c2->v_releasedp);
  kcg_equ = kcg_equ & (kcg_c1->d_dp == kcg_c2->d_dp);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstartloc ==
      kcg_c2->d_endtimerstartloc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_endsection == kcg_c2->l_endsection);
  kcg_equ = kcg_equ & kcg_comp_array__80737(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_main == kcg_c2->v_main);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80959(struct__80959 *kcg_c1, struct__80959 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80964(struct__80964 *kcg_c1, struct__80964 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_NVCONTACT_Overpass ==
      kcg_c2->T_NVCONTACT_Overpass);
  kcg_equ = kcg_equ & (kcg_c1->Mess_6 == kcg_c2->Mess_6);
  kcg_equ = kcg_equ & (kcg_c1->Mess_28 == kcg_c2->Mess_28);
  kcg_equ = kcg_equ & (kcg_c1->Mess_27 == kcg_c2->Mess_27);
  kcg_equ = kcg_equ & (kcg_c1->Mess_2 == kcg_c2->Mess_2);
  kcg_equ = kcg_equ & (kcg_c1->Mess_16 == kcg_c2->Mess_16);
  kcg_equ = kcg_equ & (kcg_c1->Mess_15 == kcg_c2->Mess_15);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80974(struct__80974 *kcg_c1, struct__80974 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__80660(&kcg_c1->P_80, &kcg_c2->P_80);
  kcg_equ = kcg_equ & (kcg_c1->P_63 == kcg_c2->P_63);
  kcg_equ = kcg_equ & kcg_comp_array__80873(&kcg_c1->P_46, &kcg_c2->P_46);
  kcg_equ = kcg_equ & kcg_comp_array__80908(&kcg_c1->P_41, &kcg_c2->P_41);
  kcg_equ = kcg_equ & kcg_comp_struct__80846(&kcg_c1->P_27, &kcg_c2->P_27);
  kcg_equ = kcg_equ & kcg_comp_array__80672(&kcg_c1->P_21, &kcg_c2->P_21);
  kcg_equ = kcg_equ & kcg_comp_array__80726(&kcg_c1->P_15, &kcg_c2->P_15);
  kcg_equ = kcg_equ & kcg_comp_struct__80774(&kcg_c1->P_139, &kcg_c2->P_139);
  kcg_equ = kcg_equ & kcg_comp_struct__80782(&kcg_c1->P_138, &kcg_c2->P_138);
  kcg_equ = kcg_equ & kcg_comp_struct__80790(&kcg_c1->P_137, &kcg_c2->P_137);
  kcg_equ = kcg_equ & (kcg_c1->P_135 == kcg_c2->P_135);
  kcg_equ = kcg_equ & (kcg_c1->P_12 == kcg_c2->P_12);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80989(struct__80989 *kcg_c1, struct__80989 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_Gradient == kcg_c2->L_Gradient);
  kcg_equ = kcg_equ & (kcg_c1->Gradient == kcg_c2->Gradient);
  kcg_equ = kcg_equ & (kcg_c1->Loc_LRBG == kcg_c2->Loc_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Absolute == kcg_c2->Loc_Absolute);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__80997(struct__80997 *kcg_c1, struct__80997 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->gradient == kcg_c2->gradient);
  kcg_equ = kcg_equ & (kcg_c1->end_section == kcg_c2->end_section);
  kcg_equ = kcg_equ & (kcg_c1->begin_section == kcg_c2->begin_section);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81013(struct__81013 *kcg_c1, struct__81013 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_nvdriver_adhes == kcg_c2->q_nvdriver_adhes);
  kcg_equ = kcg_equ & (kcg_c1->d_nvstff == kcg_c2->d_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->m_nvderun == kcg_c2->m_nvderun);
  kcg_equ = kcg_equ & (kcg_c1->t_nvcontact == kcg_c2->t_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->m_nvcontact == kcg_c2->m_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->d_nvpotrp == kcg_c2->d_nvpotrp);
  kcg_equ = kcg_equ & (kcg_c1->t_nvovtrp == kcg_c2->t_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->d_nvovtrp == kcg_c2->d_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvsopovtrp == kcg_c2->v_nvsopovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvallowovtrp == kcg_c2->v_nvallowovtrp);
  kcg_equ = kcg_equ & (kcg_c1->q_nvemrrls == kcg_c2->q_nvemrrls);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbtsmperm == kcg_c2->q_nvsbtsmperm);
  kcg_equ = kcg_equ & (kcg_c1->d_nvroll == kcg_c2->d_nvroll);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  kcg_equ = kcg_equ & (kcg_c1->v_nvunfit == kcg_c2->v_nvunfit);
  kcg_equ = kcg_equ & (kcg_c1->v_nvonsight == kcg_c2->v_nvonsight);
  kcg_equ = kcg_equ & (kcg_c1->v_nvstff == kcg_c2->v_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->v_nvshunt == kcg_c2->v_nvshunt);
  kcg_equ = kcg_equ & kcg_comp_array__81010(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->d_validnv == kcg_c2->d_validnv);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81046(struct__81046 *kcg_c1, struct__81046 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_section == kcg_c2->l_section);
  kcg_equ = kcg_equ & (kcg_c1->q_endsection == kcg_c2->q_endsection);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81055(struct__81055 *kcg_c1, struct__81055 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstoploc == kcg_c2->d_endtimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81060(struct__81060 *kcg_c1, struct__81060 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->calc_v_release_onboard ==
      kcg_c2->calc_v_release_onboard);
  kcg_equ = kcg_equ & (kcg_c1->v_release == kcg_c2->v_release);
  kcg_equ = kcg_equ & (kcg_c1->d_DP_or_OL == kcg_c2->d_DP_or_OL);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81069(struct__81069 *kcg_c1, struct__81069 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81055(
      &kcg_c1->endtimer_t,
      &kcg_c2->endtimer_t);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & kcg_comp_struct__81060(
      &kcg_c1->overlap,
      &kcg_c2->overlap);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & kcg_comp_struct__81060(
      &kcg_c1->dangerpoint,
      &kcg_c2->dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & kcg_comp_array__81066(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->t_loa_unlimited == kcg_c2->t_loa_unlimited);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_main == kcg_c2->v_main);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->Level == kcg_c2->Level);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81087(struct__81087 *kcg_c1, struct__81087 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->target == kcg_c2->target);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81098(struct__81098 *kcg_c1, struct__81098 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Loc == kcg_c2->Loc);
  kcg_equ = kcg_equ & (kcg_c1->Pos_Index == kcg_c2->Pos_Index);
  kcg_equ = kcg_equ & (kcg_c1->Category_Index == kcg_c2->Category_Index);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81113(struct__81113 *kcg_c1, struct__81113 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Index == kcg_c2->Index);
  kcg_equ = kcg_equ & (kcg_c1->Found == kcg_c2->Found);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81118(struct__81118 *kcg_c1, struct__81118 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->target == kcg_c2->target);
  kcg_equ = kcg_equ & (kcg_c1->index == kcg_c2->index);
  kcg_equ = kcg_equ & (kcg_c1->found == kcg_c2->found);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81124(struct__81124 *kcg_c1, struct__81124 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->target == kcg_c2->target);
  kcg_equ = kcg_equ & (kcg_c1->index == kcg_c2->index);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81129(struct__81129 *kcg_c1, struct__81129 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MRS == kcg_c2->MRS);
  kcg_equ = kcg_equ & (kcg_c1->Loc_LRBG == kcg_c2->Loc_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Abs == kcg_c2->Loc_Abs);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81136(struct__81136 *kcg_c1, struct__81136 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Loc == kcg_c2->Loc);
  kcg_equ = kcg_equ & (kcg_c1->Index == kcg_c2->Index);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81147(struct__81147 *kcg_c1, struct__81147 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvktint == kcg_c2->m_nvktint);
  kcg_equ = kcg_equ & kcg_comp_array__80217(
      &kcg_c1->n_iter_l_list,
      &kcg_c2->n_iter_l_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_l == kcg_c2->n_iter_l);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint == kcg_c2->m_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint == kcg_c2->l_nvkrint);
  kcg_equ = kcg_equ & kcg_comp_array__80242(
      &kcg_c1->n_iter_k_list,
      &kcg_c2->n_iter_k_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_k == kcg_c2->n_iter_k);
  kcg_equ = kcg_equ & kcg_comp_array__80252(
      &kcg_c1->n_iter_n_list,
      &kcg_c2->n_iter_n_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_n == kcg_c2->n_iter_n);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_23 == kcg_c2->m_nvkvint_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_12 == kcg_c2->m_nvkvint_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint == kcg_c2->v_nvkvint);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp23 == kcg_c2->a_nvp23);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp12 == kcg_c2->a_nvp12);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkvintset == kcg_c2->q_nvkvintset);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkint == kcg_c2->q_nvkint);
  kcg_equ = kcg_equ & (kcg_c1->m_nvebcl == kcg_c2->m_nvebcl);
  kcg_equ = kcg_equ & (kcg_c1->m_nvavadh == kcg_c2->m_nvavadh);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh3 == kcg_c2->a_nvmaxredadh3);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh2 == kcg_c2->a_nvmaxredadh2);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh1 == kcg_c2->a_nvmaxredadh1);
  kcg_equ = kcg_equ & (kcg_c1->q_nvdriver_adhes == kcg_c2->q_nvdriver_adhes);
  kcg_equ = kcg_equ & (kcg_c1->d_nvstff == kcg_c2->d_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->m_nvderun == kcg_c2->m_nvderun);
  kcg_equ = kcg_equ & (kcg_c1->t_nvcontact == kcg_c2->t_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->m_nvcontact == kcg_c2->m_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->d_nvpotrp == kcg_c2->d_nvpotrp);
  kcg_equ = kcg_equ & (kcg_c1->t_nvovtrp == kcg_c2->t_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->d_nvovtrp == kcg_c2->d_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvsupovtrp == kcg_c2->v_nvsupovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvallowovtrp == kcg_c2->v_nvallowovtrp);
  kcg_equ = kcg_equ & (kcg_c1->q_nvinhsnicperm == kcg_c2->q_nvinhsnicperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbfbperm == kcg_c2->q_nvsbfbperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvguiperm == kcg_c2->q_nvguiperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvemrrls == kcg_c2->q_nvemrrls);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbtsmperm == kcg_c2->q_nvsbtsmperm);
  kcg_equ = kcg_equ & (kcg_c1->d_nvroll == kcg_c2->d_nvroll);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  kcg_equ = kcg_equ & (kcg_c1->v_nvunfit == kcg_c2->v_nvunfit);
  kcg_equ = kcg_equ & (kcg_c1->v_nvlimsuperv == kcg_c2->v_nvlimsuperv);
  kcg_equ = kcg_equ & (kcg_c1->v_nvonsight == kcg_c2->v_nvonsight);
  kcg_equ = kcg_equ & (kcg_c1->v_nvstff == kcg_c2->v_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->v_nvshunt == kcg_c2->v_nvshunt);
  kcg_equ = kcg_equ & kcg_comp_array__81010(
      &kcg_c1->nid_c_list,
      &kcg_c2->nid_c_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_nid_c == kcg_c2->n_iter_nid_c);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->d_validnv == kcg_c2->d_validnv);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81202(struct__81202 *kcg_c1, struct__81202 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->xNID_TEXTMESSAGE == kcg_c2->xNID_TEXTMESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->xQ_EMERGENCYSTOP == kcg_c2->xQ_EMERGENCYSTOP);
  kcg_equ = kcg_equ & (kcg_c1->xNID_EM == kcg_c2->xNID_EM);
  kcg_equ = kcg_equ & (kcg_c1->xT_TRAIN == kcg_c2->xT_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->xQ_MARQSTREASON == kcg_c2->xQ_MARQSTREASON);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81214(struct__81214 *kcg_c1, struct__81214 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ctraction == kcg_c2->nid_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->m_voltage == kcg_c2->m_voltage);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81222(struct__81222 *kcg_c1, struct__81222 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_int_3(&kcg_c1->nid_ntc, &kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->nIter_ntc == kcg_c2->nIter_ntc);
  kcg_equ = kcg_equ & kcg_comp_array__81219(
      &kcg_c1->tractionIdentity,
      &kcg_c2->tractionIdentity);
  kcg_equ = kcg_equ & (kcg_c1->nIter_tractionIdentity ==
      kcg_c2->nIter_tractionIdentity);
  kcg_equ = kcg_equ & (kcg_c1->n_axle == kcg_c2->n_axle);
  kcg_equ = kcg_equ & (kcg_c1->m_airtight == kcg_c2->m_airtight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleloadcat == kcg_c2->m_axleloadcat);
  kcg_equ = kcg_equ & (kcg_c1->m_loadinggoage == kcg_c2->m_loadinggoage);
  kcg_equ = kcg_equ & (kcg_c1->v_maxtrain == kcg_c2->v_maxtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->NC_TRAIN == kcg_c2->NC_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->NC_CDTRAIN == kcg_c2->NC_CDTRAIN);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81238(struct__81238 *kcg_c1, struct__81238 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->transitionInformation ==
      kcg_c2->transitionInformation);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81243(struct__81243 *kcg_c1, struct__81243 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainRunningNumber ==
      kcg_c2->TrainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81248(struct__81248 *kcg_c1, struct__81248 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_ERROR == kcg_c2->M_ERROR);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81253(struct__81253 *kcg_c1, struct__81253 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_int_15(
      &kcg_c1->telephoneNumber,
      &kcg_c2->telephoneNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81261(struct__81261 *kcg_c1, struct__81261 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__81258(
      &kcg_c1->aNID_RADIO,
      &kcg_c2->aNID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81267(struct__81267 *kcg_c1, struct__81267 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->dirtrain == kcg_c2->dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN == kcg_c2->V_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAININT == kcg_c2->L_TRAININT);
  kcg_equ = kcg_equ & (kcg_c1->length == kcg_c2->length);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTUNDER == kcg_c2->L_DOUBTUNDER);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTOVER == kcg_c2->L_DOUBTOVER);
  kcg_equ = kcg_equ & (kcg_c1->dlrbg == kcg_c2->dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->dirlrbg == kcg_c2->dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->D_LRBG == kcg_c2->D_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_PRVLRBG == kcg_c2->NID_PRVLRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81287(struct__81287 *kcg_c1, struct__81287 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81267(
      &kcg_c1->packet1,
      &kcg_c2->packet1);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81292(struct__81292 *kcg_c1, struct__81292 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->dirtrain == kcg_c2->dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN == kcg_c2->V_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAININT == kcg_c2->L_TRAININT);
  kcg_equ = kcg_equ & (kcg_c1->length == kcg_c2->length);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTUNDER == kcg_c2->L_DOUBTUNDER);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTOVER == kcg_c2->L_DOUBTOVER);
  kcg_equ = kcg_equ & (kcg_c1->dlrbg == kcg_c2->dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->dirlrbg == kcg_c2->dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->D_LRBG == kcg_c2->D_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81311(struct__81311 *kcg_c1, struct__81311 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81292(
      &kcg_c1->packet0,
      &kcg_c2->packet0);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81316(struct__81316 *kcg_c1, struct__81316 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81222(&kcg_c1->p11, &kcg_c2->p11);
  kcg_equ = kcg_equ & kcg_comp_struct__81238(&kcg_c1->p9, &kcg_c2->p9);
  kcg_equ = kcg_equ & kcg_comp_struct__81243(&kcg_c1->p5, &kcg_c2->p5);
  kcg_equ = kcg_equ & kcg_comp_struct__81248(&kcg_c1->p4, &kcg_c2->p4);
  kcg_equ = kcg_equ & kcg_comp_struct__81261(&kcg_c1->p3, &kcg_c2->p3);
  kcg_equ = kcg_equ & kcg_comp_struct__81287(&kcg_c1->p1, &kcg_c2->p1);
  kcg_equ = kcg_equ & kcg_comp_struct__81311(&kcg_c1->p0, &kcg_c2->p0);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81326(struct__81326 *kcg_c1, struct__81326 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81316(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct__81202(&kcg_c1->header, &kcg_c2->header);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81332(struct__81332 *kcg_c1, struct__81332 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->driverSelectsStart ==
      kcg_c2->driverSelectsStart);
  kcg_equ = kcg_equ & (kcg_c1->trackAheadFree == kcg_c2->trackAheadFree);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81337(struct__81337 *kcg_c1, struct__81337 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_cycrqst == kcg_c2->t_cycrqst);
  kcg_equ = kcg_equ & (kcg_c1->t_timeoutrqst == kcg_c2->t_timeoutrqst);
  kcg_equ = kcg_equ & (kcg_c1->t_mar == kcg_c2->t_mar);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81345(struct__81345 *kcg_c1, struct__81345 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80846(&kcg_c1->p27, &kcg_c2->p27);
  kcg_equ = kcg_equ & kcg_comp_array__80672(&kcg_c1->p21, &kcg_c2->p21);
  kcg_equ = kcg_equ & kcg_comp_array__80726(&kcg_c1->p15, &kcg_c2->p15);
  kcg_equ = kcg_equ & (kcg_c1->p12 == kcg_c2->p12);
  kcg_equ = kcg_equ & kcg_comp_struct__80964(
      &kcg_c1->train_messages,
      &kcg_c2->train_messages);
  kcg_equ = kcg_equ & kcg_comp_struct__80974(
      &kcg_c1->train_packets,
      &kcg_c2->train_packets);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81354(struct__81354 *kcg_c1, struct__81354 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__81144(&kcg_c1->MRSP, &kcg_c2->MRSP);
  kcg_equ = kcg_equ & (kcg_c1->freshMRSP == kcg_c2->freshMRSP);
  kcg_equ = kcg_equ & kcg_comp_array__81004(
      &kcg_c1->GradientProfile,
      &kcg_c2->GradientProfile);
  kcg_equ = kcg_equ & (kcg_c1->freshGradientProfile ==
      kcg_c2->freshGradientProfile);
  kcg_equ = kcg_equ & kcg_comp_struct__81069(&kcg_c1->MA, &kcg_c2->MA);
  kcg_equ = kcg_equ & (kcg_c1->freshMA == kcg_c2->freshMA);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81363(struct__81363 *kcg_c1, struct__81363 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MRSP_updated == kcg_c2->MRSP_updated);
  kcg_equ = kcg_equ & kcg_comp_array__81144(&kcg_c1->MRSP, &kcg_c2->MRSP);
  kcg_equ = kcg_equ & (kcg_c1->Gradient_profile_updated ==
      kcg_c2->Gradient_profile_updated);
  kcg_equ = kcg_equ & kcg_comp_array__81007(
      &kcg_c1->GradientProfile,
      &kcg_c2->GradientProfile);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81370(struct__81370 *kcg_c1, struct__81370 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Mode == kcg_c2->Mode);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81376(struct__81376 *kcg_c1, struct__81376 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_stm == kcg_c2->nid_stm);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81384(struct__81384 *kcg_c1, struct__81384 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__81381(
      &kcg_c1->levelList,
      &kcg_c2->levelList);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81389(struct__81389 *kcg_c1, struct__81389 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81384(
      &kcg_c1->availableLevelsList,
      &kcg_c2->availableLevelsList);
  kcg_equ = kcg_equ & (kcg_c1->lastActiveNTC == kcg_c2->lastActiveNTC);
  kcg_equ = kcg_equ & (kcg_c1->lastActiveLevel == kcg_c2->lastActiveLevel);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81396(struct__81396 *kcg_c1, struct__81396 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MoRCreadyFlag == kcg_c2->MoRCreadyFlag);
  kcg_equ = kcg_equ & (kcg_c1->approachingRBCarea ==
      kcg_c2->approachingRBCarea);
  kcg_equ = kcg_equ & (kcg_c1->safeRadioConnectionLost ==
      kcg_c2->safeRadioConnectionLost);
  kcg_equ = kcg_equ & (kcg_c1->communicationSessionEstablished ==
      kcg_c2->communicationSessionEstablished);
  kcg_equ = kcg_equ & (kcg_c1->driverRequestModify ==
      kcg_c2->driverRequestModify);
  kcg_equ = kcg_equ & (kcg_c1->trainStandStill == kcg_c2->trainStandStill);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81405(struct__81405 *kcg_c1, struct__81405 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainLengthIncreased ==
      kcg_c2->trainLengthIncreased);
  kcg_equ = kcg_equ & (kcg_c1->deleteMA == kcg_c2->deleteMA);
  kcg_equ = kcg_equ & (kcg_c1->shortenLocationBasedInformation ==
      kcg_c2->shortenLocationBasedInformation);
  kcg_equ = kcg_equ & (kcg_c1->driverRequestModify ==
      kcg_c2->driverRequestModify);
  kcg_equ = kcg_equ & (kcg_c1->brakeTrigger == kcg_c2->brakeTrigger);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81413(struct__81413 *kcg_c1, struct__81413 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->timeStampValidateToRBC ==
      kcg_c2->timeStampValidateToRBC);
  kcg_equ = kcg_equ & (kcg_c1->driverIsModificationTrainData ==
      kcg_c2->driverIsModificationTrainData);
  kcg_equ = kcg_equ & (kcg_c1->watingForRBCResponse ==
      kcg_c2->watingForRBCResponse);
  kcg_equ = kcg_equ & (kcg_c1->validatedbyRBC == kcg_c2->validatedbyRBC);
  kcg_equ = kcg_equ & (kcg_c1->validatedByDriver == kcg_c2->validatedByDriver);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81422(struct__81422 *kcg_c1, struct__81422 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__81219(
      &kcg_c1->tractionSystem,
      &kcg_c2->tractionSystem);
  kcg_equ = kcg_equ & (kcg_c1->numberTractionSystems ==
      kcg_c2->numberTractionSystems);
  kcg_equ = kcg_equ & kcg_comp_array_int_3(
      &kcg_c1->nationSystems,
      &kcg_c2->nationSystems);
  kcg_equ = kcg_equ & (kcg_c1->numberNationalSystems ==
      kcg_c2->numberNationalSystems);
  kcg_equ = kcg_equ & (kcg_c1->axleNumber == kcg_c2->axleNumber);
  kcg_equ = kcg_equ & (kcg_c1->airtightSystem == kcg_c2->airtightSystem);
  kcg_equ = kcg_equ & (kcg_c1->axleLoadCategory == kcg_c2->axleLoadCategory);
  kcg_equ = kcg_equ & (kcg_c1->loadingGauge == kcg_c2->loadingGauge);
  kcg_equ = kcg_equ & (kcg_c1->maxTrainSpeed == kcg_c2->maxTrainSpeed);
  kcg_equ = kcg_equ & (kcg_c1->brakePerctage == kcg_c2->brakePerctage);
  kcg_equ = kcg_equ & (kcg_c1->trainLength == kcg_c2->trainLength);
  kcg_equ = kcg_equ & (kcg_c1->cantDeficientcy == kcg_c2->cantDeficientcy);
  kcg_equ = kcg_equ & (kcg_c1->trainCategory == kcg_c2->trainCategory);
  kcg_equ = kcg_equ & (kcg_c1->acknowledgedByDriver ==
      kcg_c2->acknowledgedByDriver);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81440(struct__81440 *kcg_c1, struct__81440 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_loadingGauge == kcg_c2->m_loadingGauge);
  kcg_equ = kcg_equ & (kcg_c1->m_airTight == kcg_c2->m_airTight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleLoad == kcg_c2->m_axleLoad);
  kcg_equ = kcg_equ & (kcg_c1->v_maxTrain == kcg_c2->v_maxTrain);
  kcg_equ = kcg_equ & (kcg_c1->m_brakeperct == kcg_c2->m_brakeperct);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->trainCategory == kcg_c2->trainCategory);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81452(struct__81452 *kcg_c1, struct__81452 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledged == kcg_c2->acknowledged);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81458(struct__81458 *kcg_c1, struct__81458 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainRunningNumber ==
      kcg_c2->trainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81464(struct__81464 *kcg_c1, struct__81464 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->now == kcg_c2->now);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81469(struct__81469 *kcg_c1, struct__81469 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_trackcond == kcg_c2->m_trackcond);
  kcg_equ = kcg_equ & kcg_comp_struct__81464(
      &kcg_c1->l_test_trackcond,
      &kcg_c2->l_test_trackcond);
  kcg_equ = kcg_equ & kcg_comp_struct__81464(
      &kcg_c1->d_test_trackcond,
      &kcg_c2->d_test_trackcond);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81475(struct__81475 *kcg_c1, struct__81475 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81464(
      &kcg_c1->empty_profile_initial_state_to_be_resumed,
      &kcg_c2->empty_profile_initial_state_to_be_resumed);
  kcg_equ = kcg_equ & kcg_comp_struct__81469(
      &kcg_c1->nothing_to_resume_profile_follow,
      &kcg_c2->nothing_to_resume_profile_follow);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81481(struct__81481 *kcg_c1, struct__81481 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->pressure == kcg_c2->pressure);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81486(struct__81486 *kcg_c1, struct__81486 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_additionalbrake_st ==
      kcg_c2->m_additionalbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_electropneumaticbrake_st ==
      kcg_c2->m_electropneumaticbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_magneticshoebrake_st ==
      kcg_c2->m_magneticshoebrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_eddycurrentbrake_st ==
      kcg_c2->m_eddycurrentbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_regenerativebrake_st ==
      kcg_c2->m_regenerativebrake_st);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81495(struct__81495 *kcg_c1, struct__81495 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_traction_st == kcg_c2->m_traction_st);
  kcg_equ = kcg_equ & (kcg_c1->m_trainintegrity_st ==
      kcg_c2->m_trainintegrity_st);
  kcg_equ = kcg_equ & (kcg_c1->m_directioncontroller_st ==
      kcg_c2->m_directioncontroller_st);
  kcg_equ = kcg_equ & (kcg_c1->m_cab_st == kcg_c2->m_cab_st);
  kcg_equ = kcg_equ & (kcg_c1->m_nonleading_st == kcg_c2->m_nonleading_st);
  kcg_equ = kcg_equ & (kcg_c1->m_passiveshunting_st ==
      kcg_c2->m_passiveshunting_st);
  kcg_equ = kcg_equ & (kcg_c1->m_sleeping_st == kcg_c2->m_sleeping_st);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81506(struct__81506 *kcg_c1, struct__81506 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81475(
      &kcg_c1->type_I_train_and_brake_inhibition,
      &kcg_c2->type_I_train_and_brake_inhibition);
  kcg_equ = kcg_equ & kcg_comp_struct__81422(
      &kcg_c1->train_data_info,
      &kcg_c2->train_data_info);
  kcg_equ = kcg_equ & (kcg_c1->train_data_entry_type ==
      kcg_c2->train_data_entry_type);
  kcg_equ = kcg_equ & kcg_comp_struct__81481(
      &kcg_c1->brake_pressure,
      &kcg_c2->brake_pressure);
  kcg_equ = kcg_equ & kcg_comp_struct__81486(
      &kcg_c1->brake_status,
      &kcg_c2->brake_status);
  kcg_equ = kcg_equ & kcg_comp_struct__81495(
      &kcg_c1->train_status,
      &kcg_c2->train_status);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81515(struct__81515 *kcg_c1, struct__81515 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->activeCab == kcg_c2->activeCab);
  kcg_equ = kcg_equ & (kcg_c1->ownCab == kcg_c2->ownCab);
  kcg_equ = kcg_equ & (kcg_c1->deskOpen == kcg_c2->deskOpen);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81522(struct__81522 *kcg_c1, struct__81522 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81506(&kcg_c1->info, &kcg_c2->info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81527(struct__81527 *kcg_c1, struct__81527 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->errorType == kcg_c2->errorType);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81532(struct__81532 *kcg_c1, struct__81532 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->levelTransitionBorderPassed ==
      kcg_c2->levelTransitionBorderPassed);
  kcg_equ = kcg_equ & (kcg_c1->currLevel == kcg_c2->currLevel);
  kcg_equ = kcg_equ & (kcg_c1->currMode == kcg_c2->currMode);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81538(struct__81538 *kcg_c1, struct__81538 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81543(struct__81543 *kcg_c1, struct__81543 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->location,
      &kcg_c2->location);
  kcg_equ = kcg_equ & (kcg_c1->nidBG == kcg_c2->nidBG);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81552(struct__81552 *kcg_c1, struct__81552 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->newSessionEstablished ==
      kcg_c2->newSessionEstablished);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81556(struct__81556 *kcg_c1, struct__81556 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->maxSafeFrontEndPassed ==
      kcg_c2->maxSafeFrontEndPassed);
  kcg_equ = kcg_equ & (kcg_c1->minSafeRearEndPassed ==
      kcg_c2->minSafeRearEndPassed);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81561(struct__81561 *kcg_c1, struct__81561 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_lgtloc == kcg_c2->q_lgtloc);
  kcg_equ = kcg_equ & (kcg_c1->d_loc == kcg_c2->d_loc);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81569(struct__81569 *kcg_c1, struct__81569 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__81566(
      &kcg_c1->iterPacket58List,
      &kcg_c2->iterPacket58List);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->m_loc == kcg_c2->m_loc);
  kcg_equ = kcg_equ & (kcg_c1->d_cycloc == kcg_c2->d_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->t_cycloc == kcg_c2->t_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81582(struct__81582 *kcg_c1, struct__81582 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_lgtloc == kcg_c2->q_lgtloc);
  kcg_equ = kcg_equ & (kcg_c1->d_loc == kcg_c2->d_loc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81591(struct__81591 *kcg_c1, struct__81591 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__81588(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->m_loc == kcg_c2->m_loc);
  kcg_equ = kcg_equ & (kcg_c1->d_cycloc == kcg_c2->d_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->t_cycloc == kcg_c2->t_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81605(struct__81605 *kcg_c1, struct__81605 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80463(
      &kcg_c1->sendingRBC_Id,
      &kcg_c2->sendingRBC_Id);
  kcg_equ = kcg_equ & kcg_comp_struct__80451(
      &kcg_c1->Radio_MetaData,
      &kcg_c2->Radio_MetaData);
  kcg_equ = kcg_equ & kcg_comp_struct__80433(
      &kcg_c1->Radio_Common_Header,
      &kcg_c2->Radio_Common_Header);
  kcg_equ = kcg_equ & (kcg_c1->apiConsistencyError ==
      kcg_c2->apiConsistencyError);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81613(struct__81613 *kcg_c1, struct__81613 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->m_dup == kcg_c2->m_dup);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->n_pig == kcg_c2->n_pig);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81626(struct__81626 *kcg_c1, struct__81626 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80493(
      &kcg_c1->BG_centerDetectionInaccuraccuracies,
      &kcg_c2->BG_centerDetectionInaccuraccuracies);
  kcg_equ = kcg_equ & kcg_comp_struct__80483(
      &kcg_c1->odometerOfBaliseDetection,
      &kcg_c2->odometerOfBaliseDetection);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81631(struct__81631 *kcg_c1, struct__81631 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80463(
      &kcg_c1->sendingRBC_Id,
      &kcg_c2->sendingRBC_Id);
  kcg_equ = kcg_equ & kcg_comp_struct__81626(
      &kcg_c1->centerOfBalisePosition,
      &kcg_c2->centerOfBalisePosition);
  kcg_equ = kcg_equ & kcg_comp_struct__81613(
      &kcg_c1->api_header,
      &kcg_c2->api_header);
  kcg_equ = kcg_equ & (kcg_c1->api_bad_balise_received ==
      kcg_c2->api_bad_balise_received);
  kcg_equ = kcg_equ & (kcg_c1->checkResult == kcg_c2->checkResult);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81640(struct__81640 *kcg_c1, struct__81640 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80399(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct__81605(
      &kcg_c1->rtm_msg,
      &kcg_c2->rtm_msg);
  kcg_equ = kcg_equ & kcg_comp_struct__81631(
      &kcg_c1->btm_msg,
      &kcg_c2->btm_msg);
  kcg_equ = kcg_equ & (kcg_c1->msg_type == kcg_c2->msg_type);
  kcg_equ = kcg_equ & (kcg_c1->systemTimeMsgReceived ==
      kcg_c2->systemTimeMsgReceived);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81649(struct__81649 *kcg_c1, struct__81649 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->P27_received == kcg_c2->P27_received);
  kcg_equ = kcg_equ & (kcg_c1->P21_received == kcg_c2->P21_received);
  kcg_equ = kcg_equ & (kcg_c1->P15_received == kcg_c2->P15_received);
  kcg_equ = kcg_equ & (kcg_c1->P12_received == kcg_c2->P12_received);
  kcg_equ = kcg_equ & (kcg_c1->referenceLocation == kcg_c2->referenceLocation);
  kcg_equ = kcg_equ & (kcg_c1->LRBG == kcg_c2->LRBG);
  kcg_equ = kcg_equ & kcg_comp_array__80873(&kcg_c1->P46, &kcg_c2->P46);
  kcg_equ = kcg_equ & kcg_comp_array__80908(&kcg_c1->P41, &kcg_c2->P41);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81660(struct__81660 *kcg_c1, struct__81660 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MACoverNotFullLength ==
      kcg_c2->MACoverNotFullLength);
  kcg_equ = kcg_equ & (kcg_c1->SPPAndGradientOnBoard ==
      kcg_c2->SPPAndGradientOnBoard);
  kcg_equ = kcg_equ & (kcg_c1->pendingNTCTransition ==
      kcg_c2->pendingNTCTransition);
  kcg_equ = kcg_equ & (kcg_c1->lastAckTextMessageId ==
      kcg_c2->lastAckTextMessageId);
  kcg_equ = kcg_equ & (kcg_c1->emergencyStopAccepted ==
      kcg_c2->emergencyStopAccepted);
  kcg_equ = kcg_equ & (kcg_c1->pendingAckOfTrainDataFromRBC ==
      kcg_c2->pendingAckOfTrainDataFromRBC);
  kcg_equ = kcg_equ & (kcg_c1->pendingL12L3Transition ==
      kcg_c2->pendingL12L3Transition);
  kcg_equ = kcg_equ & (kcg_c1->pendingL1Transition ==
      kcg_c2->pendingL1Transition);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81671(struct__81671 *kcg_c1, struct__81671 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_errorbg == kcg_c2->nid_errorbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->radioMessageConsistencyError ==
      kcg_c2->radioMessageConsistencyError);
  kcg_equ = kcg_equ & (kcg_c1->otherTimingError == kcg_c2->otherTimingError);
  kcg_equ = kcg_equ & (kcg_c1->tNvContactError == kcg_c2->tNvContactError);
  kcg_equ = kcg_equ & (kcg_c1->radioSequenceError ==
      kcg_c2->radioSequenceError);
  kcg_equ = kcg_equ & (kcg_c1->BG_versionIncompatible ==
      kcg_c2->BG_versionIncompatible);
  kcg_equ = kcg_equ & (kcg_c1->unlinkedBGError == kcg_c2->unlinkedBGError);
  kcg_equ = kcg_equ & (kcg_c1->linkedBGError == kcg_c2->linkedBGError);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81701(struct__81701 *kcg_c1, struct__81701 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80463(
      &kcg_c1->sendingRBC,
      &kcg_c2->sendingRBC);
  kcg_equ = kcg_equ & kcg_comp_struct__80399(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct__80451(
      &kcg_c1->radioMetadata,
      &kcg_c2->radioMetadata);
  kcg_equ = kcg_equ & kcg_comp_struct__80433(&kcg_c1->header, &kcg_c2->header);
  kcg_equ = kcg_equ & (kcg_c1->consistencyError == kcg_c2->consistencyError);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81710(struct__81710 *kcg_c1, struct__81710 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80399(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct__81613(
      &kcg_c1->telegramheader,
      &kcg_c2->telegramheader);
  kcg_equ = kcg_equ & (kcg_c1->checkResult == kcg_c2->checkResult);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81720(struct__81720 *kcg_c1, struct__81720 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81626(
      &kcg_c1->centerOfBalisePosition,
      &kcg_c2->centerOfBalisePosition);
  kcg_equ = kcg_equ & (kcg_c1->numberBalises == kcg_c2->numberBalises);
  kcg_equ = kcg_equ & kcg_comp_array__81717(
      &kcg_c1->Telegrams,
      &kcg_c2->Telegrams);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81727(struct__81727 *kcg_c1, struct__81727 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81701(
      &kcg_c1->radio_Msg,
      &kcg_c2->radio_Msg);
  kcg_equ = kcg_equ & kcg_comp_struct__81720(
      &kcg_c1->telegramHeaders,
      &kcg_c2->telegramHeaders);
  kcg_equ = kcg_equ & (kcg_c1->msg_type == kcg_c2->msg_type);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81735(struct__81735 *kcg_c1, struct__81735 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->totalTelegrams == kcg_c2->totalTelegrams);
  kcg_equ = kcg_equ & (kcg_c1->collectedTelegrams ==
      kcg_c2->collectedTelegrams);
  kcg_equ = kcg_equ & kcg_comp_struct__81626(
      &kcg_c1->positionFirstContact,
      &kcg_c2->positionFirstContact);
  kcg_equ = kcg_equ & kcg_comp_struct__81626(
      &kcg_c1->balisePosition,
      &kcg_c2->balisePosition);
  kcg_equ = kcg_equ & (kcg_c1->BG_ID == kcg_c2->BG_ID);
  kcg_equ = kcg_equ & (kcg_c1->C_ID == kcg_c2->C_ID);
  kcg_equ = kcg_equ & (kcg_c1->BGMessageSent == kcg_c2->BGMessageSent);
  kcg_equ = kcg_equ & (kcg_c1->badBaliseFlag == kcg_c2->badBaliseFlag);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81746(struct__81746 *kcg_c1, struct__81746 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81626(
      &kcg_c1->position,
      &kcg_c2->position);
  kcg_equ = kcg_equ & kcg_comp_struct__81710(
      &kcg_c1->telegram,
      &kcg_c2->telegram);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81752(struct__81752 *kcg_c1, struct__81752 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_request == kcg_c2->m_request);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81758(struct__81758 *kcg_c1, struct__81758 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->transitionType == kcg_c2->transitionType);
  kcg_equ = kcg_equ & (kcg_c1->position == kcg_c2->position);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81764(struct__81764 *kcg_c1, struct__81764 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81376(&kcg_c1->level, &kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81770(struct__81770 *kcg_c1, struct__81770 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->referenceLocation == kcg_c2->referenceLocation);
  kcg_equ = kcg_equ & (kcg_c1->LRBG == kcg_c2->LRBG);
  kcg_equ = kcg_equ & kcg_comp_struct__81758(
      &kcg_c1->transition,
      &kcg_c2->transition);
  kcg_equ = kcg_equ & (kcg_c1->is_set == kcg_c2->is_set);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81777(struct__81777 *kcg_c1, struct__81777 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ETCS_Isolated == kcg_c2->ETCS_Isolated);
  kcg_equ = kcg_equ & (kcg_c1->Req_Start == kcg_c2->Req_Start);
  kcg_equ = kcg_equ & (kcg_c1->Req_SH == kcg_c2->Req_SH);
  kcg_equ = kcg_equ & (kcg_c1->Req_Override == kcg_c2->Req_Override);
  kcg_equ = kcg_equ & (kcg_c1->Req_NL == kcg_c2->Req_NL);
  kcg_equ = kcg_equ & (kcg_c1->Req_Exit_SH == kcg_c2->Req_Exit_SH);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81787(struct__81787 *kcg_c1, struct__81787 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->whichMode == kcg_c2->whichMode);
  kcg_equ = kcg_equ & (kcg_c1->whichLevel == kcg_c2->whichLevel);
  kcg_equ = kcg_equ & (kcg_c1->nid_textmessage == kcg_c2->nid_textmessage);
  kcg_equ = kcg_equ & (kcg_c1->context == kcg_c2->context);
  kcg_equ = kcg_equ & (kcg_c1->textReport == kcg_c2->textReport);
  kcg_equ = kcg_equ & (kcg_c1->timeStamp == kcg_c2->timeStamp);
  kcg_equ = kcg_equ & (kcg_c1->dmi_textMessageID == kcg_c2->dmi_textMessageID);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81801(struct__81801 *kcg_c1, struct__81801 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledgement == kcg_c2->acknowledgement);
  kcg_equ = kcg_equ & (kcg_c1->whichMode == kcg_c2->whichMode);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81807(struct__81807 *kcg_c1, struct__81807 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->LevelAck == kcg_c2->LevelAck);
  kcg_equ = kcg_equ & kcg_comp_struct__81777(
      &kcg_c1->DriverRequest,
      &kcg_c2->DriverRequest);
  kcg_equ = kcg_equ & kcg_comp_struct__81801(
      &kcg_c1->DriverAck,
      &kcg_c2->DriverAck);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81814(struct__81814 *kcg_c1, struct__81814 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledged == kcg_c2->acknowledged);
  kcg_equ = kcg_equ & (kcg_c1->textMessage_ID == kcg_c2->textMessage_ID);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81821(struct__81821 *kcg_c1, struct__81821 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_identifier ==
      kcg_c2->DMI_nid_icon_identifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81827(struct__81827 *kcg_c1, struct__81827 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->adhesionFactor == kcg_c2->adhesionFactor);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81836(struct__81836 *kcg_c1, struct__81836 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_char_9(
      &kcg_c1->driverIdentifier,
      &kcg_c2->driverIdentifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81842(struct__81842 *kcg_c1, struct__81842 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81847(struct__81847 *kcg_c1, struct__81847 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nAlive == kcg_c2->nAlive);
  kcg_equ = kcg_equ & (kcg_c1->statusSet == kcg_c2->statusSet);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81857(struct__81857 *kcg_c1, struct__81857 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_VERSION == kcg_c2->M_VERSION);
  kcg_equ = kcg_equ & kcg_comp_array_char_255(
      &kcg_c1->DMI_name,
      &kcg_c2->DMI_name);
  kcg_equ = kcg_equ & (kcg_c1->l_name == kcg_c2->l_name);
  kcg_equ = kcg_equ & (kcg_c1->Cabin_Identifier == kcg_c2->Cabin_Identifier);
  kcg_equ = kcg_equ & (kcg_c1->DMI_Identifier == kcg_c2->DMI_Identifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81867(struct__81867 *kcg_c1, struct__81867 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81764(
      &kcg_c1->selectedLevel,
      &kcg_c2->selectedLevel);
  kcg_equ = kcg_equ & kcg_comp_struct__81821(
      &kcg_c1->iconAck,
      &kcg_c2->iconAck);
  kcg_equ = kcg_equ & kcg_comp_struct__81827(
      &kcg_c1->adhesionFactor,
      &kcg_c2->adhesionFactor);
  kcg_equ = kcg_equ & kcg_comp_struct__81440(
      &kcg_c1->trainData,
      &kcg_c2->trainData);
  kcg_equ = kcg_equ & kcg_comp_struct__81452(
      &kcg_c1->trainDataAck,
      &kcg_c2->trainDataAck);
  kcg_equ = kcg_equ & kcg_comp_struct__81814(
      &kcg_c1->textMessageAck,
      &kcg_c2->textMessageAck);
  kcg_equ = kcg_equ & kcg_comp_struct__81842(
      &kcg_c1->radioNetData,
      &kcg_c2->radioNetData);
  kcg_equ = kcg_equ & kcg_comp_struct__81458(
      &kcg_c1->trainRunningNumber,
      &kcg_c2->trainRunningNumber);
  kcg_equ = kcg_equ & kcg_comp_struct__81836(
      &kcg_c1->driverIdentifier,
      &kcg_c2->driverIdentifier);
  kcg_equ = kcg_equ & kcg_comp_struct__81752(
      &kcg_c1->driverRequest,
      &kcg_c2->driverRequest);
  kcg_equ = kcg_equ & kcg_comp_struct__81857(
      &kcg_c1->identifier,
      &kcg_c2->identifier);
  kcg_equ = kcg_equ & kcg_comp_struct__81847(&kcg_c1->status, &kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81883(struct__81883 *kcg_c1, struct__81883 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81857(
      &kcg_c1->DMI_Identifier,
      &kcg_c2->DMI_Identifier);
  kcg_equ = kcg_equ & (kcg_c1->DMI_StartReceived == kcg_c2->DMI_StartReceived);
  kcg_equ = kcg_equ & (kcg_c1->DMI_TrainDataValidated ==
      kcg_c2->DMI_TrainDataValidated);
  kcg_equ = kcg_equ & (kcg_c1->DMI_TrainRunningNumberValidated ==
      kcg_c2->DMI_TrainRunningNumberValidated);
  kcg_equ = kcg_equ & (kcg_c1->DMI_TrainRunningNumberFirstValidation ==
      kcg_c2->DMI_TrainRunningNumberFirstValidation);
  kcg_equ = kcg_equ & (kcg_c1->DMI_LevelSelectedByDirver ==
      kcg_c2->DMI_LevelSelectedByDirver);
  kcg_equ = kcg_equ & (kcg_c1->DMI_DriverIdValidated ==
      kcg_c2->DMI_DriverIdValidated);
  kcg_equ = kcg_equ & (kcg_c1->DMI_Error == kcg_c2->DMI_Error);
  kcg_equ = kcg_equ & (kcg_c1->DMI_Active == kcg_c2->DMI_Active);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81895(struct__81895 *kcg_c1, struct__81895 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->targetType == kcg_c2->targetType);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81902(struct__81902 *kcg_c1, struct__81902 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ebCmd == kcg_c2->ebCmd);
  kcg_equ = kcg_equ & (kcg_c1->triggeredTCO == kcg_c2->triggeredTCO);
  kcg_equ = kcg_equ & (kcg_c1->revokedTCO == kcg_c2->revokedTCO);
  kcg_equ = kcg_equ & (kcg_c1->triggeredEB == kcg_c2->triggeredEB);
  kcg_equ = kcg_equ & (kcg_c1->revokedEB == kcg_c2->revokedEB);
  kcg_equ = kcg_equ & (kcg_c1->triggeredSB == kcg_c2->triggeredSB);
  kcg_equ = kcg_equ & (kcg_c1->revokedSB == kcg_c2->revokedSB);
  kcg_equ = kcg_equ & (kcg_c1->triggeredSupervisionStatus ==
      kcg_c2->triggeredSupervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->revokedSupervisionStatus ==
      kcg_c2->revokedSupervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->sdmType == kcg_c2->sdmType);
  kcg_equ = kcg_equ & (kcg_c1->supervisionStatus == kcg_c2->supervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid_targetDistance ==
      kcg_c2->valid_targetDistance);
  kcg_equ = kcg_equ & (kcg_c1->targetDistance == kcg_c2->targetDistance);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_sbi == kcg_c2->valid_v_sbi);
  kcg_equ = kcg_equ & (kcg_c1->sbiSpeed == kcg_c2->sbiSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_mrdt == kcg_c2->valid_v_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->mrdtSpeed == kcg_c2->mrdtSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_release == kcg_c2->valid_v_release);
  kcg_equ = kcg_equ & (kcg_c1->releaseSpeed == kcg_c2->releaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_permitted == kcg_c2->valid_v_permitted);
  kcg_equ = kcg_equ & (kcg_c1->permittedSpeed == kcg_c2->permittedSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_est == kcg_c2->valid_v_est);
  kcg_equ = kcg_equ & (kcg_c1->estimatedSpeed == kcg_c2->estimatedSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81935(struct__81935 *kcg_c1, struct__81935 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_real_2(&kcg_c1->service, &kcg_c2->service);
  kcg_equ = kcg_equ & kcg_comp_array_real_2(
      &kcg_c1->emergency,
      &kcg_c2->emergency);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81940(struct__81940 *kcg_c1, struct__81940 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d == kcg_c2->d);
  kcg_equ = kcg_equ & (kcg_c1->v == kcg_c2->v);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81945(struct__81945 *kcg_c1, struct__81945 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->inhComp == kcg_c2->inhComp);
  kcg_equ = kcg_equ & (kcg_c1->bs2 == kcg_c2->bs2);
  kcg_equ = kcg_equ & (kcg_c1->bs1 == kcg_c2->bs1);
  kcg_equ = kcg_equ & (kcg_c1->bs == kcg_c2->bs);
  kcg_equ = kcg_equ & (kcg_c1->berem == kcg_c2->berem);
  kcg_equ = kcg_equ & (kcg_c1->Traction == kcg_c2->Traction);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81954(struct__81954 *kcg_c1, struct__81954 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_traction_cut_off ==
      kcg_c2->T_traction_cut_off);
  kcg_equ = kcg_equ & (kcg_c1->isTCOAvailable == kcg_c2->isTCOAvailable);
  kcg_equ = kcg_equ & (kcg_c1->isSB_CmdAvailable == kcg_c2->isSB_CmdAvailable);
  kcg_equ = kcg_equ & (kcg_c1->isSB_FBAvailable == kcg_c2->isSB_FBAvailable);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81961(struct__81961 *kcg_c1, struct__81961 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_upper == kcg_c2->v_upper);
  kcg_equ = kcg_equ & (kcg_c1->v_lower == kcg_c2->v_lower);
  kcg_equ = kcg_equ & (kcg_c1->v_rawNominal == kcg_c2->v_rawNominal);
  kcg_equ = kcg_equ & (kcg_c1->v_safeNominal == kcg_c2->v_safeNominal);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81968(struct__81968 *kcg_c1, struct__81968 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81974(struct__81974 *kcg_c1, struct__81974 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->motionDirection == kcg_c2->motionDirection);
  kcg_equ = kcg_equ & (kcg_c1->motionState == kcg_c2->motionState);
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & kcg_comp_struct__81961(&kcg_c1->speed, &kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_struct__81968(&kcg_c1->odo, &kcg_c2->odo);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81984(struct__81984 *kcg_c1, struct__81984 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__81996(struct__81996 *kcg_c1, struct__81996 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_bool_25(&kcg_c1->valid, &kcg_c2->valid);
  kcg_equ = kcg_equ & kcg_comp_array_real_25(
      &kcg_c1->accelerations,
      &kcg_c2->accelerations);
  kcg_equ = kcg_equ & kcg_comp_array_real_25(&kcg_c1->speeds, &kcg_c2->speeds);
  kcg_equ = kcg_equ & kcg_comp_array_real_25(
      &kcg_c1->distances,
      &kcg_c2->distances);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82003(struct__82003 *kcg_c1, struct__82003 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_ura == kcg_c2->V_ura);
  kcg_equ = kcg_equ & kcg_comp_struct__81945(&kcg_c1->T, &kcg_c2->T);
  kcg_equ = kcg_equ & (kcg_c1->V_est == kcg_c2->V_est);
  kcg_equ = kcg_equ & kcg_comp_struct__81940(&kcg_c1->bec, &kcg_c2->bec);
  kcg_equ = kcg_equ & (kcg_c1->ttype == kcg_c2->ttype);
  kcg_equ = kcg_equ & (kcg_c1->index == kcg_c2->index);
  kcg_equ = kcg_equ & (kcg_c1->SBI2 == kcg_c2->SBI2);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82013(struct__82013 *kcg_c1, struct__82013 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->targetType == kcg_c2->targetType);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82022(struct__82022 *kcg_c1, struct__82022 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->GUI_curve_enabled == kcg_c2->GUI_curve_enabled);
  kcg_equ = kcg_equ & kcg_comp_struct__81996(
      &kcg_c1->GUI_curve,
      &kcg_c2->GUI_curve);
  kcg_equ = kcg_equ & kcg_comp_struct__81996(
      &kcg_c1->SvL_EBD_curve,
      &kcg_c2->SvL_EBD_curve);
  kcg_equ = kcg_equ & kcg_comp_struct__81996(
      &kcg_c1->EOA_SBD_curve,
      &kcg_c2->EOA_SBD_curve);
  kcg_equ = kcg_equ & kcg_comp_array__82019(
      &kcg_c1->MRSP_EBD_curves,
      &kcg_c2->MRSP_EBD_curves);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82033(struct__82033 *kcg_c1, struct__82033 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82013(
      &kcg_c1->SvL_target,
      &kcg_c2->SvL_target);
  kcg_equ = kcg_equ & kcg_comp_struct__82013(
      &kcg_c1->EOA_target,
      &kcg_c2->EOA_target);
  kcg_equ = kcg_equ & kcg_comp_array__82030(
      &kcg_c1->MRSP_targetList,
      &kcg_c2->MRSP_targetList);
  kcg_equ = kcg_equ & (kcg_c1->updatedTargetList == kcg_c2->updatedTargetList);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82040(struct__82040 *kcg_c1, struct__82040 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_accLRBG == kcg_c2->d_accLRBG);
  kcg_equ = kcg_equ & (kcg_c1->d_LRBG == kcg_c2->d_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->d_antenna2frontend ==
      kcg_c2->d_antenna2frontend);
  kcg_equ = kcg_equ & (kcg_c1->d_maxSafeFrontEndPos ==
      kcg_c2->d_maxSafeFrontEndPos);
  kcg_equ = kcg_equ & (kcg_c1->d_minSafeFrontEndPos ==
      kcg_c2->d_minSafeFrontEndPos);
  kcg_equ = kcg_equ & (kcg_c1->d_est_frontendPos == kcg_c2->d_est_frontendPos);
  kcg_equ = kcg_equ & (kcg_c1->trainPositionIsValid ==
      kcg_c2->trainPositionIsValid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82050(struct__82050 *kcg_c1, struct__82050 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TargetSpeed == kcg_c2->TargetSpeed);
  kcg_equ = kcg_equ & (kcg_c1->Location == kcg_c2->Location);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82055(struct__82055 *kcg_c1, struct__82055 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->ReleaseSpeed == kcg_c2->ReleaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->q_calculate_release ==
      kcg_c2->q_calculate_release);
  kcg_equ = kcg_equ & (kcg_c1->Overlap == kcg_c2->Overlap);
  kcg_equ = kcg_equ & (kcg_c1->OL_valid == kcg_c2->OL_valid);
  kcg_equ = kcg_equ & (kcg_c1->DangerPoint == kcg_c2->DangerPoint);
  kcg_equ = kcg_equ & (kcg_c1->DP_valid == kcg_c2->DP_valid);
  kcg_equ = kcg_equ & kcg_comp_struct__82050(&kcg_c1->EOA, &kcg_c2->EOA);
  kcg_equ = kcg_equ & (kcg_c1->v_main == kcg_c2->v_main);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82068(struct__82068 *kcg_c1, struct__82068 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->MRS == kcg_c2->MRS);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Abs == kcg_c2->Loc_Abs);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82077(struct__82077 *kcg_c1, struct__82077 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dV_ebi_V_target == kcg_c2->dV_ebi_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_ebi_V_MRSP == kcg_c2->dV_ebi_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->dV_sbi_V_target == kcg_c2->dV_sbi_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_sbi_V_MRSP == kcg_c2->dV_sbi_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->dV_warning_V_target ==
      kcg_c2->dV_warning_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_warning_V_MRSP == kcg_c2->dV_warning_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->v_FLOI == kcg_c2->v_FLOI);
  kcg_equ = kcg_equ & (kcg_c1->v_sbi_mrdt == kcg_c2->v_sbi_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->v_p_mrdt == kcg_c2->v_p_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->V_target == kcg_c2->V_target);
  kcg_equ = kcg_equ & (kcg_c1->V_release == kcg_c2->V_release);
  kcg_equ = kcg_equ & (kcg_c1->V_MRSP == kcg_c2->V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->V_est == kcg_c2->V_est);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82093(struct__82093 *kcg_c1, struct__82093 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->RSM_start_location_SBD_valid ==
      kcg_c2->RSM_start_location_SBD_valid);
  kcg_equ = kcg_equ & (kcg_c1->RSM_start_location_EBD_valid ==
      kcg_c2->RSM_start_location_EBD_valid);
  kcg_equ = kcg_equ & (kcg_c1->Preindication_SBD_location_valid ==
      kcg_c2->Preindication_SBD_location_valid);
  kcg_equ = kcg_equ & (kcg_c1->Preindication_EBD_location_valid ==
      kcg_c2->Preindication_EBD_location_valid);
  kcg_equ = kcg_equ & (kcg_c1->d_svl == kcg_c2->d_svl);
  kcg_equ = kcg_equ & (kcg_c1->d_eoa == kcg_c2->d_eoa);
  kcg_equ = kcg_equ & (kcg_c1->d_P_of_V_target == kcg_c2->d_P_of_V_target);
  kcg_equ = kcg_equ & (kcg_c1->SBI2_of_V_est == kcg_c2->SBI2_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->SBI1_of_V_est == kcg_c2->SBI1_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->FLOI_of_V_est == kcg_c2->FLOI_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_EBI_of_V_est == kcg_c2->d_EBI_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_FLOI_of_V_est == kcg_c2->d_FLOI_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_W_of_V_est == kcg_c2->d_W_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_P_of_V_est == kcg_c2->d_P_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_I_of_V_MRSP == kcg_c2->d_I_of_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->d_I_of_V_est == kcg_c2->d_I_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->SBD_RSM_start_location ==
      kcg_c2->SBD_RSM_start_location);
  kcg_equ = kcg_equ & (kcg_c1->EBD_RSM_start_location ==
      kcg_c2->EBD_RSM_start_location);
  kcg_equ = kcg_equ & (kcg_c1->EBD_preindication_location ==
      kcg_c2->EBD_preindication_location);
  kcg_equ = kcg_equ & (kcg_c1->SBD_preindication_location ==
      kcg_c2->SBD_preindication_location);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82116(struct__82116 *kcg_c1, struct__82116 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->lastInsertedTargetIndex ==
      kcg_c2->lastInsertedTargetIndex);
  kcg_equ = kcg_equ & kcg_comp_array__82030(
      &kcg_c1->targetList,
      &kcg_c2->targetList);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82130(struct__82130 *kcg_c1, struct__82130 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_real_15_10(&kcg_c1->data, &kcg_c2->data);
  kcg_equ = kcg_equ & kcg_comp_array_real_10(
      &kcg_c1->speed_definition,
      &kcg_c2->speed_definition);
  kcg_equ = kcg_equ & kcg_comp_array_real_15(
      &kcg_c1->distance_definition,
      &kcg_c2->distance_definition);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82136(struct__82136 *kcg_c1, struct__82136 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81996(&kcg_c1->BC, &kcg_c2->BC);
  kcg_equ = kcg_equ & (kcg_c1->speedIndex == kcg_c2->speedIndex);
  kcg_equ = kcg_equ & (kcg_c1->distanceIndex == kcg_c2->distanceIndex);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82144(struct__82144 *kcg_c1, struct__82144 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_emergencybrake_cm ==
      kcg_c2->m_emergencybrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_servicebrake_cm == kcg_c2->m_servicebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82150(struct__82150 *kcg_c1, struct__82150 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ebCmd == kcg_c2->ebCmd);
  kcg_equ = kcg_equ & (kcg_c1->triggeredTCO == kcg_c2->triggeredTCO);
  kcg_equ = kcg_equ & (kcg_c1->revokedTCO == kcg_c2->revokedTCO);
  kcg_equ = kcg_equ & (kcg_c1->triggeredEB == kcg_c2->triggeredEB);
  kcg_equ = kcg_equ & (kcg_c1->revokedEB == kcg_c2->revokedEB);
  kcg_equ = kcg_equ & (kcg_c1->triggeredSB == kcg_c2->triggeredSB);
  kcg_equ = kcg_equ & (kcg_c1->revokedSB == kcg_c2->revokedSB);
  kcg_equ = kcg_equ & (kcg_c1->triggeredSupervisionStatus ==
      kcg_c2->triggeredSupervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->revokedSupervisionStatus ==
      kcg_c2->revokedSupervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->sdmType == kcg_c2->sdmType);
  kcg_equ = kcg_equ & (kcg_c1->supervisionStatus == kcg_c2->supervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid_targetDistance ==
      kcg_c2->valid_targetDistance);
  kcg_equ = kcg_equ & (kcg_c1->targetDistance == kcg_c2->targetDistance);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_sbi == kcg_c2->valid_v_sbi);
  kcg_equ = kcg_equ & (kcg_c1->sbiSpeed == kcg_c2->sbiSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_mrdt == kcg_c2->valid_v_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->mrdtSpeed == kcg_c2->mrdtSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_release == kcg_c2->valid_v_release);
  kcg_equ = kcg_equ & (kcg_c1->releaseSpeed == kcg_c2->releaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_permitted == kcg_c2->valid_v_permitted);
  kcg_equ = kcg_equ & (kcg_c1->permittedSpeed == kcg_c2->permittedSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_est == kcg_c2->valid_v_est);
  kcg_equ = kcg_equ & (kcg_c1->estimatedSpeed == kcg_c2->estimatedSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82177(struct__82177 *kcg_c1, struct__82177 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distanceIndicationPoint ==
      kcg_c2->distanceIndicationPoint);
  kcg_equ = kcg_equ & (kcg_c1->supervisionDisplay ==
      kcg_c2->supervisionDisplay);
  kcg_equ = kcg_equ & (kcg_c1->sup_status == kcg_c2->sup_status);
  kcg_equ = kcg_equ & (kcg_c1->interventionSpeed == kcg_c2->interventionSpeed);
  kcg_equ = kcg_equ & (kcg_c1->location_brake_curve_starting_point ==
      kcg_c2->location_brake_curve_starting_point);
  kcg_equ = kcg_equ & (kcg_c1->locationBrakeTarget ==
      kcg_c2->locationBrakeTarget);
  kcg_equ = kcg_equ & (kcg_c1->releaseSpeed == kcg_c2->releaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->permittedSpeed == kcg_c2->permittedSpeed);
  kcg_equ = kcg_equ & (kcg_c1->targetSpeed == kcg_c2->targetSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82190(struct__82190 *kcg_c1, struct__82190 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t14 == kcg_c2->t14);
  kcg_equ = kcg_equ & (kcg_c1->t13 == kcg_c2->t13);
  kcg_equ = kcg_equ & (kcg_c1->t12 == kcg_c2->t12);
  kcg_equ = kcg_equ & (kcg_c1->t11 == kcg_c2->t11);
  kcg_equ = kcg_equ & (kcg_c1->t10 == kcg_c2->t10);
  kcg_equ = kcg_equ & (kcg_c1->t9 == kcg_c2->t9);
  kcg_equ = kcg_equ & (kcg_c1->t8 == kcg_c2->t8);
  kcg_equ = kcg_equ & (kcg_c1->t7 == kcg_c2->t7);
  kcg_equ = kcg_equ & (kcg_c1->t6 == kcg_c2->t6);
  kcg_equ = kcg_equ & (kcg_c1->t5 == kcg_c2->t5);
  kcg_equ = kcg_equ & (kcg_c1->t4 == kcg_c2->t4);
  kcg_equ = kcg_equ & (kcg_c1->t3 == kcg_c2->t3);
  kcg_equ = kcg_equ & (kcg_c1->t2 == kcg_c2->t2);
  kcg_equ = kcg_equ & (kcg_c1->t1 == kcg_c2->t1);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82210(struct__82210 *kcg_c1, struct__82210 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->r3 == kcg_c2->r3);
  kcg_equ = kcg_equ & (kcg_c1->r2 == kcg_c2->r2);
  kcg_equ = kcg_equ & (kcg_c1->r1 == kcg_c2->r1);
  kcg_equ = kcg_equ & (kcg_c1->r0 == kcg_c2->r0);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82217(struct__82217 *kcg_c1, struct__82217 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID == kcg_c2->radioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82224(struct__82224 *kcg_c1, struct__82224 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->networkID == kcg_c2->networkID);
  kcg_equ = kcg_equ & (kcg_c1->cmd == kcg_c2->cmd);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82230(struct__82230 *kcg_c1, struct__82230 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82224(
      &kcg_c1->radioEVCtoUnit,
      &kcg_c2->radioEVCtoUnit);
  kcg_equ = kcg_equ & kcg_comp_struct__81326(
      &kcg_c1->thirdOutput,
      &kcg_c2->thirdOutput);
  kcg_equ = kcg_equ & kcg_comp_struct__81326(
      &kcg_c1->secondOutput,
      &kcg_c2->secondOutput);
  kcg_equ = kcg_equ & kcg_comp_struct__81326(
      &kcg_c1->firstOutput,
      &kcg_c2->firstOutput);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82237(struct__82237 *kcg_c1, struct__82237 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82243(struct__82243 *kcg_c1, struct__82243 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_sleepsession == kcg_c2->q_sleepsession);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82253(struct__82253 *kcg_c1, struct__82253 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__80463(
      &kcg_c1->sendingRBC,
      &kcg_c2->sendingRBC);
  kcg_equ = kcg_equ & kcg_comp_struct__82237(&kcg_c1->p45, &kcg_c2->p45);
  kcg_equ = kcg_equ & kcg_comp_struct__82243(&kcg_c1->p42, &kcg_c2->p42);
  kcg_equ = kcg_equ & kcg_comp_struct__80433(
      &kcg_c1->Radio_Common_Header,
      &kcg_c2->Radio_Common_Header);
  kcg_equ = kcg_equ & (kcg_c1->messageSource == kcg_c2->messageSource);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82262(struct__82262 *kcg_c1, struct__82262 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->registeredRadioNetworkID ==
      kcg_c2->registeredRadioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->mobileHW_available ==
      kcg_c2->mobileHW_available);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82270(struct__82270 *kcg_c1, struct__82270 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->entry_request == kcg_c2->entry_request);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82276(struct__82276 *kcg_c1, struct__82276 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_identifier ==
      kcg_c2->DMI_nid_icon_identifier);
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_area_rank == kcg_c2->DMI_nid_area_rank);
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_area_group ==
      kcg_c2->DMI_nid_area_group);
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_rank == kcg_c2->DMI_nid_icon_rank);
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_group ==
      kcg_c2->DMI_nid_icon_group);
  kcg_equ = kcg_equ & (kcg_c1->DMI_m_icon_flashing_freq ==
      kcg_c2->DMI_m_icon_flashing_freq);
  kcg_equ = kcg_equ & (kcg_c1->DMI_m_icon_control_flag ==
      kcg_c2->DMI_m_icon_control_flag);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82288(struct__82288 *kcg_c1, struct__82288 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82294(struct__82294 *kcg_c1, struct__82294 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__81384(
      &kcg_c1->levelList,
      &kcg_c2->levelList);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82300(struct__82300 *kcg_c1, struct__82300 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->cab_is_active == kcg_c2->cab_is_active);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82306(struct__82306 *kcg_c1, struct__82306 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->system_version == kcg_c2->system_version);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82312(struct__82312 *kcg_c1, struct__82312 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_extra == kcg_c2->l_extra);
  kcg_equ = kcg_equ & kcg_comp_array_char_255(&kcg_c1->x_name, &kcg_c2->x_name);
  kcg_equ = kcg_equ & (kcg_c1->l_name == kcg_c2->l_name);
  kcg_equ = kcg_equ & (kcg_c1->EVC_Version == kcg_c2->EVC_Version);
  kcg_equ = kcg_equ & (kcg_c1->ERTMS_Version == kcg_c2->ERTMS_Version);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82322(struct__82322 *kcg_c1, struct__82322 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_trackcond == kcg_c2->m_trackcond);
  kcg_equ = kcg_equ & (kcg_c1->d_trackcond == kcg_c2->d_trackcond);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82330(struct__82330 *kcg_c1, struct__82330 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__82327(
      &kcg_c1->trackCondition,
      &kcg_c2->trackCondition);
  kcg_equ = kcg_equ & (kcg_c1->nIter == kcg_c2->nIter);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82338(struct__82338 *kcg_c1, struct__82338 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__82335(
      &kcg_c1->gradientProfiles,
      &kcg_c2->gradientProfiles);
  kcg_equ = kcg_equ & (kcg_c1->profileChanged == kcg_c2->profileChanged);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82346(struct__82346 *kcg_c1, struct__82346 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__82343(
      &kcg_c1->speedProfiles,
      &kcg_c2->speedProfiles);
  kcg_equ = kcg_equ & (kcg_c1->profileChanged == kcg_c2->profileChanged);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82351(struct__82351 *kcg_c1, struct__82351 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82330(
      &kcg_c1->trackConditions,
      &kcg_c2->trackConditions);
  kcg_equ = kcg_equ & kcg_comp_struct__82338(
      &kcg_c1->gradientProfiles,
      &kcg_c2->gradientProfiles);
  kcg_equ = kcg_equ & kcg_comp_struct__82346(
      &kcg_c1->speedProfiles,
      &kcg_c2->speedProfiles);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82359(struct__82359 *kcg_c1, struct__82359 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_textConfirm == kcg_c2->q_textConfirm);
  kcg_equ = kcg_equ & (kcg_c1->q_textClass == kcg_c2->q_textClass);
  kcg_equ = kcg_equ & kcg_comp_array_char_255(&kcg_c1->x_text, &kcg_c2->x_text);
  kcg_equ = kcg_equ & (kcg_c1->l_text == kcg_c2->l_text);
  kcg_equ = kcg_equ & (kcg_c1->q_text == kcg_c2->q_text);
  kcg_equ = kcg_equ & (kcg_c1->textMessage_ID == kcg_c2->textMessage_ID);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82370(struct__82370 *kcg_c1, struct__82370 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dig3 == kcg_c2->dig3);
  kcg_equ = kcg_equ & (kcg_c1->dig2 == kcg_c2->dig2);
  kcg_equ = kcg_equ & (kcg_c1->dig1 == kcg_c2->dig1);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82377(struct__82377 *kcg_c1, struct__82377 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dig4 == kcg_c2->dig4);
  kcg_equ = kcg_equ & (kcg_c1->dig3 == kcg_c2->dig3);
  kcg_equ = kcg_equ & (kcg_c1->dig2 == kcg_c2->dig2);
  kcg_equ = kcg_equ & (kcg_c1->dig1 == kcg_c2->dig1);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82385(struct__82385 *kcg_c1, struct__82385 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dig5 == kcg_c2->dig5);
  kcg_equ = kcg_equ & (kcg_c1->dig4 == kcg_c2->dig4);
  kcg_equ = kcg_equ & (kcg_c1->dig3 == kcg_c2->dig3);
  kcg_equ = kcg_equ & (kcg_c1->dig2 == kcg_c2->dig2);
  kcg_equ = kcg_equ & (kcg_c1->dig1 == kcg_c2->dig1);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82394(struct__82394 *kcg_c1, struct__82394 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82370(
      &kcg_c1->mLoadingGauge,
      &kcg_c2->mLoadingGauge);
  kcg_equ = kcg_equ & kcg_comp_struct__82370(
      &kcg_c1->airTightSystem,
      &kcg_c2->airTightSystem);
  kcg_equ = kcg_equ & (kcg_c1->mAxleLoad == kcg_c2->mAxleLoad);
  kcg_equ = kcg_equ & kcg_comp_struct__82370(&kcg_c1->vmax, &kcg_c2->vmax);
  kcg_equ = kcg_equ & kcg_comp_struct__82370(
      &kcg_c1->brakeModel,
      &kcg_c2->brakeModel);
  kcg_equ = kcg_equ & kcg_comp_struct__82377(
      &kcg_c1->trainLength,
      &kcg_c2->trainLength);
  kcg_equ = kcg_equ & kcg_comp_struct__82385(
      &kcg_c1->trainID,
      &kcg_c2->trainID);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82406(struct__82406 *kcg_c1, struct__82406 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_Remove_VBC ==
      kcg_c2->Menu_button_Remove_VBC);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_Set_VBC ==
      kcg_c2->Menu_button_Set_VBC);
  kcg_equ = kcg_equ & (kcg_c1->Fix_train_data_entry ==
      kcg_c2->Fix_train_data_entry);
  kcg_equ = kcg_equ & (kcg_c1->Button_switch_for_train_data ==
      kcg_c2->Button_switch_for_train_data);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_contact_last_RBC ==
      kcg_c2->Menu_button_contact_last_RBC);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_radio_network_ID ==
      kcg_c2->Menu_button_radio_network_ID);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_enter_RBC_data ==
      kcg_c2->Menu_button_enter_RBC_data);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_use_short_number ==
      kcg_c2->Menu_button_use_short_number);
  kcg_equ = kcg_equ & (kcg_c1->Show_hourglass == kcg_c2->Show_hourglass);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_isolation ==
      kcg_c2->Menu_button_isolation);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_train_integrity ==
      kcg_c2->Menu_button_train_integrity);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_luminance ==
      kcg_c2->Menu_button_luminance);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_volume ==
      kcg_c2->Menu_button_volume);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_system_version ==
      kcg_c2->Menu_button_system_version);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_adhesion_factor ==
      kcg_c2->Menu_button_adhesion_factor);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_override_route_suitability ==
      kcg_c2->Menu_button_override_route_suitability);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_override_EOA ==
      kcg_c2->Menu_button_override_EOA);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_language_selection ==
      kcg_c2->Menu_button_language_selection);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_staff_responsible_data ==
      kcg_c2->Menu_button_staff_responsible_data);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_train_data_view ==
      kcg_c2->Menu_button_train_data_view);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_train_data_modification ==
      kcg_c2->Menu_button_train_data_modification);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_ETCS_level ==
      kcg_c2->Menu_button_ETCS_level);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_train_running_number ==
      kcg_c2->Menu_button_train_running_number);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_driver_ID ==
      kcg_c2->Menu_button_driver_ID);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_maintain_shunting ==
      kcg_c2->Menu_button_maintain_shunting);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_exit_non_leading ==
      kcg_c2->Menu_button_exit_non_leading);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_non_leading ==
      kcg_c2->Menu_button_non_leading);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_shunting_exit ==
      kcg_c2->Menu_button_shunting_exit);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_shunting ==
      kcg_c2->Menu_button_shunting);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_start_of_mission ==
      kcg_c2->Menu_button_start_of_mission);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82439(struct__82439 *kcg_c1, struct__82439 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82406(
      &kcg_c1->available_menu,
      &kcg_c2->available_menu);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82445(struct__82445 *kcg_c1, struct__82445 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distanceIndicationPoint ==
      kcg_c2->distanceIndicationPoint);
  kcg_equ = kcg_equ & (kcg_c1->radioConnectionStatus ==
      kcg_c2->radioConnectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->distance_to_TSA == kcg_c2->distance_to_TSA);
  kcg_equ = kcg_equ & (kcg_c1->distance_KP_Balise ==
      kcg_c2->distance_KP_Balise);
  kcg_equ = kcg_equ & (kcg_c1->location_KP_Balise_Track ==
      kcg_c2->location_KP_Balise_Track);
  kcg_equ = kcg_equ & (kcg_c1->v_LOA == kcg_c2->v_LOA);
  kcg_equ = kcg_equ & (kcg_c1->location_LOA == kcg_c2->location_LOA);
  kcg_equ = kcg_equ & (kcg_c1->sup_status == kcg_c2->sup_status);
  kcg_equ = kcg_equ & (kcg_c1->m_warning == kcg_c2->m_warning);
  kcg_equ = kcg_equ & (kcg_c1->nid_c_valid == kcg_c2->nid_c_valid);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & kcg_comp_struct__81376(&kcg_c1->level, &kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->v_intervention == kcg_c2->v_intervention);
  kcg_equ = kcg_equ & (kcg_c1->location_brake_curve_starting_point ==
      kcg_c2->location_brake_curve_starting_point);
  kcg_equ = kcg_equ & (kcg_c1->v_release == kcg_c2->v_release);
  kcg_equ = kcg_equ & (kcg_c1->v_permitted == kcg_c2->v_permitted);
  kcg_equ = kcg_equ & (kcg_c1->v_target == kcg_c2->v_target);
  kcg_equ = kcg_equ & (kcg_c1->location_brake_target ==
      kcg_c2->location_brake_target);
  kcg_equ = kcg_equ & (kcg_c1->location_front_train ==
      kcg_c2->location_front_train);
  kcg_equ = kcg_equ & (kcg_c1->v_train == kcg_c2->v_train);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82471(struct__82471 *kcg_c1, struct__82471 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82276(
      &kcg_c1->iconRequest,
      &kcg_c2->iconRequest);
  kcg_equ = kcg_equ & kcg_comp_struct__81827(
      &kcg_c1->adhesionFactor,
      &kcg_c2->adhesionFactor);
  kcg_equ = kcg_equ & kcg_comp_struct__81440(
      &kcg_c1->trainData,
      &kcg_c2->trainData);
  kcg_equ = kcg_equ & kcg_comp_struct__81458(
      &kcg_c1->trainRunningNumber,
      &kcg_c2->trainRunningNumber);
  kcg_equ = kcg_equ & kcg_comp_struct__81836(
      &kcg_c1->driverIdentifier,
      &kcg_c2->driverIdentifier);
  kcg_equ = kcg_equ & kcg_comp_struct__82288(
      &kcg_c1->EVC_radioNetData,
      &kcg_c2->EVC_radioNetData);
  kcg_equ = kcg_equ & kcg_comp_struct__82294(
      &kcg_c1->EVC_levelData,
      &kcg_c2->EVC_levelData);
  kcg_equ = kcg_equ & kcg_comp_struct__82300(
      &kcg_c1->displayControl,
      &kcg_c2->displayControl);
  kcg_equ = kcg_equ & kcg_comp_struct__82306(
      &kcg_c1->systemVersion,
      &kcg_c2->systemVersion);
  kcg_equ = kcg_equ & kcg_comp_struct__82312(
      &kcg_c1->identifierRequest,
      &kcg_c2->identifierRequest);
  kcg_equ = kcg_equ & kcg_comp_struct__82351(
      &kcg_c1->trackDescription,
      &kcg_c2->trackDescription);
  kcg_equ = kcg_equ & kcg_comp_struct__82359(
      &kcg_c1->textMessage,
      &kcg_c2->textMessage);
  kcg_equ = kcg_equ & kcg_comp_struct__82394(
      &kcg_c1->evc_coded_train_data,
      &kcg_c2->evc_coded_train_data);
  kcg_equ = kcg_equ & kcg_comp_struct__82270(
      &kcg_c1->entry_request,
      &kcg_c2->entry_request);
  kcg_equ = kcg_equ & kcg_comp_struct__82439(
      &kcg_c1->menu_request,
      &kcg_c2->menu_request);
  kcg_equ = kcg_equ & kcg_comp_struct__82445(
      &kcg_c1->dynamic,
      &kcg_c2->dynamic);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82491(struct__82491 *kcg_c1, struct__82491 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->source == kcg_c2->source);
  kcg_equ = kcg_equ &
    (kcg_c1->establishOrderDoesNotRequestToContactAnAcceptingRBC ==
      kcg_c2->establishOrderDoesNotRequestToContactAnAcceptingRBC);
  kcg_equ = kcg_equ & (kcg_c1->useTheShortNumberStoredOnboard ==
      kcg_c2->useTheShortNumberStoredOnboard);
  kcg_equ = kcg_equ & (kcg_c1->contactLastKnownRBC ==
      kcg_c2->contactLastKnownRBC);
  kcg_equ = kcg_equ & (kcg_c1->terminate == kcg_c2->terminate);
  kcg_equ = kcg_equ & (kcg_c1->establish == kcg_c2->establish);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82505(struct__82505 *kcg_c1, struct__82505 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->systemVersionFromTracksideSupported ==
      kcg_c2->systemVersionFromTracksideSupported);
  kcg_equ = kcg_equ & (kcg_c1->version == kcg_c2->version);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82511(struct__82511 *kcg_c1, struct__82511 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->status == kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82516(struct__82516 *kcg_c1, struct__82516 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->connectionLost == kcg_c2->connectionLost);
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82523(struct__82523 *kcg_c1, struct__82523 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID == kcg_c2->radioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82529(struct__82529 *kcg_c1, struct__82529 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->systemVersionFromTracksideSupported ==
      kcg_c2->systemVersionFromTracksideSupported);
  kcg_equ = kcg_equ & (kcg_c1->errorConditionRequiringTerminationDetected ==
      kcg_c2->errorConditionRequiringTerminationDetected);
  kcg_equ = kcg_equ & (kcg_c1->isInCommunicationSessionWithAnRIU ==
      kcg_c2->isInCommunicationSessionWithAnRIU);
  kcg_equ = kcg_equ & (kcg_c1->OBU_hasToEstablishANewSession ==
      kcg_c2->OBU_hasToEstablishANewSession);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontReachesEndOfAnnouncedRadioHole ==
      kcg_c2->trainFrontReachesEndOfAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontInsideInAnAnnouncedRadioHole ==
      kcg_c2->trainFrontInsideInAnAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->modeChangeHasToBeReportedToRBC ==
      kcg_c2->modeChangeHasToBeReportedToRBC);
  kcg_equ = kcg_equ & (kcg_c1->trainExitedFromAnRBCArea ==
      kcg_c2->trainExitedFromAnRBCArea);
  kcg_equ = kcg_equ & (kcg_c1->trainPassesA_RBC_RBC_border_WithItsFrontEnd ==
      kcg_c2->trainPassesA_RBC_RBC_border_WithItsFrontEnd);
  kcg_equ = kcg_equ & (kcg_c1->trainPassesALevelTransitionBorder ==
      kcg_c2->trainPassesALevelTransitionBorder);
  kcg_equ = kcg_equ & (kcg_c1->isPartOfAnOngoingStartOfMissionProcedure ==
      kcg_c2->isPartOfAnOngoingStartOfMissionProcedure);
  kcg_equ = kcg_equ & (kcg_c1->triggerDecisionThatNoRadioNetworkIDAvailable ==
      kcg_c2->triggerDecisionThatNoRadioNetworkIDAvailable);
  kcg_equ = kcg_equ & (kcg_c1->afterDriverEntryOfANewRadioNetworkID ==
      kcg_c2->afterDriverEntryOfANewRadioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->driverHasManuallyChangedLevel ==
      kcg_c2->driverHasManuallyChangedLevel);
  kcg_equ = kcg_equ & (kcg_c1->driverClosesTheDeskduringStartOfMission ==
      kcg_c2->driverClosesTheDeskduringStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->endOfMissionIsExecuted ==
      kcg_c2->endOfMissionIsExecuted);
  kcg_equ = kcg_equ & (kcg_c1->trainIsRejectedByRBC_duringStartOfMission ==
      kcg_c2->trainIsRejectedByRBC_duringStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->startOfMissionProcedureCompleted ==
      kcg_c2->startOfMissionProcedureCompleted);
  kcg_equ = kcg_equ & (kcg_c1->startOfMissionProcedureIsGoingOn ==
      kcg_c2->startOfMissionProcedureIsGoingOn);
  kcg_equ = kcg_equ & (kcg_c1->atStartOfMission == kcg_c2->atStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->atPowerUp == kcg_c2->atPowerUp);
  kcg_equ = kcg_equ & (kcg_c1->atPowerDown == kcg_c2->atPowerDown);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82554(struct__82554 *kcg_c1, struct__82554 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82237(
      &kcg_c1->ID_fromDriver,
      &kcg_c2->ID_fromDriver);
  kcg_equ = kcg_equ & kcg_comp_struct__82237(
      &kcg_c1->memorizedID,
      &kcg_c2->memorizedID);
  kcg_equ = kcg_equ & kcg_comp_struct__82237(
      &kcg_c1->defaultID,
      &kcg_c2->defaultID);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82560(struct__82560 *kcg_c1, struct__82560 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->previousLevel == kcg_c2->previousLevel);
  kcg_equ = kcg_equ & (kcg_c1->newLevel == kcg_c2->newLevel);
  kcg_equ = kcg_equ & (kcg_c1->LevelNeedsAck == kcg_c2->LevelNeedsAck);
  kcg_equ = kcg_equ & (kcg_c1->SH_Req_RefusedByRBC ==
      kcg_c2->SH_Req_RefusedByRBC);
  kcg_equ = kcg_equ & (kcg_c1->whichMode == kcg_c2->whichMode);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82569(struct__82569 *kcg_c1, struct__82569 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_LOA == kcg_c2->v_LOA);
  kcg_equ = kcg_equ & (kcg_c1->location_LOA == kcg_c2->location_LOA);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82575(struct__82575 *kcg_c1, struct__82575 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_c_valid == kcg_c2->nid_c_valid);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82581(struct__82581 *kcg_c1, struct__82581 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->secondValidationRequested ==
      kcg_c2->secondValidationRequested);
  kcg_equ = kcg_equ & (kcg_c1->NO_initrequestSent ==
      kcg_c2->NO_initrequestSent);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82586(struct__82586 *kcg_c1, struct__82586 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L3 == kcg_c2->L3);
  kcg_equ = kcg_equ & (kcg_c1->L2 == kcg_c2->L2);
  kcg_equ = kcg_equ & (kcg_c1->L1 == kcg_c2->L1);
  kcg_equ = kcg_equ & (kcg_c1->L0 == kcg_c2->L0);
  kcg_equ = kcg_equ & (kcg_c1->NTC == kcg_c2->NTC);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82594(struct__82594 *kcg_c1, struct__82594 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Train_Standstill == kcg_c2->Train_Standstill);
  kcg_equ = kcg_equ & (kcg_c1->Train_Speed == kcg_c2->Train_Speed);
  kcg_equ = kcg_equ & kcg_comp_struct__80631(
      &kcg_c1->Train_Position,
      &kcg_c2->Train_Position);
  kcg_equ = kcg_equ & (kcg_c1->Linked_BG_In_Wrong_Direction ==
      kcg_c2->Linked_BG_In_Wrong_Direction);
  kcg_equ = kcg_equ & (kcg_c1->BG_In_List_Expected_BG_In_SH ==
      kcg_c2->BG_In_List_Expected_BG_In_SH);
  kcg_equ = kcg_equ & (kcg_c1->BG_In_List_Expected_BG_In_SR ==
      kcg_c2->BG_In_List_Expected_BG_In_SR);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82603(struct__82603 *kcg_c1, struct__82603 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Req_for_SH_from_Driver ==
      kcg_c2->Req_for_SH_from_Driver);
  kcg_equ = kcg_equ & (kcg_c1->MA_Req == kcg_c2->MA_Req);
  kcg_equ = kcg_equ & (kcg_c1->Clean_BG_List_SH_Area ==
      kcg_c2->Clean_BG_List_SH_Area);
  kcg_equ = kcg_equ & (kcg_c1->EoM_Procedure_req == kcg_c2->EoM_Procedure_req);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82610(struct__82610 *kcg_c1, struct__82610 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Train_Speed_Under_Overide_Limit ==
      kcg_c2->Train_Speed_Under_Overide_Limit);
  kcg_equ = kcg_equ & (kcg_c1->EOA_Front_End == kcg_c2->EOA_Front_End);
  kcg_equ = kcg_equ & (kcg_c1->EOA_Antenna_Overpass ==
      kcg_c2->EOA_Antenna_Overpass);
  kcg_equ = kcg_equ & (kcg_c1->Override_Function_Active ==
      kcg_c2->Override_Function_Active);
  kcg_equ = kcg_equ & (kcg_c1->Estim_Front_End_Rear_SSP ==
      kcg_c2->Estim_Front_End_Rear_SSP);
  kcg_equ = kcg_equ & (kcg_c1->Estim_front_End_overpass_SR_Dist ==
      kcg_c2->Estim_front_End_overpass_SR_Dist);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82619(struct__82619 *kcg_c1, struct__82619 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isolationStatus == kcg_c2->isolationStatus);
  kcg_equ = kcg_equ & (kcg_c1->emergencyBrakeActive ==
      kcg_c2->emergencyBrakeActive);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82625(struct__82625 *kcg_c1, struct__82625 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->restriction == kcg_c2->restriction);
  kcg_equ = kcg_equ & (kcg_c1->no_restriction == kcg_c2->no_restriction);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82630(struct__82630 *kcg_c1, struct__82630 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82625(
      &kcg_c1->m_current,
      &kcg_c2->m_current);
  kcg_equ = kcg_equ & kcg_comp_struct__81464(
      &kcg_c1->d_test_current,
      &kcg_c2->d_test_current);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82636(struct__82636 *kcg_c1, struct__82636 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->door_control_info == kcg_c2->door_control_info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82641(struct__82641 *kcg_c1, struct__82641 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_ctraction == kcg_c2->NID_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->voltage_type == kcg_c2->voltage_type);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82646(struct__82646 *kcg_c1, struct__82646 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82641(
      &kcg_c1->m_voltage,
      &kcg_c2->m_voltage);
  kcg_equ = kcg_equ & kcg_comp_struct__81464(
      &kcg_c1->d_test_traction,
      &kcg_c2->d_test_traction);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82652(struct__82652 *kcg_c1, struct__82652 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_traction_cutoff_cm ==
      kcg_c2->m_traction_cutoff_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_mainpowerswitch_cm ==
      kcg_c2->m_mainpowerswitch_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_airtightness_cm == kcg_c2->m_airtightness_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_pantograph_cm == kcg_c2->m_pantograph_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82660(struct__82660 *kcg_c1, struct__82660 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_magneticshoebrake_cm ==
      kcg_c2->m_magneticshoebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_eddycurrentbrake_cm ==
      kcg_c2->m_eddycurrentbrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_regenerativebrake_cm ==
      kcg_c2->m_regenerativebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82667(struct__82667 *kcg_c1, struct__82667 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isolation_status == kcg_c2->isolation_status);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82672(struct__82672 *kcg_c1, struct__82672 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82630(
      &kcg_c1->change_of_allowed_current_consumption,
      &kcg_c2->change_of_allowed_current_consumption);
  kcg_equ = kcg_equ & kcg_comp_struct__82636(
      &kcg_c1->passenger_door_control_info,
      &kcg_c2->passenger_door_control_info);
  kcg_equ = kcg_equ & kcg_comp_struct__82646(
      &kcg_c1->change_traction_system,
      &kcg_c2->change_traction_system);
  kcg_equ = kcg_equ & kcg_comp_struct__82652(
      &kcg_c1->type_I_train_commands,
      &kcg_c2->type_I_train_commands);
  kcg_equ = kcg_equ & kcg_comp_struct__82660(
      &kcg_c1->brake_inhibition,
      &kcg_c2->brake_inhibition);
  kcg_equ = kcg_equ & kcg_comp_struct__82144(
      &kcg_c1->brake_command,
      &kcg_c2->brake_command);
  kcg_equ = kcg_equ & kcg_comp_struct__82667(
      &kcg_c1->isolation_status,
      &kcg_c2->isolation_status);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82682(struct__82682 *kcg_c1, struct__82682 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__82672(&kcg_c1->info, &kcg_c2->info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82693(struct__82693 *kcg_c1, struct__82693 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ETCS_Isolated == kcg_c2->ETCS_Isolated);
  kcg_equ = kcg_equ & (kcg_c1->Req_Start == kcg_c2->Req_Start);
  kcg_equ = kcg_equ & (kcg_c1->Req_SH == kcg_c2->Req_SH);
  kcg_equ = kcg_equ & (kcg_c1->Req_Override == kcg_c2->Req_Override);
  kcg_equ = kcg_equ & (kcg_c1->Req_NL == kcg_c2->Req_NL);
  kcg_equ = kcg_equ & (kcg_c1->Req_Exit_SH == kcg_c2->Req_Exit_SH);
  kcg_equ = kcg_equ & (kcg_c1->Ack_UN == kcg_c2->Ack_UN);
  kcg_equ = kcg_equ & (kcg_c1->Ack_TR == kcg_c2->Ack_TR);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SR == kcg_c2->Ack_SR);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SN == kcg_c2->Ack_SN);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SH == kcg_c2->Ack_SH);
  kcg_equ = kcg_equ & (kcg_c1->Ack_RV == kcg_c2->Ack_RV);
  kcg_equ = kcg_equ & (kcg_c1->Ack_OS == kcg_c2->Ack_OS);
  kcg_equ = kcg_equ & (kcg_c1->Ack_LS == kcg_c2->Ack_LS);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82710(struct__82710 *kcg_c1, struct__82710 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->SH_Refused_By_RBC == kcg_c2->SH_Refused_By_RBC);
  kcg_equ = kcg_equ & (kcg_c1->Ack_UN == kcg_c2->Ack_UN);
  kcg_equ = kcg_equ & (kcg_c1->Ack_TR == kcg_c2->Ack_TR);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SR == kcg_c2->Ack_SR);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SN == kcg_c2->Ack_SN);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SH == kcg_c2->Ack_SH);
  kcg_equ = kcg_equ & (kcg_c1->Ack_RV == kcg_c2->Ack_RV);
  kcg_equ = kcg_equ & (kcg_c1->Ack_OS == kcg_c2->Ack_OS);
  kcg_equ = kcg_equ & (kcg_c1->Ack_LS == kcg_c2->Ack_LS);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82722(struct__82722 *kcg_c1, struct__82722 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Speed == kcg_c2->Speed);
  kcg_equ = kcg_equ & (kcg_c1->Dist_Run == kcg_c2->Dist_Run);
  kcg_equ = kcg_equ & (kcg_c1->Length == kcg_c2->Length);
  kcg_equ = kcg_equ & (kcg_c1->Dist_Start == kcg_c2->Dist_Start);
  kcg_equ = kcg_equ & (kcg_c1->Available == kcg_c2->Available);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82730(struct__82730 *kcg_c1, struct__82730 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Length_Ack == kcg_c2->Length_Ack);
  kcg_equ = kcg_equ & (kcg_c1->Length == kcg_c2->Length);
  kcg_equ = kcg_equ & (kcg_c1->Speed == kcg_c2->Speed);
  kcg_equ = kcg_equ & (kcg_c1->Mode == kcg_c2->Mode);
  kcg_equ = kcg_equ & (kcg_c1->Distance == kcg_c2->Distance);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82738(struct__82738 *kcg_c1, struct__82738 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Emergency_Stop_Message_Received ==
      kcg_c2->Emergency_Stop_Message_Received);
  kcg_equ = kcg_equ & (kcg_c1->T_NVCONTACT_Overpass ==
      kcg_c2->T_NVCONTACT_Overpass);
  kcg_equ = kcg_equ & kcg_comp_struct__82722(
      &kcg_c1->Reversing_Data,
      &kcg_c2->Reversing_Data);
  kcg_equ = kcg_equ & (kcg_c1->RBC_Authorized_SR == kcg_c2->RBC_Authorized_SR);
  kcg_equ = kcg_equ & (kcg_c1->RBC_Ack_TR_EB_Revocked ==
      kcg_c2->RBC_Ack_TR_EB_Revocked);
  kcg_equ = kcg_equ & (kcg_c1->Linking_Reaction_To_Trip ==
      kcg_c2->Linking_Reaction_To_Trip);
  kcg_equ = kcg_equ & (kcg_c1->Error_BG_System_Version ==
      kcg_c2->Error_BG_System_Version);
  kcg_equ = kcg_equ & (kcg_c1->Stop_If_In_SR == kcg_c2->Stop_If_In_SR);
  kcg_equ = kcg_equ & (kcg_c1->Stop_If_In_shunting ==
      kcg_c2->Stop_If_In_shunting);
  kcg_equ = kcg_equ & (kcg_c1->List_Bg_Related_To_SR_Empty ==
      kcg_c2->List_Bg_Related_To_SR_Empty);
  kcg_equ = kcg_equ & (kcg_c1->Trip_Order_Given_By_Balise ==
      kcg_c2->Trip_Order_Given_By_Balise);
  kcg_equ = kcg_equ & (kcg_c1->Shunting_granted_By_RBC ==
      kcg_c2->Shunting_granted_By_RBC);
  kcg_equ = kcg_equ & kcg_comp_struct__82730(
      &kcg_c1->Mode_Profile_On_Board,
      &kcg_c2->Mode_Profile_On_Board);
  kcg_equ = kcg_equ & (kcg_c1->MA_SSP_Gradient_Available ==
      kcg_c2->MA_SSP_Gradient_Available);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__82761(struct__82761 *kcg_c1, struct__82761 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_bool_4(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */


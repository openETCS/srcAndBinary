/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_types.h"

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

kcg_bool kcg_comp_array__15151(array__15151 *kcg_c1, array__15151 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__15146(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__15166(array__15166 *kcg_c1, array__15166 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__15159(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__15181(array__15181 *kcg_c1, array__15181 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__15174(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__15296(array__15296 *kcg_c1, array__15296 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__15208(
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

kcg_bool kcg_comp_array_char_30(array_char_30 *kcg_c1, array_char_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_char_30_5(
  array_char_30_5 *kcg_c1,
  array_char_30_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_char_30(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__15396(array__15396 *kcg_c1, array__15396 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 27; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_5(array_real_5 *kcg_c1, array_real_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__15402(array__15402 *kcg_c1, array__15402 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__15385(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__15405(array__15405 *kcg_c1, array__15405 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_15(array_bool_15 *kcg_c1, array_bool_15 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
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

kcg_bool kcg_comp_array_real_12(array_real_12 *kcg_c1, array_real_12 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_9(array_real_9 *kcg_c1, array_real_9 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_12(array_bool_12 *kcg_c1, array_bool_12 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_4(array_real_4 *kcg_c1, array_real_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
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

kcg_bool kcg_comp_array_int_10(array_int_10 *kcg_c1, array_int_10 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_bool_10(array_bool_10 *kcg_c1, array_bool_10 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_char_12(array_char_12 *kcg_c1, array_char_12 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_32(array_real_32 *kcg_c1, array_real_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_int_30(array_int_30 *kcg_c1, array_int_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_6(array_real_6 *kcg_c1, array_real_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_9_6(array_real_9_6 *kcg_c1, array_real_9_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_real_9(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array_real_10_2(
  array_real_10_2 *kcg_c1,
  array_real_10_2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_real_10(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
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

kcg_bool kcg_comp_array_int_12(array_int_12 *kcg_c1, array_int_12 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
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

kcg_bool kcg_comp_array_char_243(array_char_243 *kcg_c1, array_char_243 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 243; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_array__15839(array__15839 *kcg_c1, array__15839 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct__15385(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15126(struct__15126 *kcg_c1, struct__15126 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->activeCab == kcg_c2->activeCab);
  kcg_equ = kcg_equ & (kcg_c1->ownCab == kcg_c2->ownCab);
  kcg_equ = kcg_equ & (kcg_c1->deskOpen == kcg_c2->deskOpen);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15136(struct__15136 *kcg_c1, struct__15136 *kcg_c2)
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

kcg_bool kcg_comp_struct__15146(struct__15146 *kcg_c1, struct__15146 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_trackcond == kcg_c2->m_trackcond);
  kcg_equ = kcg_equ & (kcg_c1->d_trackcond == kcg_c2->d_trackcond);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15154(struct__15154 *kcg_c1, struct__15154 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__15151(
      &kcg_c1->trackCondition,
      &kcg_c2->trackCondition);
  kcg_equ = kcg_equ & (kcg_c1->nIter == kcg_c2->nIter);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15159(struct__15159 *kcg_c1, struct__15159 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->gradient == kcg_c2->gradient);
  kcg_equ = kcg_equ & (kcg_c1->end_section == kcg_c2->end_section);
  kcg_equ = kcg_equ & (kcg_c1->begin_section == kcg_c2->begin_section);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15169(struct__15169 *kcg_c1, struct__15169 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__15166(
      &kcg_c1->gradientProfiles,
      &kcg_c2->gradientProfiles);
  kcg_equ = kcg_equ & (kcg_c1->profileChanged == kcg_c2->profileChanged);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15174(struct__15174 *kcg_c1, struct__15174 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MRS == kcg_c2->MRS);
  kcg_equ = kcg_equ & (kcg_c1->Loc_LRBG == kcg_c2->Loc_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Abs == kcg_c2->Loc_Abs);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15184(struct__15184 *kcg_c1, struct__15184 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__15181(
      &kcg_c1->speedProfiles,
      &kcg_c2->speedProfiles);
  kcg_equ = kcg_equ & (kcg_c1->profileChanged == kcg_c2->profileChanged);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15189(struct__15189 *kcg_c1, struct__15189 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__15154(
      &kcg_c1->trackConditions,
      &kcg_c2->trackConditions);
  kcg_equ = kcg_equ & kcg_comp_struct__15169(
      &kcg_c1->gradientProfiles,
      &kcg_c2->gradientProfiles);
  kcg_equ = kcg_equ & kcg_comp_struct__15184(
      &kcg_c1->speedProfiles,
      &kcg_c2->speedProfiles);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15197(struct__15197 *kcg_c1, struct__15197 *kcg_c2)
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

kcg_bool kcg_comp_struct__15208(struct__15208 *kcg_c1, struct__15208 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_stm == kcg_c2->nid_stm);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15213(struct__15213 *kcg_c1, struct__15213 *kcg_c2)
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
  kcg_equ = kcg_equ & kcg_comp_struct__15208(&kcg_c1->level, &kcg_c2->level);
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

kcg_bool kcg_comp_struct__15239(struct__15239 *kcg_c1, struct__15239 *kcg_c2)
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

kcg_bool kcg_comp_struct__15251(struct__15251 *kcg_c1, struct__15251 *kcg_c2)
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

kcg_bool kcg_comp_struct__15284(struct__15284 *kcg_c1, struct__15284 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__15251(
      &kcg_c1->available_menu,
      &kcg_c2->available_menu);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15290(struct__15290 *kcg_c1, struct__15290 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->entry_request == kcg_c2->entry_request);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15299(struct__15299 *kcg_c1, struct__15299 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array__15296(
      &kcg_c1->levelList,
      &kcg_c2->levelList);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15304(struct__15304 *kcg_c1, struct__15304 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__15299(
      &kcg_c1->levelList,
      &kcg_c2->levelList);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15310(struct__15310 *kcg_c1, struct__15310 *kcg_c2)
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

kcg_bool kcg_comp_struct__15320(struct__15320 *kcg_c1, struct__15320 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledged == kcg_c2->acknowledged);
  kcg_equ = kcg_equ & (kcg_c1->textMessage_ID == kcg_c2->textMessage_ID);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15327(struct__15327 *kcg_c1, struct__15327 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nAlive == kcg_c2->nAlive);
  kcg_equ = kcg_equ & (kcg_c1->statusSet == kcg_c2->statusSet);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15334(struct__15334 *kcg_c1, struct__15334 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_identifier ==
      kcg_c2->DMI_nid_icon_identifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15340(struct__15340 *kcg_c1, struct__15340 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_request == kcg_c2->m_request);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15346(struct__15346 *kcg_c1, struct__15346 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledged == kcg_c2->acknowledged);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15352(struct__15352 *kcg_c1, struct__15352 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__15208(&kcg_c1->level, &kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15358(struct__15358 *kcg_c1, struct__15358 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainRunningNumber ==
      kcg_c2->trainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__15367(struct__15367 *kcg_c1, struct__15367 *kcg_c2)
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

kcg_bool kcg_comp_struct__15373(struct__15373 *kcg_c1, struct__15373 *kcg_c2)
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

kcg_bool kcg_comp_struct__15385(struct__15385 *kcg_c1, struct__15385 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__15197(
      &kcg_c1->dmi_msg,
      &kcg_c2->dmi_msg);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */


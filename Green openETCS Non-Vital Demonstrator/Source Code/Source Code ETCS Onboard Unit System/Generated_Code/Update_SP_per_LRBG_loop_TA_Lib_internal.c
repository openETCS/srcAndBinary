/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_SP_per_LRBG_loop_TA_Lib_internal.h"

/* TA_Lib_internal::Update_SP_per_LRBG_loop */
void Update_SP_per_LRBG_loop_TA_Lib_internal(
  /* TA_Lib_internal::Update_SP_per_LRBG_loop::i */kcg_int i,
  /* TA_Lib_internal::Update_SP_per_LRBG_loop::SP */SSP_cat_t_TA_MRSP *SP,
  /* TA_Lib_internal::Update_SP_per_LRBG_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_Lib_internal::Update_SP_per_LRBG_loop::new_SSP_received */SSP_cat_t_TA_MRSP *new_SSP_received,
  /* TA_Lib_internal::Update_SP_per_LRBG_loop::SpeedProfile_out */SSP_cat_t_TA_MRSP *SpeedProfile_out)
{
  static SSP_section_t_TA_MRSP tmp;
  
  kcg_copy_SSP_cat_t_TA_MRSP(SpeedProfile_out, SP);
  if ((0 <= i) & (i < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&tmp, &(*new_SSP_received)[i]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &tmp,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  if ((0 <= i + First_Section_To_Replace) & (i + First_Section_To_Replace <
      33)) {
    kcg_copy_SSP_section_t_TA_MRSP(
      &(*SpeedProfile_out)[i + First_Section_To_Replace],
      &tmp);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_SP_per_LRBG_loop_TA_Lib_internal.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


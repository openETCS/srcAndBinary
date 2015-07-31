/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP.h"

/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1 */
void MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP(
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::SSP_cat_in */SSP_cat_t_TA_MRSP *SSP_cat_in,
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::SSP_reverse_t_cat_out */SSP_t_cat_t_TA_MRSP *SSP_reverse_t_cat_out,
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP1::SSP_reverse_cat_out */SSP_cat_t_TA_MRSP *SSP_reverse_cat_out)
{
  static kcg_int i;
  
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_section_t_TA_MRSP(
      &(*SSP_reverse_cat_out)[i],
      &(*SSP_cat_in)[32 - i]);
  }
  for (i = 0; i < 33; i++) {
    (*SSP_reverse_t_cat_out)[i] = /* 1 */
      MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP(&(*SSP_reverse_cat_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


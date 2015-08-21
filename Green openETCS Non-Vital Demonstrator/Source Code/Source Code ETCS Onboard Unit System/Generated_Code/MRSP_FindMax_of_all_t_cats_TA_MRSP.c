/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_FindMax_of_all_t_cats_TA_MRSP.h"

/* TA_MRSP::MRSP_FindMax_of_all_t_cats */
void MRSP_FindMax_of_all_t_cats_TA_MRSP(
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats::SSP_indexed_targets_per_cat */SSP_t_indexed_targets_list_t_TA_MRSP *SSP_indexed_targets_per_cat,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats::SSP_largest_target */SSP_t_indexed_matrix_element_TA_MRSP *SSP_largest_target)
{
  static array__82787 tmp2;
  static SSP_t_indexed_matrix_element_TA_MRSP tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */
    MRSP_ConvertIndexedElements_TA_MRSP(
      &(*SSP_indexed_targets_per_cat)[i],
      &tmp2[i]);
  }
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    SSP_largest_target,
    (SSP_t_indexed_matrix_element_TA_MRSP *) &DEFAULT_indexed_target_TA_MRSP);
  for (i = 0; i < 11; i++) {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&tmp1, SSP_largest_target);
    /* 1 */
    MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP(
      i,
      &tmp1,
      &tmp2[i],
      &tmp,
      SSP_largest_target);
    if (!tmp) {
      break;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindMax_of_all_t_cats_TA_MRSP.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


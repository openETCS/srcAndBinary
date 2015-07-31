/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.h"

/* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat */
void MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::SSP_matrix_in */SSP_t_matrix_t_TA_MRSP *SSP_matrix_in,
  /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::SSP_indexed_targets_per_cat_out */SSP_t_indexed_targets_list_t_TA_MRSP *SSP_indexed_targets_per_cat_out)
{
  static kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */
    MRSP_Find_First_in_SSP_t_cat_TA_MRSP(
      &(*SSP_matrix_in)[i],
      &(*SSP_indexed_targets_per_cat_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_BuildTargetList_TA_MRSP.h"

/* TA_MRSP::MRSP_BuildTargetList */
void MRSP_BuildTargetList_TA_MRSP(
  /* TA_MRSP::MRSP_BuildTargetList::SSP_Matrix_In */SSP_t_matrix_t_TA_MRSP *SSP_Matrix_In,
  /* TA_MRSP::MRSP_BuildTargetList::SSP_list_out */SSP_t_list_t_TA_MRSP *SSP_list_out)
{
  static SSP_t_matrix_t_TA_MRSP tmp;
  static kcg_int i;
  /* TA_MRSP::MRSP_BuildTargetList::_L4 */
  static SSP_t_matrix_t_TA_MRSP _L4;
  
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&_L4, SSP_Matrix_In);
  for (i = 0; i < 363; i++) {
    kcg_copy_SSP_t_matrix_t_TA_MRSP(&tmp, &_L4);
    /* 1 */
    MRSP_BuildTargetList_LOOP_TA_MRSP(
      &tmp,
      (SSP_t_indexed_matrix_element_TA_MRSP *) &DEFAULT_SSP_targets_TA_MRSP[i],
      &_L4,
      &(*SSP_list_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_BuildTargetList_TA_MRSP.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


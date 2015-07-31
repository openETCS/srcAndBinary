/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Find_First_in_SSP_t_cat_TA_MRSP.h"

/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat */
void MRSP_Find_First_in_SSP_t_cat_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::SSP_cat_in */SSP_t_cat_t_TA_MRSP *SSP_cat_in,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::SSP_indexed_loc */SSP_t_indexed_trgt_t_TA_MRSP *SSP_indexed_loc)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L1 */
  static kcg_int _L1;
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat::_L5 */
  static SSP_target_t_TA_MRSP _L5;
  
  _L5 = 0;
  for (i = 0; i < 33; i++) {
    tmp1 = _L5;
    /* 1 */
    MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP(
      i,
      tmp1,
      (*SSP_cat_in)[i],
      &tmp,
      &_L5);
    _L1 = i + 1;
    if (!tmp) {
      break;
    }
  }
  (*SSP_indexed_loc).Index = _L1 - 1;
  (*SSP_indexed_loc).Loc = _L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_SSP_t_cat_TA_MRSP.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


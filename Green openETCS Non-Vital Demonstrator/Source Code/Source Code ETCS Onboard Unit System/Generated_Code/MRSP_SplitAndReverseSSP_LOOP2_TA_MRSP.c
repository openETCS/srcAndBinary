/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.h"

/* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2 */
SSP_t_section_t_TA_MRSP MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP(
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2::SSP_section_in */SSP_section_t_TA_MRSP *SSP_section_in)
{
  /* TA_MRSP::MRSP_SplitAndReverseSSP_LOOP2::SSP_t_section_out */
  static SSP_t_section_t_TA_MRSP SSP_t_section_out;
  
  SSP_t_section_out = (*SSP_section_in).target;
  return SSP_t_section_out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


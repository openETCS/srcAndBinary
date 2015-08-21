/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_Lowest_Speed_TA_MRSP.h"

/* TA_MRSP::MRSP_Determine_Lowest_Speed */
SSP_s_section_t_TA_MRSP MRSP_Determine_Lowest_Speed_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::i */kcg_int i,
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::Acc */SSP_s_section_t_TA_MRSP Acc,
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::ValidSpeed */SSP_s_section_t_TA_MRSP ValidSpeed)
{
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::_L7 */
  static SSP_s_section_t_TA_MRSP _L7;
  /* TA_MRSP::MRSP_Determine_Lowest_Speed::MRSpeed */
  static SSP_s_section_t_TA_MRSP MRSpeed;
  
  if (0 != i) {
    _L7 = Acc;
  }
  else {
    _L7 = ValidSpeed;
  }
  if (_L7 <= ValidSpeed) {
    MRSpeed = _L7;
  }
  else {
    MRSpeed = ValidSpeed;
  }
  return MRSpeed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_Lowest_Speed_TA_MRSP.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


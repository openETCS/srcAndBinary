/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_LengthOfTargetList_TA_MRSP.h"

/* TA_MRSP::MRSP_Determine_LengthOfTargetList */
kcg_int MRSP_Determine_LengthOfTargetList_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList::SSP_t_list_in */SSP_t_list_t_TA_MRSP *SSP_t_list_in)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList::length */
  static kcg_int length;
  
  length = 0;
  for (i = 0; i < 363; i++) {
    tmp1 = length;
    /* 1 */
    MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP(
      i,
      tmp1,
      &(*SSP_t_list_in)[362 - i],
      &tmp,
      &length);
    if (!tmp) {
      break;
    }
  }
  return length;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_LengthOfTargetList_TA_MRSP.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


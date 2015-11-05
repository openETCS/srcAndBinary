/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_MESSAGE_to_int_TM_conv.h"

/* TM_conversions::CAST_NID_MESSAGE_to_int */
kcg_int CAST_NID_MESSAGE_to_int_TM_conv(
  /* TM_conversions::CAST_NID_MESSAGE_to_int::nid_message */ NID_MESSAGE nid_message)
{
  /* TM_conversions::CAST_NID_MESSAGE_to_int::nid_message_int */
  static kcg_int nid_message_int;
  
  nid_message_int = nid_message;
  return nid_message_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_MESSAGE_to_int_TM_conv.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


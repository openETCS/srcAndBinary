/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conv.h"

/* TM_conversions::CAST_Int_to_NID_MESSAGE */
NID_MESSAGE CAST_Int_to_NID_MESSAGE_TM_conv(
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::nid_message_int */ kcg_int nid_message_int)
{
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::nid_message */
  static NID_MESSAGE nid_message;
  
  nid_message = nid_message_int;
  return nid_message;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_MESSAGE_TM_conv.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */


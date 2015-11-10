/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_MESSAGE_TM_conver.h"

/* TM_conversions::CAST_Int_to_L_MESSAGE */
L_MESSAGE CAST_Int_to_L_MESSAGE_TM_conver(
  /* TM_conversions::CAST_Int_to_L_MESSAGE::l_message_int */ kcg_int l_message_int)
{
  /* TM_conversions::CAST_Int_to_L_MESSAGE::l_message */
  static L_MESSAGE l_message;
  
  l_message = l_message_int;
  return l_message;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_MESSAGE_TM_conver.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


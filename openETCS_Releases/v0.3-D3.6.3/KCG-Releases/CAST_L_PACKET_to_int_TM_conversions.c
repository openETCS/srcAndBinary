/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"

/* TM_conversions::CAST_L_PACKET_to_int */
kcg_int CAST_L_PACKET_to_int_TM_conversions(
  /* TM_conversions::CAST_L_PACKET_to_int::l_packet */ L_PACKET l_packet)
{
  /* TM_conversions::CAST_L_PACKET_to_int::l_packet_int */
  static kcg_int l_packet_int;
  
  l_packet_int = l_packet;
  return l_packet_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_PACKET_to_int_TM_conversions.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */


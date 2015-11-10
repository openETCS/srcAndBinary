/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_PACKET_to_int_TM_conve.h"

/* TM_conversions::CAST_NID_PACKET_to_int */
kcg_int CAST_NID_PACKET_to_int_TM_conve(
  /* TM_conversions::CAST_NID_PACKET_to_int::nid_packet */ NID_PACKET nid_packet)
{
  /* TM_conversions::CAST_NID_PACKET_to_int::nid_packet_int */
  static kcg_int nid_packet_int;
  
  nid_packet_int = nid_packet;
  return nid_packet_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_PACKET_to_int_TM_conve.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


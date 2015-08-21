/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P137_Legacy_TM_specific.h"

/* TM_specific::Read_P137_Legacy */
void Read_P137_Legacy_TM_specific(
  /* TM_specific::Read_P137_Legacy::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P137_Legacy::P137_legacy_out */P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P137_legacy_out)
{
  /* TM_specific::Read_P137_Legacy::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P137_TM(Message_IN, &_L1, P137_legacy_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P137_Legacy_TM_specific.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


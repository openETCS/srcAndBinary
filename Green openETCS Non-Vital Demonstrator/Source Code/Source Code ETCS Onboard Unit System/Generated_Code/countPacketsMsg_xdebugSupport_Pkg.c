/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countPacketsMsg */
kcg_int countPacketsMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPacketsMsg::Message */ReceivedMessage_T_Common_Types_Pkg *Message)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* xdebugSupport_Pkg::countPacketsMsg::_L3 */
  static kcg_int _L3;
  /* xdebugSupport_Pkg::countPacketsMsg::count */
  static kcg_int count;
  
  _L3 = 0;
  for (i = 0; i < 30; i++) {
    tmp1 = _L3;
    /* 1 */
    countBasics_xdebugSupport_Pkg(
      tmp1,
      &(*Message).packets.PacketHeaders[i],
      &tmp,
      &_L3);
    if (!tmp) {
      break;
    }
  }
  count = _L3 - 1;
  return count;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countPacketsMsg_xdebugSupport_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countPacketsMsg */
kcg_int countPacketsMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPacketsMsg::Message */ ReceivedMessage_T_Common_Types_Pkg *Message)
{
  /* xdebugSupport_Pkg::countPacketsMsg */
  static kcg_int acc;
  /* xdebugSupport_Pkg::countPacketsMsg */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* xdebugSupport_Pkg::countPacketsMsg::count */
  static kcg_int count;
  
  count = 0;
  /* 1 */ for (i = 0; i < 30; i++) {
    acc = count;
    /* 1 */
    countBasics_xdebugSupport_Pkg(
      acc,
      &(*Message).packets.PacketHeaders[i],
      &cond_iterw,
      &count);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  return count;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countPacketsMsg_xdebugSupport_Pkg.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */


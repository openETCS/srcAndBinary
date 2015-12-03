/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPacketsMsg_xdebugSupport_P.h"

/* xdebugSupport_Pkg::countPacketsMsg */
kcg_int countPacketsMsg_xdebugSupport_P(
  /* xdebugSupport_Pkg::countPacketsMsg::Message */ ReceivedMessage_T_Common_Types_ *Message)
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
** countPacketsMsg_xdebugSupport_P.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


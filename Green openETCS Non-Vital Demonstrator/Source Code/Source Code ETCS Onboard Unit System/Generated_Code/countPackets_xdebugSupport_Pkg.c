/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPackets_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::countPackets */
kcg_int countPackets_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPackets::msg */ API_TrackSideInput_T_API_Msg_Pkg *msg)
{
  /* xdebugSupport_Pkg::countPackets */
  static kcg_int acc;
  /* xdebugSupport_Pkg::countPackets */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* xdebugSupport_Pkg::countPackets::_L3 */
  static kcg_int _L3;
  /* xdebugSupport_Pkg::countPackets::count */
  static kcg_int count;
  
  _L3 = 0;
  /* 1 */ for (i = 0; i < 30; i++) {
    acc = _L3;
    /* 1 */
    countBasics_xdebugSupport_Pkg(
      acc,
      &(*msg).packets.PacketHeaders[i],
      &cond_iterw,
      &_L3);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  count = _L3 - 1;
  return count;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countPackets_xdebugSupport_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */


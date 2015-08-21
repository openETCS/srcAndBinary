/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbes_xdebugSupport_Pkg.h"

void setProbes_reset_xdebugSupport_Pkg(outC_setProbes_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::setProbes */
void setProbes_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbes::inMsg */API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  outC_setProbes_xdebugSupport_Pkg *outC)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  
  outC->BG_ID = (*inMsg).btm_msg.api_header.nid_bg;
  outC->radioMSG = (*inMsg).rtm_msg.Radio_Common_Header.nid_message;
  if (outC->init) {
    outC->init = kcg_false;
    tmp1 = 0;
    tmp = 0;
  }
  else {
    tmp1 = outC->rem_BG_ID;
    tmp = outC->rem_radioMSG;
  }
  outC->isChanged = (*inMsg).valid & ((tmp1 != outC->BG_ID) | (tmp !=
        outC->radioMSG));
  outC->packet_id2 = (*inMsg).packets.PacketHeaders[1].nid_packet;
  outC->packet_id1 = (*inMsg).packets.PacketHeaders[0].nid_packet;
  outC->rem_radioMSG = outC->radioMSG;
  outC->rem_BG_ID = outC->BG_ID;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setProbes_xdebugSupport_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


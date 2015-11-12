/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGFromMsg_xdebugSupport_Pk.h"

/* xdebugSupport_Pkg::getLRBGFromMsg */
NID_LRBG getLRBGFromMsg_xdebugSupport_Pk(
  /* xdebugSupport_Pkg::getLRBGFromMsg::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage)
{
  /* xdebugSupport_Pkg::getLRBGFromMsg::LRBG */
  static NID_LRBG LRBG;
  
  /* 1 */ if ((*actualMessage).source == msrc_Euroradio_Common_Types_Pkg) {
    LRBG = (*actualMessage).Radio_Common_Header.nid_lrbg;
  }
  else /* 2 */ if ((*actualMessage).source == msrc_Eurobalise_Common_Types_Pk) {
    LRBG = (*actualMessage).BG_Common_Header.nid_bg +
      (*actualMessage).BG_Common_Header.nid_c * 100000;
  }
  else {
    LRBG = 0;
  }
  return LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGFromMsg_xdebugSupport_Pk.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */


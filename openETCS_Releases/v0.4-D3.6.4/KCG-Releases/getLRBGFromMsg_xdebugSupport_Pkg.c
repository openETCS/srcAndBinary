/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::getLRBGFromMsg */
NID_LRBG getLRBGFromMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::getLRBGFromMsg::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage)
{
  /* xdebugSupport_Pkg::getLRBGFromMsg::LRBG */
  static NID_LRBG LRBG;
  
  /* 1 */ if ((*actualMessage).source == msrc_Euroradio_Common_Types_Pkg) {
    LRBG = (*actualMessage).Radio_Common_Header.nid_lrbg;
  }
  else /* 2 */ if ((*actualMessage).source ==
    msrc_Eurobalise_Common_Types_Pkg) {
    LRBG = (*actualMessage).BG_Common_Header.nid_bg +
      (*actualMessage).BG_Common_Header.nid_c * 100000;
  }
  else {
    LRBG = 0;
  }
  return LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGFromMsg_xdebugSupport_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */


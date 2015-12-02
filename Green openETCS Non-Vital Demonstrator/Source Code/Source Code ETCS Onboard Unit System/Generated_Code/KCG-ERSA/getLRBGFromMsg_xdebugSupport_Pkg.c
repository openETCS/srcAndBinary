/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::getLRBGFromMsg */
NID_LRBG getLRBGFromMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::getLRBGFromMsg::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage)
{
  /* xdebugSupport_Pkg::getLRBGFromMsg::LRBG */ NID_LRBG LRBG;
  
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
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */


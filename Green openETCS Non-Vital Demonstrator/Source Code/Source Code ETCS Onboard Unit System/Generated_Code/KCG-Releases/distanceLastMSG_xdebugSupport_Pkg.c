/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastMSG_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void distanceLastMSG_init_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->MSGLocation = 0;
  outC->lastLRBG = 0;
  outC->lastMSG = 0;
  outC->distance = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void distanceLastMSG_reset_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::distanceLastMSG */
void distanceLastMSG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastMSG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastMSG::msg */ ReceivedMessage_T_Common_Types_Pkg *msg,
  /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */ kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::distanceLastMSG */
  static kcg_int tmp;
  /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg last_MSGLocation;
  /* xdebugSupport_Pkg::distanceLastMSG::MSG_ID */
  static NID_BG last_MSG_ID;
  /* xdebugSupport_Pkg::distanceLastMSG::MSGReceived */
  static kcg_bool MSGReceived;
  /* xdebugSupport_Pkg::distanceLastMSG::_L11 */
  static kcg_bool _L11;
  
  _L11 = (*msg).Radio_Common_Header.nid_message == cm24_General_Message_Id_Pkg;
  /* ck__L11 */ if (_L11) {
    tmp = /* 1 */ countPacketsMsg_xdebugSupport_Pkg(msg);
  }
  else {
    tmp = 0;
  }
  MSGReceived = (*msg).valid & ((*msg).source ==
      msrc_Euroradio_Common_Types_Pkg) & (!_L11 | (_L11 & showGeneral) | (tmp >
        0));
  /* last_init_ck_MSGLocation */ if (outC->init) {
    last_MSG_ID = 0;
    last_MSGLocation = 0;
  }
  else {
    last_MSG_ID = outC->lastMSG;
    last_MSGLocation = outC->MSGLocation;
  }
  /* ck_MSGReceived */ if (MSGReceived) {
    outC->distance = 0.0;
    outC->lastMSG = (*msg).Radio_Common_Header.nid_message;
    outC->MSGLocation = (*odometry).odo.o_nominal;
    outC->lastLRBG = (*msg).Radio_Common_Header.nid_lrbg;
  }
  else {
    /* 1 */ if (last_MSG_ID > 0) {
      outC->distance = (kcg_real)
          ((*odometry).odo.o_nominal - last_MSGLocation) / 100.0;
    }
    else {
      outC->distance = 0.0;
    }
    outC->lastMSG = last_MSG_ID;
    outC->MSGLocation = last_MSGLocation;
    /* last_init_ck_LRBG */ if (outC->init) {
      outC->lastLRBG = 0;
    }
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastMSG_xdebugSupport_Pkg.c
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */


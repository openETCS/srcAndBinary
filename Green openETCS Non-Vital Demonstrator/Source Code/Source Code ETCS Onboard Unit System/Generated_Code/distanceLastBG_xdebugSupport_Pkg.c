/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastBG_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void distanceLastBG_init_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->BGLocation = 0;
  outC->lastBG = 0;
  outC->distance = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void distanceLastBG_reset_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::distanceLastBG */
void distanceLastBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastBG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastBG::msg */ ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::distanceLastBG::BGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg last_BGLocation;
  /* xdebugSupport_Pkg::distanceLastBG::BGPassed */
  static kcg_bool BGPassed;
  
  BGPassed = (*msg).valid & ((*msg).source == msrc_Eurobalise_Common_Types_Pkg);
  /* last_init_ck_BGLocation */ if (outC->init) {
    last_BGLocation = 0;
  }
  else {
    last_BGLocation = outC->BGLocation;
  }
  /* ck_BGPassed */ if (BGPassed) {
    outC->distance = 0.0;
    outC->lastBG = (*msg).BG_Common_Header.nid_bg;
    outC->BGLocation = (*odometry).odo.o_nominal;
  }
  else {
    outC->distance = (kcg_real) ((*odometry).odo.o_nominal - last_BGLocation) /
      100.0;
    /* last_init_ck_BG_ID */ if (outC->init) {
      outC->lastBG = 0;
    }
    outC->BGLocation = last_BGLocation;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastBG_xdebugSupport_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


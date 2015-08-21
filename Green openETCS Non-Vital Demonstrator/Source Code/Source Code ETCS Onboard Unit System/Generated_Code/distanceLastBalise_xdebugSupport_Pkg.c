/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastBalise_xdebugSupport_Pkg.h"

void distanceLastBalise_reset_xdebugSupport_Pkg(
  outC_distanceLastBalise_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::distanceLastBalise */
void distanceLastBalise_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastBalise::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastBalise::msg */ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBalise_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::distanceLastBalise::BGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg last_BGLocation;
  /* xdebugSupport_Pkg::distanceLastBalise::BGPassed */
  static kcg_bool BGPassed;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_BGLocation = 0;
  }
  else {
    last_BGLocation = outC->BGLocation;
  }
  BGPassed = (*msg).valid & ((*msg).source == msrc_Eurobalise_Common_Types_Pkg);
  if (BGPassed) {
    outC->distance = 0.0;
    outC->BGLocation = (*odometry).odo.o_nominal;
  }
  else {
    outC->distance = (kcg_real) ((*odometry).odo.o_nominal - last_BGLocation) /
      100.0;
    outC->BGLocation = last_BGLocation;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** distanceLastBalise_xdebugSupport_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


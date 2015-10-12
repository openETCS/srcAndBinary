/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locationOfReferenceLRBG_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::locationOfReferenceLRBG */
void locationOfReferenceLRBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::LRBG */ NID_LRBG LRBG,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::position */ L_internal_Type_Obu_BasicTypes_Pkg *position,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::passed */ kcg_bool *passed)
{
  *passed = LRBG == (*trainPosition).LRBG.nid_bg;
  /* 1 */ if (*passed) {
    *position = (*trainPosition).LRBG.location.nominal;
  }
  else {
    *position = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** locationOfReferenceLRBG_xdebugSupport_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


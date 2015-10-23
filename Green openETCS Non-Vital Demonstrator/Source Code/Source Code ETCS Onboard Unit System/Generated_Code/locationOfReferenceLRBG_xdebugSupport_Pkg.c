/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
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
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L14 */
  static NID_BG _L14;
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L13 */
  static NID_C _L13;
  
  /* 1 */ Decode_NID_LRBG_TM(LRBG, &_L13, &_L14);
  *passed = (_L13 == (*trainPosition).LRBG.nid_c) & (_L14 ==
      (*trainPosition).LRBG.nid_bg);
  /* 1 */ if (*passed) {
    *position = (*trainPosition).LRBG.location.nominal;
  }
  else {
    *position = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** locationOfReferenceLRBG_xdebugSupport_Pkg.c
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */


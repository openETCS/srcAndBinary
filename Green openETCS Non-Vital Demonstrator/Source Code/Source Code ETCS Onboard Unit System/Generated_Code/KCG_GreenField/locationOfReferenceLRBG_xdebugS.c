/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locationOfReferenceLRBG_xdebugS.h"

/* xdebugSupport_Pkg::locationOfReferenceLRBG */
void locationOfReferenceLRBG_xdebugS(
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::LRBG */ NID_LRBG LRBG,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::position */ L_internal_Type_Obu_BasicTypes_ *position,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::passed */ kcg_bool *passed)
{
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L14 */
  static NID_BG _L14;
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::_L13 */
  static NID_C _L13;
  
  *passed = kcg_true;
  /* 1 */ Decode_NID_LRBG_TM(LRBG, &_L13, &_L14);
  /* 1 */ if ((_L13 == (*trainPosition).LRBG.nid_c) & (_L14 ==
      (*trainPosition).LRBG.nid_bg)) {
    *position = (*trainPosition).LRBG.location.nominal;
  }
  else {
    *position = (*trainPosition).maxSafeFrontEndPostion;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** locationOfReferenceLRBG_xdebugS.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_a_i_ProvidePositio.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_a_i_init_ProvidePo(outC_op_3_6_5_1_4_a_i_ProvidePo *outC)
{
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->rem_odometry.valid = kcg_true;
  outC->rem_odometry.timestamp = 0;
  outC->rem_odometry.odo.o_nominal = 0;
  outC->rem_odometry.odo.o_min = 0;
  outC->rem_odometry.odo.o_max = 0;
  outC->rem_odometry.speed.v_safeNominal = 0;
  outC->rem_odometry.speed.v_rawNominal = 0;
  outC->rem_odometry.speed.v_lower = 0;
  outC->rem_odometry.speed.v_upper = 0;
  outC->rem_odometry.acceleration = 0;
  outC->rem_odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->rem_odometry.motionDirection = unknownDirection_Obu_BasicTypes;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_a_i_reset_ProvideP(outC_op_3_6_5_1_4_a_i_ProvidePo *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i */
void op_3_6_5_1_4_a_i_ProvidePositio(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_6_5_1_4_a_i_ProvidePo *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::_L27 */
  static odometry_T_Obu_BasicTypes_Pkg _L27;
  
  /* last_init_ck_odometry */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_odometry_T_Obu_BasicTy(
      &_L27,
      (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport);
  }
  else {
    kcg_copy_odometry_T_Obu_BasicTy(&_L27, &outC->rem_odometry);
  }
  outC->trigger = _L27.valid & (_L27.motionState != (*odometry).motionState) &
    (*odometry).valid;
  kcg_copy_odometry_T_Obu_BasicTy(&outC->rem_odometry, odometry);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_a_i_ProvidePositio.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */


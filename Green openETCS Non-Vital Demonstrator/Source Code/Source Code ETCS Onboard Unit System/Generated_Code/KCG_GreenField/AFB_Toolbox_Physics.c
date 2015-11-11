/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AFB_Toolbox_Physics.h"

#ifndef KCG_USER_DEFINED_INIT
void AFB_init_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC)
{
  outC->afbActive = kcg_true;
  outC->needZeroPosition_IfBlock1 = kcg_true;
  outC->init = kcg_true;
  outC->calculatedAcceleration = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AFB_reset_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Physics::AFB */
void AFB_Toolbox_Physics(
  /* Toolbox::Physics::AFB::targetSpeed */ kcg_real targetSpeed,
  /* Toolbox::Physics::AFB::traction */ kcg_real traction,
  /* Toolbox::Physics::AFB::brake */ kcg_real brake,
  /* Toolbox::Physics::AFB::currentSpeed */ kcg_real currentSpeed,
  outC_AFB_Toolbox_Physics *outC)
{
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L7 */
  static kcg_real _L7_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L19 */
  static kcg_real _L19_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L9 */
  static kcg_real _L9_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else */
  static kcg_bool else_clock_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::realTargetSpeed */
  static kcg_real realTargetSpeed;
  
  outC->afbActive = targetSpeed > 0.0;
  realTargetSpeed = targetSpeed - 0.8;
  /* ck_afbActive */ if (outC->afbActive) {
    IfBlock2_clock_IfBlock1 = (currentSpeed < realTargetSpeed + 0.5) &
      (currentSpeed > realTargetSpeed - 0.5);
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      outC->calculatedAcceleration = 0.0;
    }
    else {
      else_clock_IfBlock1_IfBlock2 = currentSpeed < realTargetSpeed;
      /* ck_anon_activ */ if (else_clock_IfBlock1_IfBlock2) {
        _L7_IfBlock1_IfBlock2 = realTargetSpeed - currentSpeed;
        /* 1 */ if (_L7_IfBlock1_IfBlock2 > 5.5) {
          outC->calculatedAcceleration = traction;
        }
        else {
          outC->calculatedAcceleration = traction * (_L7_IfBlock1_IfBlock2 /
              5.5);
        }
      }
      else {
        _L9_IfBlock1_IfBlock2 = currentSpeed - realTargetSpeed;
        _L19_IfBlock1_IfBlock2 = - 300.0;
        /* 3 */ if (_L9_IfBlock1_IfBlock2 > 5.5) {
          outC->calculatedAcceleration = _L19_IfBlock1_IfBlock2;
        }
        else {
          outC->calculatedAcceleration = _L19_IfBlock1_IfBlock2 *
            (_L9_IfBlock1_IfBlock2 / 5.5);
        }
      }
    }
  }
  else {
    /* 1_1 */ if (outC->init) {
      outC->needZeroPosition_IfBlock1 = kcg_false;
    }
    else {
      outC->needZeroPosition_IfBlock1 = (brake > 0.0) | (!(traction == 0.0) &
          outC->needZeroPosition_IfBlock1);
    }
    outC->init = kcg_false;
    /* ck_needZeroPosition */ if (outC->needZeroPosition_IfBlock1) {
      outC->calculatedAcceleration = - brake;
    }
    else {
      outC->calculatedAcceleration = traction;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AFB_Toolbox_Physics.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */


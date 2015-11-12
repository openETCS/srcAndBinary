/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AFB_Toolbox_Physics.h"

void AFB_reset_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::Physics::AFB */
void AFB_Toolbox_Physics(
  /* Toolbox::Physics::AFB::targetSpeed */kcg_real targetSpeed,
  /* Toolbox::Physics::AFB::traction */kcg_real traction,
  /* Toolbox::Physics::AFB::brake */kcg_real brake,
  /* Toolbox::Physics::AFB::currentSpeed */kcg_real currentSpeed,
  outC_AFB_Toolbox_Physics *outC)
{
  outC->IfBlock1_clock = targetSpeed > 0.0;
  outC->afbActive = outC->IfBlock1_clock;
  outC->realTargetSpeed = targetSpeed - 0.8;
  if (outC->IfBlock1_clock) {
    outC->_1_IfBlock2_clock_IfBlock1 = (currentSpeed < outC->realTargetSpeed +
        0.5) & (currentSpeed > outC->realTargetSpeed - 0.5);
    if (outC->_1_IfBlock2_clock_IfBlock1) {
      outC->calculatedAcceleration = 0.0;
    }
    else {
      outC->else_clock_IfBlock1_IfBlock2 = currentSpeed < outC->realTargetSpeed;
      if (outC->else_clock_IfBlock1_IfBlock2) {
        outC->_L7_IfBlock1_IfBlock2 = outC->realTargetSpeed - currentSpeed;
        if (outC->_L7_IfBlock1_IfBlock2 > 5.5) {
          outC->calculatedAcceleration = traction;
        }
        else {
          outC->calculatedAcceleration = traction *
            (outC->_L7_IfBlock1_IfBlock2 / 5.5);
        }
      }
      else {
        outC->_L19_IfBlock1_IfBlock2 = - 300.0;
        outC->_L9_IfBlock1_IfBlock2 = currentSpeed - outC->realTargetSpeed;
        if (outC->_L9_IfBlock1_IfBlock2 > 5.5) {
          outC->calculatedAcceleration = outC->_L19_IfBlock1_IfBlock2;
        }
        else {
          outC->calculatedAcceleration = outC->_L19_IfBlock1_IfBlock2 *
            (outC->_L9_IfBlock1_IfBlock2 / 5.5);
        }
      }
    }
  }
  else {
    if (outC->init) {
      outC->init = kcg_false;
      outC->IfBlock2_clock_IfBlock1 = kcg_false;
    }
    else {
      outC->IfBlock2_clock_IfBlock1 = (brake > 0.0) | (!(traction == 0.0) &
          outC->IfBlock2_clock_IfBlock1);
    }
    if (outC->IfBlock2_clock_IfBlock1) {
      outC->calculatedAcceleration = - brake;
    }
    else {
      outC->calculatedAcceleration = traction;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AFB_Toolbox_Physics.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */


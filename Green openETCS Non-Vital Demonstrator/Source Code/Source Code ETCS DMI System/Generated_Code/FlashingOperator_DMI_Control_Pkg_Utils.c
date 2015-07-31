/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlashingOperator_DMI_Control_Pkg_Utils.h"

void FlashingOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* DMI_Control_Pkg::Utils::FlashingOperator */
void FlashingOperator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FlashingOperator::OnOff */kcg_bool OnOff,
  /* DMI_Control_Pkg::Utils::FlashingOperator::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Utils::FlashingOperator::Interval */kcg_int Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _1_SSM_ST_SM1 SM1_state_sel;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _1_SSM_ST_SM1 SM1_state_act;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static kcg_bool SM1_reset_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_stop_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_stop_SM1 :
      if (OnOff) {
        SM1_state_act = SSM_st_start_SM1;
      }
      else {
        SM1_state_act = SSM_st_stop_SM1;
      }
      SM1_reset_act = OnOff;
      break;
    case SSM_st_start_SM1 :
      SM1_reset_act = !OnOff;
      if (SM1_reset_act) {
        SM1_state_act = SSM_st_stop_SM1;
      }
      else {
        SM1_state_act = SSM_st_start_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_start_SM1 :
      outC->active = kcg_true;
      if (SM1_reset_act) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        outC->_L10_SM1_start = !kcg_false;
      }
      else {
        outC->_L10_SM1_start = !outC->_L10_SM1_start;
      }
      outC->SM1_state_nxt = SSM_st_start_SM1;
      outC->flashigOut = outC->_L10_SM1_start;
      outC->init1 = kcg_false;
      break;
    case SSM_st_stop_SM1 :
      outC->flashigOut = kcg_false;
      outC->active = kcg_false;
      outC->SM1_state_nxt = SSM_st_stop_SM1;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlashingOperator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */


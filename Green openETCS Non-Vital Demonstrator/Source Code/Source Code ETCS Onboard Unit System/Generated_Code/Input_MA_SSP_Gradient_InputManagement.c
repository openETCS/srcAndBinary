/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_MA_SSP_Gradient_InputManagement.h"

/* InputManagement::Input_MA_SSP_Gradient */
void Input_MA_SSP_Gradient_InputManagement(
  /* InputManagement::Input_MA_SSP_Gradient::P_12 */kcg_bool P_12,
  /* InputManagement::Input_MA_SSP_Gradient::P_15 */kcg_bool P_15,
  /* InputManagement::Input_MA_SSP_Gradient::P_21 */kcg_bool P_21,
  /* InputManagement::Input_MA_SSP_Gradient::P_27 */kcg_bool P_27,
  /* InputManagement::Input_MA_SSP_Gradient::received_L2_L3_MA */kcg_bool *received_L2_L3_MA,
  /* InputManagement::Input_MA_SSP_Gradient::received_L1_MA */kcg_bool *received_L1_MA,
  /* InputManagement::Input_MA_SSP_Gradient::MA_SSP_Gradient_Available */kcg_bool *MA_SSP_Gradient_Available,
  /* InputManagement::Input_MA_SSP_Gradient::received_target_speed */kcg_bool *received_target_speed)
{
  *received_target_speed = P_27;
  *received_L1_MA = P_12;
  *received_L2_L3_MA = P_15;
  *MA_SSP_Gradient_Available = (*received_L1_MA | *received_L2_L3_MA) & P_21 &
    *received_target_speed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_MA_SSP_Gradient_InputManagement.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_MA_SSP_Gradient_InputManagement.h"

/* InputManagement::Input_MA_SSP_Gradient */
void Input_MA_SSP_Gradient_InputManagement(
  /* InputManagement::Input_MA_SSP_Gradient::P_12 */kcg_bool P_12,
  /* InputManagement::Input_MA_SSP_Gradient::P_15 */P15_Level23MovementAuthorities_T_Packet_Types_Pkg *P_15,
  /* InputManagement::Input_MA_SSP_Gradient::P_21 */P21_GradientProfiles_T_Packet_Types_Pkg *P_21,
  /* InputManagement::Input_MA_SSP_Gradient::P_27 */P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *P_27,
  /* InputManagement::Input_MA_SSP_Gradient::received_L2_L3_MA */kcg_bool *received_L2_L3_MA,
  /* InputManagement::Input_MA_SSP_Gradient::received_L1_MA */kcg_bool *received_L1_MA,
  /* InputManagement::Input_MA_SSP_Gradient::MA_SSP_Gradient_Available */kcg_bool *MA_SSP_Gradient_Available,
  /* InputManagement::Input_MA_SSP_Gradient::received_target_speed */kcg_bool *received_target_speed)
{
  *received_L1_MA = P_12;
  *received_L2_L3_MA = (*P_15)[0].valid;
  *received_target_speed = (*P_27).valid;
  *MA_SSP_Gradient_Available = (*received_L1_MA | *received_L2_L3_MA) &
    (*P_21)[0].valid & *received_target_speed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_MA_SSP_Gradient_InputManagement.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


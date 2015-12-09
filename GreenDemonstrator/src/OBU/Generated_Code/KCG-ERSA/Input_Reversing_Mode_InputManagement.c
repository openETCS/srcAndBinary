/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Reversing_Mode_InputManagement.h"

/* InputManagement::Input_Reversing_Mode */
void Input_Reversing_Mode_InputManagement(
  /* InputManagement::Input_Reversing_Mode::P_138 */ P138_ReversingAreaInformation_T_Packet_Types_Pkg *P_138,
  /* InputManagement::Input_Reversing_Mode::P_139 */ P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P_139,
  /* InputManagement::Input_Reversing_Mode::referenceLocation */ L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::Input_Reversing_Mode::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data)
{
  (*Reversing_Data).Available = (*P_138).valid & (*P_139).valid;
  (*Reversing_Data).Speed = (*P_139).v_reverse;
  (*Reversing_Data).Dist_Start = /* 1 */
    scaledDistance_2_distance_InputManagement(
      (*P_138).q_scale,
      (*P_138).d_startreverse) + referenceLocation;
  (*Reversing_Data).Length = /* 3 */
    scaledDistance_2_distance_InputManagement(
      (*P_138).q_scale,
      (*P_138).l_reversearea);
  (*Reversing_Data).Dist_Run = referenceLocation + /* 2 */
    scaledDistance_2_distance_InputManagement(
      (*P_139).q_scale,
      (*P_139).d_reverse);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Reversing_Mode_InputManagement.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */


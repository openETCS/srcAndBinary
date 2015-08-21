/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Modes_InputManagement.h"

/* InputManagement::Input_Modes */
void Input_Modes_InputManagement(
  /* InputManagement::Input_Modes::P_80 */P80_ModeProfiles_T_Packet_Types_Pkg *P_80,
  /* InputManagement::Input_Modes::P_135 */kcg_bool P_135,
  /* InputManagement::Input_Modes::P_137 */P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P_137,
  /* InputManagement::Input_Modes::P_138 */P138_ReversingAreaInformation_T_Packet_Types_Pkg *P_138,
  /* InputManagement::Input_Modes::P_139 */P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P_139,
  /* InputManagement::Input_Modes::P_63 */kcg_bool P_63,
  /* InputManagement::Input_Modes::Stop_If_In_SH */kcg_bool *Stop_If_In_SH,
  /* InputManagement::Input_Modes::Stop_if_In_SR */kcg_bool *Stop_if_In_SR,
  /* InputManagement::Input_Modes::Reversing_Data */T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* InputManagement::Input_Modes::Mode_Profile_On_Borad */T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *Mode_Profile_On_Borad,
  /* InputManagement::Input_Modes::List_BG_Related_SR_Empty */kcg_bool *List_BG_Related_SR_Empty)
{
  static kcg_int i;
  static kcg_bool tmp;
  /* InputManagement::Input_Modes::_L19 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L19;
  
  (*Reversing_Data).Available = (*P_138).valid & (*P_139).valid;
  (*Reversing_Data).Dist_Start = (*P_138).d_startreverse;
  (*Reversing_Data).Length = (*P_138).l_reversearea;
  (*Reversing_Data).Dist_Run = (*P_139).d_reverse;
  (*Reversing_Data).Speed = (*P_139).v_reverse;
  _L19.Distance = (*P_80)[0].d_mamode;
  _L19.Speed = (*P_80)[0].v_mamode;
  _L19.Length = (*P_80)[0].l_mamode;
  _L19.Length_Ack = (*P_80)[0].l_ackmamode;
  *List_BG_Related_SR_Empty = P_63;
  *Stop_If_In_SH = P_135;
  if ((*P_80)[0].valid) {
    switch ((*P_80)[0].m_mamode) {
      case M_MAMODE_On_Sight :
        _L19.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
        break;
      case M_MAMODE_Shunting :
        _L19.Mode = Profile_SH_Level_And_Mode_Types_Pkg;
        break;
      case M_MAMODE_Limited_Supervision :
        _L19.Mode = Profile_LS_Level_And_Mode_Types_Pkg;
        break;
      
    }
  }
  else {
    _L19.Mode = No_Profile_Level_And_Mode_Types_Pkg;
  }
  for (i = 0; i < 5; i++) {
    kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
      &(*Mode_Profile_On_Borad)[i],
      &_L19);
  }
  switch ((*P_137).q_srstop) {
    case Q_SRSTOP_Stop_if_in_SR_mode :
      tmp = kcg_true;
      break;
    case Q_SRSTOP_Go_if_in_SR_mode :
      tmp = kcg_false;
      break;
    
  }
  *Stop_if_In_SR = (*P_137).valid & tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_Modes_InputManagement.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FloiSpeed_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::FloiSpeed */
V_internal_real_Type_SDM_Types_Pkg FloiSpeed_SDM_Types_Pkg(
  /* SDM_Types_Pkg::FloiSpeed::v_sbi_mrdt */V_internal_real_Type_SDM_Types_Pkg v_sbi_mrdt,
  /* SDM_Types_Pkg::FloiSpeed::v_target_mrdt */V_internal_real_Type_SDM_Types_Pkg v_target_mrdt,
  /* SDM_Types_Pkg::FloiSpeed::v_mrsp */V_internal_real_Type_SDM_Types_Pkg v_mrsp,
  /* SDM_Types_Pkg::FloiSpeed::v_release */V_internal_real_Type_SDM_Types_Pkg v_release,
  /* SDM_Types_Pkg::FloiSpeed::target */TargetType_T_TargetManagement_types target)
{
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  /* SDM_Types_Pkg::FloiSpeed::IfBlock1::then::_L1 */
  static V_internal_real_Type_SDM_Types_Pkg _L1_IfBlock1;
  /* SDM_Types_Pkg::FloiSpeed::IfBlock1::then::_L2 */
  static kcg_real _L2_IfBlock1;
  /* SDM_Types_Pkg::FloiSpeed::IfBlock1::then::_L4 */
  static kcg_real _L4_IfBlock1;
  /* SDM_Types_Pkg::FloiSpeed::IfBlock1::else::_L3 */
  static kcg_real _L3_IfBlock1;
  /* SDM_Types_Pkg::FloiSpeed::con */
  static kcg_bool con;
  /* SDM_Types_Pkg::FloiSpeed::v_floi_dmi */
  static V_internal_real_Type_SDM_Types_Pkg v_floi_dmi;
  
  con = ((EoA_TargetManagement_types == target) & (v_target_mrdt > 0.0)) |
    (target == MRSP_TargetManagement_types);
  if (con) {
    _L4_IfBlock1 = v_target_mrdt + /* 5 */
      dV_sbi_for_V_SDM_Types_Pkg(v_target_mrdt);
    _L2_IfBlock1 = v_mrsp + /* 4 */ dV_sbi_for_V_SDM_Types_Pkg(v_mrsp);
    if (v_sbi_mrdt >= _L4_IfBlock1) {
      _L1_IfBlock1 = v_sbi_mrdt;
    }
    else {
      _L1_IfBlock1 = _L4_IfBlock1;
    }
    if (_L1_IfBlock1 <= _L2_IfBlock1) {
      v_floi_dmi = _L1_IfBlock1;
    }
    else {
      v_floi_dmi = _L2_IfBlock1;
    }
  }
  else {
    _L3_IfBlock1 = v_mrsp + /* 6 */ dV_sbi_for_V_SDM_Types_Pkg(v_mrsp);
    if (v_sbi_mrdt >= v_release) {
      tmp = v_sbi_mrdt;
    }
    else {
      tmp = v_release;
    }
    if (tmp <= _L3_IfBlock1) {
      v_floi_dmi = tmp;
    }
    else {
      v_floi_dmi = _L3_IfBlock1;
    }
  }
  return v_floi_dmi;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FloiSpeed_SDM_Types_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


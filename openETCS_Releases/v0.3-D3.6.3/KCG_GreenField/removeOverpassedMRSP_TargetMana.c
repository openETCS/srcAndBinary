/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSP_TargetMana.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
void removeOverpassedMRSP_TargetMana(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::Targets */ Target_list_MRSP_real_T_TargetM *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::d_max_safe_front */ L_internal_real_Type_SDM_Types_ d_max_safe_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::TargetsOut */ Target_list_MRSP_real_T_TargetM *TargetsOut,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::updated */ kcg_bool *updated)
{
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
  static Target_list_MRSP_real_T_TargetM acc;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L6 */
  static kcg_int _L6;
  
  kcg_copy_Target_list_MRSP_real_(TargetsOut, Targets);
  if (((*Targets)[0].targetType == MRSP_TargetManagement_types) &
    ((*Targets)[0].distance <= d_max_safe_front)) {
    for (i = 0; i < 200; i++) {
      kcg_copy_Target_list_MRSP_real_(&acc, TargetsOut);
      /* 1 */
      removeOverpassedMRSPint_TargetM(
        &acc,
        d_max_safe_front,
        &cond_iterw,
        TargetsOut);
      _L6 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L6 = 0;
  }
  *updated = _L6 > 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** removeOverpassedMRSP_TargetMana.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


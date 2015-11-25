/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
void removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::Targets */ Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::d_max_safe_front */ L_internal_real_Type_SDM_Types_Pkg d_max_safe_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::TargetsOut */ Target_list_MRSP_real_T_TargetManagement_types *TargetsOut,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::updated */ kcg_bool *updated)
{
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */ Target_list_MRSP_real_T_TargetManagement_types acc;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */ kcg_bool cond_iterw;
  kcg_int i;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L6 */ kcg_int _L6;
  
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(TargetsOut, Targets);
  if (((*Targets)[0].targetType == MRSP_TargetManagement_types) &
    ((*Targets)[0].distance <= d_max_safe_front)) {
    for (i = 0; i < 110; i++) {
      kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&acc, TargetsOut);
      /* 1 */
      removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
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
** removeOverpassedMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */


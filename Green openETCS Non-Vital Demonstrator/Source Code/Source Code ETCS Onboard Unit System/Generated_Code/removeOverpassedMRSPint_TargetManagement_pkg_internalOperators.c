/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint */
void removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::Targets */ Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::d_safe_max_front */ L_internal_real_Type_SDM_Types_Pkg d_safe_max_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::Cond */ kcg_bool *Cond,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::TargetsReduced */ Target_list_MRSP_real_T_TargetManagement_types *TargetsReduced)
{
  *Cond = (MRSP_TargetManagement_types == (*Targets)[0].targetType) &
    ((*Targets)[0].distance <= d_safe_max_front);
  /* 1 */ if (*Cond) {
    kcg_copy_array_83314(&(*TargetsReduced)[0], (array_83314 *) &(*Targets)[1]);
    kcg_copy_Target_real_T_TargetManagement_types(
      &(&(*TargetsReduced)[199])[0],
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
  else {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      TargetsReduced,
      Targets);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */


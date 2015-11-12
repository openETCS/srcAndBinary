/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSPint_TargetM.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint */
void removeOverpassedMRSPint_TargetM(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::Targets */ Target_list_MRSP_real_T_TargetM *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::d_safe_max_front */ L_internal_real_Type_SDM_Types_ d_safe_max_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::Cond */ kcg_bool *Cond,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint::TargetsReduced */ Target_list_MRSP_real_T_TargetM *TargetsReduced)
{
  *Cond = (MRSP_TargetManagement_types == (*Targets)[0].targetType) &
    ((*Targets)[0].distance <= d_safe_max_front);
  /* 1 */ if (*Cond) {
    kcg_copy_array_101506(
      &(*TargetsReduced)[0],
      (array_101506 *) &(*Targets)[1]);
    kcg_copy_Target_real_T_TargetMa(
      &(&(*TargetsReduced)[199])[0],
      (Target_real_T_TargetManagement_ *) &emptyTarget_TargetManagement_pk);
  }
  else {
    kcg_copy_Target_list_MRSP_real_(TargetsReduced, Targets);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** removeOverpassedMRSPint_TargetM.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


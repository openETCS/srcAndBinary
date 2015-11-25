/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
void extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::TargetsOfMRSP */ extractTargetsMRSPACC_TargetManagement_pkg *TargetsOfMRSP)
{
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */ extractTargetsMRSPACC_TargetManagement_pkg acc;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */ kcg_bool cond_iterw;
  kcg_int i;
  
  (*TargetsOfMRSP).lastInsertedTargetIndex = - 1;
  for (i = 0; i < 110; i++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &(*TargetsOfMRSP).targetList[i],
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
  if ((*MRSP)[0].valid) {
    for (i = 0; i < 110; i++) {
      kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&acc, TargetsOfMRSP);
      /* 1 */
      extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
        i,
        &acc,
        MRSP,
        &cond_iterw,
        TargetsOfMRSP);
      if (!cond_iterw) {
        break;
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */


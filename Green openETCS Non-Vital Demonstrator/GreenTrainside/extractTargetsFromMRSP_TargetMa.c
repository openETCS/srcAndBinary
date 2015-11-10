/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSP_TargetMa.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
void extractTargetsFromMRSP_TargetMa(
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::MRSP */ MRSP_internal_T_TargetManagemen *MRSP,
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP::TargetsOfMRSP */ extractTargetsMRSPACC_TargetMan *TargetsOfMRSP)
{
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
  static extractTargetsMRSPACC_TargetMan acc;
  /* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP */
  static kcg_bool cond_iterw;
  static kcg_int i;
  
  (*TargetsOfMRSP).lastInsertedTargetIndex = - 1;
  for (i = 0; i < 200; i++) {
    kcg_copy_Target_real_T_TargetMa(
      &(*TargetsOfMRSP).targetList[i],
      (Target_real_T_TargetManagement_ *) &emptyTarget_TargetManagement_pk);
  }
  if ((*MRSP)[0].valid) {
    for (i = 0; i < 200; i++) {
      kcg_copy_extractTargetsMRSPACC_(&acc, TargetsOfMRSP);
      /* 1 */
      extractTargetsFromMRSPInt_Targe(
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
** extractTargetsFromMRSP_TargetMa.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */


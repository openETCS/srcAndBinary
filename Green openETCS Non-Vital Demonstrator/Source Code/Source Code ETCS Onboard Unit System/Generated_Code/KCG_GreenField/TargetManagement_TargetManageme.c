/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetManagement_TargetManageme.h"

#ifndef KCG_USER_DEFINED_INIT
void TargetManagement_init_TargetMan(outC_TargetManagement_TargetMan *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->_L93.targetType = EoA_TargetManagement_types;
  outC->_L93.distance = 0.0;
  outC->_L93.speed = 0.0;
  outC->_L12.targetType = EoA_TargetManagement_types;
  outC->_L12.distance = 0.0;
  outC->_L12.speed = 0.0;
  outC->targetCollection.updatedTargetList = kcg_true;
  for (i = 0; i < 200; i++) {
    outC->rem_MRSPTargetList[i].targetType = EoA_TargetManagement_types;
    outC->rem_MRSPTargetList[i].distance = 0.0;
    outC->rem_MRSPTargetList[i].speed = 0.0;
    outC->targetCollection.MRSP_targetList[i].targetType =
      EoA_TargetManagement_types;
    outC->targetCollection.MRSP_targetList[i].distance = 0.0;
    outC->targetCollection.MRSP_targetList[i].speed = 0.0;
  }
  outC->targetCollection.EOA_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.EOA_target.distance = 0.0;
  outC->targetCollection.EOA_target.speed = 0.0;
  outC->targetCollection.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.SvL_LoA_target.distance = 0.0;
  outC->targetCollection.SvL_LoA_target.speed = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TargetManagement_reset_TargetMa(outC_TargetManagement_TargetMan *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TargetManagement_pkg::TargetManagement */
void TargetManagement_TargetManageme(
  /* TargetManagement_pkg::TargetManagement::MRSP */ MRSP_internal_T_TargetManagemen *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */ kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */ MA_section_real_T_TargetManagem *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */ kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */ TrainLocations_real_T_SDM_Types *trainLocations,
  outC_TargetManagement_TargetMan *outC)
{
  /* TargetManagement_pkg::TargetManagement */
  static Target_list_MRSP_real_T_TargetM tmp1;
  /* TargetManagement_pkg::TargetManagement */
  static extractTargetsMRSPACC_TargetMan tmp;
  /* TargetManagement_pkg::TargetManagement::_L88 */
  static kcg_bool _L88;
  static kcg_int i;
  
  /* ck_MA_updated */ if (MA_updated) {
    /* 1 */ calcMATargets_TargetManagement_(MA, &outC->_L12, &outC->_L93);
  }
  else if (outC->init) {
    kcg_copy_Target_real_T_TargetMa(
      &outC->_L93,
      (Target_real_T_TargetManagement_ *) &emptyTarget_TargetManagement_pk);
    kcg_copy_Target_real_T_TargetMa(
      &outC->_L12,
      (Target_real_T_TargetManagement_ *) &emptyTarget_TargetManagement_pk);
  }
  kcg_copy_Target_real_T_TargetMa(
    &outC->targetCollection.EOA_target,
    &outC->_L12);
  kcg_copy_Target_real_T_TargetMa(
    &outC->targetCollection.SvL_LoA_target,
    &outC->_L93);
  /* ck_MRSP_updated */ if (MRSP_updated) {
    /* 1 */ extractTargetsFromMRSP_TargetMa(MRSP, &tmp);
    kcg_copy_Target_list_MRSP_real_(&tmp1, &tmp.targetList);
  }
  else /* last_init_ck_MRSPTargetList */ if (outC->init) {
    for (i = 0; i < 200; i++) {
      kcg_copy_Target_real_T_TargetMa(
        &tmp1[i],
        (Target_real_T_TargetManagement_ *) &emptyTarget_TargetManagement_pk);
    }
  }
  else {
    kcg_copy_Target_list_MRSP_real_(&tmp1, &outC->rem_MRSPTargetList);
  }
  outC->init = kcg_false;
  /* 1 */
  removeOverpassedMRSP_TargetMana(
    &tmp1,
    (*trainLocations).d_maxSafeFrontEndPos,
    &outC->rem_MRSPTargetList,
    &_L88);
  outC->targetCollection.updatedTargetList = MRSP_updated | MA_updated | _L88;
  kcg_copy_Target_list_MRSP_real_(
    &outC->targetCollection.MRSP_targetList,
    &outC->rem_MRSPTargetList);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TargetManagement_TargetManageme.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetManagement_TargetManagement_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void TargetManagement_init_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
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
void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TargetManagement_pkg::TargetManagement */
void TargetManagement_TargetManagement_pkg(
  /* TargetManagement_pkg::TargetManagement::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */ kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */ kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  /* TargetManagement_pkg::TargetManagement */
  static Target_list_MRSP_real_T_TargetManagement_types tmp1;
  /* TargetManagement_pkg::TargetManagement */
  static extractTargetsMRSPACC_TargetManagement_pkg tmp;
  /* TargetManagement_pkg::TargetManagement::_L88 */
  static kcg_bool _L88;
  static kcg_int i;
  
  /* ck_MA_updated */ if (MA_updated) {
    /* 1 */
    calcMATargets_TargetManagement_pkg_internalOperators(
      MA,
      &outC->_L12,
      &outC->_L93);
  }
  else if (outC->init) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->_L93,
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->_L12,
      (Target_real_T_TargetManagement_types *)
        &emptyTarget_TargetManagement_pkg);
  }
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->targetCollection.EOA_target,
    &outC->_L12);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->targetCollection.SvL_LoA_target,
    &outC->_L93);
  /* ck_MRSP_updated */ if (MRSP_updated) {
    /* 1 */
    extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(MRSP, &tmp);
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &tmp1,
      &tmp.targetList);
  }
  else /* last_init_ck_MRSPTargetList */ if (outC->init) {
    for (i = 0; i < 200; i++) {
      kcg_copy_Target_real_T_TargetManagement_types(
        &tmp1[i],
        (Target_real_T_TargetManagement_types *)
          &emptyTarget_TargetManagement_pkg);
    }
  }
  else {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &tmp1,
      &outC->rem_MRSPTargetList);
  }
  outC->init = kcg_false;
  /* 1 */
  removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
    &tmp1,
    (*trainLocations).d_maxSafeFrontEndPos,
    &outC->rem_MRSPTargetList,
    &_L88);
  outC->targetCollection.updatedTargetList = MRSP_updated | MA_updated | _L88;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->targetCollection.MRSP_targetList,
    &outC->rem_MRSPTargetList);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TargetManagement_TargetManagement_pkg.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */


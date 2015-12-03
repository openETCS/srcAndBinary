/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_locationOfReferenceLRBG_EVC.h"

/* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG */
void MEM_locationOfReferenceLRBG_EVC(
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::LRBG */ NID_LRBG LRBG,
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::position */ L_internal_Type_Obu_BasicTypes_ *position,
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::passed */ kcg_bool *passed)
{
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG */
  static L_internal_Type_Obu_BasicTypes_ tmp;
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::_L14 */
  static NID_BG _L14;
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::_L13 */
  static NID_C _L13;
  
  *passed = kcg_true;
  /* 1 */ Decode_NID_LRBG_TM(LRBG, &_L13, &_L14);
  /* 1 */ if ((_L13 == (*trainPosition).LRBG.nid_c) & (_L14 ==
      (*trainPosition).LRBG.nid_bg)) {
    tmp = (*trainPosition).LRBG.location.nominal;
  }
  else {
    tmp = (*trainPosition).estimatedFrontEndPosition;
  }
  *position = tmp + (*trainProperties).d_baliseAntenna_2_frontend.nominal;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_locationOfReferenceLRBG_EVC.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */


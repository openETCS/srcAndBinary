/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG */
void MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::LRBG */ NID_LRBG LRBG,
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::position */ L_internal_Type_Obu_BasicTypes_Pkg *position,
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::passed */ kcg_bool *passed)
{
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG */ L_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::_L14 */ NID_BG _L14;
  /* EVC_MEM_Support_Pkg::MEM_locationOfReferenceLRBG::_L13 */ NID_C _L13;
  
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
** MEM_locationOfReferenceLRBG_EVC_MEM_Support_Pkg.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */


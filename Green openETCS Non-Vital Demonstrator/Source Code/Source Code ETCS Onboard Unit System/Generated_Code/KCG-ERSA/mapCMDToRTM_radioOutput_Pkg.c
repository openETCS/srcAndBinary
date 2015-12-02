/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapCMDToRTM_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void mapCMDToRTM_init_radioOutput_Pkg(outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  outC->outMN = 0;
  outC->outRadio = 0;
  outC->toRTM.valid = kcg_true;
  outC->toRTM.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->toRTM.networkID = 0;
  /* 1 */ mapnewCMD_toCmd_init_radioOutput_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapCMDToRTM_reset_radioOutput_Pkg(outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  /* 1 */ mapnewCMD_toCmd_reset_radioOutput_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::mapCMDToRTM */
void mapCMDToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapCMDToRTM::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::mapCMDToRTM::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  /* 1 */
  mapnewCMD_toCmd_radioOutput_Pkg(
    mobileConnectionCMD,
    mobileRegistrationCMD,
    &outC->Context_1);
  outC->toRTM.valid = cmdr_not_relevant_API_RadioCommunication_Pkg !=
    outC->Context_1.toRTMCMD;
  outC->toRTM.cmd = outC->Context_1.toRTMCMD;
  outC->outRadio = outC->Context_1.outRadio;
  outC->outMN = outC->Context_1.outMN;
  /* 1 */ if ((*mobileRegistrationCMD).valid) {
    outC->toRTM.networkID = (*mobileRegistrationCMD).network_id;
  }
  else /* 2 */ if ((*mobileConnectionCMD).valid) {
    outC->toRTM.networkID = (*mobileConnectionCMD).nid_radio;
  }
  else {
    outC->toRTM.networkID = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapCMDToRTM_radioOutput_Pkg.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */


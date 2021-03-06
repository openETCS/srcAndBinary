/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapnewCMD_toCmd_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void mapnewCMD_toCmd_init_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
  outC->outMN = 0;
  outC->outRadio = 0;
  outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapnewCMD_toCmd_reset_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::mapnewCMD_toCmd */
void mapnewCMD_toCmd_radioOutput_Pkg(
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidRadio */ NID_RADIO last_nidRadio;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidMN */ NID_MN last_nidMN;
  /* radioOutput_Pkg::mapnewCMD_toCmd::doConnection */ kcg_bool doConnection;
  
  doConnection = (*mobileConnectionCMD).valid & !(*mobileRegistrationCMD).valid;
  /* last_init_ck_nidRadio */ if (outC->init) {
    last_nidMN = 0;
    outC->init = kcg_false;
    last_nidRadio = 0;
  }
  else {
    last_nidMN = outC->outMN;
    last_nidRadio = outC->outRadio;
  }
  /* ck_doConnection */ if (doConnection) {
    switch ((*mobileConnectionCMD).action) {
      case mca_connect_RCM_Types_Pkg :
        outC->toRTMCMD = cmdr_connection_request_API_RadioCommunication_Pkg;
        break;
      case mca_disconnect_RCM_Types_Pkg :
        outC->toRTMCMD = cmdr_disconnection_request_API_RadioCommunication_Pkg;
        break;
      
      default :
        outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
    }
    outC->outMN = last_nidMN;
    outC->outRadio = (*mobileConnectionCMD).nid_radio;
  }
  else /* ck_anon_activ */ if ((*mobileRegistrationCMD).valid) {
    switch ((*mobileRegistrationCMD).action) {
      case mra_register_RCM_Types_Pkg :
        outC->toRTMCMD = cmdr_networkRegister_API_RadioCommunication_Pkg;
        break;
      case mra_unregister_RCM_Types_Pkg :
        outC->toRTMCMD = cmdr_networkUnregister_API_RadioCommunication_Pkg;
        break;
      
      default :
        outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
    }
    outC->outMN = (*mobileRegistrationCMD).network_id;
    outC->outRadio = last_nidRadio;
  }
  else {
    outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
    outC->outMN = last_nidMN;
    outC->outRadio = last_nidRadio;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapnewCMD_toCmd_radioOutput_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */


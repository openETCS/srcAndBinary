/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */
#ifndef _RTM_Toolbox_TrainModules_H_
#define _RTM_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "C_Int_TrackTrainMessage_TM_conv.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pk /* Toolbox::TrainModules::RTM::TrackMessage */ TrackMessage;
  mobileHWStatus_Type_MoRC_Pck /* Toolbox::TrainModules::RTM::mobileHWStatus */ mobileHWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init2;
  kcg_bool init;
  kcg_bool init3;
  /* ----------------------- local memories  ------------------------- */
  struct_101540 /* Toolbox::TrainModules::RTM */ _1_fby_RTM_Toolbox_TrainModules;
  struct_101540 /* Toolbox::TrainModules::RTM */ fby_RTM_Toolbox_TrainModules;
  SSM_ST_GSM_R_MobileManagement /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_state_nx;
  kcg_bool /* Toolbox::TrainModules::RTM::registrationFinished */ registrationFinished;
  kcg_bool /* Toolbox::TrainModules::RTM::connectionEstablished */ connectionEstablished;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RTM_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::RTM */
extern void RTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::RTM::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* Toolbox::TrainModules::RTM::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* Toolbox::TrainModules::RTM::RadioHeader */ _4_Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* Toolbox::TrainModules::RTM::RadioManagementMessage */ RadioManagement_T_API_RadioComm *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RTM_init_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RTM_Toolbox_TrainModules_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RTM_Toolbox_TrainModules.h
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */


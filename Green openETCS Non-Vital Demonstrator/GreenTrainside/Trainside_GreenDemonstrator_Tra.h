/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
#ifndef _Trainside_GreenDemonstrator_Tr
#define _Trainside_GreenDemonstrator_Tr

#include "kcg_types.h"
#include "EVC.h"
#include "TIU_Toolbox_TrainModules.h"
#include "RTM_Toolbox_TrainModules.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* GreenDemonstrator::Trainside::Trainside::EVC_reset */ EVC_reset;
  odometry_T_Obu_BasicTypes_Pkg /* GreenDemonstrator::Trainside::Trainside::API_Odometry */ API_Odometry;
  T_internal_Type_Obu_BasicTypes_ /* GreenDemonstrator::Trainside::Trainside::API_SystemTime */ API_SystemTime;
  API_TrackSideInput_T_API_Msg_Pk /* GreenDemonstrator::Trainside::Trainside::API_fromTrack */ API_fromTrack;
  DMI_to_EVC_Message_int_T_API_DM /* GreenDemonstrator::Trainside::Trainside::API_fromDMI */ API_fromDMI;
  kcg_real /* GreenDemonstrator::Trainside::Trainside::GUI_traction */ GUI_traction;
  kcg_bool /* GreenDemonstrator::Trainside::Trainside::GUI_openDesk */ GUI_openDesk;
  kcg_int /* GreenDemonstrator::Trainside::Trainside::GUIdirectionIn */ GUIdirectionIn;
} inC_Trainside_GreenDemonstrator;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* GreenDemonstrator::Trainside::Trainside::resetOut */ resetOut;
  M_TrainTrack_Message_T_TM_radio /* GreenDemonstrator::Trainside::Trainside::API_toRBC */ API_toRBC;
  EVC_to_DMI_Message_int_T_API_DM /* GreenDemonstrator::Trainside::Trainside::API_toDMI */ API_toDMI;
  kcg_bool /* GreenDemonstrator::Trainside::Trainside::EVC_ready */ EVC_ready;
  kcg_bool /* GreenDemonstrator::Trainside::Trainside::GUI_emergencyBrake */ GUI_emergencyBrake;
  kcg_bool /* GreenDemonstrator::Trainside::Trainside::GUI_serviceBrake */ GUI_serviceBrake;
  kcg_bool /* GreenDemonstrator::Trainside::Trainside::GUI_TractionCutOff */ GUI_TractionCutOff;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TIU_Input_msg_API_TIU_Pkg /* GreenDemonstrator::Trainside::Trainside::fromTIU */ fromTIU;
  RadioManagement_T_API_RadioComm /* GreenDemonstrator::Trainside::Trainside::fromEVC_RadioManagement */ fromEVC_RadioManagement;
  mobileHWStatus_Type_MoRC_Pck /* GreenDemonstrator::Trainside::Trainside::radioHW_Status */ rem_radioHW_Status;
  TIU_Output_msg_API_TIU_Pkg /* GreenDemonstrator::Trainside::Trainside::toTIU */ rem_toTIU;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TIU_Toolbox_TrainModules /* 2 */ _1_Context_2;
  outC_EVC /* 1 */ Context_1;
  outC_RTM_Toolbox_TrainModules /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Trainside_GreenDemonstrato;

/* ===========  node initialization and cycle functions  =========== */
/* GreenDemonstrator::Trainside::Trainside */
extern void Trainside_GreenDemonstrator_Tra(
  inC_Trainside_GreenDemonstrator *inC,
  outC_Trainside_GreenDemonstrato *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Trainside_reset_GreenDemonstrat(
  outC_Trainside_GreenDemonstrato *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Trainside_init_GreenDemonstrato(
  outC_Trainside_GreenDemonstrato *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Trainside_GreenDemonstrator_Tr */
/* $**************** KCG Version 6.4 (build i21) ****************
** Trainside_GreenDemonstrator_Tra.h
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */


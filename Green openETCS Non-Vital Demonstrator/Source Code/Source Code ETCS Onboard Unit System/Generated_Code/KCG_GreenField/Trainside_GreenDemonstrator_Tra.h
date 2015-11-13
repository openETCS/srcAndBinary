/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _Trainside_GreenDemonstrator_Tr
#define _Trainside_GreenDemonstrator_Tr

#include "kcg_types.h"
#include "CASTLIB_BaliseHeaders_TM_conver.h"
#include "BTM_Toolbox_TrainModules.h"
#include "EVC.h"
#include "AFB_Toolbox_Physics.h"
#include "PHYSICS_MovementSimulation_Tool.h"
#include "TIU_Toolbox_TrainModules.h"
#include "RTM_Toolbox_TrainModules.h"
#include "EVC_InputBuffer_Toolbox_Functio.h"

/* ========================  input structure  ====================== */
typedef struct {
  CompressedBaliseMessage_TM /* GreenDemonstrator::Trainside::Trainside::BaliseMessage_in */ BaliseMessage_in;
  _4_Radio_TrackTrain_Header_T_TM /* GreenDemonstrator::Trainside::Trainside::RadioMessage_in */ RadioMessage_in;
  CompressedPackets_T_Common_Type /* GreenDemonstrator::Trainside::Trainside::RadioPackets_in */ RadioPackets_in;
  DMI_to_EVC_Message_int_T_API_DM /* GreenDemonstrator::Trainside::Trainside::API_fromDMI */ API_fromDMI;
  GUI_to_EVC_EnvSim /* GreenDemonstrator::Trainside::Trainside::API_fromGUI */ API_fromGUI;
} inC_Trainside_GreenDemonstrator;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio /* GreenDemonstrator::Trainside::Trainside::MessageOut */ MessageOut;
  kcg_int /* GreenDemonstrator::Trainside::Trainside::TrainPosition */ TrainPosition;
  EVC_to_DMI_Message_int_T_API_DM /* GreenDemonstrator::Trainside::Trainside::API_toDMI */ API_toDMI;
  EVC_to_GUI_EnvSim /* GreenDemonstrator::Trainside::Trainside::API_toGUI */ API_toGUI;
  TIU_Input_msg_API_TIU_Pkg /* GreenDemonstrator::Trainside::Trainside::TIU_toDMI */ TIU_toDMI;
  kcg_bool /* GreenDemonstrator::Trainside::Trainside::EVC_ready */ EVC_ready;
  DebugData_T /* GreenDemonstrator::Trainside::Trainside::Debug */ Debug;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_ /* GreenDemonstrator::Trainside::Trainside::API_currentTimestamp */ API_currentTimestamp;
  TIU_Output_msg_API_TIU_Pkg /* GreenDemonstrator::Trainside::Trainside::EVC_MessageToTIU */ EVC_MessageToTIU;
  kcg_real /* GreenDemonstrator::Trainside::Trainside::PHY_VelocityInKmH */ PHY_VelocityInKmH;
  RadioManagement_T_API_RadioComm /* GreenDemonstrator::Trainside::Trainside::EVC_RTM_Management */ rem_EVC_RTM_Management;
  odometry_T_Obu_BasicTypes_Pkg /* GreenDemonstrator::Trainside::Trainside::API_currentOdometrie */ rem_API_currentOdometrie;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EVC /* 1 */ _5_Context_1;
  outC_EVC_InputBuffer_Toolbox_Fu /* 1 */ _4_Context_1;
  outC_RTM_Toolbox_TrainModules /* 1 */ _3_Context_1;
  outC_PHYSICS_MovementSimulation /* 1 */ _2_Context_1;
  outC_AFB_Toolbox_Physics /* 1 */ _1_Context_1;
  outC_TIU_Toolbox_TrainModules /* 1 */ Context_1;
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
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */


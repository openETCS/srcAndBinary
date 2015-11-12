/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */
#ifndef _RTM_Toolbox_TrainModules_H_
#define _RTM_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "C_Int_TrackTrainMessage_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Toolbox::TrainModules::RTM::TrackMessage */ TrackMessage;
  mobileHWStatus_Type_MoRC_Pck /* Toolbox::TrainModules::RTM::mobileHWStatus */ mobileHWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init2;
  kcg_bool init;
  kcg_bool init3;
  /* ----------------------- local memories  ------------------------- */
  struct__130663 /* Toolbox::TrainModules::RTM */ _1_fby_RTM_Toolbox_TrainModules;
  struct__130663 /* Toolbox::TrainModules::RTM */ fby_RTM_Toolbox_TrainModules;
  SSM_ST_GSM_R_MobileManagement /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_state_nxt;
  kcg_bool /* Toolbox::TrainModules::RTM::registrationFinished */ registrationFinished;
  kcg_bool /* Toolbox::TrainModules::RTM::connectionEstablished */ connectionEstablished;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else */ _22_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else */ _20_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else */ _18_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else */ _16_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else */ _14_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */ _12_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */ _10_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ _8_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ _6_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ _4_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ _5_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ _7_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ _9_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */ _11_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else */ _13_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else */ _15_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else */ _17_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else */ _19_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else */ _21_else_clock_IfBlock1;
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ else_clock_IfBlock1;
  SSM_ST_GSM_R_MobileManagement /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_state_sel;
  SSM_ST_GSM_R_MobileManagement /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_state_act;
  SSM_TR_GSM_R_MobileManagement /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_fired_strong;
  SSM_TR_GSM_R_MobileManagement /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_fired;
  kcg_bool /* Toolbox::TrainModules::RTM::_L30 */ _L30;
  Radio_TrackTrain_Header_T_TM_transitional /* Toolbox::TrainModules::RTM::_L51 */ _L51;
} outC_RTM_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::RTM */
extern void RTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::RTM::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::RTM::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::RTM::RadioHeader */Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* Toolbox::TrainModules::RTM::RadioManagementMessage */RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC);

extern void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC);

#endif /* _RTM_Toolbox_TrainModules_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RTM_Toolbox_TrainModules.h
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */


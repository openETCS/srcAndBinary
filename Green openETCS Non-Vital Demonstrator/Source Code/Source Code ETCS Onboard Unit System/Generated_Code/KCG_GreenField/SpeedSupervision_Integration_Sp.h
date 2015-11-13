/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _SpeedSupervision_Integration_S
#define _SpeedSupervision_Integration_S

#include "kcg_types.h"
#include "SimpleValidityCheck_SDM_Input_W.h"
#include "SDMLimitLocations_TargetLimits_.h"
#include "ABrakeFactory_SDMModelPkg.h"
#include "addGradient_SDMModelPkg.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"
#include "SDM_InputWrapper_SDM_Input_Wrap.h"
#include "CalcBrakingCurves_integration_C.h"
#include "TargetManagement_TargetManageme.h"
#include "AGradient_SDM_GradientAccelerat.h"
#include "ProbeSDM_EnvSim.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Ty /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::sdmToDMI */ sdmToDMI;
  Target_T_TargetManagement_types /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::target */ target;
  SDM_Commands_T_SDM_Types_Pkg /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::sdmCommands */ sdmCommands;
  Brake_command_T_TIU_Types_Pkg /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::brakeCmd */ brakeCmd;
  kcg_bool /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::EOA_overpassed */ EOA_overpassed;
  kcg_bool /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Target_Speed_Reached */ Target_Speed_Reached;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ProbeSDM_EnvSim /* 1 */ _4_Context_1;
  outC_SDM_Commands_SDM_Commands_ /* 1 */ _3_Context_1;
  outC_CalcBrakingCurves_integrat /* 1 */ _2_Context_1;
  outC_AGradient_SDM_GradientAcce /* 1 */ _1_Context_1;
  outC_TargetManagement_TargetMan /* 2 */ Context_2;
  outC_SDM_InputWrapper_SDM_Input /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SpeedSupervision_Integrati;

/* ===========  node initialization and cycle functions  =========== */
/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
extern void SpeedSupervision_Integration_Sp(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */ trainPosition_T_TrainPosition_T *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::dataFromTrackAtlas */ DataForSupervision_nextGen_t_Tr *dataFromTrackAtlas,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Service_brake_requested_by_modes_and_levels */ kcg_bool Service_brake_requested_by_mode,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Emergency_brake_requested_by_modes_and_levels */ kcg_bool Emergency_brake_requested_by_mo,
  outC_SpeedSupervision_Integrati *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SpeedSupervision_Integration_re(
  outC_SpeedSupervision_Integrati *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SpeedSupervision_Integration_in(
  outC_SpeedSupervision_Integrati *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SpeedSupervision_Integration_S */
/* $**************** KCG Version 6.4 (build i21) ****************
** SpeedSupervision_Integration_Sp.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */


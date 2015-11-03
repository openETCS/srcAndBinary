/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _SDM_InputWrapper_SDM_Input_Wra
#define _SDM_InputWrapper_SDM_Input_Wra

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Type.h"
#include "ConvertMRSP_section_SDM_Input_W.h"
#include "ConvertMA_SDM_Input_Wrappers.h"
#include "ConvertGradient_section_SDM_Inp.h"
#include "defaultMA_SDM_Input_Wrappers.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MRSP_internal_T_TargetManagemen /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_out */ mrsp_out;
  kcg_bool /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_update_out */ mrsp_update_out;
  MA_section_real_T_TargetManagem /* SDM_Input_Wrappers::SDM_InputWrapper::ma_out */ ma_out;
  kcg_bool /* SDM_Input_Wrappers::SDM_InputWrapper::ma_update_out */ ma_update_out;
  TrainLocations_real_T_SDM_Types /* SDM_Input_Wrappers::SDM_InputWrapper::trainLocations */ trainLocations;
  GradientProfile_real_t_SDM_Grad /* SDM_Input_Wrappers::SDM_InputWrapper::gp_out */ gp_out;
  kcg_bool /* SDM_Input_Wrappers::SDM_InputWrapper::gp_update_out */ gp_update_out;
  L_internal_Type_Obu_BasicTypes_ /* SDM_Input_Wrappers::SDM_InputWrapper::offsetAntennaL1 */ offsetAntennaL1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SDM_InputWrapper_SDM_Input;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::SDM_InputWrapper */
extern void SDM_InputWrapper_SDM_Input_Wrap(
  /* SDM_Input_Wrappers::SDM_InputWrapper::TrainPosition */ trainPosition_T_TrainPosition_T *TrainPosition,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* SDM_Input_Wrappers::SDM_InputWrapper::dataFromTrackAtlas */ DataForSupervision_nextGen_t_Tr *dataFromTrackAtlas,
  outC_SDM_InputWrapper_SDM_Input *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SDM_InputWrapper_reset_SDM_Inpu(
  outC_SDM_InputWrapper_SDM_Input *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SDM_InputWrapper_init_SDM_Input(
  outC_SDM_InputWrapper_SDM_Input *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SDM_InputWrapper_SDM_Input_Wra */
/* $**************** KCG Version 6.4 (build i21) ****************
** SDM_InputWrapper_SDM_Input_Wrap.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */


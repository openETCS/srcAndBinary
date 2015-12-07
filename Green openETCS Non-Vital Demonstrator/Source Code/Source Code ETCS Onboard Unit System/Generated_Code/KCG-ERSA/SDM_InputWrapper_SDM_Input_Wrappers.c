/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_InputWrapper_SDM_Input_Wrappers.h"

#ifndef KCG_USER_DEFINED_INIT
void SDM_InputWrapper_init_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  kcg_int i;
  
  outC->mrsp_update_out = kcg_true;
  outC->ma_update_out = kcg_true;
  outC->gp_update_out = kcg_true;
  outC->init = kcg_true;
  outC->offsetAntennaL1 = 0;
  for (i = 0; i < 50; i++) {
    outC->gp_out[i].location = 0.0;
    outC->gp_out[i].gradient = 0.0;
    outC->gp_out[i].valid = kcg_true;
  }
  outC->trainLocations.trainPositionIsValid = kcg_true;
  outC->trainLocations.d_est_frontendPos = 0.0;
  outC->trainLocations.d_minSafeFrontEndPos = 0.0;
  outC->trainLocations.d_maxSafeFrontEndPos = 0.0;
  outC->trainLocations.d_LRBG = 0.0;
  outC->trainLocations.d_accLRBG = 0.0;
  outC->ma_out.valid = kcg_true;
  outC->ma_out.v_main = 0.0;
  outC->ma_out.EOA.Location = 0.0;
  outC->ma_out.EOA.TargetSpeed = 0.0;
  outC->ma_out.DP_valid = kcg_true;
  outC->ma_out.DangerPoint = 0.0;
  outC->ma_out.OL_valid = kcg_true;
  outC->ma_out.Overlap = 0.0;
  outC->ma_out.q_calculate_release = kcg_true;
  outC->ma_out.ReleaseSpeed = 0.0;
  outC->ma_out.level = MA_L1_TrackAtlasTypes;
  for (i = 0; i < 110; i++) {
    outC->mrsp_out[i].Loc_Abs = 0.0;
    outC->mrsp_out[i].MRS = 0.0;
    outC->mrsp_out[i].valid = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SDM_InputWrapper_reset_SDM_Input_Wrappers(
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Input_Wrappers::SDM_InputWrapper */
void SDM_InputWrapper_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SDM_InputWrapper::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SDM_Input_Wrappers::SDM_InputWrapper::dataFromTrackAtlas */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  outC_SDM_InputWrapper_SDM_Input_Wrappers *outC)
{
  kcg_int i;
  
  outC->trainLocations.trainPositionIsValid =
    !(*TrainPosition).trainPositionIsUnknown & (*TrainPosition).valid;
  outC->trainLocations.d_est_frontendPos = /* 9 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).estimatedFrontEndPosition);
  outC->trainLocations.d_minSafeFrontEndPos = /* 4 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).minSafeFrontEndPosition);
  outC->trainLocations.d_maxSafeFrontEndPos = /* 11 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).maxSafeFrontEndPostion);
  outC->trainLocations.d_LRBG = /* 12 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).LRBG.location.nominal);
  outC->trainLocations.d_accLRBG = /* 16 */
    TransformL_intToL_real_SDM_Types_Pkg(
      ((*TrainPosition).LRBG.location.d_max -
        (*TrainPosition).LRBG.location.d_min) / 2);
  for (i = 0; i < 110; i++) {
    /* ConvertMRSP_section */
    ConvertMRSP_section_SDM_Input_Wrappers(
      &(*dataFromTrackAtlas).MRSP[i],
      &outC->mrsp_out[i]);
  }
  outC->ma_update_out = (*dataFromTrackAtlas).freshMA;
  /* ck_ma_update_out */ if (outC->ma_update_out) {
    /* 2 */
    ConvertMA_SDM_Input_Wrappers(&(*dataFromTrackAtlas).MA, &outC->ma_out);
  }
  else if (outC->init) {
    /* 1 */ defaultMA_SDM_Input_Wrappers(&outC->ma_out);
  }
  outC->init = kcg_false;
  outC->mrsp_update_out = (*dataFromTrackAtlas).freshMRSP;
  outC->gp_update_out = (*dataFromTrackAtlas).freshGradientProfile;
  /* 2 */ for (i = 0; i < 50; i++) {
    /* 1 */
    ConvertGradient_section_SDM_Input_Wrappers(
      &(*dataFromTrackAtlas).GradientProfile[i],
      &outC->gp_out[i]);
  }
  switch ((*dataFromTrackAtlas).MA.Level) {
    case MA_L1_TrackAtlasTypes :
      outC->offsetAntennaL1 = (*trainProps).d_baliseAntenna_2_frontend.nominal;
      break;
    
    default :
      outC->offsetAntennaL1 = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SDM_InputWrapper_SDM_Input_Wrappers.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */


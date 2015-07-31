/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_InputWrapper_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SDM_InputWrapper */
void SDM_InputWrapper_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SDM_InputWrapper::TrainPosition */trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ODO_to_SDM */odometry_T_Obu_BasicTypes_Pkg *ODO_to_SDM,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SDM_Input_Wrappers::SDM_InputWrapper::dataFromTrackAtlas */DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_out */MRSP_internal_T_TargetManagement_types *mrsp_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::mrsp_update_out */kcg_bool *mrsp_update_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ma_out */MA_section_real_T_TargetManagement_types *ma_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::ma_update_out */kcg_bool *ma_update_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::gp_update_out */kcg_bool *gp_update_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::odo_out */Odometry_real_T_SDM_Types_Pkg *odo_out,
  /* SDM_Input_Wrappers::SDM_InputWrapper::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* SDM_Input_Wrappers::SDM_InputWrapper::_L256 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L256;
  
  (*trainLocations).trainPositionIsValid =
    !(*TrainPosition).trainPositionIsUnknown & (*TrainPosition).valid;
  *mrsp_update_out = (*dataFromTrackAtlas).freshMRSP;
  *gp_update_out = (*dataFromTrackAtlas).freshGradientProfile;
  *ma_update_out = (*dataFromTrackAtlas).freshMA;
  _L256 = 0;
  if ((*dataFromTrackAtlas).MA.valid) {
    for (i = 0; i < 10; i++) {
      tmp1 = _L256;
      /* 1 */
      SummarizeSections_SDM_Input_Wrappers(
        tmp1,
        &(*dataFromTrackAtlas).MA.sections[i],
        &tmp,
        &_L256);
      if (!tmp) {
        break;
      }
    }
  }
  /* 2 */
  ConvertMA_SDM_Input_Wrappers(_L256, &(*dataFromTrackAtlas).MA, ma_out);
  for (i = 0; i < 200; i++) {
    /* ConvertMRSP_section */
    ConvertMRSP_section_SDM_Input_Wrappers(
      &(*dataFromTrackAtlas).MRSP[i],
      &(*mrsp_out)[i]);
  }
  (*trainLocations).d_est_frontendPos = /* 9 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).estimatedFrontEndPosition);
  (*trainLocations).d_minSafeFrontEndPos = /* 4 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).minSafeFrontEndPosition);
  (*trainLocations).d_maxSafeFrontEndPos = /* 11 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).maxSafeFrontEndPostion);
  (*trainLocations).d_antenna2frontend = /* 5 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*trainProps).d_baliseAntenna_2_frontend.nominal);
  (*trainLocations).d_LRBG = /* 12 */
    TransformL_intToL_real_SDM_Types_Pkg(
      (*TrainPosition).LRBG.location.nominal);
  (*trainLocations).d_accLRBG = /* 16 */
    TransformL_intToL_real_SDM_Types_Pkg(
      ((*TrainPosition).LRBG.location.d_max -
        (*TrainPosition).LRBG.location.d_min) / 2);
  /* 1 */ ConvertOdometry_SDM_Input_Wrappers(ODO_to_SDM, odo_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDM_InputWrapper_SDM_Input_Wrappers.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


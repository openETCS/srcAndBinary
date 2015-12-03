/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MRSP_TA_MRSP_new.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_MRSP_init_TA_MRSP_new(outC_Build_MRSP_TA_MRSP_new *outC)
{
  static kcg_int i;
  
  outC->newMRSP = kcg_true;
  outC->SSP_available = kcg_true;
  outC->init = kcg_true;
  for (i = 0; i < 50; i++) {
    outC->SSP[i].valid = kcg_true;
    outC->SSP[i].d_static_abs = 0;
    outC->SSP[i].d_static_LRBG = 0;
    outC->SSP[i].q_train_length_corr = kcg_true;
    outC->SSP[i].v_static = 0;
  }
  for (i = 0; i < 110; i++) {
    outC->MRSP[i].valid = kcg_true;
    outC->MRSP[i].Loc_Abs = 0;
    outC->MRSP[i].Loc_LRBG = 0;
    outC->MRSP[i].MRS = 0;
  }
  /* 1 */ Build_StaticSpeedProfile_init_TA_SSP_new(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MRSP_reset_TA_MRSP_new(outC_Build_MRSP_TA_MRSP_new *outC)
{
  outC->init = kcg_true;
  /* 1 */ Build_StaticSpeedProfile_reset_TA_SSP_new(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MRSP_new::Build_MRSP */
void Build_MRSP_TA_MRSP_new(
  /* TA_MRSP_new::Build_MRSP::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MRSP_new::Build_MRSP::TrainDataIn */ FromTIU_t_TrackAtlasTypes TrainDataIn,
  /* TA_MRSP_new::Build_MRSP::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TA_MRSP_new::Build_MRSP::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_MRSP_new::Build_MRSP::train_position */ trainPosition_T_TrainPosition_Types_Pck *train_position,
  /* TA_MRSP_new::Build_MRSP::balisegroups */ positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Build_MRSP_TA_MRSP_new *outC)
{
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp9;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp8;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp7;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp6;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp5;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp4;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp3;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp2;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp1;
  /* TA_MRSP_new::Build_MRSP */
  static SSP_cat_t_TA_MRSP tmp;
  /* TA_MRSP_new::Build_MRSP::_L2 */
  static SSP_matrix_t_TA_MRSP _L2;
  /* TA_MRSP_new::Build_MRSP::_L21 */
  static kcg_bool _L21;
  
  /* 1 */
  Build_StaticSpeedProfile_TA_SSP_new(
    kcg_false,
    MessageIn,
    train_position,
    train_length,
    balisegroups,
    &outC->Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->SSP,
    &outC->Context_1.SSP);
  _L21 = outC->Context_1.updated;
  outC->SSP_available = outC->Context_1.available;
  /* 1 */ SP_ASP_TA_SpeedProfiles(kcg_false, MessageIn, &tmp9);
  /* 1 */ SP_LX_SR_TA_SpeedProfiles(kcg_false, MessageIn, &tmp8);
  /* 1 */ SP_MaxTrainSpeed_TA_SpeedProfiles(kcg_false, 0, &tmp7);
  /* 1 */
  SP_ModeRelated_TA_SpeedProfiles(
    kcg_false,
    kcg_false,
    MessageIn,
    ModeAndLevel_in,
    &tmp6);
  /* 1 */ SP_OverrideRelated_TA_SpeedProfiles(kcg_false, MessageIn, &tmp5);
  /* 1 */ SP_PBD_SR_TA_SpeedProfiles(kcg_false, MessageIn, &tmp4);
  /* 1 */ SP_SignalingRelated_TA_SpeedProfiles(kcg_false, MessageIn, &tmp3);
  /* 1 */ SP_STM_MaxSpeed_TA_SpeedProfiles(kcg_false, MessageIn, &tmp2);
  /* 1 */ SP_STM_SystemSpeed_TA_SpeedProfiles(kcg_false, MessageIn, &tmp1);
  /* 1 */ SP_TSR_TA_SpeedProfiles(kcg_false, MessageIn, &tmp);
  /* 1 */
  Build_SSP_Matrix_TA_SpeedProfiles(
    &tmp9,
    &tmp8,
    &tmp7,
    &tmp6,
    &tmp5,
    &tmp4,
    &tmp3,
    (SSP_cat_t_TA_MRSP *) &XSSPold_TA_MRSP_new,
    _L21,
    &tmp2,
    &tmp1,
    &tmp,
    &outC->newMRSP,
    &_L2);
  /* ck_newMRSP */ if (outC->newMRSP) {
    /* 1 */ Calculate_MRSP1_TA_MRSP_new(&_L2, &outC->MRSP);
  }
  else if (outC->init) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &outC->MRSP,
      (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP_new);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MRSP_TA_MRSP_new.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */


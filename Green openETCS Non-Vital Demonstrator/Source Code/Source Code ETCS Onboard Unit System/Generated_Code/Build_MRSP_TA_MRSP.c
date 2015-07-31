/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MRSP_TA_MRSP.h"

void Build_MRSP_reset_TA_MRSP(outC_Build_MRSP_TA_MRSP *outC)
{
  outC->init = kcg_true;
  /* 1 */ SP_SSP_reset_TA_SpeedProfiles(&outC->Context_1);
}

/* TA_MRSP::Build_MRSP */
void Build_MRSP_TA_MRSP(
  /* TA_MRSP::Build_MRSP::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MRSP::Build_MRSP::TrainDataIn */kcg_int TrainDataIn,
  /* TA_MRSP::Build_MRSP::ModeDataIn */kcg_bool ModeDataIn,
  /* TA_MRSP::Build_MRSP::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_MRSP::Build_MRSP::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_Build_MRSP_TA_MRSP *outC)
{
  static SSP_cat_t_TA_MRSP tmp9;
  static SSP_cat_t_TA_MRSP tmp8;
  static SSP_cat_t_TA_MRSP tmp7;
  static SSP_cat_t_TA_MRSP tmp6;
  static SSP_cat_t_TA_MRSP tmp5;
  static SSP_cat_t_TA_MRSP tmp4;
  static SSP_cat_t_TA_MRSP tmp3;
  static SSP_cat_t_TA_MRSP tmp2;
  static SSP_cat_t_TA_MRSP tmp1;
  static SSP_cat_t_TA_MRSP tmp;
  /* TA_MRSP::Build_MRSP::_L2 */
  static SSP_matrix_t_TA_MRSP _L2;
  /* TA_MRSP::Build_MRSP::_L20 */
  static kcg_bool _L20;
  /* TA_MRSP::Build_MRSP::_L21 */
  static SSP_cat_t_TA_MRSP _L21;
  
  /* 1 */
  SP_SSP_TA_SpeedProfiles(
    MessageIn,
    train_length,
    train_position,
    &outC->Context_1);
  kcg_copy_SSP_cat_t_TA_MRSP(&_L21, &outC->Context_1.SSP);
  _L20 = outC->Context_1.updated;
  /* 1 */ SP_ASP_TA_SpeedProfiles(MessageIn, &tmp9);
  /* 1 */ SP_LX_SR_TA_SpeedProfiles(MessageIn, &tmp8);
  /* 1 */ SP_MaxTrainSpeed_TA_SpeedProfiles(TrainDataIn, &tmp7);
  /* 1 */ SP_ModeRelated_TA_SpeedProfiles(MessageIn, ModeDataIn, &tmp6);
  /* 1 */ SP_OverrideRelated_TA_SpeedProfiles(MessageIn, &tmp5);
  /* 1 */ SP_PBD_SR_TA_SpeedProfiles(MessageIn, &tmp4);
  /* 1 */ SP_SignalingRelated_TA_SpeedProfiles(MessageIn, &tmp3);
  /* 1 */ SP_STM_MaxSpeed_TA_SpeedProfiles(MessageIn, &tmp2);
  /* 1 */ SP_STM_SystemSpeed_TA_SpeedProfiles(MessageIn, &tmp1);
  /* 1 */ SP_TSR_TA_SpeedProfiles(MessageIn, &tmp);
  /* 1 */
  Build_SSP_Matrix_TA_SpeedProfiles(
    &tmp9,
    &tmp8,
    &tmp7,
    &tmp6,
    &tmp5,
    &tmp4,
    &tmp3,
    &_L21,
    _L20,
    &tmp2,
    &tmp1,
    &tmp,
    &outC->newMRSP,
    &_L2);
  if (outC->newMRSP) {
    /* 1 */ Calculate_MRSP_TA_MRSP(&_L2, &outC->MRSP);
  }
  else if (outC->init) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
      &outC->MRSP,
      (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MRSP_TA_MRSP.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


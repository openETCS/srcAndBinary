/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlasNextGen_TrackAtlas.h"

void TrackAtlasNextGen_reset_TrackAtlas(outC_TrackAtlasNextGen_TrackAtlas *outC)
{
  /* 1 */ Build_MRSP_reset_TA_MRSP(&outC->Context_1);
  /* 1 */ Build_GradientProfile_reset_TA_Gradient(&outC->_1_Context_1);
  /* 1 */ Manage_MA_Request_reset_MA_Request(&outC->_2_Context_1);
  /* 1 */ Build_MA_reset_TA_MA(&outC->_3_Context_1);
  /* 1 */ StoreRaw_NV_reset_TA_Storage(&outC->_4_Context_1);
}

/* TrackAtlas::TrackAtlasNextGen */
void TrackAtlasNextGen_TrackAtlas(
  /* TrackAtlas::TrackAtlasNextGen::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlasNextGen::ModeAndLevel_in */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlasNextGen::TrainData_in */FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlasNextGen::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlasNextGen::train_length_TOBEREPLACED */L_internal_Type_Obu_BasicTypes_Pkg train_length_TOBEREPLACED,
  /* TrackAtlas::TrackAtlasNextGen::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* TrackAtlas::TrackAtlasNextGen::preindicationLocation */L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TrackAtlas::TrackAtlasNextGen::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlasNextGen::fromDriverToMA_R */Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlasNextGen::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrackAtlas::TrackAtlasNextGen::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TrackAtlas::TrackAtlasNextGen::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrackAtlas::TrackAtlasNextGen::t_train */T_TRAIN t_train,
  /* TrackAtlas::TrackAtlasNextGen::P203V1_onboard */P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlasNextGen::PermanentDataP003 */P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_TrackAtlasNextGen_TrackAtlas *outC)
{
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->To_ModeAndLevel,
    (DataForModeAndLevel_t_TrackAtlasTypes *) &DEFAULT_to_ML_TA_Export);
  /* 1 */ StoreRaw_NV_TA_Storage(MessageIn, &outC->_4_Context_1);
  /* 2 */
  C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
    &outC->_4_Context_1.NV_onboard_out,
    P203V1_onboard,
    PermanentDataP003,
    &outC->NV_raw_out);
  /* 1 */
  Build_MA_TA_MA(
    MessageIn,
    &outC->_4_Context_1.NV_onboard_out,
    &outC->_3_Context_1);
  outC->to_Supervision.freshMA = outC->_3_Context_1.new_MA;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->_3_Context_1.MA_onboard_out);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->to_Supervision.MA,
    &outC->MA_onboard_out);
  /* 1 */
  Manage_MA_Request_MA_Request(
    TrainPositionIn,
    SystemTime,
    MessageIn,
    preindicationLocation,
    odometry,
    &outC->MA_onboard_out,
    fromDriverToMA_R,
    kcg_false,
    trainProps,
    packet0,
    packet1,
    t_train,
    &outC->_2_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->MA_request_out,
    &outC->_2_Context_1.message_out);
  /* 1 */
  Build_GradientProfile_TA_Gradient(
    MessageIn,
    TrainPositionIn,
    &outC->_1_Context_1);
  outC->to_Supervision.freshGradientProfile = outC->_1_Context_1.updated;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->to_Supervision.GradientProfile,
    &outC->_1_Context_1.GP);
  outC->to_DMI.Gradient_profile_updated = outC->_1_Context_1.updated;
  /* 1 */
  Build_MRSP_TA_MRSP(
    MessageIn,
    0,
    kcg_false,
    train_length_TOBEREPLACED,
    TrainPositionIn,
    &outC->Context_1);
  outC->to_Supervision.freshMRSP = outC->Context_1.newMRSP;
  outC->to_DMI.MRSP_updated = outC->Context_1.newMRSP;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->Context_1.MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->to_Supervision.MRSP,
    &outC->MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->to_DMI.MRSP, &outC->MRSP);
  /* 1 */
  GradientProfile_to_DMI_TA_Export(
    &outC->_1_Context_1.GP,
    &outC->to_DMI.GradientProfile);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlasNextGen_TrackAtlas.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


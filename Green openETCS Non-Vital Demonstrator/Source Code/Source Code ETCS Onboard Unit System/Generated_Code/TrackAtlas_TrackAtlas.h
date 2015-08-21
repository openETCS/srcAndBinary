/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _TrackAtlas_TrackAtlas_H_
#define _TrackAtlas_TrackAtlas_H_

#include "kcg_types.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"
#include "GradientProfile_to_DMI_TA_Export.h"
#include "TA_to_ML_TA_Export.h"
#include "Manage_MA_Request_MA_Request.h"
#include "Build_GradientProfile_TA_Gradient.h"
#include "Build_MRSP_TA_MRSP.h"
#include "Build_MA_TA_MA.h"
#include "StoreRaw_NV_TA_Storage.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_OBU_T_TM /* TrackAtlas::TrackAtlas::NV_raw_out */ NV_raw_out;
  DataForModeAndLevel_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::To_ModeAndLevel */ To_ModeAndLevel;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::to_DMI */ to_DMI;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::to_Supervision */ to_Supervision;
  MovementAuthority_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::MA_onboard_out */ MA_onboard_out;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::MRSP */ MRSP;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TrackAtlas::TrackAtlas::MA_request_out */ MA_request_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_StoreRaw_NV_TA_Storage /* 1 */ _4_Context_1;
  outC_Build_MA_TA_MA /* 1 */ _3_Context_1;
  outC_Manage_MA_Request_MA_Request /* 1 */ _2_Context_1;
  outC_Build_GradientProfile_TA_Gradient /* 1 */ _1_Context_1;
  outC_Build_MRSP_TA_MRSP /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TrackAtlas_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlas */
extern void TrackAtlas_TrackAtlas(
  /* TrackAtlas::TrackAtlas::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlas::ModeAndLevel_in */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlas::TrainData_in */FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlas::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlas::train_length_TOBEREPLACED */L_internal_Type_Obu_BasicTypes_Pkg train_length_TOBEREPLACED,
  /* TrackAtlas::TrackAtlas::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* TrackAtlas::TrackAtlas::preindicationLocation */L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TrackAtlas::TrackAtlas::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlas::fromDriverToMA_R */Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlas::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrackAtlas::TrackAtlas::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TrackAtlas::TrackAtlas::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrackAtlas::TrackAtlas::t_train */T_TRAIN t_train,
  /* TrackAtlas::TrackAtlas::P203V1_onboard */P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlas::PermanentDataP003 */P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  outC_TrackAtlas_TrackAtlas *outC);

extern void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC);

#endif /* _TrackAtlas_TrackAtlas_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlas_TrackAtlas.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


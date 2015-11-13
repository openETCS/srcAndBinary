/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _TrackAtlas_TrackAtlas_H_
#define _TrackAtlas_TrackAtlas_H_

#include "kcg_types.h"
#include "TrackAtlasETCS_TrackAtlas.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_OBU_T_TM /* TrackAtlas::TrackAtlas::NV_raw_out */ NV_raw_out;
  DataForModeAndLevel_t_TrackAtla /* TrackAtlas::TrackAtlas::To_ModeAndLevel */ To_ModeAndLevel;
  DataForDMI_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::to_DMI */ to_DMI;
  DataForSupervision_nextGen_t_Tr /* TrackAtlas::TrackAtlas::to_Supervision */ to_Supervision;
  MovementAuthority_t_TrackAtlasT /* TrackAtlas::TrackAtlas::MA_onboard_out */ MA_onboard_out;
  MRSP_Profile_t_TrackAtlasTypes /* TrackAtlas::TrackAtlas::MRSP */ MRSP;
  Radio_TrainTrack_Message_T_TM_t /* TrackAtlas::TrackAtlas::message147 */ message147;
  kcg_bool /* TrackAtlas::TrackAtlas::ces_accepted */ ces_accepted;
  kcg_bool /* TrackAtlas::TrackAtlas::ces_revoked */ ces_revoked;
  kcg_bool /* TrackAtlas::TrackAtlas::trip_train */ trip_train;
  M_TrainTrackMessageBus_t_TM_Tra /* TrackAtlas::TrackAtlas::bus_out */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackAtlasETCS_TrackAtlas /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TrackAtlas_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlas */
extern void TrackAtlas_TrackAtlas(
  /* TrackAtlas::TrackAtlas::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TrackAtlas::TrackAtlas::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Typ *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlas::TrainData_in */ FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlas::TrainPositionIn */ trainPosition_T_TrainPosition_T *TrainPositionIn,
  /* TrackAtlas::TrackAtlas::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TrackAtlas::TrackAtlas::SystemTime */ T_internal_Type_Obu_BasicTypes_ SystemTime,
  /* TrackAtlas::TrackAtlas::preindicationLocation */ L_internal_Type_Obu_BasicTypes_ preindicationLocation,
  /* TrackAtlas::TrackAtlas::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlas::fromDriverToMA_R */ Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlas::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* TrackAtlas::TrackAtlas::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* TrackAtlas::TrackAtlas::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* TrackAtlas::TrackAtlas::t_train */ T_TRAIN t_train,
  /* TrackAtlas::TrackAtlas::P203V1_onboard */ P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlas::PermanentDataP003 */ P003_permanent_data_T_TM_baseli *PermanentDataP003,
  /* TrackAtlas::TrackAtlas::bus_in */ M_TrainTrackMessageBus_t_TM_Tra *bus_in,
  outC_TrackAtlas_TrackAtlas *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrackAtlas_init_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TrackAtlas_TrackAtlas_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TrackAtlas_TrackAtlas.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */


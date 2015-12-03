/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_30_EVC.h"

#ifndef KCG_USER_DEFINED_INIT
void _30_EVC_init(void)
{
  static kcg_int i1;
  static kcg_int i;
  
  Ctxt__30_EVC.PROC_powerUp_to_MoRC = kcg_true;
  Ctxt__30_EVC.PROC_statusstartofmissionongoin = kcg_true;
  Ctxt__30_EVC.PROC_powerOff_to_MoRC = kcg_true;
  Ctxt__30_EVC.MoRC_newSessionEstablished = kcg_true;
  Ctxt__30_EVC._L477 = kcg_true;
  Ctxt__30_EVC.EVC_ready = kcg_true;
  Ctxt__30_EVC.init20 = kcg_true;
  Ctxt__30_EVC.init = kcg_true;
  Ctxt__30_EVC.probe_newInput = kcg_true;
  Ctxt__30_EVC.ck_every = kcg_true;
  Ctxt__30_EVC.probe_MsgErrors.linkedBGError = kcg_true;
  Ctxt__30_EVC.probe_MsgErrors.unlinkedBGError = kcg_true;
  Ctxt__30_EVC.probe_MsgErrors.BG_versionIncompatible = kcg_true;
  Ctxt__30_EVC.probe_MsgErrors.radioSequenceError = kcg_true;
  Ctxt__30_EVC.probe_MsgErrors.tNvContactError = kcg_true;
  Ctxt__30_EVC.probe_MsgErrors.otherTimingError = kcg_true;
  Ctxt__30_EVC.probe_MsgErrors.radioMessageConsistencyError = kcg_true;
  Ctxt__30_EVC.probe_MsgErrors.nid_c = 0;
  Ctxt__30_EVC.probe_MsgErrors.nid_errorbg = 0;
  Ctxt__30_EVC.probe_PositioningErrors.outOfMemSpace = kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.passedBG_foundNotWhereExpected =
    kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.positionCalculation_inconsisten =
    kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.linkedBGMissed = kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.BGpassedInUnexpectedDirection = kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.BG_LinkingConsistencyError = kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.doubleRepositioningError = kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.bg.valid = kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.bg.nid_c = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.nid_bg = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.q_link = Q_LINK_Unlinked;
  Ctxt__30_EVC.probe_PositioningErrors.bg.location.nominal = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.location.d_min = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.location.d_max = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.seqNoOnTrack = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.valid = kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.expectedLocation.nominal =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.expectedLocation.d_min =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.expectedLocation.d_max =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.d_link.nominal = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.d_link.d_min = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.d_link.d_max = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.d_link =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_c = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.valid = kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.m_mcount =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.nid_c = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.nid_bg = 0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].d_link =
      0;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].nid_c =
      0;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    Ctxt__30_EVC.probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i].q_locacc =
      0;
  }
  Ctxt__30_EVC.probe_PositioningErrors.bg.missed = kcg_true;
  Ctxt__30_EVC.probe_lastBG_ID = 0;
  Ctxt__30_EVC.probe_lastMSG_in = 0;
  Ctxt__30_EVC.probe_BG_ID = 0;
  Ctxt__30_EVC.probe_MSG_in = 0;
  Ctxt__30_EVC.probe_nid_packet1 = 0;
  Ctxt__30_EVC.probe_nid_packet2 = 0;
  Ctxt__30_EVC.probe_TTrain = 0;
  Ctxt__30_EVC.probe_MSGout = 0;
  Ctxt__30_EVC.probe_Msg_5 = 0;
  Ctxt__30_EVC.probe_Msg_4 = 0;
  Ctxt__30_EVC.probe_Msg_3 = 0;
  Ctxt__30_EVC.probe_Msg_2 = 0;
  Ctxt__30_EVC.probe_Msg_1 = 0;
  Ctxt__30_EVC.probe_BG_afterCheck = 0;
  Ctxt__30_EVC.probe_LRBG = 0;
  Ctxt__30_EVC.probe_MSGinAfterFilter = 0;
  Ctxt__30_EVC.probe_distBG = 0.0;
  Ctxt__30_EVC.probe_distMsg = 0.0;
  Ctxt__30_EVC.probe_Balises.isChanged = kcg_true;
  Ctxt__30_EVC.probe_Balises.bg_id = 0;
  Ctxt__30_EVC.probe_Balises.nid_c = 0;
  Ctxt__30_EVC.probe_Balises.errors.linkedBGError = kcg_true;
  Ctxt__30_EVC.probe_Balises.errors.unlinkedBGError = kcg_true;
  Ctxt__30_EVC.probe_Balises.errors.BG_versionIncompatible = kcg_true;
  Ctxt__30_EVC.probe_Balises.errors.radioSequenceError = kcg_true;
  Ctxt__30_EVC.probe_Balises.errors.tNvContactError = kcg_true;
  Ctxt__30_EVC.probe_Balises.errors.otherTimingError = kcg_true;
  Ctxt__30_EVC.probe_Balises.errors.radioMessageConsistencyError = kcg_true;
  Ctxt__30_EVC.probe_Balises.errors.nid_c = 0;
  Ctxt__30_EVC.probe_Balises.errors.nid_errorbg = 0;
  Ctxt__30_EVC.probe_Odometry.valid = kcg_true;
  Ctxt__30_EVC.probe_Odometry.timestamp = 0;
  Ctxt__30_EVC.probe_Odometry.odo.o_nominal = 0;
  Ctxt__30_EVC.probe_Odometry.odo.o_min = 0;
  Ctxt__30_EVC.probe_Odometry.odo.o_max = 0;
  Ctxt__30_EVC.probe_Odometry.speed.v_safeNominal = 0;
  Ctxt__30_EVC.probe_Odometry.speed.v_rawNominal = 0;
  Ctxt__30_EVC.probe_Odometry.speed.v_lower = 0;
  Ctxt__30_EVC.probe_Odometry.speed.v_upper = 0;
  Ctxt__30_EVC.probe_Odometry.acceleration = 0;
  Ctxt__30_EVC.probe_Odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  Ctxt__30_EVC.probe_Odometry.motionDirection = unknownDirection_Obu_BasicTypes;
  Ctxt__30_EVC.MoRC_MN_1 = 0;
  Ctxt__30_EVC.MoRC_RadioID_1 = 0;
  Ctxt__30_EVC.MoRC_RadioStatus_1.registration.valid = kcg_true;
  Ctxt__30_EVC.MoRC_RadioStatus_1.registration.mobileDeviceNo = 0;
  Ctxt__30_EVC.MoRC_RadioStatus_1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  Ctxt__30_EVC.MoRC_RadioStatus_1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  Ctxt__30_EVC.MoRC_RadioStatus_1.registration.nid_mn = 0;
  Ctxt__30_EVC.MoRC_RadioStatus_1.connection.valid = kcg_true;
  Ctxt__30_EVC.MoRC_RadioStatus_1.connection.mobileDeviceNo = 0;
  Ctxt__30_EVC.MoRC_RadioStatus_1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  Ctxt__30_EVC.MoRC_RadioStatus_1.connection.nid_radio = 0;
  Ctxt__30_EVC.MoRC_RadioStatus_1.connection.settingUpConnectionHasFailed =
    kcg_true;
  Ctxt__30_EVC.MoRC_RadioStatus_1.connection.connectionLost = kcg_true;
  Ctxt__30_EVC.MoRC_RadioStatus_1.connection.isInRadioHole = kcg_true;
  Ctxt__30_EVC.MoRC_RadioStatus_1.session.valid = kcg_true;
  Ctxt__30_EVC.MoRC_RadioStatus_1.session.phase =
    sp_terminated_RCM_Session_Types;
  Ctxt__30_EVC.MoRC_RadioStatus_1.session.nid_c = 0;
  Ctxt__30_EVC.MoRC_RadioStatus_1.session.nid_rbc = 0;
  Ctxt__30_EVC.MoRC_RadioStatus_1.session.nid_radio = 0;
  Ctxt__30_EVC.rep_P1.valid = kcg_true;
  Ctxt__30_EVC.rep_P1.packet1.NID_PACKET = 0;
  Ctxt__30_EVC.rep_P1.packet1.L_PACKET = 0;
  Ctxt__30_EVC.rep_P1.packet1.qscale = Q_SCALE_10_cm_scale;
  Ctxt__30_EVC.rep_P1.packet1.NID_LRBG = 0;
  Ctxt__30_EVC.rep_P1.packet1.NID_PRVLRBG = 0;
  Ctxt__30_EVC.rep_P1.packet1.D_LRBG = 0;
  Ctxt__30_EVC.rep_P1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  Ctxt__30_EVC.rep_P1.packet1.dlrbg = Q_DLRBG_Reverse;
  Ctxt__30_EVC.rep_P1.packet1.L_DOUBTOVER = 0;
  Ctxt__30_EVC.rep_P1.packet1.L_DOUBTUNDER = 0;
  Ctxt__30_EVC.rep_P1.packet1.length = Q_LENGTH_No_train_integrity_inf;
  Ctxt__30_EVC.rep_P1.packet1.L_TRAININT = 0;
  Ctxt__30_EVC.rep_P1.packet1.V_TRAIN = 0;
  Ctxt__30_EVC.rep_P1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  Ctxt__30_EVC.rep_P1.packet1.mode = M_MODE_Full_Supervision;
  Ctxt__30_EVC.rep_P1.packet1.level = M_LEVEL_Level_0;
  Ctxt__30_EVC.rep_P1.packet1.NID_NTC = 0;
  Ctxt__30_EVC.td_status.valid = kcg_true;
  Ctxt__30_EVC.td_status.validatedByDriver = kcg_true;
  Ctxt__30_EVC.td_status.RBCsystemVersionOnboard = kcg_true;
  Ctxt__30_EVC.td_status.validatedbyRBC = kcg_true;
  Ctxt__30_EVC.td_status.waitingForRBCResponse = kcg_true;
  Ctxt__30_EVC.td_status.driverIsModificationTrainData = kcg_true;
  Ctxt__30_EVC.td_status.timeStampValidateToRBC = 0;
  Ctxt__30_EVC.rep_P0.valid = kcg_true;
  Ctxt__30_EVC.rep_P0.packet0.NID_PACKET = 0;
  Ctxt__30_EVC.rep_P0.packet0.L_PACKET = 0;
  Ctxt__30_EVC.rep_P0.packet0.qscale = Q_SCALE_10_cm_scale;
  Ctxt__30_EVC.rep_P0.packet0.NID_LRBG = 0;
  Ctxt__30_EVC.rep_P0.packet0.D_LRBG = 0;
  Ctxt__30_EVC.rep_P0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  Ctxt__30_EVC.rep_P0.packet0.dlrbg = Q_DLRBG_Reverse;
  Ctxt__30_EVC.rep_P0.packet0.L_DOUBTOVER = 0;
  Ctxt__30_EVC.rep_P0.packet0.L_DOUBTUNDER = 0;
  Ctxt__30_EVC.rep_P0.packet0.length = Q_LENGTH_No_train_integrity_inf;
  Ctxt__30_EVC.rep_P0.packet0.L_TRAININT = 0;
  Ctxt__30_EVC.rep_P0.packet0.V_TRAIN = 0;
  Ctxt__30_EVC.rep_P0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  Ctxt__30_EVC.rep_P0.packet0.mode = M_MODE_Full_Supervision;
  Ctxt__30_EVC.rep_P0.packet0.level = M_LEVEL_Level_0;
  Ctxt__30_EVC.rep_P0.packet0.NID_NTC = 0;
  Ctxt__30_EVC.td_events.trainStandStill = kcg_true;
  Ctxt__30_EVC.td_events.driverRequestModify = kcg_true;
  Ctxt__30_EVC.td_events.communicationSessionEstablished = kcg_true;
  Ctxt__30_EVC.td_events.safeRadioConnectionLost = kcg_true;
  Ctxt__30_EVC.td_events.approachingRBCarea = kcg_true;
  Ctxt__30_EVC.td_events.MoRCreadyFlag = kcg_true;
  for (i = 0; i < 31; i++) {
    Ctxt__30_EVC.EVC_TextMessageStatusList[i].valid = kcg_true;
    Ctxt__30_EVC.EVC_TextMessageStatusList[i].dmi_textMessageID = 0;
    Ctxt__30_EVC.EVC_TextMessageStatusList[i].timeStamp = 0;
    Ctxt__30_EVC.EVC_TextMessageStatusList[i].textReport =
      Q_TEXTREPORT_No_driver_acknowle;
    Ctxt__30_EVC.EVC_TextMessageStatusList[i].context =
      con_undefined_DMI_Types_Pkg;
    Ctxt__30_EVC.EVC_TextMessageStatusList[i].nid_textmessage = 0;
    Ctxt__30_EVC.EVC_TextMessageStatusList[i].whichLevel = M_LEVEL_Level_0;
    Ctxt__30_EVC.EVC_TextMessageStatusList[i].whichMode =
      M_MODE_Full_Supervision;
  }
  Ctxt__30_EVC.EVC_ActiveLevelList.number = 0;
  Ctxt__30_EVC.EVC_PersistentData.valid = kcg_true;
  Ctxt__30_EVC.EVC_PersistentData.lastActiveLevel = M_LEVEL_Level_0;
  Ctxt__30_EVC.EVC_PersistentData.lastActiveNTC = 0;
  Ctxt__30_EVC.EVC_PersistentData.availableLevelsList.number = 0;
  for (i = 0; i < 32; i++) {
    Ctxt__30_EVC.EVC_ActiveLevelList.levelList[i].level = M_LEVEL_Level_0;
    Ctxt__30_EVC.EVC_ActiveLevelList.levelList[i].nid_stm = 0;
    Ctxt__30_EVC.EVC_PersistentData.availableLevelsList.levelList[i].level =
      M_LEVEL_Level_0;
    Ctxt__30_EVC.EVC_PersistentData.availableLevelsList.levelList[i].nid_stm =
      0;
  }
  Ctxt__30_EVC.ML_ModeAndLevel.compatibleModeAndLevel = kcg_true;
  Ctxt__30_EVC.ML_ModeAndLevel.level = M_LEVEL_Level_0;
  Ctxt__30_EVC.ML_ModeAndLevel.newLevel = kcg_true;
  Ctxt__30_EVC.ML_ModeAndLevel.Mode = M_MODE_Full_Supervision;
  Ctxt__30_EVC.ML_ModeAndLevel.newMode = kcg_true;
  Ctxt__30_EVC.EVC_currentNTC = 0;
  Ctxt__30_EVC.MSG_lastRadioMsgTimestamp = 0;
  Ctxt__30_EVC.TIU_trainProperties.nid_engine = 0;
  Ctxt__30_EVC.TIU_trainProperties.nid_operational = 0;
  Ctxt__30_EVC.TIU_trainProperties.l_train = 0;
  Ctxt__30_EVC.TIU_trainProperties.d_baliseAntenna_2_frontend.nominal = 0;
  Ctxt__30_EVC.TIU_trainProperties.d_baliseAntenna_2_frontend.d_min = 0;
  Ctxt__30_EVC.TIU_trainProperties.d_baliseAntenna_2_frontend.d_max = 0;
  Ctxt__30_EVC.TIU_trainProperties.d_frontend_2_rearend.nominal = 0;
  Ctxt__30_EVC.TIU_trainProperties.d_frontend_2_rearend.d_min = 0;
  Ctxt__30_EVC.TIU_trainProperties.d_frontend_2_rearend.d_max = 0;
  Ctxt__30_EVC.TIU_trainProperties.locationAccuracy_DefaultValue.nominal = 0;
  Ctxt__30_EVC.TIU_trainProperties.locationAccuracy_DefaultValue.d_min = 0;
  Ctxt__30_EVC.TIU_trainProperties.locationAccuracy_DefaultValue.d_max = 0;
  Ctxt__30_EVC.TIU_trainProperties.centerDetectionAcc_DefaultValue.nominal = 0;
  Ctxt__30_EVC.TIU_trainProperties.centerDetectionAcc_DefaultValue.d_min = 0;
  Ctxt__30_EVC.TIU_trainProperties.centerDetectionAcc_DefaultValue.d_max = 0;
  for (i = 0; i < 41; i++) {
    Ctxt__30_EVC.CALC_BGs[i].valid = kcg_true;
    Ctxt__30_EVC.CALC_BGs[i].nid_c = 0;
    Ctxt__30_EVC.CALC_BGs[i].nid_bg = 0;
    Ctxt__30_EVC.CALC_BGs[i].q_link = Q_LINK_Unlinked;
    Ctxt__30_EVC.CALC_BGs[i].location.nominal = 0;
    Ctxt__30_EVC.CALC_BGs[i].location.d_min = 0;
    Ctxt__30_EVC.CALC_BGs[i].location.d_max = 0;
    Ctxt__30_EVC.CALC_BGs[i].seqNoOnTrack = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.valid = kcg_true;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.nid_bg_fromLinkingBG = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.nid_c_fromLinkingBG = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.expectedLocation.nominal = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.expectedLocation.d_min = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.expectedLocation.d_max = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.d_link.nominal = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.d_link.d_min = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.d_link.d_max = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.valid = kcg_true;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.nid_LRBG = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.d_link = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.nid_c = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.nid_bg = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    Ctxt__30_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_locacc = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.valid = kcg_true;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.valid = kcg_true;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_acc;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.m_mcount = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.nid_c = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.nid_bg = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.acceleration =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
      0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.q_nvlocacc = 0;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
      kcg_true;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i1 = 0; i1 < 33; i1++) {
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].valid = kcg_true;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_dir =
        Q_DIR_Reverse;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_scale =
        Q_SCALE_10_cm_scale;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].d_link = 0;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_c = 0;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_bg = 0;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_linkorientation =
        _56_Q_LINKORIENTATION_The_balis;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      Ctxt__30_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_locacc = 0;
    }
    Ctxt__30_EVC.CALC_BGs[i].missed = kcg_true;
  }
  Ctxt__30_EVC.MoRC_supervisingRBC_Id.valid = kcg_true;
  Ctxt__30_EVC.MoRC_supervisingRBC_Id.mobileDeviceNo = 0;
  Ctxt__30_EVC.MoRC_supervisingRBC_Id.nid_c = 0;
  Ctxt__30_EVC.MoRC_supervisingRBC_Id.nid_RBC = 0;
  Ctxt__30_EVC.MoRC_supervisingRBC_Id.nid_radio = 0;
  Ctxt__30_EVC.MoRC_supervisingRBC_Id.nid_mn = 0;
  Ctxt__30_EVC.td_trainData.valid = kcg_true;
  Ctxt__30_EVC.td_trainData.acknowledgedByDriver = kcg_true;
  Ctxt__30_EVC.td_trainData.trainCategory = NC_TRAIN_Train_does_not_belong_;
  Ctxt__30_EVC.td_trainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_m;
  Ctxt__30_EVC.td_trainData.trainLength = 0;
  Ctxt__30_EVC.td_trainData.brakePerctage = 0;
  Ctxt__30_EVC.td_trainData.maxTrainSpeed = 0;
  Ctxt__30_EVC.td_trainData.loadingGauge = M_LOADINGGAUGE_The_train_does_n;
  Ctxt__30_EVC.td_trainData.axleLoadCategory = M_AXLELOADCAT_A;
  Ctxt__30_EVC.td_trainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  Ctxt__30_EVC.td_trainData.axleNumber = 0;
  Ctxt__30_EVC.td_trainData.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    Ctxt__30_EVC.td_trainData.nationSystems[i] = 0;
  }
  Ctxt__30_EVC.td_trainData.numberTractionSystems = 0;
  for (i = 0; i < 4; i++) {
    Ctxt__30_EVC.td_trainData.tractionSystem[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    Ctxt__30_EVC.td_trainData.tractionSystem[i].nid_ctraction = 0;
  }
  Ctxt__30_EVC.DMI_sdmToDMI.valid = kcg_true;
  Ctxt__30_EVC.DMI_sdmToDMI.targetSpeed = 0;
  Ctxt__30_EVC.DMI_sdmToDMI.permittedSpeed = 0;
  Ctxt__30_EVC.DMI_sdmToDMI.releaseSpeed = 0;
  Ctxt__30_EVC.DMI_sdmToDMI.locationBrakeTarget = 0;
  Ctxt__30_EVC.DMI_sdmToDMI.location_brake_curve_starting_p = 0;
  Ctxt__30_EVC.DMI_sdmToDMI.interventionSpeed = 0;
  Ctxt__30_EVC.DMI_sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  Ctxt__30_EVC.DMI_sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  Ctxt__30_EVC.DMI_sdmToDMI.distanceIndicationPoint = 0;
  Ctxt__30_EVC.CALC_TrainPosition.valid = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.timestamp = 0;
  Ctxt__30_EVC.CALC_TrainPosition.trainPositionIsUnknown = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.noCoordinateSystemHasBeenAssign = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.trainPosition.nominal = 0;
  Ctxt__30_EVC.CALC_TrainPosition.trainPosition.d_min = 0;
  Ctxt__30_EVC.CALC_TrainPosition.trainPosition.d_max = 0;
  Ctxt__30_EVC.CALC_TrainPosition.estimatedFrontEndPosition = 0;
  Ctxt__30_EVC.CALC_TrainPosition.minSafeFrontEndPosition = 0;
  Ctxt__30_EVC.CALC_TrainPosition.maxSafeFrontEndPostion = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.valid = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.nid_c = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.nid_bg = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.q_link = Q_LINK_Unlinked;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.location.nominal = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.location.d_min = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.location.d_max = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.seqNoOnTrack = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.valid = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.nominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.d_min =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.d_max =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.d_link.nominal = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.d_link.d_min = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.d_link.d_max = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.valid = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
  }
  Ctxt__30_EVC.CALC_TrainPosition.LRBG.missed = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.valid = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.nid_c = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.nid_bg = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.location.nominal = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.location.d_min = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.location.d_max = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.seqNoOnTrack = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.nominal = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.d_min = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.d_max = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_c =
      0;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
  }
  Ctxt__30_EVC.CALC_TrainPosition.prvLRBG.missed = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  Ctxt__30_EVC.CALC_TrainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  Ctxt__30_EVC.CALC_TrainPosition.trainRunningDirectionToLRBG =
    Q_DIRTRAIN_Reverse;
  Ctxt__30_EVC.CALC_TrainPosition.linkingIsUsedOnboard = kcg_true;
  Ctxt__30_EVC.CALC_TrainPosition.estimatedRearEndPosition = 0;
  Ctxt__30_EVC.CALC_TrainPosition.minSafeRearEndPosition = 0;
  Ctxt__30_EVC.CALC_TrainPosition.maxSafeRearEndPosition = 0;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Active = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Error = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_DriverIdValidated = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_LevelSelectedByDirver = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_TrainRunningNumberFirstVali = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_TrainRunningNumberValidated = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_TrainDataValidated = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_StartReceived = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Identifier.valid = kcg_true;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Identifier.systemTime = 0;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Identifier.DMI_Identifier =
    DMI_1_DMI_Types_Pkg;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Identifier.l_name = 0;
  for (i = 0; i < 255; i++) {
    Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Identifier.DMI_name[i] = ' ';
  }
  Ctxt__30_EVC.DMI_currentDMIStatus.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_acc;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.valid = kcg_true;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.messageSource =
    msrc_undefined_Common_Types_Pkg;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.radioDevice = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.receivedSystemTime =
    0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_message = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.t_train = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_lrbg = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.t_train_reference =
    0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_em = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.d_sr = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.t_sh_rqst = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.d_ref = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.d_emergencystop =
    0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p42.valid = kcg_true;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p42.q_dir = Q_DIR_Reverse;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p42.q_rbc =
    Q_RBC_Terminate_communication_s;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p42.nid_c = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p42.nid_rbc = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p42.nid_radio = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_e;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p45.valid = kcg_true;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p45.q_dir = Q_DIR_Reverse;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.p45.nid_mn = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.sendingRBC.valid = kcg_true;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.sendingRBC.nid_c = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.sendingRBC.rbc_id = 0;
  Ctxt__30_EVC.PROC_radioCmdFromProcedures.sendingRBC.device_id = 0;
  /* 1 */ ProbeEVC_init_EnvSim(&Ctxt__30_EVC._19_Context_1);
  /* 3 */ probe_MsgOut_init_RadioSupport_(&Ctxt__30_EVC._18_Context_3);
  /* 1 */ collectRadioOutput_init_radioOu(&Ctxt__30_EVC._17_Context_1);
  /* 3 */ checkGeneralMessage_init_trainD(&Ctxt__30_EVC._16_Context_3);
  /* 2 */ setProbes_init_xdebugSupport_Pk(&Ctxt__30_EVC._15_Context_2);
  /* 2 */ distanceLastMSG_init_xdebugSupp(&Ctxt__30_EVC._14_Context_2);
  /* 2 */ distanceLastBG_init_xdebugSuppo(&Ctxt__30_EVC._13_Context_2);
  /* 2 */ setProbesBalises_init_xdebugSup(&Ctxt__30_EVC._12_Context_2);
  /* 2 */ manageDMI_Output_init_manage_DM(&Ctxt__30_EVC._11_Context_2);
  /* 2 */ Master_Procedure_init_ManagePro(&Ctxt__30_EVC._10_Context_2);
  /* 1 */ MoRC_HO_init_MoRC_HO_Pkg(&Ctxt__30_EVC._9_Context_1);
  /* 2 */ ProvidePositionReport_init_Prov(&Ctxt__30_EVC._8_Context_2);
  /* 2 */ TIU_OutputIntegration_init_outp(&Ctxt__30_EVC._7_Context_2);
  /* 2 */ SpeedSupervision_Integration_in(&Ctxt__30_EVC._6_Context_2);
  /* 2 */ ManageLevelAndMode_init(&Ctxt__30_EVC._5_Context_2);
  /* 1 */ MEM_combineForLevelChange_init_(&Ctxt__30_EVC._4_Context_1);
  /* 2 */ TrackAtlas_init_TrackAtlas(&Ctxt__30_EVC._3_Context_2);
  /* 2 */ trainData_init_trainData_pkg(&Ctxt__30_EVC._2_Context_2);
  /* 3 */ manageDMI_Input_init_manage_DMI(&Ctxt__30_EVC._1_Context_3);
  /* 3 */ calculateTrainPosition_init_Cal(&Ctxt__30_EVC.Context_3);
  /* 2 */ Manage_TrackSideInformati_init_(&Ctxt__30_EVC.Context_2);
  /* 5 */ manageTIU_input_init_input_from(&Ctxt__30_EVC.Context_5);
  /* 1 */ probePackets_init_EVC_MEM_Suppo(&Ctxt__30_EVC.Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _30_EVC_reset(void)
{
  Ctxt__30_EVC.init20 = kcg_true;
  Ctxt__30_EVC.init = kcg_true;
  /* 1 */ ProbeEVC_reset_EnvSim(&Ctxt__30_EVC._19_Context_1);
  /* 3 */ probe_MsgOut_reset_RadioSupport(&Ctxt__30_EVC._18_Context_3);
  /* 1 */ collectRadioOutput_reset_radioO(&Ctxt__30_EVC._17_Context_1);
  /* 3 */ checkGeneralMessage_reset_train(&Ctxt__30_EVC._16_Context_3);
  /* 2 */ setProbes_reset_xdebugSupport_P(&Ctxt__30_EVC._15_Context_2);
  /* 2 */ distanceLastMSG_reset_xdebugSup(&Ctxt__30_EVC._14_Context_2);
  /* 2 */ distanceLastBG_reset_xdebugSupp(&Ctxt__30_EVC._13_Context_2);
  /* 2 */ setProbesBalises_reset_xdebugSu(&Ctxt__30_EVC._12_Context_2);
  /* 2 */ manageDMI_Output_reset_manage_D(&Ctxt__30_EVC._11_Context_2);
  /* 2 */ Master_Procedure_reset_ManagePr(&Ctxt__30_EVC._10_Context_2);
  /* 1 */ MoRC_HO_reset_MoRC_HO_Pkg(&Ctxt__30_EVC._9_Context_1);
  /* 2 */ ProvidePositionReport_reset_Pro(&Ctxt__30_EVC._8_Context_2);
  /* 2 */ TIU_OutputIntegration_reset_out(&Ctxt__30_EVC._7_Context_2);
  /* 2 */ SpeedSupervision_Integration_re(&Ctxt__30_EVC._6_Context_2);
  /* 2 */ ManageLevelAndMode_reset(&Ctxt__30_EVC._5_Context_2);
  /* 1 */ MEM_combineForLevelChange_reset(&Ctxt__30_EVC._4_Context_1);
  /* 2 */ TrackAtlas_reset_TrackAtlas(&Ctxt__30_EVC._3_Context_2);
  /* 2 */ trainData_reset_trainData_pkg(&Ctxt__30_EVC._2_Context_2);
  /* 3 */ manageDMI_Input_reset_manage_DM(&Ctxt__30_EVC._1_Context_3);
  /* 3 */ calculateTrainPosition_reset_Ca(&Ctxt__30_EVC.Context_3);
  /* 2 */ Manage_TrackSideInformati_reset(&Ctxt__30_EVC.Context_2);
  /* 5 */ manageTIU_input_reset_input_fro(&Ctxt__30_EVC.Context_5);
  /* 1 */ probePackets_reset_EVC_MEM_Supp(&Ctxt__30_EVC.Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC */
void _30_EVC(void)
{
  /* EVC */
  static nationValuesForDMI_T_DMI_Types_ mk_struct;
  /* EVC */
  static obuEventsAndPhases_T_RCM_Sessio _1_mk_struct;
  /* EVC */
  static RBC_Communication_T_ProvidePosi _2_mk_struct;
  /* EVC */
  static TrainToTrackStatus_T_BG_Types_P _3_mk_struct;
  /* EVC */
  static ModeLevel2PositionReport_T_Prov _4_mk_struct;
  /* EVC */
  static T_Data_From_Localisation_Level_ _5_mk_struct;
  /* EVC */
  static T_Data_From_Speed_Supervision_L _6_mk_struct;
  /* EVC */
  static T_ERTMS_capabilities_Level_And_ _7_mk_struct;
  /* EVC */
  static T_Data_From_F2_functions_Level_ _8_mk_struct;
  /* EVC */
  static filterRelatedEvents_T_Common_Ty _9_mk_struct;
  /* EVC */
  static morcStatus_T_RCM_Session_Types_ tmp25;
  /* EVC */
  static connection_ids_T_Handover_Pkg tmp24;
  /* EVC */
  static DMI_TXT_MSGList_status_T_DMI_Ty tmp23;
  /* EVC */
  static NID_STM_DMI_Types_Pkg tmp22;
  /* EVC */
  static trainData_Events_T_trainData_Ty tmp21;
  /* EVC */
  static L_internal_Type_Obu_BasicTypes_ tmp20;
  /* EVC */
  static DataForModeAndLevel_t_TrackAtla tmp19;
  /* EVC */
  static M_LEVEL tmp18;
  /* EVC */
  static kcg_bool tmp17;
  /* EVC */
  static kcg_bool tmp16;
  /* EVC */
  static kcg_bool tmp15;
  /* EVC */
  static kcg_bool tmp14;
  /* EVC */
  static mobileRegistrationContext_T_RCM tmp13;
  /* EVC */
  static kcg_int tmp12;
  /* EVC */
  static mobileConnectionContext_T_RCM_T tmp11;
  /* EVC */
  static kcg_int tmp10;
  /* EVC */
  static kcg_bool tmp;
  /* EVC::EVC_PersistentData */
  static ps_dataForStartOfMission_T_API_ last_EVC_PersistentData;
  /* EVC::DMI_trainRunningNumber */
  static _24_DMI_Train_Running_Number_T_ DMI_trainRunningNumber;
  /* EVC::TM_to_MsgOut */
  static M_TrainTrackMessageBus_t_TM_Tra TM_to_MsgOut;
  /* EVC::_L523 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L523;
  /* EVC::_L772 */
  static trainPosition_T_TrainPosition_T _L772;
  /* EVC::_L794 */
  static positionedBGs_T_TrainPosition_T _L794;
  /* EVC::_L813 */
  static kcg_bool _L813;
  /* EVC::_L938 */
  static T_internal_Type_Obu_BasicTypes_ _L938;
  /* EVC::_L950 */
  static trainProperties_T_TrainPosition _L950;
  /* EVC::_L952 */
  static trainData_T_TIU_Types_Pkg _L952;
  /* EVC::_L993 */
  static T_Mode_Level_Level_And_Mode_Typ _L993;
  /* EVC::_L1219 */
  static PT0_PositionReport_T_Packet_Tra _L1219;
  /* EVC::_L1230 */
  static trainDataStatus_T_trainData_Typ _L1230;
  /* EVC::_L1321 */
  static PT1_PositionReport_2BG_T_Packet _L1321;
  /* EVC::_L1678 */
  static kcg_bool _L1678;
  /* EVC::_L1754 */
  static kcg_bool _L1754;
  
  Ctxt__30_EVC.ck_every = kcg_true;
  kcg_copy_odometry_T_Obu_BasicTy(&Ctxt__30_EVC.probe_Odometry, &API_Odometry);
  resetOut = EVC_reset;
  /* ck_EVC */ if (Ctxt__30_EVC.ck_every) {
    /* 1 */
    probePackets_EVC_MEM_Support_Pk(&API_fromTrack, &Ctxt__30_EVC.Context_1);
  }
  /* fby_1_init_2 */ if (Ctxt__30_EVC.init20) {
    kcg_copy_trainPosition_T_TrainP(
      &_L772,
      (trainPosition_T_TrainPosition_T *) &cEmptyTrainPosition);
    kcg_copy_T_Mode_Level_Level_And(
      &_L993,
      (T_Mode_Level_Level_And_Mode_Typ *) &cMLInitialModesAndLevel);
    _L938 = cTTrainUnknown1_CheckEuroradioM;
    kcg_copy_positionedBGs_T_TrainP(
      &_L794,
      (positionedBGs_T_TrainPosition_T *) &cEmptyPositionedBGs);
    kcg_copy_trainData_T_TIU_Types_(
      &_L952,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types);
    kcg_copy_trainDataStatus_T_trai(
      &_L1230,
      (trainDataStatus_T_trainData_Typ *) &cNoStates_trainData_Types_pkg);
    kcg_copy_morcStatus_T_RCM_Sessi(
      &tmp25,
      (morcStatus_T_RCM_Session_Types_ *) &cNoMoRCStatus_RCM_Session_Types);
    kcg_copy_connection_ids_T_Hando(
      &tmp24,
      (connection_ids_T_Handover_Pkg *) &cNoSupervisingRBC);
    kcg_copy_trainProperties_T_Trai(
      &_L950,
      (trainProperties_T_TrainPosition *) &cEmptyTrainProperties);
    kcg_copy_DMI_EVC_status_T_DMI_T(
      &_L523,
      (DMI_EVC_status_T_DMI_Types_Pkg *) &cDMI_EVC_Status_Default_DMI_Typ);
    kcg_copy_DMI_TXT_MSGList_status(
      &tmp23,
      (DMI_TXT_MSGList_status_T_DMI_Ty *) &cEmptyTestStatusList_DMI_Types_);
    tmp22 = cNo_STM_manage_DMI_Input_Pkg;
    kcg_copy_PT0_PositionReport_T_P(
      &_L1219,
      (PT0_PositionReport_T_Packet_Tra *) &cNoP0);
    kcg_copy_PT1_PositionReport_2BG(
      &_L1321,
      (PT1_PositionReport_2BG_T_Packet *) &cNoP1);
    kcg_copy_trainData_Events_T_tra(
      &tmp21,
      (trainData_Events_T_trainData_Ty *) &cNoTDEvents);
    tmp20 = cEmptySpeedForDMI.location_brake_curve_starting_p;
    kcg_copy_ps_dataForStartOfMissi(
      &last_EVC_PersistentData,
      (ps_dataForStartOfMission_T_API_ *) &cNoPersistentData);
    tmp17 = kcg_false;
    _L813 = kcg_false;
    _L1678 = kcg_false;
    tmp15 = kcg_false;
    tmp16 = kcg_false;
    tmp14 = cNoRadioCmd.valid;
    tmp12 = 0;
    tmp10 = 0;
    tmp = kcg_false;
  }
  else {
    kcg_copy_trainPosition_T_TrainP(&_L772, &Ctxt__30_EVC.CALC_TrainPosition);
    kcg_copy_T_Mode_Level_Level_And(&_L993, &Ctxt__30_EVC.ML_ModeAndLevel);
    _L938 = Ctxt__30_EVC.MSG_lastRadioMsgTimestamp;
    kcg_copy_positionedBGs_T_TrainP(&_L794, &Ctxt__30_EVC.CALC_BGs);
    kcg_copy_trainData_T_TIU_Types_(&_L952, &Ctxt__30_EVC.td_trainData);
    kcg_copy_trainDataStatus_T_trai(&_L1230, &Ctxt__30_EVC.td_status);
    kcg_copy_morcStatus_T_RCM_Sessi(&tmp25, &Ctxt__30_EVC.MoRC_RadioStatus_1);
    kcg_copy_connection_ids_T_Hando(
      &tmp24,
      &Ctxt__30_EVC.MoRC_supervisingRBC_Id);
    kcg_copy_trainProperties_T_Trai(&_L950, &Ctxt__30_EVC.TIU_trainProperties);
    kcg_copy_DMI_EVC_status_T_DMI_T(&_L523, &Ctxt__30_EVC.DMI_currentDMIStatus);
    kcg_copy_DMI_TXT_MSGList_status(
      &tmp23,
      &Ctxt__30_EVC.EVC_TextMessageStatusList);
    tmp22 = Ctxt__30_EVC.EVC_currentNTC;
    kcg_copy_PT0_PositionReport_T_P(&_L1219, &Ctxt__30_EVC.rep_P0);
    kcg_copy_PT1_PositionReport_2BG(&_L1321, &Ctxt__30_EVC.rep_P1);
    kcg_copy_trainData_Events_T_tra(&tmp21, &Ctxt__30_EVC.td_events);
    tmp20 = Ctxt__30_EVC.DMI_sdmToDMI.location_brake_curve_starting_p;
    kcg_copy_ps_dataForStartOfMissi(
      &last_EVC_PersistentData,
      &Ctxt__30_EVC.EVC_PersistentData);
    _L813 = Ctxt__30_EVC.MoRC_newSessionEstablished;
    tmp17 = Ctxt__30_EVC.EVC_ready;
    _L1678 = Ctxt__30_EVC.PROC_statusstartofmissionongoin;
    tmp16 = Ctxt__30_EVC.PROC_powerUp_to_MoRC;
    tmp15 = Ctxt__30_EVC.PROC_powerOff_to_MoRC;
    tmp14 = Ctxt__30_EVC.PROC_radioCmdFromProcedures.valid;
    tmp12 = Ctxt__30_EVC.MoRC_MN_1;
    tmp10 = Ctxt__30_EVC.MoRC_RadioID_1;
    tmp = Ctxt__30_EVC._L477;
  }
  /* 5 */
  manageTIU_input_input_from_TIU_(
    &API_fromTIU,
    &_L952,
    &Ctxt__30_EVC.Context_5);
  _9_mk_struct.pendingL1Transition = kcg_false;
  _9_mk_struct.pendingL12L3Transition = kcg_false;
  _9_mk_struct.pendingAckOfTrainDataFromRBC = _L1230.waitingForRBCResponse;
  _9_mk_struct.emergencyStopAccepted = kcg_false;
  _9_mk_struct.lastAckTextMessageId = 0;
  _9_mk_struct.pendingNTCTransition = kcg_false;
  _9_mk_struct.SPPAndGradientOnBoard = kcg_false;
  _9_mk_struct.MACoverNotFullLength = kcg_false;
  /* 2 */
  Manage_TrackSideInformati_Manag(
    kcg_true,
    &API_fromTrack,
    &API_Odometry,
    EVC_reset,
    &_L772,
    &_L993,
    cP3NationalValuesUtrechtAmsterd.t_nvcontact,
    cOwnVersion,
    _L938,
    &tmp25,
    &tmp24,
    &_L794,
    cP3NationalValuesUtrechtAmsterd.q_nvlocacc,
    Ctxt__30_EVC.Context_5.outTIUStatus.deskOpen,
    _L1230.validatedbyRBC,
    &_9_mk_struct,
    &Ctxt__30_EVC.Context_2);
  kcg_copy_MSG_Errors_T_Common_Ty(
    &Ctxt__30_EVC.probe_MsgErrors,
    &Ctxt__30_EVC.Context_2.outCheckErrors);
  /* 3 */
  calculateTrainPosition_Calculat(
    &API_Odometry,
    (passedBG_T_BG_Types_Pkg *) &cEmptyPassedBG,
    &Ctxt__30_EVC.Context_2.outputMessage,
    &_L950,
    EVC_reset,
    &Ctxt__30_EVC.Context_3);
  kcg_copy_trainPosition_T_TrainP(
    &Ctxt__30_EVC.CALC_TrainPosition,
    &Ctxt__30_EVC.Context_3.trainPosition);
  kcg_copy_positionedBGs_T_TrainP(
    &Ctxt__30_EVC.CALC_BGs,
    &Ctxt__30_EVC.Context_3.BGs);
  kcg_copy_positionErrors_T_Train(
    &Ctxt__30_EVC.probe_PositioningErrors,
    &Ctxt__30_EVC.Context_3.errors);
  /* 3 */
  manageDMI_Input_manage_DMI_Inpu(
    &API_fromDMI,
    EVC_reset,
    &tmp23,
    API_SystemTime,
    tmp22,
    &Ctxt__30_EVC._1_Context_3);
  kcg_copy_DMI_EVC_status_T_DMI_T(
    &Ctxt__30_EVC.DMI_currentDMIStatus,
    &Ctxt__30_EVC._1_Context_3.currentDMIStatus);
  kcg_copy__24_DMI_Train_Running_(
    &DMI_trainRunningNumber,
    &Ctxt__30_EVC._1_Context_3.fromDMI_TrainRunningNumber);
  Ctxt__30_EVC.EVC_currentNTC = Ctxt__30_EVC._1_Context_3.updatedNTC;
  Ctxt__30_EVC.td_events.trainStandStill = API_Odometry.valid &
    (API_Odometry.motionState == noMotion_Obu_BasicTypes_Pkg);
  Ctxt__30_EVC.td_events.driverRequestModify = kcg_false;
  Ctxt__30_EVC.td_events.safeRadioConnectionLost = kcg_false;
  Ctxt__30_EVC.td_events.approachingRBCarea = kcg_false;
  /* 2 */
  trainData_trainData_pkg(
    EVC_reset,
    &API_fromTIU.info.train_data_info,
    &Ctxt__30_EVC._1_Context_3.fromDMI_TrainData,
    &Ctxt__30_EVC._1_Context_3.fromDMI_TrainDataAck,
    &Ctxt__30_EVC.Context_2.outputMessage,
    &tmp21,
    4065801,
    &_L1219,
    &_L1321,
    (M_TrainTrackMessageBus_t_TM_Tra *) &cNoBus_trainData_pkg,
    cOwnVersion,
    API_SystemTime,
    &Ctxt__30_EVC._2_Context_2);
  kcg_copy_trainData_T_TIU_Types_(
    &Ctxt__30_EVC.td_trainData,
    &Ctxt__30_EVC._2_Context_2.actualTrainData);
  kcg_copy_trainDataStatus_T_trai(
    &Ctxt__30_EVC.td_status,
    &Ctxt__30_EVC._2_Context_2.updatedStatus);
  /* 2 */
  TrackAtlas_TrackAtlas(
    &Ctxt__30_EVC.Context_2.outputMessage,
    &_L993,
    _L952.valid,
    &Ctxt__30_EVC.CALC_TrainPosition,
    _L952.trainLength,
    API_SystemTime,
    tmp20,
    &API_Odometry,
    &Ctxt__30_EVC._1_Context_3.outForMA,
    &_L950,
    &_L1219,
    &_L1321,
    API_SystemTime,
    (P203V1_OBU_T_TM_baseline2 *) &cP203_PermanentData_EVC_Permane,
    (P003_permanent_data_T_TM_baseli *) &cP003_PermanentData_EVC_Permane,
    &Ctxt__30_EVC._2_Context_2.outMessageBus,
    &Ctxt__30_EVC.CALC_BGs,
    &Ctxt__30_EVC._3_Context_2);
  /* 1 */
  maintainTrainProperties_EVC_MEM(
    &_L950,
    &DMI_trainRunningNumber,
    &_L952,
    4065801,
    &Ctxt__30_EVC.TIU_trainProperties);
  _L1754 = Ctxt__30_EVC.Context_5.outTIUStatus.valid &
    Ctxt__30_EVC.Context_5.outTIUStatus.deskOpen;
  /* 2 */
  patchEmergencyBrakeMsg_EVC_MEM_(
    &Ctxt__30_EVC._3_Context_2.To_ModeAndLevel,
    &tmp19);
  /* 1 */
  MEM_combineForLevelChange_EVC_M(
    &Ctxt__30_EVC.Context_2.outputMessage,
    &_L993,
    &Ctxt__30_EVC.CALC_TrainPosition,
    &Ctxt__30_EVC.TIU_trainProperties,
    &Ctxt__30_EVC._4_Context_1);
  /* ck_EVC_cabIsOpen */ if (_L1754) {
    /* 3 */ if (Ctxt__30_EVC.init) {
      kcg_copy_ps_dataForStartOfMissi(
        &Ctxt__30_EVC.EVC_PersistentData,
        &API_persistentData);
      tmp18 = Ctxt__30_EVC.EVC_PersistentData.lastActiveLevel;
    }
    else {
      kcg_copy_ps_dataForStartOfMissi(
        &Ctxt__30_EVC.EVC_PersistentData,
        &last_EVC_PersistentData);
      tmp18 = _L993.level;
    }
    kcg_copy_DMI_LevelList_T_DMI_Ty(
      &Ctxt__30_EVC.EVC_ActiveLevelList,
      &Ctxt__30_EVC.EVC_PersistentData.availableLevelsList);
    Ctxt__30_EVC.init = kcg_false;
  }
  else {
    tmp18 = _L993.level;
    /* last_init_ck_EVC_ActiveLevelList */ if (Ctxt__30_EVC.init20) {
      kcg_copy_DMI_LevelList_T_DMI_Ty(
        &Ctxt__30_EVC.EVC_ActiveLevelList,
        (DMI_LevelList_T_DMI_Types_Pkg *) &cNo_Levels);
    }
    kcg_copy_ps_dataForStartOfMissi(
      &Ctxt__30_EVC.EVC_PersistentData,
      &last_EVC_PersistentData);
  }
  kcg_copy_MSG_Errors_T_Common_Ty(
    &_8_mk_struct.Common_Errors,
    (MSG_Errors_T_Common_Types_Pkg *) &cNoMsgErrors);
  _8_mk_struct.Failure_Occured = kcg_false;
  _8_mk_struct.Continue_Shunting_Active = kcg_false;
  _8_mk_struct.Stop_Shunting_Stored = kcg_false;
  _7_mk_struct.NTC = kcg_true;
  _7_mk_struct.L0 = kcg_true;
  _7_mk_struct.L1 = kcg_true;
  _7_mk_struct.L2 = kcg_true;
  _7_mk_struct.L3 = kcg_false;
  _6_mk_struct.Estim_front_End_overpass_SR_Dis = kcg_false;
  _6_mk_struct.Estim_Front_End_Rear_SSP = kcg_false;
  _6_mk_struct.Override_Function_Active = kcg_false;
  _6_mk_struct.EOA_Antenna_Overpass = kcg_false;
  _6_mk_struct.EOA_Front_End = kcg_false;
  _6_mk_struct.Train_Speed_Under_Overide_Limit = kcg_false;
  _5_mk_struct.BG_In_List_Expected_BG_In_SR = kcg_false;
  _5_mk_struct.BG_In_List_Expected_BG_In_SH = kcg_false;
  kcg_copy_positionErrors_T_Train(
    &_5_mk_struct.PositionErrors,
    (positionErrors_T_TrainPosition_ *) &cNoPositioningErrors);
  kcg_copy_trainPosition_T_TrainP(
    &_5_mk_struct.Train_Position,
    &Ctxt__30_EVC.CALC_TrainPosition);
  _5_mk_struct.Train_Speed = API_Odometry.speed.v_safeNominal;
  _5_mk_struct.Train_Standstill = API_Odometry.motionState ==
    noMotion_Obu_BasicTypes_Pkg;
  /* 2 */
  ManageLevelAndMode(
    &Ctxt__30_EVC._1_Context_3.forModesAndLevel,
    &_5_mk_struct,
    &Ctxt__30_EVC.Context_5.outTIUCurrentInfo,
    &tmp19.train_messages,
    &Ctxt__30_EVC._4_Context_1.Data_From_Track_Packets_at_ML,
    &_6_mk_struct,
    Ctxt__30_EVC.Context_5.outTIUStatus.ownCab,
    &Ctxt__30_EVC._1_Context_3.ML_levelTransition,
    &_7_mk_struct,
    &Ctxt__30_EVC.Context_2.IF_toML,
    &_8_mk_struct,
    (T_Data_From_STM_Level_And_Mode_ *) &cEmptyData_From_STM,
    tmp18,
    &Ctxt__30_EVC._5_Context_2);
  kcg_copy_T_Mode_Level_Level_And(
    &Ctxt__30_EVC.ML_ModeAndLevel,
    &Ctxt__30_EVC._5_Context_2.Compatible_Mode_And_Level);
  /* 2 */
  SpeedSupervision_Integration_Sp(
    (P3_NationalValues_T_Packet_Type *) &cP3NationalValuesUtrechtAmsterd,
    &Ctxt__30_EVC.CALC_TrainPosition,
    &API_Odometry,
    &Ctxt__30_EVC.TIU_trainProperties,
    &Ctxt__30_EVC.td_trainData,
    &Ctxt__30_EVC._3_Context_2.to_Supervision,
    (kcg_bool)
      (Ctxt__30_EVC._5_Context_2.Service_Brake_Command |
        Ctxt__30_EVC.Context_2.ApplyServiceBrake),
    /* 1 */
    Procedure_TRIP_EVC_MEM_Support_(
      &Ctxt__30_EVC.ML_ModeAndLevel,
      Ctxt__30_EVC._5_Context_2.EB_Requested),
    &Ctxt__30_EVC._6_Context_2);
  kcg_copy_speedSupervisionForDMI(
    &Ctxt__30_EVC.DMI_sdmToDMI,
    &Ctxt__30_EVC._6_Context_2.sdmToDMI);
  /* 2 */
  TIU_OutputIntegration_output_to(
    (Isolation_Status_T_TIU_Types_Pk *) &cEmtpyIsolationStatus,
    &Ctxt__30_EVC._6_Context_2.brakeCmd,
    (Brake_inhibition_command_T_TIU_ *) &cEmptyBrakeInhibitionCommand,
    (Type_I_train_commands_T_TIU_Typ *) &cEmptyTrainCommand,
    (Change_traction_system_T_TIU_Ty *) &cEmptyChangeTractionSystem,
    (Passenger_door_control_info_T_T *) &cPassengerDoorControlInfo,
    (Change_of_allowed_current_consu *) &cEmptyChangeOfAllowedCurrentCon,
    &Ctxt__30_EVC.ML_ModeAndLevel,
    &Ctxt__30_EVC._7_Context_2);
  kcg_copy_TIU_Output_msg_API_TIU(
    &API_toTIU,
    &Ctxt__30_EVC._7_Context_2.outTIU_to_API);
  Ctxt__30_EVC.td_events.communicationSessionEstablished = _L813;
  Ctxt__30_EVC.td_events.MoRCreadyFlag = tmp17;
  _L1754 = !Ctxt__30_EVC.Context_5.outTIUStatus.deskOpen;
  debugCurrentMode = Ctxt__30_EVC.ML_ModeAndLevel.Mode;
  debugCurrentLevel = Ctxt__30_EVC.ML_ModeAndLevel.level;
  _4_mk_struct.currMode = debugCurrentMode;
  _4_mk_struct.currLevel = debugCurrentLevel;
  _4_mk_struct.levelTransitionBorderPassed =
    Ctxt__30_EVC.ML_ModeAndLevel.newLevel;
  _3_mk_struct.nid_ntc = Ctxt__30_EVC.EVC_currentNTC;
  _3_mk_struct.q_length = Q_LENGTH_No_train_integrity_inf;
  _2_mk_struct.newSessionEstablished = _L813;
  /* 2 */
  ProvidePositionReport_ProvidePo(
    &Ctxt__30_EVC.CALC_BGs,
    &Ctxt__30_EVC.CALC_TrainPosition,
    &API_Odometry,
    &Ctxt__30_EVC.TIU_trainProperties,
    (LocationBasedEvents_T_ProvidePo *) &cEmptyLocationBasedEvents,
    &Ctxt__30_EVC.Context_2.outputMessage,
    API_SystemTime,
    &_2_mk_struct,
    &_3_mk_struct,
    Ctxt__30_EVC.CALC_TrainPosition.trainRunningDirectionToLRBG,
    Ctxt__30_EVC.probe_PositioningErrors.BG_LinkingConsistencyError,
    Ctxt__30_EVC.probe_MsgErrors.linkedBGError,
    Ctxt__30_EVC.probe_MsgErrors.unlinkedBGError,
    Ctxt__30_EVC.probe_MsgErrors.radioMessageConsistencyError,
    Ctxt__30_EVC.probe_MsgErrors.radioSequenceError,
    kcg_false,
    kcg_false,
    Ctxt__30_EVC.probe_PositioningErrors.twoConsecutiveLinkedBGs_missed,
    Ctxt__30_EVC.probe_PositioningErrors.doubleRepositioningError,
    &_4_mk_struct,
    (ReportedBGList_T_ProvidePositio *) &cReportedBGList_ProvidePosition,
    &Ctxt__30_EVC._3_Context_2.bus_out,
    cOwnVersion,
    API_SystemTime,
    &Ctxt__30_EVC._8_Context_2);
  kcg_copy_PT0_PositionReport_T_P(
    &Ctxt__30_EVC.rep_P0,
    &Ctxt__30_EVC._8_Context_2.packet0);
  kcg_copy_PT1_PositionReport_2BG(
    &Ctxt__30_EVC.rep_P1,
    &Ctxt__30_EVC._8_Context_2.packet1);
  kcg_copy_M_TrainTrackMessageBus(
    &TM_to_MsgOut,
    &Ctxt__30_EVC._8_Context_2.posReport);
  /* 1 */
  MEM_MobileRegistrationContext_E(&API_mobileHWStatus, 0, tmp12, &tmp13);
  /* 1 */
  MEM_MobileConnectionContext_EVC(
    &API_mobileHWStatus,
    0,
    tmp10,
    kcg_false,
    &tmp11);
  _1_mk_struct.atPowerUp = tmp16;
  _1_mk_struct.atPowerDown = tmp15;
  _1_mk_struct.atStartOfMission = kcg_false;
  _1_mk_struct.modeChangeHasToBeReportedToRBC = _L1678;
  _1_mk_struct.driverHasManuallyChangedLevel_t = kcg_false;
  _1_mk_struct.trainFrontPassesStartOfAnnounce = kcg_false;
  _1_mk_struct.trainFrontReachesEndOfAnnounced = kcg_false;
  _1_mk_struct.trainFrontInsideInAnAnnouncedRa = kcg_false;
  _1_mk_struct.trainFrontPassesALevelTransitio = _L993.newLevel;
  _1_mk_struct.trainFrontPassesA_RBC_RBC_borde = kcg_false;
  _1_mk_struct.startOfMissionProcedureComplete = kcg_false;
  _1_mk_struct.isPartOfAnOngoingStartOfMission = tmp14;
  _1_mk_struct.startOfMissionProcedureIsGoingO = _L1678;
  _1_mk_struct.endOfMissionIsExecuted = _L1754;
  _1_mk_struct.triggerDecisionThatNoRadioNetwo = kcg_false;
  _1_mk_struct.errorConditionRequiringTerminat = kcg_false;
  _1_mk_struct.trainIsRejectedByRBC_duringStar = kcg_false;
  _1_mk_struct.driverClosesTheDeskduringStartO = _L1754;
  _1_mk_struct.trainExitedFromAnRBCArea = kcg_false;
  _1_mk_struct.isInCommunicationSessionWithAnR = kcg_false;
  _1_mk_struct.level_1_isLeft = kcg_false;
  /* 1 */
  MoRC_HO_MoRC_HO_Pkg(
    _L993.Mode,
    _L993.level,
    &_1_mk_struct,
    (P45_RadioNetworkRegistration_T_ *) &cEmptyRadioNetworkIds.memorizedID,
    (P45_RadioNetworkRegistration_T_ *) &cEmptyRadioNetworkIds.ID_fromDriver,
    &tmp13,
    (mobileRegistrationContext_T_RCM *) &cNoMobileRegistrationContext,
    &tmp11,
    (mobileConnectionContext_T_RCM_T *) &cNoMobileConnectionContext,
    &Ctxt__30_EVC.Context_2.outputMessage,
    &TM_to_MsgOut,
    &_L772,
    &_L794,
    API_SystemTime,
    API_SystemTime,
    API_SystemTime,
    EVC_reset,
    isAbleToManageOneSession_Handov,
    &Ctxt__30_EVC.TIU_trainProperties,
    (morc_configData_T_RCM_Session_T *) &cMoRC_ConfigData_EVC_PermanentD,
    (P003_TM_TrainToTrack *) &cMoRC_own_P3ng_EVC_PermanentDat,
    cOwnVersion,
    &Ctxt__30_EVC._9_Context_1);
  kcg_copy_morcStatus_T_RCM_Sessi(
    &Ctxt__30_EVC.MoRC_RadioStatus_1,
    &Ctxt__30_EVC._9_Context_1.radioStatus_1);
  kcg_copy_connection_ids_T_Hando(
    &Ctxt__30_EVC.MoRC_supervisingRBC_Id,
    &Ctxt__30_EVC._9_Context_1.supervisingRBC);
  Ctxt__30_EVC.EVC_ready = Ctxt__30_EVC._9_Context_1.ready;
  /* 2 */
  Master_Procedure_ManageProcedur(
    &_L523,
    tmp,
    API_SystemTime,
    &Ctxt__30_EVC.ML_ModeAndLevel,
    &Ctxt__30_EVC.MoRC_RadioStatus_1,
    &Ctxt__30_EVC.Context_5.outTIUStatus,
    Ctxt__30_EVC.CALC_TrainPosition.LRBG.valid,
    &Ctxt__30_EVC._1_Context_3.outDriverRequest,
    _L523.DMI_LevelSelectedByDirver,
    &Ctxt__30_EVC._10_Context_2);
  kcg_copy_radioManagementMessage(
    &Ctxt__30_EVC.PROC_radioCmdFromProcedures,
    &Ctxt__30_EVC._10_Context_2.request_Start_Mobile_Terminal_a);
  Ctxt__30_EVC.PROC_powerUp_to_MoRC =
    Ctxt__30_EVC._10_Context_2.powerUp_to_MoRC;
  Ctxt__30_EVC.PROC_statusstartofmissionongoin =
    Ctxt__30_EVC._10_Context_2.statusstartofmissionongoing_to_;
  Ctxt__30_EVC.PROC_powerOff_to_MoRC =
    Ctxt__30_EVC._10_Context_2.powerOff_to_MoRC;
  Ctxt__30_EVC._L477 =
    Ctxt__30_EVC._10_Context_2.request_MA_FS_SR_OS_LS_SH_to_MA;
  Ctxt__30_EVC.init20 = kcg_false;
  mk_struct.valid = kcg_true;
  mk_struct.nid_c = cP3NationalValuesUtrechtAmsterd.nid_cArray[0].nid_c;
  mk_struct.nid_c_valid = kcg_true;
  /* 2 */
  manageDMI_Output_manage_DMI_Out(
    &_L523,
    API_SystemTime,
    &Ctxt__30_EVC.Context_5.outTIUStatus,
    &API_Odometry,
    &Ctxt__30_EVC.CALC_TrainPosition,
    &Ctxt__30_EVC._6_Context_2.brakeCmd,
    &Ctxt__30_EVC.DMI_sdmToDMI,
    &Ctxt__30_EVC.ML_ModeAndLevel,
    &mk_struct,
    (movementAuthorityForDMI_T_DMI_T *) &cEmptyDMIMA,
    &Ctxt__30_EVC.MoRC_RadioStatus_1,
    &Ctxt__30_EVC.td_trainData,
    &Ctxt__30_EVC._10_Context_2.DMI_Entry_Request_to_DMI,
    (_28_DMI_EVC_Coded_Train_Data_T_ *) &cEmptyDMIEVCcodedTrainData,
    &Ctxt__30_EVC._3_Context_2.to_DMI,
    cOwnVersion,
    (DMI_Display_Control_T_DMI_Messa *) &cEmptyDMIDisplayControl,
    &Ctxt__30_EVC.EVC_ActiveLevelList,
    Ctxt__30_EVC._1_Context_3.outUpdateLevelsDMI,
    (_26_DMI_EVC_Radio_Net_Data_T_DM *) &cEmptyDMIRadioNet,
    (_25_DMI_Driver_Identifier_T_DMI *) &cEmptyDMIDriverIdentifier,
    (_24_DMI_Train_Running_Number_T_ *) &cEmptyDMITrainRunningNumber,
    (_23_DMI_Adhesion_Factor_Data_T_ *) &cEmptyDMIAdhesionFactorData,
    Ctxt__30_EVC.Context_2.BadBaliseMessageToDMI,
    &Ctxt__30_EVC._5_Context_2.Data_To_DMI_Ack,
    &Ctxt__30_EVC._5_Context_2.announcedLevel,
    Ctxt__30_EVC.EVC_currentNTC,
    &Ctxt__30_EVC._1_Context_3.outStatusList,
    &Ctxt__30_EVC._11_Context_2);
  kcg_copy_EVC_to_DMI_Message_int(
    &API_toDMI,
    &Ctxt__30_EVC._11_Context_2.to_DMI);
  kcg_copy_DMI_TXT_MSGList_status(
    &Ctxt__30_EVC.EVC_TextMessageStatusList,
    &Ctxt__30_EVC._11_Context_2.outStatusList);
  debugIinterventionSpeed = (kcg_real)
      Ctxt__30_EVC.DMI_sdmToDMI.interventionSpeed;
  /* 14 */ if (Ctxt__30_EVC._10_Context_2.start_ack_to_TIU) {
    debugPermittedSpeed = (kcg_real) Ctxt__30_EVC.DMI_sdmToDMI.permittedSpeed;
  }
  else {
    debugPermittedSpeed = (kcg_real) 0;
  }
  /* 15 */ if (Ctxt__30_EVC.Context_2.outputMessage.valid &
    (Ctxt__30_EVC.Context_2.outputMessage.source ==
      msrc_Euroradio_Common_Types_Pkg)) {
    Ctxt__30_EVC.MSG_lastRadioMsgTimestamp =
      Ctxt__30_EVC.Context_2.outputMessage.Radio_Common_Header.receivedSystemTime;
  }
  else {
    Ctxt__30_EVC.MSG_lastRadioMsgTimestamp = _L938;
  }
  debugTrainPositionDeltaMax =
    Ctxt__30_EVC.CALC_TrainPosition.trainPosition.d_max;
  debugTrainPositionDeltaMin =
    Ctxt__30_EVC.CALC_TrainPosition.trainPosition.d_min;
  debugTrainPositionNominal =
    Ctxt__30_EVC.CALC_TrainPosition.trainPosition.nominal;
  /* 2 */
  setProbesBalises_xdebugSupport_(
    &Ctxt__30_EVC.Context_2.outputMessage,
    &Ctxt__30_EVC.probe_MsgErrors,
    &Ctxt__30_EVC._12_Context_2);
  kcg_copy_probesBalises_T_xdebug(
    &Ctxt__30_EVC.probe_Balises,
    &Ctxt__30_EVC._12_Context_2.baliseInformation);
  /* 2 */
  distanceLastBG_xdebugSupport_Pk(
    &API_Odometry,
    &Ctxt__30_EVC.Context_2.outputMessage,
    &Ctxt__30_EVC._13_Context_2);
  Ctxt__30_EVC.probe_distBG = Ctxt__30_EVC._13_Context_2.distance;
  Ctxt__30_EVC.probe_BG_afterCheck = Ctxt__30_EVC._13_Context_2.lastBG;
  /* 2 */
  distanceLastMSG_xdebugSupport_P(
    &API_Odometry,
    &Ctxt__30_EVC.Context_2.outputMessage,
    kcg_false,
    &Ctxt__30_EVC._14_Context_2);
  Ctxt__30_EVC.probe_distMsg = Ctxt__30_EVC._14_Context_2.distance;
  Ctxt__30_EVC.probe_MSGinAfterFilter = Ctxt__30_EVC._14_Context_2.lastMSG;
  Ctxt__30_EVC.probe_LRBG = Ctxt__30_EVC._14_Context_2.lastLRBG;
  /* 2 */
  probe_RadioOutput_RadioSupport_(
    &TM_to_MsgOut,
    &Ctxt__30_EVC.probe_Msg_1,
    &Ctxt__30_EVC.probe_Msg_2,
    &Ctxt__30_EVC.probe_Msg_3,
    &Ctxt__30_EVC.probe_Msg_4,
    &Ctxt__30_EVC.probe_Msg_5);
  /* 2 */
  setProbes_xdebugSupport_Pkg(
    &API_fromTrack,
    kcg_false,
    &Ctxt__30_EVC._15_Context_2);
  Ctxt__30_EVC.probe_newInput = Ctxt__30_EVC._15_Context_2.isChanged;
  Ctxt__30_EVC.probe_MSG_in = Ctxt__30_EVC._15_Context_2.radioMSG;
  Ctxt__30_EVC.probe_BG_ID = Ctxt__30_EVC._15_Context_2.BG_ID;
  Ctxt__30_EVC.probe_nid_packet1 = Ctxt__30_EVC._15_Context_2.packet_id1;
  Ctxt__30_EVC.probe_nid_packet2 = Ctxt__30_EVC._15_Context_2.packet_id2;
  Ctxt__30_EVC.probe_lastMSG_in = Ctxt__30_EVC._15_Context_2.lastRadioMSG;
  Ctxt__30_EVC.probe_lastBG_ID = Ctxt__30_EVC._15_Context_2.lastBG_ID;
  /* 3 */
  checkGeneralMessage_trainData_p(
    &Ctxt__30_EVC.Context_2.outputMessage,
    &Ctxt__30_EVC._16_Context_3);
  /* 1 */
  collectRadioOutput_radioOutput_(
    &Ctxt__30_EVC._9_Context_1.msgBus_2_RBC_1,
    Ctxt__30_EVC._16_Context_3.genMessageReceived,
    &Ctxt__30_EVC.ML_ModeAndLevel,
    &Ctxt__30_EVC.MoRC_RadioStatus_1,
    &Ctxt__30_EVC._9_Context_1.mobileConnectionCmd_1,
    &Ctxt__30_EVC._9_Context_1.mobileRegistrationCmd_1,
    cOwnVersion,
    API_SystemTime,
    &Ctxt__30_EVC._17_Context_1);
  kcg_copy_M_TrainTrack_Message_T(
    &API_toRBC,
    &Ctxt__30_EVC._17_Context_1.toRBC);
  kcg_copy_RadioManagement_T_API_(
    &API_RTM_management,
    &Ctxt__30_EVC._17_Context_1.API_RTM_management);
  Ctxt__30_EVC.MoRC_RadioID_1 = Ctxt__30_EVC._17_Context_1.outRadio;
  Ctxt__30_EVC.MoRC_MN_1 = Ctxt__30_EVC._17_Context_1.outMN;
  /* 3 */
  probe_MsgOut_RadioSupport_Pkg(
    &API_toRBC,
    kcg_true,
    &Ctxt__30_EVC._18_Context_3);
  Ctxt__30_EVC.probe_MSGout = Ctxt__30_EVC._18_Context_3.Msg_0ut;
  Ctxt__30_EVC.probe_TTrain = Ctxt__30_EVC._18_Context_3.outTTrain;
  Ctxt__30_EVC.MoRC_newSessionEstablished = sp_maintaining_RCM_Session_Type ==
    Ctxt__30_EVC.MoRC_RadioStatus_1.session.phase;
  /* 1 */
  ProbeEVC_EnvSim(
    &Ctxt__30_EVC.probe_MsgErrors,
    &Ctxt__30_EVC.probe_PositioningErrors,
    &Ctxt__30_EVC.MoRC_RadioStatus_1,
    &Ctxt__30_EVC._19_Context_1);
  EVC_ready = Ctxt__30_EVC.EVC_ready;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _30_EVC.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */


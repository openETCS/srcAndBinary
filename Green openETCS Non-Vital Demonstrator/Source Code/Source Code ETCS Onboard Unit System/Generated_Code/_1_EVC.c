/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_1_EVC.h"

#ifndef KCG_USER_DEFINED_INIT
void _1_EVC_init(void)
{
  static kcg_int i1;
  static kcg_int i;
  
  Ctxt__1_EVC.PROC_powerUp_to_MoRC = kcg_true;
  Ctxt__1_EVC.PROC_statusstartofmissionongoing_to_MoRC = kcg_true;
  Ctxt__1_EVC.PROC_powerOff_to_MoRC = kcg_true;
  Ctxt__1_EVC.MoRC_newSessionEstablished = kcg_true;
  Ctxt__1_EVC._L477 = kcg_true;
  Ctxt__1_EVC.EVC_ready = kcg_true;
  Ctxt__1_EVC.init16 = kcg_true;
  Ctxt__1_EVC.init = kcg_true;
  Ctxt__1_EVC.probe_Msg_2o = 0;
  Ctxt__1_EVC.probe_Msg_3o = 0;
  Ctxt__1_EVC.probe_Msg_1o = 0;
  Ctxt__1_EVC.probe_Msg_5 = 0;
  Ctxt__1_EVC.probe_Msg_4 = 0;
  Ctxt__1_EVC.probe_Msg_3 = 0;
  Ctxt__1_EVC.probe_Msg_2 = 0;
  Ctxt__1_EVC.probe_Msg_1 = 0;
  Ctxt__1_EVC.probe_BG = 0;
  Ctxt__1_EVC.probe_LRBG = 0;
  Ctxt__1_EVC.probe_MSG = 0;
  Ctxt__1_EVC.probe_distBG = 0.0;
  Ctxt__1_EVC.probe_distMsg = 0.0;
  Ctxt__1_EVC.probe_Balises.isChanged = kcg_true;
  Ctxt__1_EVC.probe_Balises.bg_id = 0;
  Ctxt__1_EVC.probe_Balises.nid_c = 0;
  Ctxt__1_EVC.probe_Balises.errors.linkedBGError = kcg_true;
  Ctxt__1_EVC.probe_Balises.errors.unlinkedBGError = kcg_true;
  Ctxt__1_EVC.probe_Balises.errors.BG_versionIncompatible = kcg_true;
  Ctxt__1_EVC.probe_Balises.errors.radioSequenceError = kcg_true;
  Ctxt__1_EVC.probe_Balises.errors.tNvContactError = kcg_true;
  Ctxt__1_EVC.probe_Balises.errors.otherTimingError = kcg_true;
  Ctxt__1_EVC.probe_Balises.errors.radioMessageConsistencyError = kcg_true;
  Ctxt__1_EVC.probe_Balises.errors.nid_c = 0;
  Ctxt__1_EVC.probe_Balises.errors.nid_errorbg = 0;
  Ctxt__1_EVC.probe_Odometry.valid = kcg_true;
  Ctxt__1_EVC.probe_Odometry.timestamp = 0;
  Ctxt__1_EVC.probe_Odometry.odo.o_nominal = 0;
  Ctxt__1_EVC.probe_Odometry.odo.o_min = 0;
  Ctxt__1_EVC.probe_Odometry.odo.o_max = 0;
  Ctxt__1_EVC.probe_Odometry.speed.v_safeNominal = 0;
  Ctxt__1_EVC.probe_Odometry.speed.v_rawNominal = 0;
  Ctxt__1_EVC.probe_Odometry.speed.v_lower = 0;
  Ctxt__1_EVC.probe_Odometry.speed.v_upper = 0;
  Ctxt__1_EVC.probe_Odometry.acceleration = 0;
  Ctxt__1_EVC.probe_Odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  Ctxt__1_EVC.probe_Odometry.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt__1_EVC.rep_P1.valid = kcg_true;
  Ctxt__1_EVC.rep_P1.packet1.NID_PACKET = 0;
  Ctxt__1_EVC.rep_P1.packet1.L_PACKET = 0;
  Ctxt__1_EVC.rep_P1.packet1.qscale = Q_SCALE_10_cm_scale;
  Ctxt__1_EVC.rep_P1.packet1.NID_LRBG = 0;
  Ctxt__1_EVC.rep_P1.packet1.NID_PRVLRBG = 0;
  Ctxt__1_EVC.rep_P1.packet1.D_LRBG = 0;
  Ctxt__1_EVC.rep_P1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  Ctxt__1_EVC.rep_P1.packet1.dlrbg = Q_DLRBG_Reverse;
  Ctxt__1_EVC.rep_P1.packet1.L_DOUBTOVER = 0;
  Ctxt__1_EVC.rep_P1.packet1.L_DOUBTUNDER = 0;
  Ctxt__1_EVC.rep_P1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt__1_EVC.rep_P1.packet1.L_TRAININT = 0;
  Ctxt__1_EVC.rep_P1.packet1.V_TRAIN = 0;
  Ctxt__1_EVC.rep_P1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  Ctxt__1_EVC.rep_P1.packet1.mode = M_MODE_Full_Supervision;
  Ctxt__1_EVC.rep_P1.packet1.level = M_LEVEL_Level_0;
  Ctxt__1_EVC.rep_P1.packet1.NID_NTC = 0;
  Ctxt__1_EVC.td_status.valid = kcg_true;
  Ctxt__1_EVC.td_status.validatedByDriver = kcg_true;
  Ctxt__1_EVC.td_status.validatedbyRBC = kcg_true;
  Ctxt__1_EVC.td_status.waitingForRBCResponse = kcg_true;
  Ctxt__1_EVC.td_status.driverIsModificationTrainData = kcg_true;
  Ctxt__1_EVC.td_status.timeStampValidateToRBC = 0;
  Ctxt__1_EVC.rep_P0.valid = kcg_true;
  Ctxt__1_EVC.rep_P0.packet0.NID_PACKET = 0;
  Ctxt__1_EVC.rep_P0.packet0.L_PACKET = 0;
  Ctxt__1_EVC.rep_P0.packet0.qscale = Q_SCALE_10_cm_scale;
  Ctxt__1_EVC.rep_P0.packet0.NID_LRBG = 0;
  Ctxt__1_EVC.rep_P0.packet0.D_LRBG = 0;
  Ctxt__1_EVC.rep_P0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  Ctxt__1_EVC.rep_P0.packet0.dlrbg = Q_DLRBG_Reverse;
  Ctxt__1_EVC.rep_P0.packet0.L_DOUBTOVER = 0;
  Ctxt__1_EVC.rep_P0.packet0.L_DOUBTUNDER = 0;
  Ctxt__1_EVC.rep_P0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt__1_EVC.rep_P0.packet0.L_TRAININT = 0;
  Ctxt__1_EVC.rep_P0.packet0.V_TRAIN = 0;
  Ctxt__1_EVC.rep_P0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  Ctxt__1_EVC.rep_P0.packet0.mode = M_MODE_Full_Supervision;
  Ctxt__1_EVC.rep_P0.packet0.level = M_LEVEL_Level_0;
  Ctxt__1_EVC.rep_P0.packet0.NID_NTC = 0;
  for (i = 0; i < 31; i++) {
    Ctxt__1_EVC.EVC_TextMessageStatusList[i].valid = kcg_true;
    Ctxt__1_EVC.EVC_TextMessageStatusList[i].dmi_textMessageID = 0;
    Ctxt__1_EVC.EVC_TextMessageStatusList[i].timeStamp = 0;
    Ctxt__1_EVC.EVC_TextMessageStatusList[i].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    Ctxt__1_EVC.EVC_TextMessageStatusList[i].context =
      con_undefined_DMI_Types_Pkg;
    Ctxt__1_EVC.EVC_TextMessageStatusList[i].nid_textmessage = 0;
    Ctxt__1_EVC.EVC_TextMessageStatusList[i].whichLevel = M_LEVEL_Level_0;
    Ctxt__1_EVC.EVC_TextMessageStatusList[i].whichMode =
      M_MODE_Full_Supervision;
  }
  Ctxt__1_EVC.EVC_PersistentData.valid = kcg_true;
  Ctxt__1_EVC.EVC_PersistentData.lastActiveLevel = M_LEVEL_Level_0;
  Ctxt__1_EVC.EVC_PersistentData.lastActiveNTC = 0;
  Ctxt__1_EVC.EVC_PersistentData.availableLevelsList.number = 0;
  for (i = 0; i < 32; i++) {
    Ctxt__1_EVC.EVC_PersistentData.availableLevelsList.levelList[i].level =
      M_LEVEL_Level_0;
    Ctxt__1_EVC.EVC_PersistentData.availableLevelsList.levelList[i].nid_stm = 0;
  }
  Ctxt__1_EVC.ML_ModeAndLevel.compatibleModeAndLevel = kcg_true;
  Ctxt__1_EVC.ML_ModeAndLevel.level = M_LEVEL_Level_0;
  Ctxt__1_EVC.ML_ModeAndLevel.newLevel = kcg_true;
  Ctxt__1_EVC.ML_ModeAndLevel.Mode = M_MODE_Full_Supervision;
  Ctxt__1_EVC.ML_ModeAndLevel.newMode = kcg_true;
  Ctxt__1_EVC.EVC_currentNTC = 0;
  Ctxt__1_EVC.MSG_lastRadioMsgTimestamp = 0;
  Ctxt__1_EVC.TIU_trainProperties.nid_engine = 0;
  Ctxt__1_EVC.TIU_trainProperties.nid_operational = 0;
  Ctxt__1_EVC.TIU_trainProperties.l_train = 0;
  Ctxt__1_EVC.TIU_trainProperties.d_baliseAntenna_2_frontend.nominal = 0;
  Ctxt__1_EVC.TIU_trainProperties.d_baliseAntenna_2_frontend.d_min = 0;
  Ctxt__1_EVC.TIU_trainProperties.d_baliseAntenna_2_frontend.d_max = 0;
  Ctxt__1_EVC.TIU_trainProperties.d_frontend_2_rearend.nominal = 0;
  Ctxt__1_EVC.TIU_trainProperties.d_frontend_2_rearend.d_min = 0;
  Ctxt__1_EVC.TIU_trainProperties.d_frontend_2_rearend.d_max = 0;
  Ctxt__1_EVC.TIU_trainProperties.locationAccuracy_DefaultValue.nominal = 0;
  Ctxt__1_EVC.TIU_trainProperties.locationAccuracy_DefaultValue.d_min = 0;
  Ctxt__1_EVC.TIU_trainProperties.locationAccuracy_DefaultValue.d_max = 0;
  Ctxt__1_EVC.TIU_trainProperties.centerDetectionAcc_DefaultValue.nominal = 0;
  Ctxt__1_EVC.TIU_trainProperties.centerDetectionAcc_DefaultValue.d_min = 0;
  Ctxt__1_EVC.TIU_trainProperties.centerDetectionAcc_DefaultValue.d_max = 0;
  for (i = 0; i < 41; i++) {
    Ctxt__1_EVC.CALC_BGs[i].valid = kcg_true;
    Ctxt__1_EVC.CALC_BGs[i].nid_c = 0;
    Ctxt__1_EVC.CALC_BGs[i].nid_bg = 0;
    Ctxt__1_EVC.CALC_BGs[i].q_link = Q_LINK_Unlinked;
    Ctxt__1_EVC.CALC_BGs[i].location.nominal = 0;
    Ctxt__1_EVC.CALC_BGs[i].location.d_min = 0;
    Ctxt__1_EVC.CALC_BGs[i].location.d_max = 0;
    Ctxt__1_EVC.CALC_BGs[i].seqNoOnTrack = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.valid = kcg_true;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.nid_bg_fromLinkingBG = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.nid_c_fromLinkingBG = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.expectedLocation.nominal = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.expectedLocation.d_min = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.expectedLocation.d_max = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.d_link.nominal = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.d_link.d_min = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.d_link.d_max = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.valid = kcg_true;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.nid_LRBG = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.d_link = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.nid_c = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.nid_bg = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    Ctxt__1_EVC.CALC_BGs[i].infoFromLinking.linkingInfo.q_locacc = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.valid = kcg_true;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.valid = kcg_true;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.m_mcount = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.nid_c = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.nid_bg = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.acceleration =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.q_nvlocacc = 0;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i1 = 0; i1 < 33; i1++) {
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].valid = kcg_true;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_dir =
        Q_DIR_Reverse;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_scale =
        Q_SCALE_10_cm_scale;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].d_link = 0;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_c = 0;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_bg = 0;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      Ctxt__1_EVC.CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_locacc = 0;
    }
    Ctxt__1_EVC.CALC_BGs[i].missed = kcg_true;
  }
  Ctxt__1_EVC.td_trainData.valid = kcg_true;
  Ctxt__1_EVC.td_trainData.acknowledgedByDriver = kcg_true;
  Ctxt__1_EVC.td_trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt__1_EVC.td_trainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt__1_EVC.td_trainData.trainLength = 0;
  Ctxt__1_EVC.td_trainData.brakePerctage = 0;
  Ctxt__1_EVC.td_trainData.maxTrainSpeed = 0;
  Ctxt__1_EVC.td_trainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt__1_EVC.td_trainData.axleLoadCategory = M_AXLELOADCAT_A;
  Ctxt__1_EVC.td_trainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  Ctxt__1_EVC.td_trainData.axleNumber = 0;
  Ctxt__1_EVC.td_trainData.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    Ctxt__1_EVC.td_trainData.nationSystems[i] = 0;
  }
  Ctxt__1_EVC.td_trainData.numberTractionSystems = 0;
  for (i = 0; i < 4; i++) {
    Ctxt__1_EVC.td_trainData.tractionSystem[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt__1_EVC.td_trainData.tractionSystem[i].nid_ctraction = 0;
  }
  Ctxt__1_EVC.DMI_sdmToDMI.valid = kcg_true;
  Ctxt__1_EVC.DMI_sdmToDMI.targetSpeed = 0;
  Ctxt__1_EVC.DMI_sdmToDMI.permittedSpeed = 0;
  Ctxt__1_EVC.DMI_sdmToDMI.releaseSpeed = 0;
  Ctxt__1_EVC.DMI_sdmToDMI.locationBrakeTarget = 0;
  Ctxt__1_EVC.DMI_sdmToDMI.location_brake_curve_starting_point = 0;
  Ctxt__1_EVC.DMI_sdmToDMI.interventionSpeed = 0;
  Ctxt__1_EVC.DMI_sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  Ctxt__1_EVC.DMI_sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  Ctxt__1_EVC.DMI_sdmToDMI.distanceIndicationPoint = 0;
  Ctxt__1_EVC.CALC_TrainPosition.valid = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.timestamp = 0;
  Ctxt__1_EVC.CALC_TrainPosition.trainPositionIsUnknown = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.trainPosition.nominal = 0;
  Ctxt__1_EVC.CALC_TrainPosition.trainPosition.d_min = 0;
  Ctxt__1_EVC.CALC_TrainPosition.trainPosition.d_max = 0;
  Ctxt__1_EVC.CALC_TrainPosition.estimatedFrontEndPosition = 0;
  Ctxt__1_EVC.CALC_TrainPosition.minSafeFrontEndPosition = 0;
  Ctxt__1_EVC.CALC_TrainPosition.maxSafeFrontEndPostion = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.valid = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.nid_c = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.nid_bg = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.q_link = Q_LINK_Unlinked;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.location.nominal = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.location.d_min = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.location.d_max = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.seqNoOnTrack = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.valid = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.nominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.d_min =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.d_max =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.d_link.nominal = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.d_link.d_min = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.d_link.d_max = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.valid = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
  }
  Ctxt__1_EVC.CALC_TrainPosition.LRBG.missed = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.valid = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.nid_c = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.nid_bg = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.location.nominal = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.location.d_min = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.location.d_max = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.seqNoOnTrack = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.nominal = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.d_min = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.d_max = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_c =
      0;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
  }
  Ctxt__1_EVC.CALC_TrainPosition.prvLRBG.missed = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  Ctxt__1_EVC.CALC_TrainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  Ctxt__1_EVC.CALC_TrainPosition.trainRunningDirectionToLRBG =
    Q_DIRTRAIN_Reverse;
  Ctxt__1_EVC.CALC_TrainPosition.linkingIsUsedOnboard = kcg_true;
  Ctxt__1_EVC.CALC_TrainPosition.estimatedRearEndPosition = 0;
  Ctxt__1_EVC.CALC_TrainPosition.minSafeRearEndPosition = 0;
  Ctxt__1_EVC.CALC_TrainPosition.maxSafeRearEndPosition = 0;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Active = kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Error = kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_DriverIdValidated = kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_LevelSelectedByDirver = kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_TrainRunningNumberFirstValidation =
    kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_TrainRunningNumberValidated = kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_TrainDataValidated = kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_StartReceived = kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Identifier.valid = kcg_true;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Identifier.systemTime = 0;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Identifier.DMI_Identifier =
    DMI_1_DMI_Types_Pkg;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Identifier.l_name = 0;
  for (i = 0; i < 255; i++) {
    Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Identifier.DMI_name[i] = ' ';
  }
  Ctxt__1_EVC.DMI_currentDMIStatus.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.valid = kcg_true;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.messageSource =
    msrc_undefined_Common_Types_Pkg;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.radioDevice = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.receivedSystemTime =
    0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_message = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.t_train = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_lrbg = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.t_train_reference =
    0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_em = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.d_sr = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.t_sh_rqst = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.d_ref = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.d_emergencystop =
    0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p42.valid = kcg_true;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p42.q_dir = Q_DIR_Reverse;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p42.nid_c = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p42.nid_rbc = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p42.nid_radio = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p45.valid = kcg_true;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p45.q_dir = Q_DIR_Reverse;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.p45.nid_mn = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.sendingRBC.valid = kcg_true;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.sendingRBC.nid_c = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.sendingRBC.rbc_id = 0;
  Ctxt__1_EVC.PROC_radioCmdFromProcedures.sendingRBC.device_id = 0;
  Ctxt__1_EVC.MoRC_sessionStatus = morc_st_inactive_Radio_Types_Pkg;
  /* 1 */ distanceLastMSG_init_xdebugSupport_Pkg(&Ctxt__1_EVC._15_Context_1);
  /* 1 */ distanceLastBG_init_xdebugSupport_Pkg(&Ctxt__1_EVC._14_Context_1);
  /* 1 */ setProbesBalises_init_xdebugSupport_Pkg(&Ctxt__1_EVC._13_Context_1);
  /* 1 */ collectRadioMessages_init_radioOutput_Pkg(&Ctxt__1_EVC._12_Context_1);
  /* 1 */ checkGeneralMessage_init_trainData_pkg(&Ctxt__1_EVC._11_Context_1);
  /* 1 */
  ProvidePositionReport_init_ProvidePositionReport_Pkg(
    &Ctxt__1_EVC._10_Context_1);
  /* 1 */
  manageDMI_Output_init_manage_DMI_Output_Pkg(&Ctxt__1_EVC._9_Context_1);
  /* 1 */ Master_Procedure_init_ManageProcedure_Pkg(&Ctxt__1_EVC._8_Context_1);
  /* 1 */ MoRC_Main_init_MoRC_Pck(&Ctxt__1_EVC._7_Context_1);
  /* 1 */
  TIU_OutputIntegration_init_output_to_TIU_API_Pkg(&Ctxt__1_EVC._6_Context_1);
  /* 1 */
  SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
    &Ctxt__1_EVC._5_Context_1);
  /* 1 */ ManageLevelAndMode_init(&Ctxt__1_EVC._4_Context_1);
  /* 1 */ trainData_init_trainData_pkg(&Ctxt__1_EVC._3_Context_1);
  /* 1 */ TrackAtlas_init_TrackAtlas(&Ctxt__1_EVC._2_Context_1);
  /* 2 */ manageDMI_Input_init_manage_DMI_Input_Pkg(&Ctxt__1_EVC._1_Context_2);
  /* 2 */
  calculateTrainPosition_init_CalculateTrainPosition_Pkg(
    &Ctxt__1_EVC.Context_2);
  /* 1 */
  Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
    &Ctxt__1_EVC.Context_1);
  /* 4 */ manageTIU_input_init_input_from_TIU_API_Pkg(&Ctxt__1_EVC.Context_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _1_EVC_reset(void)
{
  Ctxt__1_EVC.init16 = kcg_true;
  Ctxt__1_EVC.init = kcg_true;
  /* 1 */ distanceLastMSG_reset_xdebugSupport_Pkg(&Ctxt__1_EVC._15_Context_1);
  /* 1 */ distanceLastBG_reset_xdebugSupport_Pkg(&Ctxt__1_EVC._14_Context_1);
  /* 1 */ setProbesBalises_reset_xdebugSupport_Pkg(&Ctxt__1_EVC._13_Context_1);
  /* 1 */
  collectRadioMessages_reset_radioOutput_Pkg(&Ctxt__1_EVC._12_Context_1);
  /* 1 */ checkGeneralMessage_reset_trainData_pkg(&Ctxt__1_EVC._11_Context_1);
  /* 1 */
  ProvidePositionReport_reset_ProvidePositionReport_Pkg(
    &Ctxt__1_EVC._10_Context_1);
  /* 1 */
  manageDMI_Output_reset_manage_DMI_Output_Pkg(&Ctxt__1_EVC._9_Context_1);
  /* 1 */ Master_Procedure_reset_ManageProcedure_Pkg(&Ctxt__1_EVC._8_Context_1);
  /* 1 */ MoRC_Main_reset_MoRC_Pck(&Ctxt__1_EVC._7_Context_1);
  /* 1 */
  TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(&Ctxt__1_EVC._6_Context_1);
  /* 1 */
  SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
    &Ctxt__1_EVC._5_Context_1);
  /* 1 */ ManageLevelAndMode_reset(&Ctxt__1_EVC._4_Context_1);
  /* 1 */ trainData_reset_trainData_pkg(&Ctxt__1_EVC._3_Context_1);
  /* 1 */ TrackAtlas_reset_TrackAtlas(&Ctxt__1_EVC._2_Context_1);
  /* 2 */ manageDMI_Input_reset_manage_DMI_Input_Pkg(&Ctxt__1_EVC._1_Context_2);
  /* 2 */
  calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
    &Ctxt__1_EVC.Context_2);
  /* 1 */
  Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
    &Ctxt__1_EVC.Context_1);
  /* 4 */ manageTIU_input_reset_input_from_TIU_API_Pkg(&Ctxt__1_EVC.Context_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC */
void _1_EVC(void)
{
  /* EVC */
  static RBC_Communication_T_ProvidePositionReport_Pkg mk_struct;
  /* EVC */
  static TrainToTrackStatus_T_BG_Types_Pkg _1_mk_struct;
  /* EVC */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _2_mk_struct;
  /* EVC */
  static nationValuesForDMI_T_DMI_Types_Pkg _3_mk_struct;
  /* EVC */
  static obuEventsAndPhases_T_MoRC_Pck _4_mk_struct;
  /* EVC */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _5_mk_struct;
  /* EVC */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _6_mk_struct;
  /* EVC */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _7_mk_struct;
  /* EVC */
  static T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _8_mk_struct;
  /* EVC */
  static trainData_Events_T_trainData_Types_pkg _9_mk_struct;
  /* EVC */
  static filterRelatedEvents_T_Common_Types_Pkg _10_mk_struct;
  /* EVC */
  static trainPosition_T_TrainPosition_Types_Pck tmp24;
  /* EVC */
  static sessionStatus_Type_Radio_Types_Pkg tmp23;
  /* EVC */
  static positionedBGs_T_TrainPosition_Types_Pck tmp22;
  /* EVC */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg tmp21;
  /* EVC */
  static NID_STM_DMI_Types_Pkg tmp20;
  /* EVC */
  static L_internal_Type_Obu_BasicTypes_Pkg tmp19;
  /* EVC */
  static kcg_bool tmp18;
  /* EVC */
  static DataForModeAndLevel_t_TrackAtlasTypes tmp17;
  /* EVC */
  static kcg_bool tmp16;
  /* EVC */
  static kcg_bool tmp15;
  /* EVC */
  static kcg_bool tmp14;
  /* EVC */
  static kcg_bool tmp13;
  /* EVC */
  static kcg_bool tmp12;
  /* EVC */
  static safeRadioConnectionStatus_Type_MoRC_Pck tmp11;
  /* EVC */
  static DMI_LevelList_T_DMI_Types_Pkg tmp;
  /* EVC::EVC_PersistentData */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg last_EVC_PersistentData;
  /* EVC::MoRC_cmdsToMobile */
  static mobileHWCmd_Type_MoRC_Pck MoRC_cmdsToMobile;
  /* EVC::DMI_trainRunningNumber */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg DMI_trainRunningNumber;
  /* EVC::EVC_cabIsOpen */
  static kcg_bool EVC_cabIsOpen;
  /* EVC::_L523 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L523;
  /* EVC::_L938 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L938;
  /* EVC::_L950 */
  static trainProperties_T_TrainPosition_Types_Pck _L950;
  /* EVC::_L993 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L993;
  /* EVC::_L1219 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1219;
  /* EVC::_L1223 */
  static trainData_T_TIU_Types_Pkg _L1223;
  /* EVC::_L1230 */
  static trainDataStatus_T_trainData_Types_pkg _L1230;
  /* EVC::_L1321 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1321;
  /* EVC::_L1541 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1541;
  
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &Ctxt__1_EVC.probe_Odometry,
    &API_Odometry);
  resetOut = EVC_reset;
  /* last_init_ck_EVC_PersistentData */ if (Ctxt__1_EVC.init16) {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cMLInitialModesAndLevel);
    _L938 = 0;
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &_L1223,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L1230,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp24,
      (trainPosition_T_TrainPosition_Types_Pck *) &cEmptyTrainPosition);
    tmp23 = morc_st_inactive_Radio_Types_Pkg;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp22,
      (positionedBGs_T_TrainPosition_Types_Pck *) &cEmptyPositionedBGs);
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &_L950,
      (trainProperties_T_TrainPosition_Types_Pck *) &cEmptyTrainProperties);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp21,
      (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
        &cEmptyTestStatusList_DMI_Types_Pkg);
    tmp20 = cNo_STM_manage_DMI_Input_Pkg;
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_L1219,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &cNoP0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &cNoP1);
    tmp19 = cEmptySpeedForDMI.location_brake_curve_starting_point;
    EVC_cabIsOpen = kcg_false;
    tmp18 = kcg_false;
    tmp14 = kcg_false;
    tmp15 = kcg_false;
    tmp16 = kcg_false;
    tmp13 = cNoRadioCmd.valid;
    tmp12 = kcg_false;
    Ctxt__1_EVC.init16 = kcg_false;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
        &cNoPersistentData);
  }
  else {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      &Ctxt__1_EVC.ML_ModeAndLevel);
    _L938 = Ctxt__1_EVC.MSG_lastRadioMsgTimestamp;
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L1223, &Ctxt__1_EVC.td_trainData);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L1230,
      &Ctxt__1_EVC.td_status);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp24,
      &Ctxt__1_EVC.CALC_TrainPosition);
    tmp23 = Ctxt__1_EVC.MoRC_sessionStatus;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp22,
      &Ctxt__1_EVC.CALC_BGs);
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &_L950,
      &Ctxt__1_EVC.TIU_trainProperties);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      &Ctxt__1_EVC.DMI_currentDMIStatus);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp21,
      &Ctxt__1_EVC.EVC_TextMessageStatusList);
    tmp20 = Ctxt__1_EVC.EVC_currentNTC;
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_L1219,
      &Ctxt__1_EVC.rep_P0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      &Ctxt__1_EVC.rep_P1);
    tmp19 = Ctxt__1_EVC.DMI_sdmToDMI.location_brake_curve_starting_point;
    tmp18 = Ctxt__1_EVC.MoRC_newSessionEstablished;
    EVC_cabIsOpen = Ctxt__1_EVC.EVC_ready;
    tmp16 = Ctxt__1_EVC.PROC_powerOff_to_MoRC;
    tmp15 = Ctxt__1_EVC.PROC_powerUp_to_MoRC;
    tmp14 = Ctxt__1_EVC.PROC_statusstartofmissionongoing_to_MoRC;
    tmp13 = Ctxt__1_EVC.PROC_radioCmdFromProcedures.valid;
    tmp12 = Ctxt__1_EVC._L477;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      &Ctxt__1_EVC.EVC_PersistentData);
  }
  /* 4 */
  manageTIU_input_input_from_TIU_API_Pkg(
    &API_fromTIU,
    &_L1223,
    &Ctxt__1_EVC.Context_4);
  _10_mk_struct.pendingL1Transition = kcg_false;
  _10_mk_struct.pendingL12L3Transition = kcg_false;
  _10_mk_struct.pendingAckOfTrainDataFromRBC = _L1230.waitingForRBCResponse;
  _10_mk_struct.emergencyStopAccepted = kcg_false;
  _10_mk_struct.lastAckTextMessageId = 0;
  _10_mk_struct.pendingNTCTransition = kcg_false;
  _10_mk_struct.SPPAndGradientOnBoard = kcg_false;
  _10_mk_struct.MACoverNotFullLength = kcg_false;
  /* 1 */
  Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
    kcg_true,
    &API_fromTrack,
    &API_Odometry,
    EVC_reset,
    &tmp24,
    &_L993,
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.t_nvcontact,
    cOwnVersion,
    _L938,
    tmp23,
    0,
    &tmp22,
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.q_nvlocacc,
    Ctxt__1_EVC.Context_4.outTIUStatus.deskOpen,
    _L1230.validatedbyRBC,
    &_10_mk_struct,
    _L993.newLevel,
    &Ctxt__1_EVC.Context_1);
  /* 2 */
  calculateTrainPosition_CalculateTrainPosition_Pkg(
    &API_Odometry,
    (passedBG_T_BG_Types_Pkg *) &cEmptyPassedBG,
    &Ctxt__1_EVC.Context_1.outputMessage,
    &_L950,
    EVC_reset,
    &Ctxt__1_EVC.Context_2);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &Ctxt__1_EVC.CALC_TrainPosition,
    &Ctxt__1_EVC.Context_2.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &Ctxt__1_EVC.CALC_BGs,
    &Ctxt__1_EVC.Context_2.BGs);
  /* 2 */
  manageDMI_Input_manage_DMI_Input_Pkg(
    &API_fromDMI,
    EVC_reset,
    &tmp21,
    API_SystemTime,
    tmp20,
    &Ctxt__1_EVC._1_Context_2);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &Ctxt__1_EVC.DMI_currentDMIStatus,
    &Ctxt__1_EVC._1_Context_2.currentDMIStatus);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &DMI_trainRunningNumber,
    &Ctxt__1_EVC._1_Context_2.fromDMI_TrainRunningNumber);
  Ctxt__1_EVC.EVC_currentNTC = Ctxt__1_EVC._1_Context_2.updatedNTC;
  /* 1 */
  TrackAtlas_TrackAtlas(
    &Ctxt__1_EVC.Context_1.outputMessage,
    &_L993,
    _L1223.valid,
    &Ctxt__1_EVC.CALC_TrainPosition,
    _L1223.trainLength,
    API_SystemTime,
    tmp19,
    &API_Odometry,
    &Ctxt__1_EVC._1_Context_2.outForMA,
    &_L950,
    &_L1219,
    &_L1321,
    API_SystemTime,
    (P203V1_OBU_T_TM_baseline2 *) &cP203_PermanentData_EVC_PermanentData_Pkg,
    (P003_permanent_data_T_TM_baseline2 *)
      &cP003_PermanentData_EVC_PermanentData_Pkg,
    (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *) &cBusStart,
    &Ctxt__1_EVC._2_Context_1);
  _9_mk_struct.trainStandStill = API_Odometry.valid &
    (API_Odometry.motionState == noMotion_Obu_BasicTypes_Pkg);
  _9_mk_struct.driverRequestModify = kcg_false;
  _9_mk_struct.communicationSessionEstablished = tmp18;
  _9_mk_struct.safeRadioConnectionLost = kcg_false;
  _9_mk_struct.approachingRBCarea = kcg_false;
  _9_mk_struct.MoRCreadyFlag = EVC_cabIsOpen;
  /* 1 */
  trainData_trainData_pkg(
    EVC_reset,
    &API_fromTIU.info.train_data_info,
    &Ctxt__1_EVC._1_Context_2.fromDMI_TrainData,
    &Ctxt__1_EVC._1_Context_2.fromDMI_TrainDataAck,
    &Ctxt__1_EVC.Context_1.outputMessageForRadioAck,
    &_9_mk_struct,
    4065801,
    &_L1219,
    &_L1321,
    &Ctxt__1_EVC._2_Context_1.bus_out,
    cOwnVersion,
    API_SystemTime,
    &Ctxt__1_EVC._3_Context_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &Ctxt__1_EVC.td_trainData,
    &Ctxt__1_EVC._3_Context_1.actualTrainData);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &Ctxt__1_EVC.td_status,
    &Ctxt__1_EVC._3_Context_1.updatedStatus);
  /* maintainTrainProperties */
  maintainTrainProperties_EVC_Support_Pkg(
    &_L950,
    &DMI_trainRunningNumber,
    &Ctxt__1_EVC.td_trainData,
    4065801,
    &Ctxt__1_EVC.TIU_trainProperties);
  /* 1 */
  patchEmergencyBrakeMsg_EVC_Support_Pkg(
    &Ctxt__1_EVC._2_Context_1.To_ModeAndLevel,
    &tmp17);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &_8_mk_struct.Common_Errors,
    &Ctxt__1_EVC.Context_1.outCheckErrors);
  _8_mk_struct.Failure_Occured = kcg_false;
  _8_mk_struct.Continue_Shunting_Active = kcg_false;
  _8_mk_struct.Stop_Shunting_Stored = kcg_false;
  _7_mk_struct.NTC = kcg_true;
  _7_mk_struct.L0 = kcg_true;
  _7_mk_struct.L1 = kcg_true;
  _7_mk_struct.L2 = kcg_true;
  _7_mk_struct.L3 = kcg_false;
  _6_mk_struct.Estim_front_End_overpass_SR_Dist = kcg_false;
  _6_mk_struct.Estim_Front_End_Rear_SSP = kcg_false;
  _6_mk_struct.Override_Function_Active = kcg_false;
  _6_mk_struct.EOA_Antenna_Overpass = kcg_false;
  _6_mk_struct.EOA_Front_End = kcg_false;
  _6_mk_struct.Train_Speed_Under_Overide_Limit = kcg_false;
  _5_mk_struct.BG_In_List_Expected_BG_In_SR = kcg_false;
  _5_mk_struct.BG_In_List_Expected_BG_In_SH = kcg_false;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &_5_mk_struct.PositionErrors,
    &Ctxt__1_EVC.Context_2.errors);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &_5_mk_struct.Train_Position,
    &Ctxt__1_EVC.CALC_TrainPosition);
  _5_mk_struct.Train_Speed = API_Odometry.speed.v_safeNominal;
  _5_mk_struct.Train_Standstill = API_Odometry.motionState ==
    noMotion_Obu_BasicTypes_Pkg;
  /* 1 */
  ManageLevelAndMode(
    &Ctxt__1_EVC._1_Context_2.forModesAndLevel,
    &_5_mk_struct,
    &Ctxt__1_EVC.Context_4.outTIUCurrentInfo,
    &tmp17.train_messages,
    &Ctxt__1_EVC.Context_1.Data_to_From_Track_Packets_at_ML,
    &_6_mk_struct,
    Ctxt__1_EVC.Context_4.outTIUStatus.ownCab,
    &Ctxt__1_EVC._1_Context_2.ML_levelTransition,
    &_7_mk_struct,
    &Ctxt__1_EVC.Context_1.forLevelManagement,
    &_8_mk_struct,
    (T_Data_From_STM_Level_And_Mode_Types_Pkg *) &cEmptyData_From_STM,
    _L993.level,
    &Ctxt__1_EVC._4_Context_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &Ctxt__1_EVC.ML_ModeAndLevel,
    &Ctxt__1_EVC._4_Context_1.Compatible_Mode_And_Level);
  /* 1 */
  SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
    (P3_NationalValues_T_Packet_Types_Pkg *)
      &cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg,
    &Ctxt__1_EVC.CALC_TrainPosition,
    &API_Odometry,
    &Ctxt__1_EVC.TIU_trainProperties,
    &Ctxt__1_EVC.td_trainData,
    &Ctxt__1_EVC._2_Context_1.to_Supervision,
    (kcg_bool)
      (Ctxt__1_EVC._4_Context_1.Service_Brake_Command |
        Ctxt__1_EVC.Context_1.ApplyServiceBrake),
    Ctxt__1_EVC._4_Context_1.EB_Requested,
    &Ctxt__1_EVC._5_Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &Ctxt__1_EVC.DMI_sdmToDMI,
    &Ctxt__1_EVC._5_Context_1.sdmToDMI);
  /* 1 */
  TIU_OutputIntegration_output_to_TIU_API_Pkg(
    (Isolation_Status_T_TIU_Types_Pkg *) &cEmtpyIsolationStatus,
    &Ctxt__1_EVC._5_Context_1.brakeCmd,
    (Brake_inhibition_command_T_TIU_Types_Pkg *) &cEmptyBrakeInhibitionCommand,
    (Type_I_train_commands_T_TIU_Types_Pkg *) &cEmptyTrainCommand,
    (Change_traction_system_T_TIU_Types_Pkg *) &cEmptyChangeTractionSystem,
    (Passenger_door_control_info_T_TIU_Types_Pkg *) &cPassengerDoorControlInfo,
    (Change_of_allowed_current_consumption_T_TIU_Types_Pkg *)
      &cEmptyChangeOfAllowedCurrentConsumption,
    &Ctxt__1_EVC.ML_ModeAndLevel,
    &Ctxt__1_EVC._6_Context_1);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &API_toTIU,
    &Ctxt__1_EVC._6_Context_1.outTIU_to_API);
  _4_mk_struct.atPowerDown = tmp16;
  _4_mk_struct.atPowerUp = tmp15;
  _4_mk_struct.atStartOfMission = kcg_false;
  _4_mk_struct.startOfMissionProcedureIsGoingOn = tmp14;
  _4_mk_struct.startOfMissionProcedureCompleted = kcg_false;
  _4_mk_struct.trainIsRejectedByRBC_duringStartOfMission = kcg_false;
  _4_mk_struct.endOfMissionIsExecuted = kcg_false;
  _4_mk_struct.driverClosesTheDeskduringStartOfMission = kcg_false;
  _4_mk_struct.driverHasManuallyChangedLevel = kcg_false;
  _4_mk_struct.afterDriverEntryOfANewRadioNetworkID = kcg_false;
  _4_mk_struct.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_false;
  _4_mk_struct.isPartOfAnOngoingStartOfMissionProcedure = tmp13;
  _4_mk_struct.trainPassesALevelTransitionBorder = kcg_false;
  _4_mk_struct.trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_false;
  _4_mk_struct.trainExitedFromAnRBCArea = kcg_false;
  _4_mk_struct.modeChangeHasToBeReportedToRBC = kcg_false;
  _4_mk_struct.trainFrontInsideInAnAnnouncedRadioHole = kcg_false;
  _4_mk_struct.trainFrontReachesEndOfAnnouncedRadioHole = kcg_false;
  _4_mk_struct.OBU_hasToEstablishANewSession = kcg_false;
  _4_mk_struct.isInCommunicationSessionWithAnRIU = kcg_false;
  _4_mk_struct.errorConditionRequiringTerminationDetected = kcg_false;
  _4_mk_struct.systemVersionFromTracksideSupported = kcg_true;
  /* 1 */
  MoRC_Main_MoRC_Pck(
    API_SystemTime,
    _L993.Mode,
    _L993.level,
    &_4_mk_struct,
    (radioNetWorkIDs_T_MoRC_Pck *) &cEmptyRadioNetworkIds,
    &API_mobileHWStatus,
    &Ctxt__1_EVC.Context_1.outputMessage,
    API_SystemTime,
    API_SystemTime,
    &Ctxt__1_EVC._2_Context_1.bus_out,
    cMoRCConnectionStatusTimerInterval,
    Ctxt__1_EVC.TIU_trainProperties.nid_engine,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cEmptyMoRC_OnboardTelefonNumbers,
    (P003_TM_TrainToTrack *) &cMoRC_own_P3ng_EVC_PermanentData_Pkg,
    cOwnVersion,
    &Ctxt__1_EVC._7_Context_1);
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &MoRC_cmdsToMobile,
    &Ctxt__1_EVC._7_Context_1.cmdsToMobile);
  Ctxt__1_EVC.MoRC_newSessionEstablished =
    Ctxt__1_EVC._7_Context_1.sessionSuccessfullyEstablished;
  Ctxt__1_EVC.MoRC_sessionStatus = Ctxt__1_EVC._7_Context_1.sessionStatus;
  Ctxt__1_EVC.EVC_ready = Ctxt__1_EVC._7_Context_1.ready;
  /* 1 */
  Master_Procedure_ManageProcedure_Pkg(
    &_L523,
    tmp12,
    API_SystemTime,
    &Ctxt__1_EVC.ML_ModeAndLevel,
    &Ctxt__1_EVC._7_Context_1.mobileSWStatus,
    Ctxt__1_EVC.MoRC_sessionStatus,
    &Ctxt__1_EVC.Context_4.outTIUStatus,
    Ctxt__1_EVC.CALC_TrainPosition.LRBG.valid,
    &Ctxt__1_EVC._1_Context_2.outDriverRequest,
    _L523.DMI_LevelSelectedByDirver,
    &Ctxt__1_EVC._8_Context_1);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &Ctxt__1_EVC.PROC_radioCmdFromProcedures,
    &Ctxt__1_EVC._8_Context_1.request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC);
  Ctxt__1_EVC.PROC_powerUp_to_MoRC = Ctxt__1_EVC._8_Context_1.powerUp_to_MoRC;
  Ctxt__1_EVC.PROC_statusstartofmissionongoing_to_MoRC =
    Ctxt__1_EVC._8_Context_1.statusstartofmissionongoing_to_MoRC;
  Ctxt__1_EVC.PROC_powerOff_to_MoRC = Ctxt__1_EVC._8_Context_1.powerOff_to_MoRC;
  Ctxt__1_EVC._L477 =
    Ctxt__1_EVC._8_Context_1.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  EVC_cabIsOpen = Ctxt__1_EVC.Context_4.outTIUStatus.valid &
    Ctxt__1_EVC.Context_4.outTIUStatus.deskOpen;
  /* 4 */ if (Ctxt__1_EVC.MoRC_newSessionEstablished) {
    tmp11 = srcs_ConnectionUp_MoRC_Pck;
  }
  else {
    tmp11 = srcs_NoConnection_MoRC_Pck;
  }
  /* ck_EVC_cabIsOpen */ if (EVC_cabIsOpen) {
    /* 2 */ if (Ctxt__1_EVC.init) {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &Ctxt__1_EVC.EVC_PersistentData,
        &API_persistentData);
    }
    else {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &Ctxt__1_EVC.EVC_PersistentData,
        &last_EVC_PersistentData);
    }
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &tmp,
      &Ctxt__1_EVC.EVC_PersistentData.availableLevelsList);
    Ctxt__1_EVC.init = kcg_false;
  }
  else {
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &tmp,
      (DMI_LevelList_T_DMI_Types_Pkg *) &cNo_Levels);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &Ctxt__1_EVC.EVC_PersistentData,
      &last_EVC_PersistentData);
  }
  _3_mk_struct.valid = kcg_true;
  _3_mk_struct.nid_c =
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.nid_cArray[0].nid_c;
  _3_mk_struct.nid_c_valid = kcg_true;
  /* 1 */
  manageDMI_Output_manage_DMI_Output_Pkg(
    &_L523,
    API_SystemTime,
    &Ctxt__1_EVC.Context_4.outTIUStatus,
    &API_Odometry,
    &Ctxt__1_EVC.CALC_TrainPosition,
    &Ctxt__1_EVC._5_Context_1.brakeCmd,
    &Ctxt__1_EVC.DMI_sdmToDMI,
    &Ctxt__1_EVC.ML_ModeAndLevel,
    &_3_mk_struct,
    (movementAuthorityForDMI_T_DMI_Types_Pkg *) &cEmptyDMIMA,
    tmp11,
    &Ctxt__1_EVC.td_trainData,
    &Ctxt__1_EVC._8_Context_1.DMI_Entry_Request_to_DMI,
    (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIEVCcodedTrainData,
    &Ctxt__1_EVC._2_Context_1.to_DMI,
    (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMIIdentifierRequest,
    cOwnVersion,
    (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIDisplayControl,
    &tmp,
    Ctxt__1_EVC._1_Context_2.outUpdateLevelsDMI,
    (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *) &cEmptyDMIRadioNet,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIDriverIdentifier,
    (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMITrainRunningNumber,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData,
    Ctxt__1_EVC.Context_1.BadBaliseMessageToDMI,
    &Ctxt__1_EVC._4_Context_1.Data_To_DMI_Ack,
    &Ctxt__1_EVC._4_Context_1.announcedLevel,
    Ctxt__1_EVC.EVC_currentNTC,
    &Ctxt__1_EVC._1_Context_2.outStatusList,
    &Ctxt__1_EVC._9_Context_1);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
    &API_toDMI,
    &Ctxt__1_EVC._9_Context_1.to_DMI);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &Ctxt__1_EVC.EVC_TextMessageStatusList,
    &Ctxt__1_EVC._9_Context_1.outStatusList);
  debugCurrentMode = Ctxt__1_EVC.ML_ModeAndLevel.Mode;
  debugCurrentLevel = Ctxt__1_EVC.ML_ModeAndLevel.level;
  _2_mk_struct.currMode = debugCurrentMode;
  _2_mk_struct.currLevel = debugCurrentLevel;
  _2_mk_struct.levelTransitionBorderPassed =
    Ctxt__1_EVC.ML_ModeAndLevel.newLevel;
  _1_mk_struct.nid_ntc = Ctxt__1_EVC.EVC_currentNTC;
  _1_mk_struct.q_length = Q_LENGTH_No_train_integrity_information_available;
  mk_struct.newSessionEstablished = Ctxt__1_EVC.MoRC_newSessionEstablished;
  /* 1 */
  ProvidePositionReport_ProvidePositionReport_Pkg(
    &Ctxt__1_EVC.CALC_BGs,
    &Ctxt__1_EVC.CALC_TrainPosition,
    &API_Odometry,
    &Ctxt__1_EVC.TIU_trainProperties,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
      &cEmptyLocationBasedEvents,
    &Ctxt__1_EVC.Context_1.outputMessage,
    API_SystemTime,
    &mk_struct,
    &_1_mk_struct,
    Ctxt__1_EVC.CALC_TrainPosition.trainRunningDirectionToLRBG,
    Ctxt__1_EVC.Context_2.errors.BG_LinkingConsistencyError,
    Ctxt__1_EVC.Context_1.outCheckErrors.linkedBGError,
    Ctxt__1_EVC.Context_1.outCheckErrors.unlinkedBGError,
    Ctxt__1_EVC.Context_1.outCheckErrors.radioMessageConsistencyError,
    Ctxt__1_EVC.Context_1.outCheckErrors.radioSequenceError,
    kcg_false,
    kcg_false,
    Ctxt__1_EVC.Context_2.errors.twoConsecutiveLinkedBGs_missed,
    Ctxt__1_EVC.Context_2.errors.doubleRepositioningError,
    &_2_mk_struct,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg,
    &Ctxt__1_EVC._7_Context_1.msgBus_out,
    cOwnVersion,
    API_SystemTime,
    &Ctxt__1_EVC._10_Context_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &Ctxt__1_EVC.rep_P0,
    &Ctxt__1_EVC._10_Context_1.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &Ctxt__1_EVC.rep_P1,
    &Ctxt__1_EVC._10_Context_1.packet1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L1541,
    &Ctxt__1_EVC._10_Context_1.posReport_ng);
  /* 1 */
  checkGeneralMessage_trainData_pkg(
    &Ctxt__1_EVC.Context_1.outputMessage,
    &Ctxt__1_EVC._11_Context_1);
  /* 1 */
  collectRadioMessages_radioOutput_Pkg(
    &Ctxt__1_EVC._10_Context_1.posRep,
    &Ctxt__1_EVC._7_Context_1.MessageToRBC,
    &Ctxt__1_EVC._3_Context_1.trainDataToRBC,
    &MoRC_cmdsToMobile,
    &Ctxt__1_EVC._2_Context_1.MA_request_out,
    &Ctxt__1_EVC.ML_ModeAndLevel,
    Ctxt__1_EVC._11_Context_1.genMessageReceived,
    &Ctxt__1_EVC._12_Context_1);
  debugIinterventionSpeed = (kcg_real)
      Ctxt__1_EVC.DMI_sdmToDMI.interventionSpeed;
  /* 9 */ if (Ctxt__1_EVC._8_Context_1.start_ack_to_TIU) {
    debugPermittedSpeed = (kcg_real) Ctxt__1_EVC.DMI_sdmToDMI.permittedSpeed;
  }
  else {
    debugPermittedSpeed = (kcg_real) 0;
  }
  /* 10 */ if (Ctxt__1_EVC.Context_1.outputMessageForRadioAck.valid &
    (Ctxt__1_EVC.Context_1.outputMessageForRadioAck.source ==
      msrc_Euroradio_Common_Types_Pkg)) {
    Ctxt__1_EVC.MSG_lastRadioMsgTimestamp =
      Ctxt__1_EVC.Context_1.outputMessageForRadioAck.Radio_Common_Header.receivedSystemTime;
  }
  else {
    Ctxt__1_EVC.MSG_lastRadioMsgTimestamp = _L938;
  }
  debugTrainPositionDeltaMax =
    Ctxt__1_EVC.CALC_TrainPosition.trainPosition.d_max;
  debugTrainPositionDeltaMin =
    Ctxt__1_EVC.CALC_TrainPosition.trainPosition.d_min;
  debugTrainPositionNominal =
    Ctxt__1_EVC.CALC_TrainPosition.trainPosition.nominal;
  /* 1 */
  setProbesBalises_xdebugSupport_Pkg(
    &Ctxt__1_EVC.Context_1.outputMessage,
    &Ctxt__1_EVC.Context_1.outCheckErrors,
    &Ctxt__1_EVC._13_Context_1);
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(
    &Ctxt__1_EVC.probe_Balises,
    &Ctxt__1_EVC._13_Context_1.baliseInformation);
  /* 1 */
  distanceLastBG_xdebugSupport_Pkg(
    &API_Odometry,
    &Ctxt__1_EVC.Context_1.outputMessage,
    &Ctxt__1_EVC._14_Context_1);
  Ctxt__1_EVC.probe_distBG = Ctxt__1_EVC._14_Context_1.distance;
  Ctxt__1_EVC.probe_BG = Ctxt__1_EVC._14_Context_1.lastBG;
  /* 1 */
  distanceLastMSG_xdebugSupport_Pkg(
    &API_Odometry,
    &Ctxt__1_EVC.Context_1.outputMessage,
    kcg_false,
    &Ctxt__1_EVC._15_Context_1);
  Ctxt__1_EVC.probe_distMsg = Ctxt__1_EVC._15_Context_1.distance;
  Ctxt__1_EVC.probe_MSG = Ctxt__1_EVC._15_Context_1.lastMSG;
  Ctxt__1_EVC.probe_LRBG = Ctxt__1_EVC._15_Context_1.lastLRBG;
  /* 1 */
  nextGenRadioOutput_radioOutput_Pkg(
    &_L1541,
    &MoRC_cmdsToMobile,
    cOwnVersion,
    API_SystemTime,
    &toRTM,
    &API_RTM_management);
  /* 1 */
  probe_RadioOutput_RadioSupport_Pkg(
    &toRTM,
    &Ctxt__1_EVC.probe_Msg_1,
    &Ctxt__1_EVC.probe_Msg_2,
    &Ctxt__1_EVC.probe_Msg_3,
    &Ctxt__1_EVC.probe_Msg_4,
    &Ctxt__1_EVC.probe_Msg_5);
  Ctxt__1_EVC.probe_Msg_1o =
    Ctxt__1_EVC._12_Context_1.outRadioToAPI.firstOutput.header.nid_message;
  Ctxt__1_EVC.probe_Msg_2o =
    Ctxt__1_EVC._12_Context_1.outRadioToAPI.secondOutput.header.nid_message;
  Ctxt__1_EVC.probe_Msg_3o =
    Ctxt__1_EVC._12_Context_1.outRadioToAPI.thirdOutput.header.nid_message;
  EVC_ready = Ctxt__1_EVC.EVC_ready;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _1_EVC.c
** Generation date: 2015-10-16T18:56:08
*************************************************************$ */


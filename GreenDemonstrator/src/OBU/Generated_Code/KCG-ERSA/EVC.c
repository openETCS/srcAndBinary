/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC.h"

#ifndef KCG_USER_DEFINED_INIT
void EVC_init(outC_EVC *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->resetOut = kcg_true;
  outC->EVC_ready = kcg_true;
  outC->PROC_powerUp_to_MoRC = kcg_true;
  outC->PROC_statusstartofmissionongoing_to_MoRC = kcg_true;
  outC->PROC_powerOff_to_MoRC = kcg_true;
  outC->MoRC_newSessionEstablished = kcg_true;
  outC->_L477 = kcg_true;
  outC->init14 = kcg_true;
  outC->init = kcg_true;
  outC->MoRC_MN_1 = 0;
  outC->MoRC_RadioID_1 = 0;
  outC->MoRC_RadioStatus_1.registration.valid = kcg_true;
  outC->MoRC_RadioStatus_1.registration.mobileDeviceNo = 0;
  outC->MoRC_RadioStatus_1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_1.registration.nid_mn = 0;
  outC->MoRC_RadioStatus_1.connection.valid = kcg_true;
  outC->MoRC_RadioStatus_1.connection.mobileDeviceNo = 0;
  outC->MoRC_RadioStatus_1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_1.connection.nid_radio = 0;
  outC->MoRC_RadioStatus_1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->MoRC_RadioStatus_1.connection.connectionLost = kcg_true;
  outC->MoRC_RadioStatus_1.connection.isInRadioHole = kcg_true;
  outC->MoRC_RadioStatus_1.session.valid = kcg_true;
  outC->MoRC_RadioStatus_1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->MoRC_RadioStatus_1.session.nid_c = 0;
  outC->MoRC_RadioStatus_1.session.nid_rbc = 0;
  outC->MoRC_RadioStatus_1.session.nid_radio = 0;
  outC->rep_P1.valid = kcg_true;
  outC->rep_P1.packet1.NID_PACKET = 0;
  outC->rep_P1.packet1.L_PACKET = 0;
  outC->rep_P1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->rep_P1.packet1.NID_LRBG = 0;
  outC->rep_P1.packet1.NID_PRVLRBG = 0;
  outC->rep_P1.packet1.D_LRBG = 0;
  outC->rep_P1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->rep_P1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->rep_P1.packet1.L_DOUBTOVER = 0;
  outC->rep_P1.packet1.L_DOUBTUNDER = 0;
  outC->rep_P1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->rep_P1.packet1.L_TRAININT = 0;
  outC->rep_P1.packet1.V_TRAIN = 0;
  outC->rep_P1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->rep_P1.packet1.mode = M_MODE_Full_Supervision;
  outC->rep_P1.packet1.level = M_LEVEL_Level_0;
  outC->rep_P1.packet1.NID_NTC = 0;
  outC->td_status.valid = kcg_true;
  outC->td_status.validatedByDriver = kcg_true;
  outC->td_status.RBCsystemVersionOnboard = kcg_true;
  outC->td_status.validatedbyRBC = kcg_true;
  outC->td_status.waitingForRBCResponse = kcg_true;
  outC->td_status.driverIsModificationTrainData = kcg_true;
  outC->td_status.timeStampValidateToRBC = 0;
  outC->rep_P0.valid = kcg_true;
  outC->rep_P0.packet0.NID_PACKET = 0;
  outC->rep_P0.packet0.L_PACKET = 0;
  outC->rep_P0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->rep_P0.packet0.NID_LRBG = 0;
  outC->rep_P0.packet0.D_LRBG = 0;
  outC->rep_P0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->rep_P0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->rep_P0.packet0.L_DOUBTOVER = 0;
  outC->rep_P0.packet0.L_DOUBTUNDER = 0;
  outC->rep_P0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->rep_P0.packet0.L_TRAININT = 0;
  outC->rep_P0.packet0.V_TRAIN = 0;
  outC->rep_P0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->rep_P0.packet0.mode = M_MODE_Full_Supervision;
  outC->rep_P0.packet0.level = M_LEVEL_Level_0;
  outC->rep_P0.packet0.NID_NTC = 0;
  outC->td_events.trainStandStill = kcg_true;
  outC->td_events.driverRequestModify = kcg_true;
  outC->td_events.communicationSessionEstablished = kcg_true;
  outC->td_events.safeRadioConnectionLost = kcg_true;
  outC->td_events.approachingRBCarea = kcg_true;
  outC->td_events.MoRCreadyFlag = kcg_true;
  for (i = 0; i < 31; i++) {
    outC->EVC_TextMessageStatusList[i].valid = kcg_true;
    outC->EVC_TextMessageStatusList[i].dmi_textMessageID = 0;
    outC->EVC_TextMessageStatusList[i].timeStamp = 0;
    outC->EVC_TextMessageStatusList[i].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->EVC_TextMessageStatusList[i].context = con_undefined_DMI_Types_Pkg;
    outC->EVC_TextMessageStatusList[i].nid_textmessage = 0;
    outC->EVC_TextMessageStatusList[i].whichLevel = M_LEVEL_Level_0;
    outC->EVC_TextMessageStatusList[i].whichMode = M_MODE_Full_Supervision;
  }
  outC->EVC_ActiveLevelList.number = 0;
  outC->EVC_PersistentData.valid = kcg_true;
  outC->EVC_PersistentData.lastActiveLevel = M_LEVEL_Level_0;
  outC->EVC_PersistentData.lastActiveNTC = 0;
  outC->EVC_PersistentData.availableLevelsList.number = 0;
  for (i = 0; i < 32; i++) {
    outC->EVC_ActiveLevelList.levelList[i].level = M_LEVEL_Level_0;
    outC->EVC_ActiveLevelList.levelList[i].nid_stm = 0;
    outC->EVC_PersistentData.availableLevelsList.levelList[i].level =
      M_LEVEL_Level_0;
    outC->EVC_PersistentData.availableLevelsList.levelList[i].nid_stm = 0;
  }
  outC->ML_ModeAndLevel.compatibleModeAndLevel = kcg_true;
  outC->ML_ModeAndLevel.level = M_LEVEL_Level_0;
  outC->ML_ModeAndLevel.newLevel = kcg_true;
  outC->ML_ModeAndLevel.Mode = M_MODE_Full_Supervision;
  outC->ML_ModeAndLevel.newMode = kcg_true;
  outC->EVC_currentNTC = 0;
  outC->MSG_lastRadioMsgTimestamp = 0;
  outC->TIU_trainProperties.nid_engine = 0;
  outC->TIU_trainProperties.nid_operational = 0;
  outC->TIU_trainProperties.l_train = 0;
  outC->TIU_trainProperties.d_baliseAntenna_2_frontend.nominal = 0;
  outC->TIU_trainProperties.d_baliseAntenna_2_frontend.d_min = 0;
  outC->TIU_trainProperties.d_baliseAntenna_2_frontend.d_max = 0;
  outC->TIU_trainProperties.d_frontend_2_rearend.nominal = 0;
  outC->TIU_trainProperties.d_frontend_2_rearend.d_min = 0;
  outC->TIU_trainProperties.d_frontend_2_rearend.d_max = 0;
  outC->TIU_trainProperties.locationAccuracy_DefaultValue.nominal = 0;
  outC->TIU_trainProperties.locationAccuracy_DefaultValue.d_min = 0;
  outC->TIU_trainProperties.locationAccuracy_DefaultValue.d_max = 0;
  outC->TIU_trainProperties.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->TIU_trainProperties.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->TIU_trainProperties.centerDetectionAcc_DefaultValue.d_max = 0;
  for (i = 0; i < 41; i++) {
    outC->CALC_BGs[i].valid = kcg_true;
    outC->CALC_BGs[i].nid_c = 0;
    outC->CALC_BGs[i].nid_bg = 0;
    outC->CALC_BGs[i].q_link = Q_LINK_Unlinked;
    outC->CALC_BGs[i].location.nominal = 0;
    outC->CALC_BGs[i].location.d_min = 0;
    outC->CALC_BGs[i].location.d_max = 0;
    outC->CALC_BGs[i].seqNoOnTrack = 0;
    outC->CALC_BGs[i].infoFromLinking.valid = kcg_true;
    outC->CALC_BGs[i].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->CALC_BGs[i].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->CALC_BGs[i].infoFromLinking.expectedLocation.nominal = 0;
    outC->CALC_BGs[i].infoFromLinking.expectedLocation.d_min = 0;
    outC->CALC_BGs[i].infoFromLinking.expectedLocation.d_max = 0;
    outC->CALC_BGs[i].infoFromLinking.d_link.nominal = 0;
    outC->CALC_BGs[i].infoFromLinking.d_link.d_min = 0;
    outC->CALC_BGs[i].infoFromLinking.d_link.d_max = 0;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.d_link = 0;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.nid_c = 0;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->CALC_BGs[i].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->CALC_BGs[i].infoFromPassing.valid = kcg_true;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.valid = kcg_true;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.m_mcount = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.nid_c = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.nid_bg = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->CALC_BGs[i].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i1 = 0; i1 < 33; i1++) {
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].valid = kcg_true;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_scale =
        Q_SCALE_10_cm_scale;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].d_link = 0;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_c = 0;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].nid_bg = 0;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->CALC_BGs[i].infoFromPassing.linkedBGs[i1].q_locacc = 0;
    }
    outC->CALC_BGs[i].missed = kcg_true;
  }
  outC->MoRC_supervisingRBC_Id.valid = kcg_true;
  outC->MoRC_supervisingRBC_Id.mobileDeviceNo = 0;
  outC->MoRC_supervisingRBC_Id.nid_c = 0;
  outC->MoRC_supervisingRBC_Id.nid_RBC = 0;
  outC->MoRC_supervisingRBC_Id.nid_radio = 0;
  outC->MoRC_supervisingRBC_Id.nid_mn = 0;
  outC->td_trainData.valid = kcg_true;
  outC->td_trainData.acknowledgedByDriver = kcg_true;
  outC->td_trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->td_trainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->td_trainData.trainLength = 0;
  outC->td_trainData.brakePerctage = 0;
  outC->td_trainData.maxTrainSpeed = 0;
  outC->td_trainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->td_trainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->td_trainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->td_trainData.axleNumber = 0;
  outC->td_trainData.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->td_trainData.nationSystems[i] = 0;
  }
  outC->td_trainData.numberTractionSystems = 0;
  for (i = 0; i < 4; i++) {
    outC->td_trainData.tractionSystem[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->td_trainData.tractionSystem[i].nid_ctraction = 0;
  }
  outC->DMI_sdmToDMI.valid = kcg_true;
  outC->DMI_sdmToDMI.targetSpeed = 0;
  outC->DMI_sdmToDMI.permittedSpeed = 0;
  outC->DMI_sdmToDMI.releaseSpeed = 0;
  outC->DMI_sdmToDMI.locationBrakeTarget = 0;
  outC->DMI_sdmToDMI.location_brake_curve_starting_point = 0;
  outC->DMI_sdmToDMI.interventionSpeed = 0;
  outC->DMI_sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->DMI_sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->DMI_sdmToDMI.distanceIndicationPoint = 0;
  outC->CALC_TrainPosition.valid = kcg_true;
  outC->CALC_TrainPosition.timestamp = 0;
  outC->CALC_TrainPosition.trainPositionIsUnknown = kcg_true;
  outC->CALC_TrainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->CALC_TrainPosition.trainPosition.nominal = 0;
  outC->CALC_TrainPosition.trainPosition.d_min = 0;
  outC->CALC_TrainPosition.trainPosition.d_max = 0;
  outC->CALC_TrainPosition.estimatedFrontEndPosition = 0;
  outC->CALC_TrainPosition.minSafeFrontEndPosition = 0;
  outC->CALC_TrainPosition.maxSafeFrontEndPostion = 0;
  outC->CALC_TrainPosition.LRBG.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.nid_c = 0;
  outC->CALC_TrainPosition.LRBG.nid_bg = 0;
  outC->CALC_TrainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->CALC_TrainPosition.LRBG.location.nominal = 0;
  outC->CALC_TrainPosition.LRBG.location.d_min = 0;
  outC->CALC_TrainPosition.LRBG.location.d_max = 0;
  outC->CALC_TrainPosition.LRBG.seqNoOnTrack = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->CALC_TrainPosition.LRBG.missed = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.nid_c = 0;
  outC->CALC_TrainPosition.prvLRBG.nid_bg = 0;
  outC->CALC_TrainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->CALC_TrainPosition.prvLRBG.location.nominal = 0;
  outC->CALC_TrainPosition.prvLRBG.location.d_min = 0;
  outC->CALC_TrainPosition.prvLRBG.location.d_max = 0;
  outC->CALC_TrainPosition.prvLRBG.seqNoOnTrack = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->CALC_TrainPosition.prvLRBG.missed = kcg_true;
  outC->CALC_TrainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->CALC_TrainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->CALC_TrainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->CALC_TrainPosition.linkingIsUsedOnboard = kcg_true;
  outC->CALC_TrainPosition.estimatedRearEndPosition = 0;
  outC->CALC_TrainPosition.minSafeRearEndPosition = 0;
  outC->CALC_TrainPosition.maxSafeRearEndPosition = 0;
  outC->DMI_currentDMIStatus.DMI_Active = kcg_true;
  outC->DMI_currentDMIStatus.DMI_Error = kcg_true;
  outC->DMI_currentDMIStatus.DMI_DriverIdValidated = kcg_true;
  outC->DMI_currentDMIStatus.DMI_LevelSelectedByDirver = kcg_true;
  outC->DMI_currentDMIStatus.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->DMI_currentDMIStatus.DMI_TrainRunningNumberValidated = kcg_true;
  outC->DMI_currentDMIStatus.DMI_TrainDataValidated = kcg_true;
  outC->DMI_currentDMIStatus.DMI_StartReceived = kcg_true;
  outC->DMI_currentDMIStatus.DMI_Identifier.valid = kcg_true;
  outC->DMI_currentDMIStatus.DMI_Identifier.systemTime = 0;
  outC->DMI_currentDMIStatus.DMI_Identifier.DMI_Identifier =
    DMI_1_DMI_Types_Pkg;
  outC->DMI_currentDMIStatus.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->DMI_currentDMIStatus.DMI_Identifier.l_name = 0;
  for (i = 0; i < 255; i++) {
    outC->DMI_currentDMIStatus.DMI_Identifier.DMI_name[i] = ' ';
  }
  outC->DMI_currentDMIStatus.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->PROC_radioCmdFromProcedures.valid = kcg_true;
  outC->PROC_radioCmdFromProcedures.messageSource =
    msrc_undefined_Common_Types_Pkg;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.radioDevice = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.receivedSystemTime = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.nid_message = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.t_train = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.nid_lrbg = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.t_train_reference = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.nid_em = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.d_sr = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.t_sh_rqst = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.d_ref = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.d_emergencystop = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->PROC_radioCmdFromProcedures.p42.valid = kcg_true;
  outC->PROC_radioCmdFromProcedures.p42.q_dir = Q_DIR_Reverse;
  outC->PROC_radioCmdFromProcedures.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->PROC_radioCmdFromProcedures.p42.nid_c = 0;
  outC->PROC_radioCmdFromProcedures.p42.nid_rbc = 0;
  outC->PROC_radioCmdFromProcedures.p42.nid_radio = 0;
  outC->PROC_radioCmdFromProcedures.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->PROC_radioCmdFromProcedures.p45.valid = kcg_true;
  outC->PROC_radioCmdFromProcedures.p45.q_dir = Q_DIR_Reverse;
  outC->PROC_radioCmdFromProcedures.p45.nid_mn = 0;
  outC->PROC_radioCmdFromProcedures.sendingRBC.valid = kcg_true;
  outC->PROC_radioCmdFromProcedures.sendingRBC.nid_c = 0;
  outC->PROC_radioCmdFromProcedures.sendingRBC.rbc_id = 0;
  outC->PROC_radioCmdFromProcedures.sendingRBC.device_id = 0;
  outC->debugCurrentLevel = M_LEVEL_Level_0;
  outC->debugCurrentMode = M_MODE_Full_Supervision;
  outC->debugIinterventionSpeed = 0.0;
  outC->debugPermittedSpeed = 0.0;
  outC->debugTrainPositionDeltaMin = 0;
  outC->debugTrainPositionDeltaMax = 0;
  outC->debugTrainPositionNominal = 0;
  outC->API_toTIU.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.valid = kcg_true;
  outC->API_toTIU.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.valid = kcg_true;
  outC->API_toTIU.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.valid = kcg_true;
  outC->API_toTIU.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.valid = kcg_true;
  outC->API_toTIU.info.change_traction_system.d_test_traction.now = 0;
  outC->API_toTIU.info.change_traction_system.d_test_traction.distance = 0;
  outC->API_toTIU.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.m_voltage.NID_ctraction = 0;
  outC->API_toTIU.info.passenger_door_control_info.valid = kcg_true;
  outC->API_toTIU.info.passenger_door_control_info.door_control_info = 0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.now =
    0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  for (i = 0; i < 999; i++) {
    outC->API_toDMI[i] = 0;
  }
  outC->API_RTM_management.valid = kcg_true;
  outC->API_RTM_management.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->API_RTM_management.networkID = 0;
  outC->API_toRBC.Message.valid = kcg_true;
  outC->API_toRBC.Message.nid_message = 0;
  outC->API_toRBC.Message.l_message = 0;
  outC->API_toRBC.Message.t_train = 0;
  outC->API_toRBC.Message.nid_engine = 0;
  outC->API_toRBC.Message.field1 = 0;
  outC->API_toRBC.Message.field2 = 0;
  outC->API_toRBC.Message.field3 = 0;
  for (i = 0; i < 50; i++) {
    outC->API_toRBC.OptionalPackets[i] = 0;
  }
  /* 1 */ ProbeEVC_init_EnvSim(&outC->_13_Context_1);
  /* 1 */ collectRadioOutput_init_radioOutput_Pkg(&outC->_12_Context_1);
  /* 3 */ checkGeneralMessage_init_trainData_pkg(&outC->_11_Context_3);
  /* 2 */ manageDMI_Output_init_manage_DMI_Output_Pkg(&outC->_10_Context_2);
  /* 2 */ Master_Procedure_init_ManageProcedure_Pkg(&outC->_9_Context_2);
  /* 1 */ MoRC_HO_init_MoRC_HO_Pkg(&outC->_8_Context_1);
  /* 2 */
  ProvidePositionReport_init_ProvidePositionReport_Pkg(&outC->_7_Context_2);
  /* 2 */ TIU_OutputIntegration_init_output_to_TIU_API_Pkg(&outC->_6_Context_2);
  /* 2 */
  SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
    &outC->_5_Context_2);
  /* 2 */ ManageLevelAndMode_init(&outC->_4_Context_2);
  /* 1 */ MEM_combineForLevelChange_init_EVC_MEM_Support_Pkg(&outC->Context_1);
  /* 2 */ TrackAtlas_init_TrackAtlas(&outC->_3_Context_2);
  /* 2 */ trainData_init_trainData_pkg(&outC->_2_Context_2);
  /* 3 */ manageDMI_Input_init_manage_DMI_Input_Pkg(&outC->_1_Context_3);
  /* 3 */
  calculateTrainPosition_init_CalculateTrainPosition_Pkg(&outC->Context_3);
  /* 2 */
  Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
    &outC->Context_2);
  /* 5 */ manageTIU_input_init_input_from_TIU_API_Pkg(&outC->Context_5);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVC_reset(outC_EVC *outC)
{
  outC->init14 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ ProbeEVC_reset_EnvSim(&outC->_13_Context_1);
  /* 1 */ collectRadioOutput_reset_radioOutput_Pkg(&outC->_12_Context_1);
  /* 3 */ checkGeneralMessage_reset_trainData_pkg(&outC->_11_Context_3);
  /* 2 */ manageDMI_Output_reset_manage_DMI_Output_Pkg(&outC->_10_Context_2);
  /* 2 */ Master_Procedure_reset_ManageProcedure_Pkg(&outC->_9_Context_2);
  /* 1 */ MoRC_HO_reset_MoRC_HO_Pkg(&outC->_8_Context_1);
  /* 2 */
  ProvidePositionReport_reset_ProvidePositionReport_Pkg(&outC->_7_Context_2);
  /* 2 */
  TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(&outC->_6_Context_2);
  /* 2 */
  SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
    &outC->_5_Context_2);
  /* 2 */ ManageLevelAndMode_reset(&outC->_4_Context_2);
  /* 1 */ MEM_combineForLevelChange_reset_EVC_MEM_Support_Pkg(&outC->Context_1);
  /* 2 */ TrackAtlas_reset_TrackAtlas(&outC->_3_Context_2);
  /* 2 */ trainData_reset_trainData_pkg(&outC->_2_Context_2);
  /* 3 */ manageDMI_Input_reset_manage_DMI_Input_Pkg(&outC->_1_Context_3);
  /* 3 */
  calculateTrainPosition_reset_CalculateTrainPosition_Pkg(&outC->Context_3);
  /* 2 */
  Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
    &outC->Context_2);
  /* 5 */ manageTIU_input_reset_input_from_TIU_API_Pkg(&outC->Context_5);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC */
void EVC(
  /* EVC::EVC_reset */ kcg_bool _26_EVC_reset,
  /* EVC::API_Odometry */ odometry_T_Obu_BasicTypes_Pkg *API_Odometry,
  /* EVC::API_SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg API_SystemTime,
  /* EVC::API_fromTrack */ API_TrackSideInput_T_API_Msg_Pkg *API_fromTrack,
  /* EVC::API_fromDMI */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *API_fromDMI,
  /* EVC::API_fromTIU */ TIU_Input_msg_API_TIU_Pkg *API_fromTIU,
  /* EVC::API_mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *API_mobileHWStatus,
  /* EVC::API_persistentData */ ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *API_persistentData,
  outC_EVC *outC)
{
  /* EVC */ nationValuesForDMI_T_DMI_Types_Pkg mk_struct;
  /* EVC */ obuEventsAndPhases_T_RCM_Session_Types_Pkg _1_mk_struct;
  /* EVC */ RBC_Communication_T_ProvidePositionReport_Pkg _2_mk_struct;
  /* EVC */ TrainToTrackStatus_T_BG_Types_Pkg _3_mk_struct;
  /* EVC */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _4_mk_struct;
  /* EVC */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg _5_mk_struct;
  /* EVC */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _6_mk_struct;
  /* EVC */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _7_mk_struct;
  /* EVC */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _8_mk_struct;
  /* EVC */ filterRelatedEvents_T_Common_Types_Pkg _9_mk_struct;
  /* EVC */ morcStatus_T_RCM_Session_Types_Pkg tmp25;
  /* EVC */ connection_ids_T_Handover_Pkg tmp24;
  /* EVC */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg tmp23;
  /* EVC */ NID_STM_DMI_Types_Pkg tmp22;
  /* EVC */ trainData_Events_T_trainData_Types_pkg tmp21;
  /* EVC */ L_internal_Type_Obu_BasicTypes_Pkg tmp20;
  /* EVC */ DataForModeAndLevel_t_TrackAtlasTypes tmp19;
  /* EVC */ M_LEVEL tmp18;
  /* EVC */ kcg_bool tmp17;
  /* EVC */ kcg_bool tmp16;
  /* EVC */ kcg_bool tmp15;
  /* EVC */ kcg_bool tmp14;
  /* EVC */ mobileRegistrationContext_T_RCM_Types_Pkg tmp13;
  /* EVC */ kcg_int tmp12;
  /* EVC */ mobileConnectionContext_T_RCM_Types_Pkg tmp11;
  /* EVC */ kcg_int tmp10;
  /* EVC */ kcg_bool tmp;
  /* EVC::EVC_PersistentData */ ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg last_EVC_PersistentData;
  /* EVC::DMI_trainRunningNumber */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg DMI_trainRunningNumber;
  /* EVC::_L523 */ DMI_EVC_status_T_DMI_Types_Pkg _L523;
  /* EVC::_L772 */ trainPosition_T_TrainPosition_Types_Pck _L772;
  /* EVC::_L794 */ positionedBGs_T_TrainPosition_Types_Pck _L794;
  /* EVC::_L813 */ kcg_bool _L813;
  /* EVC::_L938 */ T_internal_Type_Obu_BasicTypes_Pkg _L938;
  /* EVC::_L950 */ trainProperties_T_TrainPosition_Types_Pck _L950;
  /* EVC::_L952 */ trainData_T_TIU_Types_Pkg _L952;
  /* EVC::_L993 */ T_Mode_Level_Level_And_Mode_Types_Pkg _L993;
  /* EVC::_L1219 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1219;
  /* EVC::_L1230 */ trainDataStatus_T_trainData_Types_pkg _L1230;
  /* EVC::_L1321 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1321;
  /* EVC::_L1678 */ kcg_bool _L1678;
  /* EVC::_L1754 */ kcg_bool _L1754;
  
  outC->resetOut = _26_EVC_reset;
  /* fby_1_init_2 */ if (outC->init14) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &_L772,
      (trainPosition_T_TrainPosition_Types_Pck *) &cEmptyTrainPosition);
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cMLInitialModesAndLevel);
    _L938 = cTTrainUnknown1_CheckEuroradioMessage;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L794,
      (positionedBGs_T_TrainPosition_Types_Pck *) &cEmptyPositionedBGs);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &_L952,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L1230,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &tmp25,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
    kcg_copy_connection_ids_T_Handover_Pkg(
      &tmp24,
      (connection_ids_T_Handover_Pkg *) &cNoSupervisingRBC);
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &_L950,
      (trainProperties_T_TrainPosition_Types_Pck *) &cEmptyTrainProperties);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp23,
      (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
        &cEmptyTestStatusList_DMI_Types_Pkg);
    tmp22 = cNo_STM_manage_DMI_Input_Pkg;
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_L1219,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &cNoP0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &cNoP1);
    kcg_copy_trainData_Events_T_trainData_Types_pkg(
      &tmp21,
      (trainData_Events_T_trainData_Types_pkg *) &cNoTDEvents);
    tmp20 = cEmptySpeedForDMI.location_brake_curve_starting_point;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
        &cNoPersistentData);
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
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &_L772,
      &outC->CALC_TrainPosition);
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      &outC->ML_ModeAndLevel);
    _L938 = outC->MSG_lastRadioMsgTimestamp;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L794, &outC->CALC_BGs);
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L952, &outC->td_trainData);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L1230, &outC->td_status);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &tmp25,
      &outC->MoRC_RadioStatus_1);
    kcg_copy_connection_ids_T_Handover_Pkg(
      &tmp24,
      &outC->MoRC_supervisingRBC_Id);
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &_L950,
      &outC->TIU_trainProperties);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      &outC->DMI_currentDMIStatus);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp23,
      &outC->EVC_TextMessageStatusList);
    tmp22 = outC->EVC_currentNTC;
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L1219, &outC->rep_P0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      &outC->rep_P1);
    kcg_copy_trainData_Events_T_trainData_Types_pkg(&tmp21, &outC->td_events);
    tmp20 = outC->DMI_sdmToDMI.location_brake_curve_starting_point;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      &outC->EVC_PersistentData);
    _L813 = outC->MoRC_newSessionEstablished;
    tmp17 = outC->EVC_ready;
    _L1678 = outC->PROC_statusstartofmissionongoing_to_MoRC;
    tmp16 = outC->PROC_powerUp_to_MoRC;
    tmp15 = outC->PROC_powerOff_to_MoRC;
    tmp14 = outC->PROC_radioCmdFromProcedures.valid;
    tmp12 = outC->MoRC_MN_1;
    tmp10 = outC->MoRC_RadioID_1;
    tmp = outC->_L477;
  }
  /* 5 */
  manageTIU_input_input_from_TIU_API_Pkg(API_fromTIU, &_L952, &outC->Context_5);
  _9_mk_struct.pendingL1Transition = kcg_false;
  _9_mk_struct.pendingL12L3Transition = kcg_false;
  _9_mk_struct.pendingAckOfTrainDataFromRBC = _L1230.waitingForRBCResponse;
  _9_mk_struct.emergencyStopAccepted = kcg_false;
  _9_mk_struct.lastAckTextMessageId = 0;
  _9_mk_struct.pendingNTCTransition = kcg_false;
  _9_mk_struct.SPPAndGradientOnBoard = kcg_false;
  _9_mk_struct.MACoverNotFullLength = kcg_false;
  /* 2 */
  Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
    kcg_true,
    API_fromTrack,
    API_Odometry,
    _26_EVC_reset,
    &_L772,
    &_L993,
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.t_nvcontact,
    cOwnVersion,
    _L938,
    &tmp25,
    &tmp24,
    &_L794,
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.q_nvlocacc,
    outC->Context_5.outTIUStatus.deskOpen,
    _L1230.validatedbyRBC,
    &_9_mk_struct,
    &outC->Context_2);
  /* 3 */
  calculateTrainPosition_CalculateTrainPosition_Pkg(
    API_Odometry,
    (passedBG_T_BG_Types_Pkg *) &cEmptyPassedBG,
    &outC->Context_2.outputMessage,
    &_L950,
    _26_EVC_reset,
    &outC->Context_3);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->CALC_TrainPosition,
    &outC->Context_3.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->CALC_BGs,
    &outC->Context_3.BGs);
  /* 3 */
  manageDMI_Input_manage_DMI_Input_Pkg(
    API_fromDMI,
    _26_EVC_reset,
    &tmp23,
    API_SystemTime,
    tmp22,
    &outC->_1_Context_3);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_currentDMIStatus,
    &outC->_1_Context_3.currentDMIStatus);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &DMI_trainRunningNumber,
    &outC->_1_Context_3.fromDMI_TrainRunningNumber);
  outC->EVC_currentNTC = outC->_1_Context_3.updatedNTC;
  outC->td_events.trainStandStill = (*API_Odometry).valid &
    ((*API_Odometry).motionState == noMotion_Obu_BasicTypes_Pkg);
  outC->td_events.driverRequestModify = kcg_false;
  outC->td_events.safeRadioConnectionLost = kcg_false;
  outC->td_events.approachingRBCarea = kcg_false;
  /* 2 */
  trainData_trainData_pkg(
    _26_EVC_reset,
    &(*API_fromTIU).info.train_data_info,
    &outC->_1_Context_3.fromDMI_TrainData,
    &outC->_1_Context_3.fromDMI_TrainDataAck,
    &outC->Context_2.outputMessage,
    &tmp21,
    4065801,
    &_L1219,
    &_L1321,
    (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *) &cNoBus_trainData_pkg,
    cOwnVersion,
    API_SystemTime,
    &outC->_2_Context_2);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->td_trainData,
    &outC->_2_Context_2.actualTrainData);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->td_status,
    &outC->_2_Context_2.updatedStatus);
  /* 2 */
  TrackAtlas_TrackAtlas(
    &outC->Context_2.outputMessage,
    &_L993,
    _L952.valid,
    &outC->CALC_TrainPosition,
    _L952.trainLength,
    API_SystemTime,
    tmp20,
    API_Odometry,
    &outC->_1_Context_3.outForMA,
    &_L950,
    &_L1219,
    &_L1321,
    API_SystemTime,
    (P203V1_OBU_T_TM_baseline2 *) &cP203_PermanentData_EVC_PermanentData_Pkg,
    (P003_permanent_data_T_TM_baseline2 *)
      &cP003_PermanentData_EVC_PermanentData_Pkg,
    &outC->_2_Context_2.outMessageBus,
    &outC->CALC_BGs,
    &outC->_3_Context_2);
  /* 1 */
  maintainTrainProperties_EVC_MEM_Support_Pkg(
    &_L950,
    &DMI_trainRunningNumber,
    &_L952,
    4065801,
    &outC->TIU_trainProperties);
  _L1754 = outC->Context_5.outTIUStatus.valid &
    outC->Context_5.outTIUStatus.deskOpen;
  /* 2 */
  patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg(
    &outC->_3_Context_2.To_ModeAndLevel,
    &tmp19);
  /* 1 */
  MEM_combineForLevelChange_EVC_MEM_Support_Pkg(
    &outC->Context_2.outputMessage,
    &_L993,
    &outC->CALC_TrainPosition,
    &outC->TIU_trainProperties,
    &outC->_3_Context_2.NV_raw_out,
    &outC->Context_1);
  /* ck_EVC_cabIsOpen */ if (_L1754) {
    /* 3 */ if (outC->init) {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->EVC_PersistentData,
        API_persistentData);
      tmp18 = outC->EVC_PersistentData.lastActiveLevel;
    }
    else {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->EVC_PersistentData,
        &last_EVC_PersistentData);
      tmp18 = _L993.level;
    }
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->EVC_ActiveLevelList,
      &outC->EVC_PersistentData.availableLevelsList);
    outC->init = kcg_false;
  }
  else {
    tmp18 = _L993.level;
    /* last_init_ck_EVC_ActiveLevelList */ if (outC->init14) {
      kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
        &outC->EVC_ActiveLevelList,
        (DMI_LevelList_T_DMI_Types_Pkg *) &cNo_Levels);
    }
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->EVC_PersistentData,
      &last_EVC_PersistentData);
  }
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
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
    (positionErrors_T_TrainPosition_Types_Pck *) &cNoPositioningErrors);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &_5_mk_struct.Train_Position,
    &outC->CALC_TrainPosition);
  _5_mk_struct.Train_Speed = (*API_Odometry).speed.v_safeNominal;
  _5_mk_struct.Train_Standstill = (*API_Odometry).motionState ==
    noMotion_Obu_BasicTypes_Pkg;
  /* 2 */
  ManageLevelAndMode(
    &outC->_1_Context_3.forModesAndLevel,
    &_5_mk_struct,
    &outC->Context_5.outTIUCurrentInfo,
    &tmp19.train_messages,
    &outC->Context_1.Data_From_Track_Packets_at_ML,
    &_6_mk_struct,
    outC->Context_5.outTIUStatus.ownCab,
    &outC->_1_Context_3.ML_levelTransition,
    &_7_mk_struct,
    &outC->Context_2.IF_toML,
    &_8_mk_struct,
    (T_Data_From_STM_Level_And_Mode_Types_Pkg *) &cEmptyData_From_STM,
    tmp18,
    &outC->_4_Context_2);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->ML_ModeAndLevel,
    &outC->_4_Context_2.Compatible_Mode_And_Level);
  /* 2 */
  SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
    (P3_NationalValues_T_Packet_Types_Pkg *)
      &cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg,
    &outC->CALC_TrainPosition,
    API_Odometry,
    &outC->TIU_trainProperties,
    &outC->td_trainData,
    &outC->_3_Context_2.to_Supervision,
    (kcg_bool)
      (outC->_4_Context_2.Service_Brake_Command |
        outC->Context_2.ApplyServiceBrake),
    /* 1 */
    Procedure_TRIP_EVC_MEM_Support_Pkg(
      &outC->ML_ModeAndLevel,
      outC->_4_Context_2.EB_Requested),
    &outC->_5_Context_2);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->DMI_sdmToDMI,
    &outC->_5_Context_2.sdmToDMI);
  /* 2 */
  TIU_OutputIntegration_output_to_TIU_API_Pkg(
    (Isolation_Status_T_TIU_Types_Pkg *) &cEmtpyIsolationStatus,
    &outC->_5_Context_2.brakeCmd,
    (Brake_inhibition_command_T_TIU_Types_Pkg *) &cEmptyBrakeInhibitionCommand,
    (Type_I_train_commands_T_TIU_Types_Pkg *) &cEmptyTrainCommand,
    (Change_traction_system_T_TIU_Types_Pkg *) &cEmptyChangeTractionSystem,
    (Passenger_door_control_info_T_TIU_Types_Pkg *) &cPassengerDoorControlInfo,
    (Change_of_allowed_current_consumption_T_TIU_Types_Pkg *)
      &cEmptyChangeOfAllowedCurrentConsumption,
    &outC->ML_ModeAndLevel,
    &outC->_6_Context_2);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->API_toTIU,
    &outC->_6_Context_2.outTIU_to_API);
  outC->td_events.communicationSessionEstablished = _L813;
  outC->td_events.MoRCreadyFlag = tmp17;
  _L1754 = !outC->Context_5.outTIUStatus.deskOpen;
  outC->debugCurrentMode = outC->ML_ModeAndLevel.Mode;
  outC->debugCurrentLevel = outC->ML_ModeAndLevel.level;
  _4_mk_struct.currMode = outC->debugCurrentMode;
  _4_mk_struct.currLevel = outC->debugCurrentLevel;
  _4_mk_struct.levelTransitionBorderPassed = outC->ML_ModeAndLevel.newLevel;
  _3_mk_struct.nid_ntc = outC->EVC_currentNTC;
  _3_mk_struct.q_length = Q_LENGTH_No_train_integrity_information_available;
  _2_mk_struct.newSessionEstablished = _L813;
  /* 2 */
  ProvidePositionReport_ProvidePositionReport_Pkg(
    &outC->CALC_BGs,
    &outC->CALC_TrainPosition,
    API_Odometry,
    &outC->TIU_trainProperties,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
      &cEmptyLocationBasedEvents,
    &outC->Context_2.outputMessage,
    API_SystemTime,
    &_2_mk_struct,
    &_3_mk_struct,
    outC->CALC_TrainPosition.trainRunningDirectionToLRBG,
    outC->Context_3.errors.BG_LinkingConsistencyError,
    outC->Context_2.outCheckErrors.linkedBGError,
    outC->Context_2.outCheckErrors.unlinkedBGError,
    outC->Context_2.outCheckErrors.radioMessageConsistencyError,
    outC->Context_2.outCheckErrors.radioSequenceError,
    kcg_false,
    kcg_false,
    outC->Context_3.errors.twoConsecutiveLinkedBGs_missed,
    outC->Context_3.errors.doubleRepositioningError,
    &_4_mk_struct,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg,
    &outC->_3_Context_2.bus_out,
    cOwnVersion,
    API_SystemTime,
    &outC->_7_Context_2);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->rep_P0,
    &outC->_7_Context_2.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->rep_P1,
    &outC->_7_Context_2.packet1);
  /* 1 */
  MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg(
    API_mobileHWStatus,
    0,
    tmp12,
    &tmp13);
  /* 1 */
  MEM_MobileConnectionContext_EVC_MEM_Support_Pkg(
    API_mobileHWStatus,
    0,
    tmp10,
    kcg_false,
    &tmp11);
  _1_mk_struct.atPowerUp = tmp16;
  _1_mk_struct.atPowerDown = tmp15;
  _1_mk_struct.atStartOfMission = kcg_false;
  _1_mk_struct.modeChangeHasToBeReportedToRBC = _L1678;
  _1_mk_struct.driverHasManuallyChangedLevel_to_2_or_3 = kcg_false;
  _1_mk_struct.trainFrontPassesStartOfAnnouncedRadioHole = kcg_false;
  _1_mk_struct.trainFrontReachesEndOfAnnouncedRadioHole = kcg_false;
  _1_mk_struct.trainFrontInsideInAnAnnouncedRadioHole = kcg_false;
  _1_mk_struct.trainFrontPassesALevelTransitionBorder = _L993.newLevel;
  _1_mk_struct.trainFrontPassesA_RBC_RBC_border = kcg_false;
  _1_mk_struct.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_false;
  _1_mk_struct.isPartOfAnOngoingStartOfMissionProcedure = tmp14;
  _1_mk_struct.startOfMissionProcedureIsGoingOn = _L1678;
  _1_mk_struct.endOfMissionIsExecuted = _L1754;
  _1_mk_struct.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_false;
  _1_mk_struct.errorConditionRequiringTerminationDetected = kcg_false;
  _1_mk_struct.trainIsRejectedByRBC_duringStartOfMission = kcg_false;
  _1_mk_struct.driverClosesTheDeskduringStartOfMission = _L1754;
  _1_mk_struct.trainExitedFromAnRBCArea = kcg_false;
  _1_mk_struct.isInCommunicationSessionWithAnRIU = kcg_false;
  _1_mk_struct.level_1_isLeft = kcg_false;
  /* 1 */
  MoRC_HO_MoRC_HO_Pkg(
    _L993.Mode,
    _L993.level,
    &_1_mk_struct,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cEmptyRadioNetworkIds.memorizedID,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cEmptyRadioNetworkIds.ID_fromDriver,
    &tmp13,
    (mobileRegistrationContext_T_RCM_Types_Pkg *) &cNoMobileRegistrationContext,
    &tmp11,
    (mobileConnectionContext_T_RCM_Types_Pkg *) &cNoMobileConnectionContext,
    &outC->Context_2.outputMessage,
    &outC->_7_Context_2.posReport,
    &_L772,
    &_L794,
    API_SystemTime,
    API_SystemTime,
    API_SystemTime,
    _26_EVC_reset,
    isAbleToManageOneSession_Handover_Pkg,
    &outC->TIU_trainProperties,
    (morc_configData_T_RCM_Session_Types_Pkg *)
      &cMoRC_ConfigData_EVC_PermanentData_Pkg,
    (P003_TM_TrainToTrack *) &cMoRC_own_P3ng_EVC_PermanentData_Pkg,
    cOwnVersion,
    &outC->_8_Context_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->MoRC_RadioStatus_1,
    &outC->_8_Context_1.radioStatus_1);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->MoRC_supervisingRBC_Id,
    &outC->_8_Context_1.supervisingRBC);
  outC->EVC_ready = outC->_8_Context_1.ready;
  /* 2 */
  Master_Procedure_ManageProcedure_Pkg(
    &_L523,
    tmp,
    API_SystemTime,
    &outC->ML_ModeAndLevel,
    &outC->MoRC_RadioStatus_1,
    &outC->Context_5.outTIUStatus,
    outC->CALC_TrainPosition.LRBG.valid,
    &outC->_1_Context_3.outDriverRequest,
    _L523.DMI_LevelSelectedByDirver,
    &outC->_9_Context_2);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->PROC_radioCmdFromProcedures,
    &outC->_9_Context_2.request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC);
  outC->PROC_powerUp_to_MoRC = outC->_9_Context_2.powerUp_to_MoRC;
  outC->PROC_statusstartofmissionongoing_to_MoRC =
    outC->_9_Context_2.statusstartofmissionongoing_to_MoRC;
  outC->PROC_powerOff_to_MoRC = outC->_9_Context_2.powerOff_to_MoRC;
  outC->_L477 =
    outC->_9_Context_2.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  outC->init14 = kcg_false;
  mk_struct.valid = kcg_true;
  mk_struct.nid_c =
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.nid_cArray[0].nid_c;
  mk_struct.nid_c_valid = kcg_true;
  /* 2 */
  manageDMI_Output_manage_DMI_Output_Pkg(
    &_L523,
    API_SystemTime,
    &outC->Context_5.outTIUStatus,
    API_Odometry,
    &outC->CALC_TrainPosition,
    &outC->_5_Context_2.brakeCmd,
    &outC->DMI_sdmToDMI,
    &outC->ML_ModeAndLevel,
    &mk_struct,
    (movementAuthorityForDMI_T_DMI_Types_Pkg *) &cEmptyDMIMA,
    &outC->MoRC_RadioStatus_1,
    &outC->td_trainData,
    &outC->_9_Context_2.DMI_Entry_Request_to_DMI,
    (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIEVCcodedTrainData,
    &outC->_3_Context_2.to_DMI,
    cOwnVersion,
    (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIDisplayControl,
    &outC->EVC_ActiveLevelList,
    outC->_1_Context_3.outUpdateLevelsDMI,
    (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *) &cEmptyDMIRadioNet,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIDriverIdentifier,
    (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMITrainRunningNumber,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData,
    outC->Context_2.BadBaliseMessageToDMI,
    &outC->_4_Context_2.Data_To_DMI_Ack,
    &outC->_4_Context_2.announcedLevel,
    outC->EVC_currentNTC,
    &outC->_1_Context_3.outStatusList,
    &outC->_10_Context_2);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->API_toDMI,
    &outC->_10_Context_2.to_DMI);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->EVC_TextMessageStatusList,
    &outC->_10_Context_2.outStatusList);
  outC->debugIinterventionSpeed = (kcg_real)
      outC->DMI_sdmToDMI.interventionSpeed;
  /* 14 */ if (outC->_9_Context_2.start_ack_to_TIU) {
    outC->debugPermittedSpeed = (kcg_real) outC->DMI_sdmToDMI.permittedSpeed;
  }
  else {
    outC->debugPermittedSpeed = (kcg_real) 0;
  }
  /* 15 */ if (outC->Context_2.outputMessage.valid &
    (outC->Context_2.outputMessage.source == msrc_Euroradio_Common_Types_Pkg)) {
    outC->MSG_lastRadioMsgTimestamp =
      outC->Context_2.outputMessage.Radio_Common_Header.receivedSystemTime;
  }
  else {
    outC->MSG_lastRadioMsgTimestamp = _L938;
  }
  outC->debugTrainPositionDeltaMax =
    outC->CALC_TrainPosition.trainPosition.d_max;
  outC->debugTrainPositionDeltaMin =
    outC->CALC_TrainPosition.trainPosition.d_min;
  outC->debugTrainPositionNominal =
    outC->CALC_TrainPosition.trainPosition.nominal;
  /* 3 */
  checkGeneralMessage_trainData_pkg(
    &outC->Context_2.outputMessage,
    &outC->_11_Context_3);
  /* 1 */
  collectRadioOutput_radioOutput_Pkg(
    &outC->_8_Context_1.msgBus_2_RBC_1,
    outC->_11_Context_3.genMessageReceived,
    &outC->ML_ModeAndLevel,
    &outC->MoRC_RadioStatus_1,
    &outC->_8_Context_1.mobileConnectionCmd_1,
    &outC->_8_Context_1.mobileRegistrationCmd_1,
    cOwnVersion,
    API_SystemTime,
    &outC->_12_Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    &outC->_12_Context_1.toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->_12_Context_1.API_RTM_management);
  outC->MoRC_RadioID_1 = outC->_12_Context_1.outRadio;
  outC->MoRC_MN_1 = outC->_12_Context_1.outMN;
  outC->MoRC_newSessionEstablished = sp_maintaining_RCM_Session_Types_Pkg ==
    outC->MoRC_RadioStatus_1.session.phase;
  /* 1 */
  ProbeEVC_EnvSim(
    &outC->Context_2.outCheckErrors,
    &outC->Context_3.errors,
    &outC->MoRC_RadioStatus_1,
    &outC->_13_Context_1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVC.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */


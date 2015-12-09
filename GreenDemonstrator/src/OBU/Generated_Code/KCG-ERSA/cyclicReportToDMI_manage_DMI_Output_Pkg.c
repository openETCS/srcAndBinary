/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "cyclicReportToDMI_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void cyclicReportToDMI_init_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->packetDynamic.valid = kcg_true;
  outC->packetDynamic.system_clock = 0;
  outC->packetDynamic.v_train = 0;
  outC->packetDynamic.location_front_train = 0;
  outC->packetDynamic.location_brake_target = 0;
  outC->packetDynamic.v_target = 0;
  outC->packetDynamic.v_permitted = 0;
  outC->packetDynamic.v_release = 0;
  outC->packetDynamic.location_brake_curve_starting_point = 0;
  outC->packetDynamic.v_intervention = 0;
  outC->packetDynamic.mode = M_MODE_Full_Supervision;
  outC->packetDynamic.level.level = M_LEVEL_Level_0;
  outC->packetDynamic.level.nid_stm = 0;
  outC->packetDynamic.nid_c = 0;
  outC->packetDynamic.nid_c_valid = kcg_true;
  outC->packetDynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->packetDynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->packetDynamic.location_LOA = 0;
  outC->packetDynamic.v_LOA = 0;
  outC->packetDynamic.location_KP_Balise_Track = 0;
  outC->packetDynamic.distance_KP_Balise = 0;
  outC->packetDynamic.distance_to_TSA = 0;
  outC->packetDynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->packetDynamic.distanceIndicationPoint = 0;
  /* 1 */ isSendingNeeded_init_manage_DMI_Output_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void cyclicReportToDMI_reset_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* 1 */ isSendingNeeded_reset_manage_DMI_Output_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::cyclicReportToDMI */
void cyclicReportToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMoRC_status */ morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNTC */ NID_NTC inNTC,
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::doSendingDynamc */ kcg_bool doSendingDynamc;
  
  /* 1 */
  isSendingNeeded_manage_DMI_Output_Pkg(
    inSystemTime,
    incurrentDMIStatus,
    &outC->Context_1);
  doSendingDynamc = outC->Context_1.sendingNeeded | (*inModeAndLevel).newLevel |
    (*inModeAndLevel).newMode;
  /* ck_doSendingDynamc */ if (doSendingDynamc) {
    /* 2 */
    sendDynamic_manage_DMI_Output_Pkg(
      inSystemTime,
      inOdometry,
      inTrainPosition,
      inSpeedSupervision,
      inModeAndLevel,
      inNationalValues,
      inMoRC_status,
      inMovementAuthority,
      inNTC,
      &outC->packetDynamic);
  }
  else {
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->packetDynamic,
      (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultDynamic_manage_DMI_Output_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** cyclicReportToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */


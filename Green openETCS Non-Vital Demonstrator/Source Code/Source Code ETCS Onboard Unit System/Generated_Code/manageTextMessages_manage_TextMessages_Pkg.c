/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTextMessages_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::manageTextMessages */
void manageTextMessages_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::manageTextMessages::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::manageTextMessages::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_FromBG */ kcg_bool dmi_FromBG,
  /* manage_TextMessages_Pkg::manageTextMessages::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::manageTextMessages::announcedLevelTransition */ T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_textMessage,
  /* manage_TextMessages_Pkg::manageTextMessages::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList)
{
  /* manage_TextMessages_Pkg::manageTextMessages */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg tmp1;
  /* manage_TextMessages_Pkg::manageTextMessages */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg tmp;
  /* manage_TextMessages_Pkg::manageTextMessages::levelNeedsAck */
  static kcg_bool levelNeedsAck;
  /* manage_TextMessages_Pkg::manageTextMessages::modeChange */
  static kcg_bool modeChange;
  /* manage_TextMessages_Pkg::manageTextMessages::_L29 */
  static kcg_bool _L29;
  
  /* ck__L6 */ if ((*inModeLevel_Ack).valid) {
    _L29 = /* 1 */
      checkIfNeeded_manage_TextMessages_Pkg(
        inModeLevel_Ack,
        (*announcedLevelTransition).LevelTransition.transition.level,
        inStatusList);
  }
  else {
    _L29 = kcg_false;
  }
  levelNeedsAck = (*inModeLevel_Ack).LevelNeedsAck & _L29;
  modeChange = _L29 & !levelNeedsAck;
  /* ck_modeChange */ if (modeChange) {
    switch ((*inModeLevel_Ack).whichMode) {
      case M_MODE_Staff_Responsible :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Mode_SR_manage_TextMessages_Pkg);
        break;
      case M_MODE_On_Sight :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Mode_OS_manage_TextMessages_Pkg);
        break;
      case M_MODE_Shunting :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Mode_SH_manage_TextMessages_Pkg);
        break;
      case M_MODE_Limited_Supervision :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Mode_LS_manage_TextMessages_Pkg);
        break;
      case M_MODE_National_System :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Mode_SN_manage_TextMessages_Pkg);
        break;
      case M_MODE_Unfitted :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Mode_UN_manage_TextMessages_Pkg);
        break;
      case M_MODE_Trip :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Mode_TR_manage_TextMessages_Pkg);
        break;
      
      default :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cDefaultText_manage_DMI_Output_Pkg);
    }
    tmp = con_modeChange_DMI_Types_Pkg;
  }
  else /* ck_anon_activ */ if (levelNeedsAck) {
    switch ((*announcedLevelTransition).LevelTransition.transition.level) {
      case M_LEVEL_Level_0 :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Level_0_manage_TextMessages_Pkg);
        break;
      case M_LEVEL_Level_1 :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Level_1_manage_TextMessages_Pkg);
        break;
      case M_LEVEL_Level_2 :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Level_2_manage_TextMessages_Pkg);
        break;
      case M_LEVEL_Level_3 :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Level_3_manage_TextMessages_Pkg);
        break;
      case M_LEVEL_Level_NTC_specified_by_NID_NTC :
        kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cText_Level_NTC_manage_TextMessages_Pkg);
        break;
      
    }
    /* 1 */ if ((*inModeLevel_Ack).LevelNeedsAck) {
      tmp1.q_textConfirm = Q_TEXTCONFIRM_Confirmation_required;
    }
    else {
      tmp1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
    }
    tmp = con_levelMgmt_DMI_Types_Pkg;
  }
  else /* ck_anon_activ */ if (dmi_FromBG) {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &tmp1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cTextSpecial_BG_manage_DMI_Output_Pkg);
    tmp = con_trackRequest_DMI_Types_Pkg;
  }
  else {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &tmp1,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultText_manage_DMI_Output_Pkg);
    tmp = con_undefined_DMI_Types_Pkg;
  }
  /* 2 */
  sendTextMessage_manage_TextMessages_Pkg(
    inSystemTime,
    inStatusList,
    &tmp1,
    Q_TEXTREPORT_No_driver_acknowledgement_report_required,
    111,
    tmp,
    (*inModeLevel_Ack).whichMode,
    (*announcedLevelTransition).LevelTransition.transition.level,
    outStatusList,
    dmi_textMessage);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTextMessages_manage_TextMessages_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */


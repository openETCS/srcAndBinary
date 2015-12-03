/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTextMessages_manage_TextM.h"

/* manage_TextMessages_Pkg::manageTextMessages */
void manageTextMessages_manage_TextM(
  /* manage_TextMessages_Pkg::manageTextMessages::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_TextMessages_Pkg::manageTextMessages::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_FromBG */ kcg_bool dmi_FromBG,
  /* manage_TextMessages_Pkg::manageTextMessages::inModeLevel_Ack */ T_AcknoledgementRequest_Level_A *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::manageTextMessages::announcedLevelTransition */ T_AnnouncedLevel_Level_And_Mode *announcedLevelTransition,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages *dmi_textMessage,
  /* manage_TextMessages_Pkg::manageTextMessages::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList)
{
  /* manage_TextMessages_Pkg::manageTextMessages */
  static DMI_Text_Message_T_DMI_Messages tmp1;
  /* manage_TextMessages_Pkg::manageTextMessages */
  static DMI_context_TXT_MSG_T_DMI_Types tmp;
  /* manage_TextMessages_Pkg::manageTextMessages::levelNeedsAck */
  static kcg_bool levelNeedsAck;
  /* manage_TextMessages_Pkg::manageTextMessages::modeChange */
  static kcg_bool modeChange;
  /* manage_TextMessages_Pkg::manageTextMessages::_L29 */
  static kcg_bool _L29;
  
  /* ck__L6 */ if ((*inModeLevel_Ack).valid) {
    _L29 = /* 1 */
      checkIfNeeded_manage_TextMessag(
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
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Mode_SR_manage_TextMessag);
        break;
      case M_MODE_On_Sight :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Mode_OS_manage_TextMessag);
        break;
      case M_MODE_Shunting :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Mode_SH_manage_TextMessag);
        break;
      case M_MODE_Limited_Supervision :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Mode_LS_manage_TextMessag);
        break;
      case M_MODE_National_System :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Mode_SN_manage_TextMessag);
        break;
      case M_MODE_Unfitted :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Mode_UN_manage_TextMessag);
        break;
      case M_MODE_Trip :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Mode_TR_manage_TextMessag);
        break;
      
      default :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cDefaultText_manage_DMI_Output_);
    }
    tmp = con_modeChange_DMI_Types_Pkg;
  }
  else /* ck_anon_activ */ if (levelNeedsAck) {
    switch ((*announcedLevelTransition).LevelTransition.transition.level) {
      case M_LEVEL_Level_0 :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Level_0_manage_TextMessag);
        break;
      case M_LEVEL_Level_1 :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Level_1_manage_TextMessag);
        break;
      case M_LEVEL_Level_2 :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Level_2_manage_TextMessag);
        break;
      case M_LEVEL_Level_3 :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Level_3_manage_TextMessag);
        break;
      case M_LEVEL_Level_NTC_specified_by_ :
        kcg_copy_DMI_Text_Message_T_DMI(
          &tmp1,
          (DMI_Text_Message_T_DMI_Messages *) &cText_Level_NTC_manage_TextMess);
        break;
      
    }
    /* 1 */ if ((*inModeLevel_Ack).LevelNeedsAck) {
      tmp1.q_textConfirm = _55_Q_TEXTCONFIRM_Confirmation_;
    }
    else {
      tmp1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_r;
    }
    tmp = con_levelMgmt_DMI_Types_Pkg;
  }
  else /* ck_anon_activ */ if (dmi_FromBG) {
    kcg_copy_DMI_Text_Message_T_DMI(
      &tmp1,
      (DMI_Text_Message_T_DMI_Messages *) &cTextSpecial_BG_manage_DMI_Outp);
    tmp = con_trackRequest_DMI_Types_Pkg;
  }
  else {
    kcg_copy_DMI_Text_Message_T_DMI(
      &tmp1,
      (DMI_Text_Message_T_DMI_Messages *) &cDefaultText_manage_DMI_Output_);
    tmp = con_undefined_DMI_Types_Pkg;
  }
  /* 2 */
  sendTextMessage_manage_TextMess(
    inSystemTime,
    inStatusList,
    &tmp1,
    Q_TEXTREPORT_No_driver_acknowle,
    111,
    tmp,
    (*inModeLevel_Ack).whichMode,
    (*announcedLevelTransition).LevelTransition.transition.level,
    outStatusList,
    dmi_textMessage);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTextMessages_manage_TextM.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessPositionReport_RBC_Model_Pkg.h"

void RBC__ProcessPositionReport_reset_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->Context_1);
}

/* RBC_Model_Pkg::RBC__ProcessPositionReport */
void RBC__ProcessPositionReport_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
{
  Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp2;
  PosData_T tmp1;
  PosData_T tmp;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */ SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */ SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::radioTrainTrackMessageId */ NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::session */ SessionManagement_T session;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L30 */ RBC_Data_T_RBC_DataBus_Pkg _L30;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L36 */ M_LEVEL _L36;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L52 */ kcg_bool _L52;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L45 */ kcg_bool _L45;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L57 */ kcg_bool _L57;
  
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  /* 2 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->outRadioTrainTrackMessage,
    &tmp2);
  radioTrainTrackMessageId = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &tmp2);
  if (outC->init) {
    _L57 = kcg_false;
    outC->init = kcg_false;
    POSITION_REPORT_SM_state_sel = SSM_st_IDLE_POSITION_REPORT_SM;
  }
  else {
    _L57 = outC->terminateSessionInCaseOfLevelLoss;
    POSITION_REPORT_SM_state_sel = outC->POSITION_REPORT_SM_state_nxt;
  }
  switch (POSITION_REPORT_SM_state_sel) {
    case SSM_st_IDLE_POSITION_REPORT_SM :
      if (radioTrainTrackMessageId == 136) {
        POSITION_REPORT_SM_state_act =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else {
        POSITION_REPORT_SM_state_act = SSM_st_IDLE_POSITION_REPORT_SM;
      }
      break;
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      if (radioTrainTrackMessageId == 136) {
        POSITION_REPORT_SM_state_act =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else {
        POSITION_REPORT_SM_state_act = SSM_st_IDLE_POSITION_REPORT_SM;
      }
      break;
    
  }
  switch (POSITION_REPORT_SM_state_act) {
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      /* 2 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp);
      /* 2 */
      PosData__Update_RBC_Session_Pkg(
        &tmp,
        &outC->outRadioTrainTrackMessage,
        &tmp1);
      /* 1 */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp1,
        &session);
      outC->POSITION_REPORT_SM_state_nxt =
        SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      break;
    case SSM_st_IDLE_POSITION_REPORT_SM :
      kcg_copy_SessionManagement_T(&session, &(*inDataBus).session);
      outC->POSITION_REPORT_SM_state_nxt = SSM_st_IDLE_POSITION_REPORT_SM;
      break;
    
  }
  /* 4 */ SessionManagement__GetPosData_RBC_Session_Pkg(&session, &tmp);
  _L36 = /* 2 */ PosData__Get_M_LEVEL_RBC_Session_Pkg(&tmp);
  _L45 = (_L36 == M_LEVEL_Level_3) | (_L36 == M_LEVEL_Level_2);
  _L52 = (radioTrainTrackMessageId != 136) | _L45 | !_L57;
  outC->terminateSessionInCaseOfLevelLoss = (_L57 & _L52) | _L45;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L30, inDataBus);
  kcg_copy_SessionManagement_T(&_L30.session, &session);
  /* 1 */
  RBC__PingTrain_RBC_Model_Pkg(
    (P042_trackside_int_T_TM *) &P042_RequestSessionTermination,
    &_L30,
    &outC->outRadioTrainTrackMessage,
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->Context_1);
  if (_L52) {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L30);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
      &outC->outDataBus,
      &outC->Context_1.outDataBus);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessPositionReport_RBC_Model_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */


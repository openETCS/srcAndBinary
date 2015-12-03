/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Trackside_GreenDemonstrator_Trackside.h"

void Trackside_reset_GreenDemonstrator_Trackside(
  outC_Trackside_GreenDemonstrator_Trackside *outC)
{
  outC->init = kcg_true;
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper_reset_RBC_Scenario_Pkg(
    &outC->Context_1);
  /* 1 */ RBC_New_reset_RBC_Model_Pkg(&outC->_1_Context_1);
}

/* GreenDemonstrator::Trackside::Trackside */
void Trackside_GreenDemonstrator_Trackside(
  inC_Trackside_GreenDemonstrator_Trackside *inC,
  outC_Trackside_GreenDemonstrator_Trackside *outC)
{
  CompressedRadioMessage_TM tmp;
  /* GreenDemonstrator::Trackside::Trackside::_L12 */ CompressedPackets_T_Common_Types_Pkg _L12;
  /* GreenDemonstrator::Trackside::Trackside::_L13 */ TelegramHeader_T_BG_Types_Pkg _L13;
  /* GreenDemonstrator::Trackside::Trackside::_L14 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _L14;
  /* GreenDemonstrator::Trackside::Trackside::_L15 */ CompressedPackets_T_Common_Types_Pkg _L15;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_CompressedRadioMessage_TM(
      &tmp,
      (CompressedRadioMessage_TM *) &RADIO_TRACK_TRAIN_MESSAGE_DEFAULT);
  }
  else {
    kcg_copy_CompressedRadioMessage_TM(&tmp, &outC->_L16);
  }
  /* 1 */
  RBC_New_RBC_Model_Pkg(
    (DynamicConfig_T *) &DYNAMIC_CONFIG_UTRECHT_AMSTERDAM,
    &inC->TrainTrackMessageIn,
    &tmp,
    &outC->_1_Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioPackets_out,
    &outC->_1_Context_1.outRadioTrackTrainMessage.Messages);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->RadioMessage_out,
    &outC->_1_Context_1.outRadioTrackTrainMessage.Header);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg(
    &outC->_1_Context_1.outSessionManagement,
    &outC->_1_Context_1.outClock,
    &outC->Context_1);
  /* 1 */
  Story_Complete_Toolbox_Functions(
    (kcg_real) inC->TrainPosition / 100.0,
    outC->Context_1.outTriggerId,
    &_L12,
    &_L13,
    &_L14,
    &_L15,
    &outC->_L16,
    &outC->BaliseMessage);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Trackside_GreenDemonstrator_Trackside.c
** Generation date: 2015-11-10T18:22:12
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BTM_Toolbox_TrainModules.h"

void BTM_reset_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC)
{
}

/* Toolbox::TrainModules::BTM */
void BTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::BTM::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::BTM::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Toolbox::TrainModules::BTM::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::BTM::TelegramHeader */TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  outC_BTM_Toolbox_TrainModules *outC)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  
  outC->TrackMessage.systemTimeMsgReceived = systemTime;
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(
    &outC->TrackMessage.rtm_msg,
    (API_RadioMsgHeader_T_API_Msg_Pkg *) &cEmptyRadioMsgHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->TrackMessage.packets,
    Packets);
  outC->_L23 = (*TelegramHeader).nid_c != 0;
  outC->TrackMessage.valid = outC->_L23;
  if (outC->_L23) {
    outC->TrackMessage.msg_type = msrc_Eurobalise_Common_Types_Pkg;
  }
  else {
    outC->TrackMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  }
  /* 1 */ ODO_doLocInacc_Toolbox_Functions(- 10, 10, &tmp);
  outC->TrackMessage.btm_msg.present = outC->_L23;
  outC->TrackMessage.btm_msg.checkResult = kcg_true;
  outC->TrackMessage.btm_msg.api_bad_balise_received = kcg_false;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->TrackMessage.btm_msg.api_header,
    TelegramHeader);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection,
    odometry);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BTM_Toolbox_TrainModules.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */


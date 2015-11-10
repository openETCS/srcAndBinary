/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessModeAndLevel_RBC_Mo.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessModeAndLevel_init_R(outC_RBC__ProcessModeAndLevel_R *outC)
{
  outC->out_modeChanged = kcg_true;
  outC->out_levelChanged = kcg_true;
  outC->init = kcg_true;
  outC->out_level = M_LEVEL_Level_0;
  outC->out_mode = M_MODE_Full_Supervision;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessModeAndLevel_reset_(outC_RBC__ProcessModeAndLevel_R *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessModeAndLevel */
void RBC__ProcessModeAndLevel_RBC_Mo(
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::inTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inTrainTrackMessage,
  outC_RBC__ProcessModeAndLevel_R *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L2 */
  static outPackets_T_Common_Types_Pkg _L2;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L3 */
  static PT0_PositionReport_T_Packet_Tra _L3;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L4 */
  static PT1_PositionReport_2BG_T_Packet _L4;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L9 */
  static M_MODE _L9;
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::_L24 */
  static M_LEVEL _L24;
  
  /* 1 */ RadioTrainTrackMessage__GetPack(inTrainTrackMessage, &_L2);
  /* 1 */ _149_RadioTrainTrackPackets__Ge(&_L2, &_L3);
  /* 1 */ _150_RadioTrainTrackPackets__Ge(&_L2, &_L4);
  /* last_init_ck_level */ if (outC->init) {
    _L9 = M_MODE_No_Power;
    outC->init = kcg_false;
    _L24 = M_LEVEL_Level_0;
  }
  else {
    _L9 = outC->out_mode;
    _L24 = outC->out_level;
  }
  /* ck_p0_isValid */ if (_L3.valid) {
    outC->out_mode = _L3.packet0.mode;
  }
  else {
    else_clock_IfBlock1 = _L4.valid & !_L3.valid;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      outC->out_mode = _L4.packet1.mode;
    }
    else {
      outC->out_mode = _L9;
    }
  }
  /* 2 */ if (outC->out_mode != _L9) {
    outC->out_modeChanged = kcg_true;
  }
  else {
    outC->out_modeChanged = kcg_false;
  }
  /* ck_p0_isValid */ if (_L3.valid) {
    outC->out_level = _L3.packet0.level;
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    outC->out_level = _L4.packet1.level;
  }
  else {
    outC->out_level = _L24;
  }
  /* 3 */ if (outC->out_level != _L24) {
    outC->out_levelChanged = kcg_true;
  }
  else {
    outC->out_levelChanged = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessModeAndLevel_RBC_Mo.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


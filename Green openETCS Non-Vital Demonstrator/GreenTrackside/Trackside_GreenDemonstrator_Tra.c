/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Trackside_GreenDemonstrator_Tra.h"

#ifndef KCG_USER_DEFINED_INIT
void Trackside_init_GreenDemonstrato(outC_Trackside_GreenDemonstrato *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->_L16.Header.radioDevice = 0;
  outC->_L16.Header.receivedSystemTime = 0;
  outC->_L16.Header.nid_message = 0;
  outC->_L16.Header.t_train = 0;
  outC->_L16.Header.m_ack = 0;
  outC->_L16.Header.nid_lrbg = 0;
  outC->_L16.Header.t_train_reference = 0;
  outC->_L16.Header.nid_em = 0;
  outC->_L16.Header.q_scale = 0;
  outC->_L16.Header.d_sr = 0;
  outC->_L16.Header.t_sh_rqst = 0;
  outC->_L16.Header.d_ref = 0;
  outC->_L16.Header.q_dir = 0;
  outC->_L16.Header.d_emergencystop = 0;
  outC->_L16.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->_L16.Messages.PacketHeaders[i].nid_packet = 0;
    outC->_L16.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L16.Messages.PacketHeaders[i].valid = kcg_true;
    outC->_L16.Messages.PacketHeaders[i].startAddress = 0;
    outC->_L16.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->_L16.Messages.PacketData[i] = 0;
  }
  outC->BaliseMessage.Header.q_updown = 0;
  outC->BaliseMessage.Header.m_version = 0;
  outC->BaliseMessage.Header.q_media = 0;
  outC->BaliseMessage.Header.n_pig = 0;
  outC->BaliseMessage.Header.n_total = 0;
  outC->BaliseMessage.Header.m_dup = 0;
  outC->BaliseMessage.Header.m_mcount = 0;
  outC->BaliseMessage.Header.nid_c = 0;
  outC->BaliseMessage.Header.nid_bg = 0;
  outC->BaliseMessage.Header.q_link = 0;
  for (i = 0; i < 30; i++) {
    outC->BaliseMessage.Messages.PacketHeaders[i].nid_packet = 0;
    outC->BaliseMessage.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->BaliseMessage.Messages.PacketHeaders[i].valid = kcg_true;
    outC->BaliseMessage.Messages.PacketHeaders[i].startAddress = 0;
    outC->BaliseMessage.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->BaliseMessage.Messages.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->RadioPackets_out.PacketHeaders[i].nid_packet = 0;
    outC->RadioPackets_out.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->RadioPackets_out.PacketHeaders[i].valid = kcg_true;
    outC->RadioPackets_out.PacketHeaders[i].startAddress = 0;
    outC->RadioPackets_out.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->RadioPackets_out.PacketData[i] = 0;
  }
  outC->RadioMessage_out.radioDevice = 0;
  outC->RadioMessage_out.receivedSystemTime = 0;
  outC->RadioMessage_out.nid_message = 0;
  outC->RadioMessage_out.t_train = 0;
  outC->RadioMessage_out.m_ack = 0;
  outC->RadioMessage_out.nid_lrbg = 0;
  outC->RadioMessage_out.t_train_reference = 0;
  outC->RadioMessage_out.nid_em = 0;
  outC->RadioMessage_out.q_scale = 0;
  outC->RadioMessage_out.d_sr = 0;
  outC->RadioMessage_out.t_sh_rqst = 0;
  outC->RadioMessage_out.d_ref = 0;
  outC->RadioMessage_out.q_dir = 0;
  outC->RadioMessage_out.d_emergencystop = 0;
  outC->RadioMessage_out.m_version = 0;
  /* 1 */ _156_UtrechtAmsterdamScen_init_(&outC->_1_Context_1);
  /* 1 */ RBC_New_init_RBC_Model_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Trackside_reset_GreenDemonstrat(outC_Trackside_GreenDemonstrato *outC)
{
  outC->init = kcg_true;
  /* 1 */ _156_UtrechtAmsterdamScen_reset(&outC->_1_Context_1);
  /* 1 */ RBC_New_reset_RBC_Model_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* GreenDemonstrator::Trackside::Trackside */
void Trackside_GreenDemonstrator_Tra(
  inC_Trackside_GreenDemonstrator *inC,
  outC_Trackside_GreenDemonstrato *outC)
{
  /* GreenDemonstrator::Trackside::Trackside */
  static CompressedRadioMessage_TM tmp;
  /* GreenDemonstrator::Trackside::Trackside::_L12 */
  static CompressedPackets_T_Common_Type _L12;
  /* GreenDemonstrator::Trackside::Trackside::_L13 */
  static TelegramHeader_T_BG_Types_Pkg _L13;
  /* GreenDemonstrator::Trackside::Trackside::_L14 */
  static _1_Radio_TrackTrain_Header_T_Ra _L14;
  /* GreenDemonstrator::Trackside::Trackside::_L15 */
  static CompressedPackets_T_Common_Type _L15;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_CompressedRadioMessage(
      &tmp,
      (CompressedRadioMessage_TM *) &RADIO_TRACK_TRAIN_MESSAGE_DEFAU);
  }
  else {
    kcg_copy_CompressedRadioMessage(&tmp, &outC->_L16);
  }
  /* 1 */
  RBC_New_RBC_Model_Pkg(
    (DynamicConfig_T *) &DYNAMIC_CONFIG_UTRECHT_AMSTERDA,
    &inC->TrainTrackMessageIn,
    &tmp,
    &outC->Context_1);
  /* 1 */
  _156_UtrechtAmsterdamScen_RBC_S(
    &outC->Context_1.outSessionManagement,
    &outC->Context_1.outClock,
    &outC->_1_Context_1);
  /* 1 */
  Story_Complete_Toolbox_Function(
    (kcg_real) inC->TrainPosition / 100.0,
    outC->_1_Context_1.outTriggerId,
    &_L12,
    &_L13,
    &_L14,
    &_L15,
    &outC->_L16,
    &outC->BaliseMessage);
  kcg_copy_CompressedPackets_T_Co(
    &outC->RadioPackets_out,
    &outC->Context_1.outRadioTrackTrainMessage.Messages);
  kcg_copy__6_Radio_TrackTrain_He(
    &outC->RadioMessage_out,
    &outC->Context_1.outRadioTrackTrainMessage.Header);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Trackside_GreenDemonstrator_Tra.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


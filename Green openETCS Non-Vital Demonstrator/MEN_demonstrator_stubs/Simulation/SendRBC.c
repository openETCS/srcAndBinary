/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRBC.h"

void SendRBC_reset(outC_SendRBC *outC)
{
  /* 1 */ RBC_close_reset_RadioLib(&outC->_2_Context_1);
  /* 1 */
  Send_RBC_LRBG_354_D_00275_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_1_Context_1);
  /* 1 */ RBC_init_reset_RadioLib(&outC->Context_1);
}

/* SendRBC */
void SendRBC(
  /* SendRBC::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* SendRBC::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* SendRBC::Trigger_in */kcg_int Trigger_in,
  /* SendRBC::Message_sent */kcg_bool Message_sent,
  outC_SendRBC *outC)
{
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L3, Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L4, Packets_in);
  outC->_L5 = Trigger_in;
  outC->_L6 = Message_sent;
  /* 1 */
  RBC_init_RadioLib(
    &outC->_L3,
    &outC->_L4,
    outC->_L5,
    outC->_L6,
    &outC->Context_1);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L7, &outC->Context_1.R_data_out);
  /* 1 */
  Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L7,
    1,
    &outC->_1_Context_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->_1_Context_1.R_data_out);
  /* 1 */ RBC_close_RadioLib(&outC->_L2, &outC->_2_Context_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L8,
    &outC->_2_Context_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->_2_Context_1.Packets_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_out, &outC->_L9);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_out,
    &outC->_L8);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRBC.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */


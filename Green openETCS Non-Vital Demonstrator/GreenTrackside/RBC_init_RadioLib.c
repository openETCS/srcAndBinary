/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_init_RadioLib.h"

/* RadioLib::RBC_init */
void RBC_init_RadioLib(
  /* RadioLib::RBC_init::Message_in */ M_TrackTrain_Radio_T_TM_radio_m *Message_in,
  /* RadioLib::RBC_init::Packets_in */ CompressedPackets_T_Common_Type *Packets_in,
  /* RadioLib::RBC_init::Trigger_in */ kcg_int Trigger_in,
  /* RadioLib::RBC_init::Message_sent */ kcg_bool Message_sent,
  /* RadioLib::RBC_init::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  kcg_copy_M_TrackTrain_Radio_T_T(&(*R_data_out).message, Message_in);
  kcg_copy_CompressedPackets_T_Co(&(*R_data_out).packets, Packets_in);
  (*R_data_out).trigger = Trigger_in;
  (*R_data_out).message_sent = Message_sent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_init_RadioLib.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


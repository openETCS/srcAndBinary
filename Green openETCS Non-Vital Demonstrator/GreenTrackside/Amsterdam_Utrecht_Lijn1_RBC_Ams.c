/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_Ams.h"

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC */
void Amsterdam_Utrecht_Lijn1_RBC_Ams(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_in */ M_TrackTrain_Radio_T_TM_radio_m *Message_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Packets_in */ CompressedPackets_T_Common_Type *Packets_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Trigger_in */ kcg_int Trigger_in,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_sent */ kcg_bool Message_sent,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Message_out */ M_TrackTrain_Radio_T_TM_radio_m *Message_out,
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC::Packets_out */ CompressedPackets_T_Common_Type *Packets_out)
{
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC */
  static R_data_internal_T_InfraLib tmp1;
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC */
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  RBC_init_RadioLib(Message_in, Packets_in, Trigger_in, Message_sent, &tmp1);
  /* 1 */ RBC_Sheet05_Amstel_AmsterdamUtr(&tmp1, &tmp);
  /* 1 */ RBC_Sheet06_Bijlmer_US13_UserSt(&tmp, &tmp1);
  /* 1 */ RBC_close_RadioLib(&tmp1, Message_out, Packets_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_Lijn1_RBC_Ams.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


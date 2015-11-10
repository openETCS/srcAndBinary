/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M008_JRU_MessageLibBaselin.h"

/* MessageLibBaseline2::Send_M008_JRU */
void Send_M008_JRU_MessageLibBaselin(
  /* MessageLibBaseline2::Send_M008_JRU::M008 */ M_008_int_T_TM_radio_messages *M008,
  /* MessageLibBaseline2::Send_M008_JRU::Message_Out */ M_TrackTrain_Radio_T_TM_radio_m *Message_Out)
{
  /* 1 */ C_M008_int_to_header_TM_RBC_con(M008, Message_Out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M008_JRU_MessageLibBaselin.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


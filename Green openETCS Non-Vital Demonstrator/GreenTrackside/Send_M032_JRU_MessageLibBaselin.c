/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M032_JRU_MessageLibBaselin.h"

/* MessageLibBaseline2::Send_M032_JRU */
void Send_M032_JRU_MessageLibBaselin(
  /* MessageLibBaseline2::Send_M032_JRU::M032 */ M_032_int_T_TM_radio_messages *M032,
  /* MessageLibBaseline2::Send_M032_JRU::Message_Out */ M_TrackTrain_Radio_T_TM_radio_m *Message_Out)
{
  /* 1 */ C_M032_int_to_header_TM_RBC_con(M032, Message_Out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M032_JRU_MessageLibBaselin.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


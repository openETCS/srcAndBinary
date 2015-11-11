/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M024_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M024_JRU */
void Send_M024_JRU_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_M024_JRU::M024 */M_024_int_T_TM_radio_messages *M024,
  /* MessageLibBaseline2::Send_M024_JRU::Message_Out */M_TrackTrain_Radio_T_TM_radio_messages *Message_Out)
{
  /* 1 */ C_M024_int_to_header_TM_RBC_conversions(M024, Message_Out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M024_JRU_MessageLibBaseline2.c
** Generation date: 2015-11-10T18:22:09
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_RBC_LRBG_351_D_00054_9_M0.h"

/* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003 */
void Build_RBC_LRBG_351_D_00054_9_M0(
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  kcg_copy_R_data_internal_T_Infr(R_data_out, RadiaDataIn);
  /* 1 */
  SendRadioPackets_LRBG_351_D_000(
    &(*RadiaDataIn).packets,
    &(*R_data_out).packets);
  /* 1 */
  Send_M003_JRU_MessageLibBaselin(
    (M_003_int_T_TM_radio_messages *) &LRBG_351_D_00054_9_M003_Message,
    &(*R_data_out).message);
  (*R_data_out).message_sent = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_RBC_LRBG_351_D_00054_9_M0.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


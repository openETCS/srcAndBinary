/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_RBC_Message_LRBG_353_D_00.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00431_0_M024 */
void Build_RBC_Message_LRBG_353_D_00(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00431_0_M024::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Build_RBC_Message_LRBG_353_D_00431_0_M024::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  kcg_copy_R_data_internal_T_Infr(R_data_out, RadiaDataIn);
  /* 1 */
  SendRadioPackets_LRBG_353_D_004(
    &(*RadiaDataIn).packets,
    &(*R_data_out).packets);
  /* 1 */
  Send_M024_JRU_MessageLibBaselin(
    (M_024_int_T_TM_radio_messages *) &LRBG_353_D_00431_0_M024_Message,
    &(*R_data_out).message);
  (*R_data_out).message_sent = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_RBC_Message_LRBG_353_D_00.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


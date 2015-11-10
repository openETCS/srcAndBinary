/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_351_D_00054_9_M00.h"

/* UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003 */
void Send_RBC_LRBG_351_D_00054_9_M00(
  /* UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003::TriggerValue */ kcg_int TriggerValue,
  /* UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003::_L52 */
  static kcg_bool _L52;
  
  _L52 = TriggerValue == (*RadiaDataIn).trigger;
  /* ck__L52 */ if (_L52) {
    /* 1 */ Build_RBC_LRBG_351_D_00054_9_M0(RadiaDataIn, R_data_out);
  }
  else {
    kcg_copy_R_data_internal_T_Infr(R_data_out, RadiaDataIn);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_RBC_LRBG_351_D_00054_9_M00.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


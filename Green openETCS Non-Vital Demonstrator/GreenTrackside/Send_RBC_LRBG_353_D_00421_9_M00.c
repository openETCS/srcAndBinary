/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_353_D_00421_9_M00.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008 */
void Send_RBC_LRBG_353_D_00421_9_M00(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008::TriggerValue */ kcg_int TriggerValue,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008::_L52 */
  static kcg_bool _L52;
  
  _L52 = TriggerValue == (*RadiaDataIn).trigger;
  /* ck__L52 */ if (_L52) {
    /* 1 */ _157_Build_RBC_Message_LRBG_353(RadiaDataIn, R_data_out);
  }
  else {
    kcg_copy_R_data_internal_T_Infr(R_data_out, RadiaDataIn);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_RBC_LRBG_353_D_00421_9_M00.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


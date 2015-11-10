/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet05_Amstel_AmsterdamUtr.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel */
void RBC_Sheet05_Amstel_AmsterdamUtr(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel */
  static R_data_internal_T_InfraLib tmp1;
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel */
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */ Send_RBC_LRBG_353_D_00319_2_M03(RadiaDataIn, 353003192, &tmp);
  /* 1 */ Send_RBC_LRBG_353_D_00421_9_M00(&tmp, 353004219, &tmp1);
  /* 1 */ Send_RBC_LRBG_353_D_00431_0_M02(&tmp1, 353004310, R_data_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Sheet05_Amstel_AmsterdamUtr.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


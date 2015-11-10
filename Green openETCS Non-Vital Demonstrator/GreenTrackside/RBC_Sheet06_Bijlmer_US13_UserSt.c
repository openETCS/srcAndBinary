/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet06_Bijlmer_US13_UserSt.h"

/* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13 */
void RBC_Sheet06_Bijlmer_US13_UserSt(
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13 */
  static R_data_internal_T_InfraLib tmp1;
  /* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13 */
  static R_data_internal_T_InfraLib tmp;
  
  /* 1 */ Send_RBC_LRBG_354_D_00275_3_M00(RadiaDataIn, 354002753, &tmp);
  /* 1 */ Send_RBC_LRBG_351_D_00054_9_M00(&tmp, 351000549, &tmp1);
  /* 1 */ Send_RBC_LRBG_359_D_00030_0_M00(&tmp1, 359000300, R_data_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Sheet06_Bijlmer_US13_UserSt.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


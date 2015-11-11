/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude */
void RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::RBC_Sheet08A_Abcoude::R_data_out */R_data_internal_T_InfraLib *R_data_out)
{
  R_data_internal_T_InfraLib tmp1;
  R_data_internal_T_InfraLib tmp;
  
  /* 1 */
  Send_RBC_LRBG_374_D_00178_9_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    RadiaDataIn,
    374001789,
    &tmp);
  /* 1 */
  Send_RBC_LRBG_375_D_00054_4_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &tmp,
    375000544,
    &tmp1);
  /* 1 */
  Send_RBC_LRBG_376_D_00291_3_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &tmp1,
    376002913,
    R_data_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.c
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */


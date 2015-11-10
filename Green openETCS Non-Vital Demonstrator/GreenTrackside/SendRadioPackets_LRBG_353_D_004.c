/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_353_D_004.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024 */
void SendRadioPackets_LRBG_353_D_004(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::Radio_packets_in */ CompressedPackets_T_Common_Type *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024::Radio_packets_out */ CompressedPackets_T_Common_Type *Radio_packets_out)
{
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024 */
  static CompressedPackets_T_Common_Type tmp;
  
  /* 1 */
  Send_P057_MessageLibBaseline2(
    Radio_packets_in,
    (P057_trackside_int_T_TM *) &LRBG353_P057_Packets426,
    &tmp);
  /* 1 */
  Send_P058_MessageLibBaseline2(
    &tmp,
    (P058_trackside_int_T_TM *) &LRBG353_P058_Packets426,
    Radio_packets_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SendRadioPackets_LRBG_353_D_004.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


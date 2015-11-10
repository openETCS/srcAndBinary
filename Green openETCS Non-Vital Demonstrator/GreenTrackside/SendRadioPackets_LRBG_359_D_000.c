/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_359_D_000.h"

/* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003 */
void SendRadioPackets_LRBG_359_D_000(
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::Radio_packets_in */ CompressedPackets_T_Common_Type *Radio_packets_in,
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003::Radio_packets_out */ CompressedPackets_T_Common_Type *Radio_packets_out)
{
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003 */
  static CompressedPackets_T_Common_Type tmp1;
  /* UserStories13_16::US_13::SendRadioPackets_LRBG_359_D_00030_0_M003 */
  static CompressedPackets_T_Common_Type tmp;
  
  /* 1 */
  Send_P015_MessageLibBaseline2(
    Radio_packets_in,
    (P015_trackside_int_T_TM *) &LRBG354_P015_3_UserStories13_16,
    &tmp);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &tmp,
    (P021_trackside_int_T_TM *) &LRBG354_P021_3_UserStories13_16,
    &tmp1);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &tmp1,
    (P027V1_trackside_int_T_TM_basel *) &LRBG354_P027_3_UserStories13_16,
    &tmp);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &tmp,
    (P005_trackside_int_T_TM *) &LRBG354_P005_3_UserStories13_16,
    &tmp1);
  /* 1 */
  Send_P065_MessageLibBaseline2(
    &tmp1,
    (P065_trackside_int_T_TM *) &LRBG362_P065_1_Packets426,
    Radio_packets_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SendRadioPackets_LRBG_359_D_000.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


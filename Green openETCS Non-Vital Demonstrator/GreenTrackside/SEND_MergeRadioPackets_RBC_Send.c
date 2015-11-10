/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MergeRadioPackets_RBC_Send.h"

/* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
void SEND_MergeRadioPackets_RBC_Send(
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::Header */ _6_Radio_TrackTrain_Header_T_TM *Header,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M03 */ P003V1_trackside_int_T_TM_basel *M03,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M05 */ P005_trackside_int_T_TM *M05,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M15 */ P015_trackside_int_T_TM *M15,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M21 */ P021_trackside_int_T_TM *M21,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M27 */ P027V1_trackside_int_T_TM_basel *M27,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M42 */ P042_trackside_int_T_TM *M42,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M57 */ P057_trackside_int_T_TM *M57,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M58 */ P058_trackside_int_T_TM *M58,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::MessageOUT */ CompressedRadioMessage_TM *MessageOUT)
{
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::RadioMessagePackets_1_2 */
  static CompressedPackets_T_Common_Type RadioMessagePackets_1_2;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L24 */
  static CompressedPackets_T_Common_Type _L24;
  
  kcg_copy__6_Radio_TrackTrain_He(&(*MessageOUT).Header, Header);
  /* ck__L6 */ if ((*M03).valid) {
    /* 1 */
    Write_P003V1_TM_trackside_basel(
      M03,
      (CompressedPackets_T_Common_Type *) &DEFAULT_Packets_TM,
      &op_call,
      &RadioMessagePackets_1_2);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(
      &RadioMessagePackets_1_2,
      (CompressedPackets_T_Common_Type *) &DEFAULT_Packets_TM);
  }
  /* ck__L15 */ if ((*M05).valid) {
    /* 1 */
    Write_P005_TM_trackside(M05, &RadioMessagePackets_1_2, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(&_L24, &RadioMessagePackets_1_2);
  }
  /* ck__L18 */ if ((*M15).valid) {
    /* 1 */
    Write_P015_TM_trackside(M15, &_L24, &op_call, &RadioMessagePackets_1_2);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(&RadioMessagePackets_1_2, &_L24);
  }
  /* ck__L26 */ if ((*M21).valid) {
    /* 1 */
    Write_P021_TM_trackside(M21, &RadioMessagePackets_1_2, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(&_L24, &RadioMessagePackets_1_2);
  }
  /* ck__L28 */ if ((*M27).valid) {
    /* 1 */
    Write_P027V1_TM_trackside_basel(
      M27,
      &_L24,
      &op_call,
      &RadioMessagePackets_1_2);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(&RadioMessagePackets_1_2, &_L24);
  }
  /* ck__L44 */ if ((*M57).valid) {
    /* 1 */
    Write_P057_TM_trackside(M57, &RadioMessagePackets_1_2, &op_call, &_L24);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(&_L24, &RadioMessagePackets_1_2);
  }
  /* ck__L48 */ if ((*M42).valid) {
    /* 1 */
    Write_P042_TM_trackside(M42, &_L24, &op_call, &RadioMessagePackets_1_2);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(&RadioMessagePackets_1_2, &_L24);
  }
  /* ck__L58 */ if ((*M58).valid) {
    /* 1 */
    Write_P058_TM_trackside(
      M58,
      &RadioMessagePackets_1_2,
      &op_call,
      &(*MessageOUT).Messages);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(
      &(*MessageOUT).Messages,
      &RadioMessagePackets_1_2);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MergeRadioPackets_RBC_Send.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertHeader_RBC_Model_Pkg_Tra.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader */
void ConvertHeader_RBC_Model_Pkg_Tra(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::newHeader */ M_TrainTrack_MessageHd_T_TM_rad *newHeader,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::present */ kcg_bool *present,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::oldHeader */ Radio_TrainTrack_Header_T_Radio *oldHeader)
{
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader */
  static Q_EMERGENCYSTOP tmp;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_NID_TEXTMESSAGE */
  static kcg_bool Decode_NID_TEXTMESSAGE_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Emergency_Stop */
  static kcg_bool Decode_Emergency_Stop_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_xT_TRAIN */
  static kcg_bool Decode_xT_TRAIN_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader::Decode_Q_MARQSTREASON */
  static kcg_bool Decode_Q_MARQSTREASON_clock;
  
  *present = (*newHeader).valid;
  (*oldHeader).present = *present;
  Decode_Q_MARQSTREASON_clock = (*newHeader).nid_message == 132;
  Decode_xT_TRAIN_clock = ((*newHeader).nid_message == 137) |
    ((*newHeader).nid_message == 138) | ((*newHeader).nid_message == 146);
  Decode_Emergency_Stop_clock = (*newHeader).nid_message == 147;
  Decode_NID_TEXTMESSAGE_clock = (*newHeader).nid_message == 158;
  (*oldHeader).nid_message = /* 1 */
    CAST_Int_to_NID_MESSAGE_TM_conv((*newHeader).nid_message);
  (*oldHeader).t_train = /* 1 */
    CAST_Int_to_T_TRAIN_TM_conversi((*newHeader).t_train);
  (*oldHeader).nid_engine = /* 1 */
    CAST_Int_to_NID_ENGINE_TM_conve((*newHeader).nid_engine);
  /* ck_Decode_Q_MARQSTREASON */ if (Decode_Q_MARQSTREASON_clock) {
    (*oldHeader).xQ_MARQSTREASON = /* 2 */
      CAST_Int_to_Q_MARQSTREASON_TM_c((*newHeader).field1);
  }
  else {
    (*oldHeader).xQ_MARQSTREASON = cDEFAULT_Q_MARQSTREASON_RBC_Mod;
  }
  /* ck_Decode_xT_TRAIN */ if (Decode_xT_TRAIN_clock) {
    (*oldHeader).xT_TRAIN = /* 3 */
      CAST_Int_to_T_TRAIN_TM_conversi((*newHeader).field1);
  }
  else {
    (*oldHeader).xT_TRAIN = cDEFAULT_T_TRAIN_RBC_Model_Pkg_;
  }
  /* ck_Decode_Emergency_Stop */ if (Decode_Emergency_Stop_clock) {
    (*oldHeader).xNID_EM = /* 2 */
      CAST_Int_to_NID_EM_TM_conversio((*newHeader).field1);
    tmp = /* 2 */ CAST_Int_to_Q_EMERGENCYSTOP_TM_((*newHeader).field2);
  }
  else {
    (*oldHeader).xNID_EM = cDEFAULT_NID_EM_RBC_Model_Pkg_T;
    tmp = cDEFAULT_EMERGENCYSTOP_RBC_Mode;
  }
  (*oldHeader).xQ_EMERGENCYSTOP = tmp;
  /* ck_Decode_NID_TEXTMESSAGE */ if (Decode_NID_TEXTMESSAGE_clock) {
    (*oldHeader).xNID_TEXTMESSAGE = /* 2 */
      CAST_Int_to_NID_TEXTMESSAGE_TM_((*newHeader).field1);
  }
  else {
    (*oldHeader).xNID_TEXTMESSAGE = cDEFAULT_NID_TEXTMESSAGE_RBC_Mo;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertHeader_RBC_Model_Pkg_Tra.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


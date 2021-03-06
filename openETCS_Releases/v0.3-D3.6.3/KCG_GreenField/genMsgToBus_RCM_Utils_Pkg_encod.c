/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genMsgToBus_RCM_Utils_Pkg_encod.h"

#ifndef KCG_USER_DEFINED_INIT
void genMsgToBus_init_RCM_Utils_Pkg_(outC_genMsgToBus_RCM_Utils_Pkg_ *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->msgBus_out[i1].Message.valid = kcg_true;
    outC->msgBus_out[i1].Message.nid_message = 0;
    outC->msgBus_out[i1].Message.l_message = 0;
    outC->msgBus_out[i1].Message.t_train = 0;
    outC->msgBus_out[i1].Message.nid_engine = 0;
    outC->msgBus_out[i1].Message.field1 = 0;
    outC->msgBus_out[i1].Message.field2 = 0;
    outC->msgBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->msgBus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 1 */ Send_M155_init_TM_radio_message(&outC->_2_Context_1);
  /* 1 */ Send_M156_init_TM_radio_message(&outC->_1_Context_1);
  /* 2 */ Send_M159_init_TM_radio_message(&outC->Context_2);
  /* 1 */ Send_M154_init_TM_radio_message(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void genMsgToBus_reset_RCM_Utils_Pkg(outC_genMsgToBus_RCM_Utils_Pkg_ *outC)
{
  /* 1 */ Send_M155_reset_TM_radio_messag(&outC->_2_Context_1);
  /* 1 */ Send_M156_reset_TM_radio_messag(&outC->_1_Context_1);
  /* 2 */ Send_M159_reset_TM_radio_messag(&outC->Context_2);
  /* 1 */ Send_M154_reset_TM_radio_messag(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RCM_Utils_Pkg::encoders::genMsgToBus */
void genMsgToBus_RCM_Utils_Pkg_encod(
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgToTrackTriggers */ msgToTrackTriggers_T_RCM_MsgTyp *msgToTrackTriggers,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train */ T_TRAIN t_train,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train_global */ T_internal_Type_Obu_BasicTypes_ t_train_global,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_in */ M_TrainTrackMessageBus_t_TM_Tra *msgBus_in,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::nid_engine */ NID_ENGINE nid_engine,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m_version */ M_VERSION m_version,
  outC_genMsgToBus_RCM_Utils_Pkg_ *outC)
{
  /* RCM_Utils_Pkg::encoders::genMsgToBus */
  static struct_97873 mk_struct;
  /* RCM_Utils_Pkg::encoders::genMsgToBus */
  static struct_97873 _1_mk_struct;
  /* RCM_Utils_Pkg::encoders::genMsgToBus */
  static struct_97873 _2_mk_struct;
  /* RCM_Utils_Pkg::encoders::genMsgToBus */
  static struct_97873 _3_mk_struct;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train_global_l */
  static T_internal_Type_Obu_BasicTypes_ t_train_global_l;
  
  t_train_global_l = (kcg_int)
      ((kcg_real) (t_train_global + t_train) / (kcg_real) 2);
  /* ck_m155_initiationOfACommunicationSession */ if ((*msgToTrackTriggers).m155_initiationOfACommunication) {
    _3_mk_struct.valid = kcg_true;
    _3_mk_struct.nid_message = co155_Initiation_of_a_communica;
    _3_mk_struct.l_message = 0;
    _3_mk_struct.t_train = t_train;
    _3_mk_struct.nid_engine = nid_engine;
    /* 1 */
    Send_M155_TM_radio_messages(
      t_train_global_l,
      msgBus_in,
      &_3_mk_struct,
      m_version,
      &outC->_2_Context_1);
    kcg_copy_M_TrainTrackMessageBus(
      &outC->msgBus_out,
      &outC->_2_Context_1.MessageBus_out);
  }
  else /* ck_anon_activ */ if ((*msgToTrackTriggers).m156_terminationOfACommunicatio) {
    _2_mk_struct.valid = kcg_true;
    _2_mk_struct.nid_message = co156_Termination_of_a_communic;
    _2_mk_struct.l_message = 0;
    _2_mk_struct.t_train = t_train;
    _2_mk_struct.nid_engine = nid_engine;
    /* 1 */
    Send_M156_TM_radio_messages(
      t_train_global_l,
      msgBus_in,
      &_2_mk_struct,
      m_version,
      &outC->_1_Context_1);
    kcg_copy_M_TrainTrackMessageBus(
      &outC->msgBus_out,
      &outC->_1_Context_1.MessageBus_out);
  }
  else /* ck_anon_activ */ if ((*msgToTrackTriggers).m159_sessionEstablished) {
    _1_mk_struct.valid = kcg_true;
    _1_mk_struct.nid_message = co159_Session_established_Id_Pk;
    _1_mk_struct.l_message = 0;
    _1_mk_struct.t_train = t_train;
    _1_mk_struct.nid_engine = nid_engine;
    /* 2 */
    Send_M159_TM_radio_messages(
      t_train_global_l,
      msgBus_in,
      &_1_mk_struct,
      onboardPhoneNumbers_b,
      m_version,
      &outC->Context_2);
    kcg_copy_M_TrainTrackMessageBus(
      &outC->msgBus_out,
      &outC->Context_2.MessageBus_out);
  }
  else /* ck_anon_activ */ if ((*msgToTrackTriggers).m154_noCompatibleVersionSupport) {
    mk_struct.valid = kcg_true;
    mk_struct.nid_message = co154_No_Compatible_Version_Sup;
    mk_struct.l_message = 0;
    mk_struct.t_train = t_train;
    mk_struct.nid_engine = nid_engine;
    /* 1 */
    Send_M154_TM_radio_messages(
      t_train_global_l,
      msgBus_in,
      &mk_struct,
      m_version,
      &outC->Context_1);
    kcg_copy_M_TrainTrackMessageBus(
      &outC->msgBus_out,
      &outC->Context_1.MessageBus_out);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus(&outC->msgBus_out, msgBus_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** genMsgToBus_RCM_Utils_Pkg_encod.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */


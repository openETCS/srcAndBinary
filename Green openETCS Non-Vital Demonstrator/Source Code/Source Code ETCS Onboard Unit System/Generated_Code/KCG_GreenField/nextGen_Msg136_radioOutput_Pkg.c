/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_Msg136_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void nextGen_Msg136_init_radioOutput(outC_nextGen_Msg136_radioOutput *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->MessageBus_out[i1].Message.valid = kcg_true;
    outC->MessageBus_out[i1].Message.nid_message = 0;
    outC->MessageBus_out[i1].Message.l_message = 0;
    outC->MessageBus_out[i1].Message.t_train = 0;
    outC->MessageBus_out[i1].Message.nid_engine = 0;
    outC->MessageBus_out[i1].Message.field1 = 0;
    outC->MessageBus_out[i1].Message.field2 = 0;
    outC->MessageBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->MessageBus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 2 */ Send_M136_init_TM_radio_message(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGen_Msg136_reset_radioOutpu(outC_nextGen_Msg136_radioOutput *outC)
{
  /* 2 */ Send_M136_reset_TM_radio_messag(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::nextGen_Msg136 */
void nextGen_Msg136_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_Msg136::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* radioOutput_Pkg::nextGen_Msg136::inFromPositionReport */ _8_Radio_TrainTrack_Message_T_R *inFromPositionReport,
  /* radioOutput_Pkg::nextGen_Msg136::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::nextGen_Msg136::inT_TRAIN */ T_TRAIN inT_TRAIN,
  outC_nextGen_Msg136_radioOutput *outC)
{
  /* radioOutput_Pkg::nextGen_Msg136 */
  static M_136_T_TM_radio_messages tmp4;
  /* radioOutput_Pkg::nextGen_Msg136 */
  static P000_TM_TrainToTrack tmp3;
  /* radioOutput_Pkg::nextGen_Msg136 */
  static P001_TM_TrainToTrack tmp2;
  /* radioOutput_Pkg::nextGen_Msg136 */
  static P004_TM_TrainToTrack tmp1;
  /* radioOutput_Pkg::nextGen_Msg136 */
  static P005_TM_TrainToTrack tmp;
  
  /* ck_isPresent */ if ((*inFromPositionReport).present) {
    /* 2 */
    nextGen_MsgHdr136_radioOutput_P(&(*inFromPositionReport).header, &tmp4);
    /* ck__L11 */ if ((*inFromPositionReport).packets.p0.valid) {
      /* 1 */
      nextGen_P00_radioOutput_Pkg(&(*inFromPositionReport).packets.p0, &tmp3);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(
        &tmp3,
        (P000_TM_TrainToTrack *) &noP000_radioOutput_Pkg);
    }
    /* ck__L13 */ if ((*inFromPositionReport).packets.p1.valid) {
      /* 2 */
      nextGen_P01_radioOutput_Pkg(&(*inFromPositionReport).packets.p1, &tmp2);
    }
    else {
      kcg_copy_P001_TM_TrainToTrack(
        &tmp2,
        (P001_TM_TrainToTrack *) &noP001_radioOutput_Pkg);
    }
    /* 1 */
    nextGen_P04_radioOutput_Pkg(&(*inFromPositionReport).packets.p4, &tmp1);
    /* 1 */
    nextGen_P05_radioOutput_Pkg(&(*inFromPositionReport).packets.p5, &tmp);
    /* 2 */
    Send_M136_TM_radio_messages(
      inT_TRAIN,
      MessageBus,
      &tmp4,
      &tmp3,
      &tmp2,
      &tmp1,
      &tmp,
      (P044_TM_TrainToTrack *) &noP044_radioOutput_Pkg,
      inVersion,
      &outC->Context_2);
    kcg_copy_M_TrainTrackMessageBus(
      &outC->MessageBus_out,
      &outC->Context_2.MessageBus_out);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus(&outC->MessageBus_out, MessageBus);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_Msg136_radioOutput_Pkg.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */


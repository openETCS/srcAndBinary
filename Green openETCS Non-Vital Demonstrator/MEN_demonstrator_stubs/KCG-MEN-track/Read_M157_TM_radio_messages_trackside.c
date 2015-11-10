/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_M157_TM_radio_messages_trackside.h"

/* TM_radio_messages_trackside::Read_M157 */
void Read_M157_TM_radio_messages_trackside(
  /* TM_radio_messages_trackside::Read_M157::t_train_global */T_TRAIN t_train_global,
  /* TM_radio_messages_trackside::Read_M157::MessageIn */M_TrainTrack_Message_T_TM_radio_messages *MessageIn,
  /* TM_radio_messages_trackside::Read_M157::Message_157_out */M_157_T_TM_radio_messages *Message_157_out,
  /* TM_radio_messages_trackside::Read_M157::P000 */P000_TM_TrainToTrack *P000,
  /* TM_radio_messages_trackside::Read_M157::P001 */P001_TM_TrainToTrack *P001,
  /* TM_radio_messages_trackside::Read_M157::P004 */P004_TM_TrainToTrack *P004,
  /* TM_radio_messages_trackside::Read_M157::P005 */P005_TM_TrainToTrack *P005,
  /* TM_radio_messages_trackside::Read_M157::P044 */P044_TM_TrainToTrack *P044,
  /* TM_radio_messages_trackside::Read_M157::m_version */M_VERSION *m_version,
  /* TM_radio_messages_trackside::Read_M157::t_train_received */T_TRAIN *t_train_received)
{
  /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1::else */ kcg_bool else_clock_Det_if_P0_or_P1;
  /* TM_radio_messages_trackside::Read_M157::Det_if_P0_or_P1 */ kcg_bool Det_if_P0_or_P1_clock;
  /* TM_radio_messages_trackside::Read_M157::P0_or_P1 */ P000_TrainTrack_int_TM_TrainToTrack P0_or_P1;
  
  *t_train_received = t_train_global;
  *m_version = ENUM_M_VERSION_Version_1_1_TM_conversions;
  /* 1 */
  C_compr_P044_TM_TrainToTrack(
    (P044_TrainTrack_int_TM_TrainToTrack *) &(*MessageIn).OptionalPackets[23],
    P044);
  /* 1 */
  C_compr_P005_TM_TrainToTrack(
    (P005_TrainTrack_int_TM_TrainToTrack *) &(*MessageIn).OptionalPackets[20],
    P005);
  /* 1 */
  C_compr_P004_TM_TrainToTrack(
    (P004_TrainTrack_int_TM_TrainToTrack *) &(*MessageIn).OptionalPackets[17],
    P004);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
    &P0_or_P1,
    (P000_TrainTrack_int_TM_TrainToTrack *) &(*MessageIn).OptionalPackets[0]);
  Det_if_P0_or_P1_clock = P0_or_P1[1] == nid_meta_p000_TM_radio_messages;
  if (Det_if_P0_or_P1_clock) {
    /* 2 */ C_compr_P000_TM_TrainToTrack(&P0_or_P1, P000);
    kcg_copy_P001_TM_TrainToTrack(
      P001,
      (P001_TM_TrainToTrack *) &DEFAULT_P001_TM_radio_messages_trackside);
  }
  else {
    else_clock_Det_if_P0_or_P1 = P0_or_P1[1] == nid_meta_p001_TM_radio_messages;
    if (else_clock_Det_if_P0_or_P1) {
      kcg_copy_P000_TM_TrainToTrack(
        P000,
        (P000_TM_TrainToTrack *) &DEFAULT_P000_TM_radio_messages_trackside);
      /* 1 */ C_compr_P001_TM_TrainToTrack(&P0_or_P1, P001);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(
        P000,
        (P000_TM_TrainToTrack *) &DEFAULT_P000_TM_radio_messages_trackside);
      kcg_copy_P001_TM_TrainToTrack(
        P001,
        (P001_TM_TrainToTrack *) &DEFAULT_P001_TM_radio_messages_trackside);
    }
  }
  /* 1 */
  C_header_to_M157_TM_RBC_conversions(&(*MessageIn).Message, Message_157_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_M157_TM_radio_messages_trackside.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */


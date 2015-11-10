/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_M003_TM_radio_messages.h"

/* TM_radio_messages::Read_M003 */
void Read_M003_TM_radio_messages(
  /* TM_radio_messages::Read_M003::RadioHeaderUniversalIn */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeaderUniversalIn,
  /* TM_radio_messages::Read_M003::received */kcg_bool *received,
  /* TM_radio_messages::Read_M003::M003_out */M_003_T_TM_radio_messages *M003_out)
{
  *received = nid_message_TrackTrain_003_TM_radio_messages == /* 1 */
    CAST_NID_MESSAGE_to_int_TM_conversions(
      (*RadioHeaderUniversalIn).nid_message);
  if (*received) {
    /* 1 */
    Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy(
      RadioHeaderUniversalIn,
      M003_out);
  }
  else {
    kcg_copy_M_003_T_TM_radio_messages(
      M003_out,
      (M_003_T_TM_radio_messages *) &DEFAULT_M003_TM_radio_messages);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_M003_TM_radio_messages.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */


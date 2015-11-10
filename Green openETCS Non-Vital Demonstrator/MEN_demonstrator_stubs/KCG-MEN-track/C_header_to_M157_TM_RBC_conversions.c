/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M157_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M157 */
void C_header_to_M157_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M157::header_in */M_TrainTrack_MessageHd_T_TM_radio_messages *header_in,
  /* TM_RBC_conversions::C_header_to_M157::message_out */M_157_T_TM_radio_messages *message_out)
{
  (*message_out).valid = (*header_in).valid;
  (*message_out).nid_message = /* 1 */
    CAST_Int_to_NID_MESSAGE_TM_conversions((*header_in).nid_message);
  (*message_out).l_message = /* 1 */
    CAST_Int_to_L_MESSAGE_TM_conversions((*header_in).l_message);
  (*message_out).t_train = /* 1 */
    CAST_Int_to_T_TRAIN_TM_conversions((*header_in).t_train);
  (*message_out).nid_engine = /* 1 */
    CAST_Int_to_NID_ENGINE_TM_conversions((*header_in).nid_engine);
  (*message_out).q_status = /* 1 */
    CAST_Int_to_Q_STATUS_TM_conversions((*header_in).field1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M157_TM_RBC_conversions.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */


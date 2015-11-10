/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.h"

/* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003 */
void Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::RadioHeaderUniversalIn */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeaderUniversalIn,
  /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::M003_out */M_003_T_TM_radio_messages *M003_out)
{
  (*M003_out).valid = kcg_true;
  (*M003_out).nid_message = (*RadioHeaderUniversalIn).nid_message;
  (*M003_out).l_message = 0;
  (*M003_out).t_train = (*RadioHeaderUniversalIn).t_train;
  (*M003_out).m_ack = (*RadioHeaderUniversalIn).m_ack;
  (*M003_out).nid_lrbg = (*RadioHeaderUniversalIn).nid_lrbg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */


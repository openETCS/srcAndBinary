/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M038_to_Radio_Track_Train_H_TM_.h"

/* TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H */
void M038_to_Radio_Track_Train_H_TM_(
  /* TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H::M038_in */ M_038_T_TM_radio_messages *M038_in,
  /* TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H::Radio_Track_Train_Hd_out */ _1_Radio_TrackTrain_Header_T_Ra *Radio_Track_Train_Hd_out)
{
  (*Radio_Track_Train_Hd_out).radioDevice = default_radioDevice_TM_RBC_conv;
  (*Radio_Track_Train_Hd_out).receivedSystemTime =
    default_receivedSystemTime_TM_R;
  (*Radio_Track_Train_Hd_out).nid_message = (*M038_in).nid_message;
  (*Radio_Track_Train_Hd_out).t_train = (*M038_in).t_train;
  (*Radio_Track_Train_Hd_out).m_ack = (*M038_in).m_ack;
  (*Radio_Track_Train_Hd_out).nid_lrbg = (*M038_in).nid_lrbg;
  (*Radio_Track_Train_Hd_out).t_train_reference =
    default_t_train_reference_TM_RB;
  (*Radio_Track_Train_Hd_out).nid_em = default_nid_em_TM_RBC_conversio;
  (*Radio_Track_Train_Hd_out).q_scale = default_q_scale_TM_RBC_conversi;
  (*Radio_Track_Train_Hd_out).d_sr = default_d_sr_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).t_sh_rqst = default_t_sh_rqst_TM_RBC_conver;
  (*Radio_Track_Train_Hd_out).d_ref = default_d_ref_TM_RBC_conversion;
  (*Radio_Track_Train_Hd_out).q_dir = default_q_dir_TM_RBC_conversion;
  (*Radio_Track_Train_Hd_out).d_emergencystop = default_d_emergencystop_TM_RBC_;
  (*Radio_Track_Train_Hd_out).m_version = default_m_version_TM_RBC_conver;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** M038_to_Radio_Track_Train_H_TM_.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RTM_Toolbox_TrainModules.h"

void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC)
{
  outC->init3 = kcg_true;
  outC->init = kcg_true;
  outC->init2 = kcg_true;
}

/* Toolbox::TrainModules::RTM */
void RTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::RTM::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::RTM::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::RTM::RadioHeader */Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* Toolbox::TrainModules::RTM::RadioManagementMessage */RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC)
{
  static kcg_int i;
  static RadioMetadata_T_Common_Types_Pkg tmp;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registering */
  static kcg_bool br_2_guard_GSM_R_MobileManagement_Registering;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registered */
  static kcg_bool br_2_guard_GSM_R_MobileManagement_Registered;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registered */
  static kcg_bool br_1_guard_GSM_R_MobileManagement_Registered;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connecting */
  static kcg_bool br_2_guard_GSM_R_MobileManagement_Connecting;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connected */
  static kcg_bool br_2_guard_GSM_R_MobileManagement_Connected;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connected */
  static kcg_bool br_1_guard_GSM_R_MobileManagement_Connected;
  /* Toolbox::TrainModules::RTM::connectionEstablished */
  static kcg_bool last_connectionEstablished;
  /* Toolbox::TrainModules::RTM::registrationFinished */
  static kcg_bool last_registrationFinished;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool GSM_R_MobileManagement_reset_act;
  
  outC->TrackMessage.systemTimeMsgReceived = systemTime;
  outC->TrackMessage.msg_type = msrc_Euroradio_Common_Types_Pkg;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(
    &outC->TrackMessage.btm_msg,
    (API_TelegramHeader_T_API_Msg_Pkg *) &cEmptyBtmMessageHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->TrackMessage.packets,
    Packets);
  if (outC->init3) {
    outC->GSM_R_MobileManagement_state_sel =
      SSM_st_Not_registered_GSM_R_MobileManagement;
    last_connectionEstablished = kcg_false;
    outC->init3 = kcg_false;
    last_registrationFinished = kcg_false;
  }
  else {
    outC->GSM_R_MobileManagement_state_sel =
      outC->GSM_R_MobileManagement_state_nxt;
    last_connectionEstablished = outC->connectionEstablished;
    last_registrationFinished = outC->registrationFinished;
  }
  switch (outC->GSM_R_MobileManagement_state_sel) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      br_1_guard_GSM_R_MobileManagement_Connected =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_disconnection_request_API_RadioCommunication_Pkg);
      br_2_guard_GSM_R_MobileManagement_Connected =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (br_1_guard_GSM_R_MobileManagement_Connected) {
        outC->GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
        outC->GSM_R_MobileManagement_fired_strong =
          SSM_TR_Connected_1_GSM_R_MobileManagement;
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        if (br_2_guard_GSM_R_MobileManagement_Connected) {
          outC->GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
          outC->GSM_R_MobileManagement_fired_strong =
            SSM_TR_Connected_2_GSM_R_MobileManagement;
        }
        else {
          outC->GSM_R_MobileManagement_state_act =
            SSM_st_Connected_GSM_R_MobileManagement;
          outC->GSM_R_MobileManagement_fired_strong =
            SSM_TR_no_trans_GSM_R_MobileManagement;
        }
        GSM_R_MobileManagement_reset_act =
          br_2_guard_GSM_R_MobileManagement_Connected;
      }
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      br_2_guard_GSM_R_MobileManagement_Connecting =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (last_connectionEstablished) {
        outC->GSM_R_MobileManagement_state_act =
          SSM_st_Connected_GSM_R_MobileManagement;
        outC->GSM_R_MobileManagement_fired_strong =
          SSM_TR_Connecting_1_GSM_R_MobileManagement;
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        if (br_2_guard_GSM_R_MobileManagement_Connecting) {
          outC->GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
          outC->GSM_R_MobileManagement_fired_strong =
            SSM_TR_Connecting_2_GSM_R_MobileManagement;
        }
        else {
          outC->GSM_R_MobileManagement_state_act =
            SSM_st_Connecting_GSM_R_MobileManagement;
          outC->GSM_R_MobileManagement_fired_strong =
            SSM_TR_no_trans_GSM_R_MobileManagement;
        }
        GSM_R_MobileManagement_reset_act =
          br_2_guard_GSM_R_MobileManagement_Connecting;
      }
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      br_1_guard_GSM_R_MobileManagement_Registered =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_connection_request_API_RadioCommunication_Pkg);
      br_2_guard_GSM_R_MobileManagement_Registered =
        ((*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
            cmdr_reset_connection_API_RadioCommunication_Pkg)) |
        ((*RadioManagementMessage).cmd ==
          cmdr_networkUnregister_API_RadioCommunication_Pkg);
      if (br_1_guard_GSM_R_MobileManagement_Registered) {
        outC->GSM_R_MobileManagement_state_act =
          SSM_st_Connecting_GSM_R_MobileManagement;
        outC->GSM_R_MobileManagement_fired_strong =
          SSM_TR_Registered_1_GSM_R_MobileManagement;
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        if (br_2_guard_GSM_R_MobileManagement_Registered) {
          outC->GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
          outC->GSM_R_MobileManagement_fired_strong =
            SSM_TR_Registered_2_GSM_R_MobileManagement;
        }
        else {
          outC->GSM_R_MobileManagement_state_act =
            SSM_st_Registered_GSM_R_MobileManagement;
          outC->GSM_R_MobileManagement_fired_strong =
            SSM_TR_no_trans_GSM_R_MobileManagement;
        }
        GSM_R_MobileManagement_reset_act =
          br_2_guard_GSM_R_MobileManagement_Registered;
      }
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      br_2_guard_GSM_R_MobileManagement_Registering =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (last_registrationFinished) {
        outC->GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
        outC->GSM_R_MobileManagement_fired_strong =
          SSM_TR_Registering_1_GSM_R_MobileManagement;
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        if (br_2_guard_GSM_R_MobileManagement_Registering) {
          outC->GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
          outC->GSM_R_MobileManagement_fired_strong =
            SSM_TR_Registering_2_GSM_R_MobileManagement;
        }
        else {
          outC->GSM_R_MobileManagement_state_act =
            SSM_st_Registering_GSM_R_MobileManagement;
          outC->GSM_R_MobileManagement_fired_strong =
            SSM_TR_no_trans_GSM_R_MobileManagement;
        }
        GSM_R_MobileManagement_reset_act =
          br_2_guard_GSM_R_MobileManagement_Registering;
      }
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      GSM_R_MobileManagement_reset_act = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_networkRegister_API_RadioCommunication_Pkg);
      if (GSM_R_MobileManagement_reset_act) {
        outC->GSM_R_MobileManagement_state_act =
          SSM_st_Registering_GSM_R_MobileManagement;
        outC->GSM_R_MobileManagement_fired_strong =
          SSM_TR_Not_registered_1_GSM_R_MobileManagement;
      }
      else {
        outC->GSM_R_MobileManagement_state_act =
          SSM_st_Not_registered_GSM_R_MobileManagement;
        outC->GSM_R_MobileManagement_fired_strong =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      break;
    
  }
  /* 1 */ C_Int_TrackTrainMessage_TM_conversions(RadioHeader, &outC->_L51);
  outC->IfBlock1_clock = (*RadioHeader).nid_message == 2;
  outC->_L30 = outC->_L51.nid_message != 0;
  outC->TrackMessage.valid = outC->_L30;
  if (outC->IfBlock1_clock) {
    tmp.t_train_reference = kcg_false;
    tmp.nid_em = kcg_false;
    tmp.q_scale = kcg_true;
    tmp.d_sr = kcg_true;
    tmp.t_sh_rqst = kcg_false;
    tmp.d_ref = kcg_false;
    tmp.q_dir = kcg_false;
    tmp.d_emergencystop = kcg_false;
    tmp.m_version = kcg_false;
  }
  else {
    outC->_22_else_clock_IfBlock1 = (*RadioHeader).nid_message == 3;
    if (outC->_22_else_clock_IfBlock1) {
      tmp.t_train_reference = kcg_false;
      tmp.nid_em = kcg_false;
      tmp.q_scale = kcg_false;
      tmp.d_sr = kcg_false;
      tmp.t_sh_rqst = kcg_false;
      tmp.d_ref = kcg_false;
      tmp.q_dir = kcg_false;
      tmp.d_emergencystop = kcg_false;
      tmp.m_version = kcg_false;
    }
    else {
      outC->_21_else_clock_IfBlock1 = (*RadioHeader).nid_message == 6;
      if (outC->_21_else_clock_IfBlock1) {
        tmp.t_train_reference = kcg_false;
        tmp.nid_em = kcg_false;
        tmp.q_scale = kcg_false;
        tmp.d_sr = kcg_false;
        tmp.t_sh_rqst = kcg_false;
        tmp.d_ref = kcg_false;
        tmp.q_dir = kcg_false;
        tmp.d_emergencystop = kcg_false;
        tmp.m_version = kcg_false;
      }
      else {
        outC->_20_else_clock_IfBlock1 = (*RadioHeader).nid_message == 8;
        if (outC->_20_else_clock_IfBlock1) {
          tmp.t_train_reference = kcg_true;
          tmp.nid_em = kcg_false;
          tmp.q_scale = kcg_false;
          tmp.d_sr = kcg_false;
          tmp.t_sh_rqst = kcg_false;
          tmp.d_ref = kcg_false;
          tmp.q_dir = kcg_false;
          tmp.d_emergencystop = kcg_false;
          tmp.m_version = kcg_false;
        }
        else {
          outC->_19_else_clock_IfBlock1 = (*RadioHeader).nid_message == 9;
          if (outC->_19_else_clock_IfBlock1) {
            tmp.t_train_reference = kcg_false;
            tmp.nid_em = kcg_false;
            tmp.q_scale = kcg_false;
            tmp.d_sr = kcg_false;
            tmp.t_sh_rqst = kcg_false;
            tmp.d_ref = kcg_false;
            tmp.q_dir = kcg_false;
            tmp.d_emergencystop = kcg_false;
            tmp.m_version = kcg_false;
          }
          else {
            outC->_18_else_clock_IfBlock1 = (*RadioHeader).nid_message == 15;
            if (outC->_18_else_clock_IfBlock1) {
              tmp.t_train_reference = kcg_false;
              tmp.nid_em = kcg_true;
              tmp.q_scale = kcg_true;
              tmp.d_sr = kcg_false;
              tmp.t_sh_rqst = kcg_false;
              tmp.d_ref = kcg_true;
              tmp.q_dir = kcg_true;
              tmp.d_emergencystop = kcg_true;
              tmp.m_version = kcg_false;
            }
            else {
              outC->_17_else_clock_IfBlock1 = (*RadioHeader).nid_message == 16;
              if (outC->_17_else_clock_IfBlock1) {
                tmp.t_train_reference = kcg_false;
                tmp.nid_em = kcg_true;
                tmp.q_scale = kcg_false;
                tmp.d_sr = kcg_false;
                tmp.t_sh_rqst = kcg_false;
                tmp.d_ref = kcg_false;
                tmp.q_dir = kcg_false;
                tmp.d_emergencystop = kcg_false;
                tmp.m_version = kcg_false;
              }
              else {
                outC->_16_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                  18;
                if (outC->_16_else_clock_IfBlock1) {
                  tmp.t_train_reference = kcg_false;
                  tmp.nid_em = kcg_true;
                  tmp.q_scale = kcg_false;
                  tmp.d_sr = kcg_false;
                  tmp.t_sh_rqst = kcg_false;
                  tmp.d_ref = kcg_false;
                  tmp.q_dir = kcg_false;
                  tmp.d_emergencystop = kcg_false;
                  tmp.m_version = kcg_false;
                }
                else {
                  outC->_15_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                    24;
                  if (outC->_15_else_clock_IfBlock1) {
                    tmp.t_train_reference = kcg_false;
                    tmp.nid_em = kcg_false;
                    tmp.q_scale = kcg_false;
                    tmp.d_sr = kcg_false;
                    tmp.t_sh_rqst = kcg_false;
                    tmp.d_ref = kcg_false;
                    tmp.q_dir = kcg_false;
                    tmp.d_emergencystop = kcg_false;
                    tmp.m_version = kcg_false;
                  }
                  else {
                    outC->_14_else_clock_IfBlock1 =
                      (*RadioHeader).nid_message == 27;
                    if (outC->_14_else_clock_IfBlock1) {
                      tmp.t_train_reference = kcg_true;
                      tmp.nid_em = kcg_false;
                      tmp.q_scale = kcg_false;
                      tmp.d_sr = kcg_false;
                      tmp.t_sh_rqst = kcg_false;
                      tmp.d_ref = kcg_false;
                      tmp.q_dir = kcg_false;
                      tmp.d_emergencystop = kcg_false;
                      tmp.m_version = kcg_false;
                    }
                    else {
                      outC->_13_else_clock_IfBlock1 =
                        (*RadioHeader).nid_message == 28;
                      if (outC->_13_else_clock_IfBlock1) {
                        tmp.t_train_reference = kcg_true;
                        tmp.nid_em = kcg_false;
                        tmp.q_scale = kcg_false;
                        tmp.d_sr = kcg_false;
                        tmp.t_sh_rqst = kcg_false;
                        tmp.d_ref = kcg_false;
                        tmp.q_dir = kcg_false;
                        tmp.d_emergencystop = kcg_false;
                        tmp.m_version = kcg_false;
                      }
                      else {
                        outC->_12_else_clock_IfBlock1 =
                          (*RadioHeader).nid_message == 32;
                        if (outC->_12_else_clock_IfBlock1) {
                          tmp.t_train_reference = kcg_false;
                          tmp.nid_em = kcg_false;
                          tmp.q_scale = kcg_false;
                          tmp.d_sr = kcg_false;
                          tmp.t_sh_rqst = kcg_false;
                          tmp.d_ref = kcg_false;
                          tmp.q_dir = kcg_false;
                          tmp.d_emergencystop = kcg_false;
                          tmp.m_version = kcg_true;
                        }
                        else {
                          outC->_11_else_clock_IfBlock1 =
                            (*RadioHeader).nid_message == 33;
                          if (outC->_11_else_clock_IfBlock1) {
                            tmp.t_train_reference = kcg_false;
                            tmp.nid_em = kcg_false;
                            tmp.q_scale = kcg_true;
                            tmp.d_sr = kcg_false;
                            tmp.t_sh_rqst = kcg_false;
                            tmp.d_ref = kcg_true;
                            tmp.q_dir = kcg_false;
                            tmp.d_emergencystop = kcg_false;
                            tmp.m_version = kcg_false;
                          }
                          else {
                            outC->_10_else_clock_IfBlock1 =
                              (*RadioHeader).nid_message == 34;
                            if (outC->_10_else_clock_IfBlock1) {
                              tmp.t_train_reference = kcg_false;
                              tmp.nid_em = kcg_false;
                              tmp.q_scale = kcg_true;
                              tmp.d_sr = kcg_false;
                              tmp.t_sh_rqst = kcg_false;
                              tmp.d_ref = kcg_true;
                              tmp.q_dir = kcg_true;
                              tmp.d_emergencystop = kcg_false;
                              tmp.m_version = kcg_false;
                            }
                            else {
                              outC->_9_else_clock_IfBlock1 =
                                (*RadioHeader).nid_message == 37;
                              if (outC->_9_else_clock_IfBlock1) {
                                tmp.t_train_reference = kcg_false;
                                tmp.nid_em = kcg_false;
                                tmp.q_scale = kcg_false;
                                tmp.d_sr = kcg_false;
                                tmp.t_sh_rqst = kcg_false;
                                tmp.d_ref = kcg_false;
                                tmp.q_dir = kcg_false;
                                tmp.d_emergencystop = kcg_false;
                                tmp.m_version = kcg_false;
                              }
                              else {
                                outC->_8_else_clock_IfBlock1 =
                                  (*RadioHeader).nid_message == 38;
                                if (outC->_8_else_clock_IfBlock1) {
                                  tmp.t_train_reference = kcg_false;
                                  tmp.nid_em = kcg_false;
                                  tmp.q_scale = kcg_false;
                                  tmp.d_sr = kcg_false;
                                  tmp.t_sh_rqst = kcg_false;
                                  tmp.d_ref = kcg_false;
                                  tmp.q_dir = kcg_false;
                                  tmp.d_emergencystop = kcg_false;
                                  tmp.m_version = kcg_false;
                                }
                                else {
                                  outC->_7_else_clock_IfBlock1 =
                                    (*RadioHeader).nid_message == 39;
                                  if (outC->_7_else_clock_IfBlock1) {
                                    tmp.t_train_reference = kcg_false;
                                    tmp.nid_em = kcg_false;
                                    tmp.q_scale = kcg_false;
                                    tmp.d_sr = kcg_false;
                                    tmp.t_sh_rqst = kcg_false;
                                    tmp.d_ref = kcg_false;
                                    tmp.q_dir = kcg_false;
                                    tmp.d_emergencystop = kcg_false;
                                    tmp.m_version = kcg_false;
                                  }
                                  else {
                                    outC->_6_else_clock_IfBlock1 =
                                      (*RadioHeader).nid_message == 40;
                                    if (outC->_6_else_clock_IfBlock1) {
                                      tmp.t_train_reference = kcg_false;
                                      tmp.nid_em = kcg_false;
                                      tmp.q_scale = kcg_false;
                                      tmp.d_sr = kcg_false;
                                      tmp.t_sh_rqst = kcg_false;
                                      tmp.d_ref = kcg_false;
                                      tmp.q_dir = kcg_false;
                                      tmp.d_emergencystop = kcg_false;
                                      tmp.m_version = kcg_false;
                                    }
                                    else {
                                      outC->_5_else_clock_IfBlock1 =
                                        (*RadioHeader).nid_message == 41;
                                      if (outC->_5_else_clock_IfBlock1) {
                                        tmp.t_train_reference = kcg_false;
                                        tmp.nid_em = kcg_false;
                                        tmp.q_scale = kcg_false;
                                        tmp.d_sr = kcg_false;
                                        tmp.t_sh_rqst = kcg_false;
                                        tmp.d_ref = kcg_false;
                                        tmp.q_dir = kcg_false;
                                        tmp.d_emergencystop = kcg_false;
                                        tmp.m_version = kcg_false;
                                      }
                                      else {
                                        outC->_4_else_clock_IfBlock1 =
                                          (*RadioHeader).nid_message == 43;
                                        if (outC->_4_else_clock_IfBlock1) {
                                          tmp.t_train_reference = kcg_false;
                                          tmp.nid_em = kcg_false;
                                          tmp.q_scale = kcg_false;
                                          tmp.d_sr = kcg_false;
                                          tmp.t_sh_rqst = kcg_false;
                                          tmp.d_ref = kcg_false;
                                          tmp.q_dir = kcg_false;
                                          tmp.d_emergencystop = kcg_false;
                                          tmp.m_version = kcg_false;
                                        }
                                        else {
                                          outC->else_clock_IfBlock1 =
                                            (*RadioHeader).nid_message == 45;
                                          if (outC->else_clock_IfBlock1) {
                                            tmp.t_train_reference = kcg_false;
                                            tmp.nid_em = kcg_false;
                                            tmp.q_scale = kcg_false;
                                            tmp.d_sr = kcg_false;
                                            tmp.t_sh_rqst = kcg_false;
                                            tmp.d_ref = kcg_false;
                                            tmp.q_dir = kcg_false;
                                            tmp.d_emergencystop = kcg_false;
                                            tmp.m_version = kcg_false;
                                          }
                                          else {
                                            tmp.t_train_reference = kcg_false;
                                            tmp.nid_em = kcg_false;
                                            tmp.q_scale = kcg_false;
                                            tmp.d_sr = kcg_false;
                                            tmp.t_sh_rqst = kcg_false;
                                            tmp.d_ref = kcg_false;
                                            tmp.q_dir = kcg_false;
                                            tmp.d_emergencystop = kcg_false;
                                            tmp.m_version = kcg_false;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  outC->TrackMessage.rtm_msg.present = outC->_L30;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_false;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->TrackMessage.rtm_msg.Radio_Common_Header,
    &outC->_L51);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->TrackMessage.rtm_msg.Radio_MetaData,
    &tmp);
  outC->TrackMessage.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.device_id = 0;
  switch (outC->GSM_R_MobileManagement_state_act) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_fired =
        outC->GSM_R_MobileManagement_fired_strong;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Connected_GSM_R_MobileManagement;
      outC->connectionEstablished = last_connectionEstablished;
      outC->registrationFinished = last_registrationFinished;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_fired =
        outC->GSM_R_MobileManagement_fired_strong;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Connecting_GSM_R_MobileManagement;
      if (GSM_R_MobileManagement_reset_act) {
        outC->init2 = kcg_true;
      }
      if (outC->init2) {
        for (i = 0; i < 5; i++) {
          outC->_1_fby_RTM_Toolbox_TrainModules.items[i] = kcg_false;
        }
        outC->_1_fby_RTM_Toolbox_TrainModules.idx = 0;
      }
      outC->connectionEstablished =
        outC->_1_fby_RTM_Toolbox_TrainModules.items[outC->_1_fby_RTM_Toolbox_TrainModules.idx];
      outC->_1_fby_RTM_Toolbox_TrainModules.items[outC->_1_fby_RTM_Toolbox_TrainModules.idx] =
        kcg_true;
      outC->_1_fby_RTM_Toolbox_TrainModules.idx =
        (outC->_1_fby_RTM_Toolbox_TrainModules.idx + 1) % 5;
      outC->registrationFinished = last_registrationFinished;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      outC->init2 = kcg_false;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_fired =
        outC->GSM_R_MobileManagement_fired_strong;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Registered_GSM_R_MobileManagement;
      outC->connectionEstablished = last_connectionEstablished;
      outC->registrationFinished = last_registrationFinished;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_fired =
        outC->GSM_R_MobileManagement_fired_strong;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Registering_GSM_R_MobileManagement;
      outC->connectionEstablished = last_connectionEstablished;
      if (GSM_R_MobileManagement_reset_act) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        for (i = 0; i < 5; i++) {
          outC->fby_RTM_Toolbox_TrainModules.items[i] = kcg_false;
        }
        outC->fby_RTM_Toolbox_TrainModules.idx = 0;
      }
      outC->registrationFinished =
        outC->fby_RTM_Toolbox_TrainModules.items[outC->fby_RTM_Toolbox_TrainModules.idx];
      outC->fby_RTM_Toolbox_TrainModules.items[outC->fby_RTM_Toolbox_TrainModules.idx] =
        kcg_true;
      outC->fby_RTM_Toolbox_TrainModules.idx =
        (outC->fby_RTM_Toolbox_TrainModules.idx + 1) % 5;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      outC->init = kcg_false;
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      outC->GSM_R_MobileManagement_fired =
        outC->GSM_R_MobileManagement_fired_strong;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Not_registered_GSM_R_MobileManagement;
      outC->connectionEstablished = last_connectionEstablished;
      outC->registrationFinished = last_registrationFinished;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RTM_Toolbox_TrainModules.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMandatoryVariablesAndMA_Ch.h"

/* CheckEuroradioMessage::CheckMandatoryVariablesAndMA */
kcg_bool CheckMandatoryVariablesAndMA_Ch(
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::rtmMessage */ ReceivedMessage_T_Common_Types_ *rtmMessage)
{
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckEuroradioMessage::CheckMandatoryVariablesAndMA::valid */
  static kcg_bool valid;
  
  IfBlock1_clock = (*rtmMessage).Radio_Common_Header.nid_message == 3;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    valid = !((*rtmMessage).radioMetadata.t_train_reference |
        (*rtmMessage).radioMetadata.nid_em |
        (*rtmMessage).radioMetadata.q_scale | (*rtmMessage).radioMetadata.d_sr |
        (*rtmMessage).radioMetadata.t_sh_rqst |
        (*rtmMessage).radioMetadata.d_ref | (*rtmMessage).radioMetadata.q_dir |
        (*rtmMessage).radioMetadata.d_emergencystop |
        (*rtmMessage).radioMetadata.m_version) & /* 1 */
      CheckIfPacket15IsPresent_CheckE(rtmMessage);
  }
  else {
    _9_else_clock_IfBlock1 = (*rtmMessage).Radio_Common_Header.nid_message == 8;
    /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
      valid = !(!(*rtmMessage).radioMetadata.t_train_reference |
          (*rtmMessage).radioMetadata.nid_em |
          (*rtmMessage).radioMetadata.q_scale |
          (*rtmMessage).radioMetadata.d_sr |
          (*rtmMessage).radioMetadata.t_sh_rqst |
          (*rtmMessage).radioMetadata.d_ref |
          (*rtmMessage).radioMetadata.q_dir |
          (*rtmMessage).radioMetadata.d_emergencystop |
          (*rtmMessage).radioMetadata.m_version);
    }
    else {
      _8_else_clock_IfBlock1 = (*rtmMessage).Radio_Common_Header.nid_message ==
        9;
      /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
        valid = !((*rtmMessage).radioMetadata.t_train_reference |
            (*rtmMessage).radioMetadata.nid_em |
            (*rtmMessage).radioMetadata.q_scale |
            (*rtmMessage).radioMetadata.d_sr |
            (*rtmMessage).radioMetadata.t_sh_rqst |
            (*rtmMessage).radioMetadata.d_ref |
            (*rtmMessage).radioMetadata.q_dir |
            (*rtmMessage).radioMetadata.d_emergencystop |
            (*rtmMessage).radioMetadata.m_version) & /* 3 */
          CheckIfPacket15IsPresent_CheckE(rtmMessage);
      }
      else {
        _7_else_clock_IfBlock1 =
          (*rtmMessage).Radio_Common_Header.nid_message == 15;
        /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
          valid = !((*rtmMessage).radioMetadata.t_train_reference |
              !(*rtmMessage).radioMetadata.nid_em |
              !(*rtmMessage).radioMetadata.q_scale |
              (*rtmMessage).radioMetadata.d_sr |
              (*rtmMessage).radioMetadata.t_sh_rqst |
              !(*rtmMessage).radioMetadata.d_ref |
              !(*rtmMessage).radioMetadata.q_dir |
              !(*rtmMessage).radioMetadata.d_emergencystop |
              (*rtmMessage).radioMetadata.m_version);
        }
        else {
          _6_else_clock_IfBlock1 =
            (*rtmMessage).Radio_Common_Header.nid_message == 16;
          /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
            valid = !((*rtmMessage).radioMetadata.t_train_reference |
                !(*rtmMessage).radioMetadata.nid_em |
                (*rtmMessage).radioMetadata.q_scale |
                (*rtmMessage).radioMetadata.d_sr |
                (*rtmMessage).radioMetadata.t_sh_rqst |
                (*rtmMessage).radioMetadata.d_ref |
                (*rtmMessage).radioMetadata.q_dir |
                (*rtmMessage).radioMetadata.d_emergencystop |
                (*rtmMessage).radioMetadata.m_version);
          }
          else {
            _5_else_clock_IfBlock1 =
              (*rtmMessage).Radio_Common_Header.nid_message == 18;
            /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
              valid = !((*rtmMessage).radioMetadata.t_train_reference |
                  !(*rtmMessage).radioMetadata.nid_em |
                  (*rtmMessage).radioMetadata.q_scale |
                  (*rtmMessage).radioMetadata.d_sr |
                  (*rtmMessage).radioMetadata.t_sh_rqst |
                  (*rtmMessage).radioMetadata.d_ref |
                  (*rtmMessage).radioMetadata.q_dir |
                  (*rtmMessage).radioMetadata.d_emergencystop |
                  (*rtmMessage).radioMetadata.m_version);
            }
            else {
              _4_else_clock_IfBlock1 =
                (*rtmMessage).Radio_Common_Header.nid_message == 24;
              /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                valid = !((*rtmMessage).radioMetadata.t_train_reference |
                    (*rtmMessage).radioMetadata.nid_em |
                    (*rtmMessage).radioMetadata.q_scale |
                    (*rtmMessage).radioMetadata.d_sr |
                    (*rtmMessage).radioMetadata.t_sh_rqst |
                    (*rtmMessage).radioMetadata.d_ref |
                    (*rtmMessage).radioMetadata.q_dir |
                    (*rtmMessage).radioMetadata.d_emergencystop |
                    (*rtmMessage).radioMetadata.m_version);
              }
              else {
                _3_else_clock_IfBlock1 =
                  (*rtmMessage).Radio_Common_Header.nid_message == 32;
                /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                  valid = !((*rtmMessage).radioMetadata.t_train_reference |
                      (*rtmMessage).radioMetadata.nid_em |
                      (*rtmMessage).radioMetadata.q_scale |
                      (*rtmMessage).radioMetadata.d_sr |
                      (*rtmMessage).radioMetadata.t_sh_rqst |
                      (*rtmMessage).radioMetadata.d_ref |
                      (*rtmMessage).radioMetadata.q_dir |
                      (*rtmMessage).radioMetadata.d_emergencystop |
                      !(*rtmMessage).radioMetadata.m_version);
                }
                else {
                  _2_else_clock_IfBlock1 =
                    (*rtmMessage).Radio_Common_Header.nid_message == 33;
                  /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                    valid = !((*rtmMessage).radioMetadata.t_train_reference |
                        (*rtmMessage).radioMetadata.nid_em |
                        !(*rtmMessage).radioMetadata.q_scale |
                        (*rtmMessage).radioMetadata.d_sr |
                        (*rtmMessage).radioMetadata.t_sh_rqst |
                        !(*rtmMessage).radioMetadata.d_ref |
                        (*rtmMessage).radioMetadata.q_dir |
                        (*rtmMessage).radioMetadata.d_emergencystop |
                        (*rtmMessage).radioMetadata.m_version) & /* 5 */
                      CheckIfPacket15IsPresent_CheckE(rtmMessage);
                  }
                  else {
                    _1_else_clock_IfBlock1 =
                      (*rtmMessage).Radio_Common_Header.nid_message == 39;
                    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                      valid = (*rtmMessage).Radio_Common_Header.m_ack ==
                        M_ACK_No_acknowledgement_requir;
                    }
                    else {
                      else_clock_IfBlock1 =
                        (*rtmMessage).Radio_Common_Header.nid_message == 41;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        valid =
                          !((*rtmMessage).radioMetadata.t_train_reference |
                            (*rtmMessage).radioMetadata.nid_em |
                            (*rtmMessage).radioMetadata.q_scale |
                            (*rtmMessage).radioMetadata.d_sr |
                            (*rtmMessage).radioMetadata.t_sh_rqst |
                            (*rtmMessage).radioMetadata.d_ref |
                            (*rtmMessage).radioMetadata.q_dir |
                            (*rtmMessage).radioMetadata.d_emergencystop |
                            (*rtmMessage).radioMetadata.m_version);
                      }
                      else {
                        valid = kcg_false;
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
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMandatoryVariablesAndMA_Ch.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */


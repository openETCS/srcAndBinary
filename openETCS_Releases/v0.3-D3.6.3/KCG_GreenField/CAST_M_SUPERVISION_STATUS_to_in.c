/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_SUPERVISION_STATUS_to_in.h"

/* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int */
M_SUPERVISION_STATUS_INT_T_DATA CAST_M_SUPERVISION_STATUS_to_in(
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_ct */ M_SUPERVISION_STATUS_DMI_Types_ m_supervision_status_ct)
{
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int::m_supervision_status_int */
  static M_SUPERVISION_STATUS_INT_T_DATA m_supervision_status_int;
  
  IfBlock1_clock = m_supervision_status_ct == ENUM_M_SUPERVISION_STATUS_CSM;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_supervision_status_int = INT_M_SUPERVISION_STATUS_CSM;
  }
  else {
    _3_else_clock_IfBlock1 = m_supervision_status_ct ==
      ENUM_M_SUPERVISION_STATUS_PIM;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_supervision_status_int = INT_M_SUPERVISION_STATUS_PIM;
    }
    else {
      _2_else_clock_IfBlock1 = m_supervision_status_ct ==
        ENUM_M_SUPERVISION_STATUS_TSM;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_supervision_status_int = INT_M_SUPERVISION_STATUS_TSM;
      }
      else {
        _1_else_clock_IfBlock1 = m_supervision_status_ct ==
          ENUM_M_SUPERVISION_STATUS_RSM;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_supervision_status_int = INT_M_SUPERVISION_STATUS_RSM;
        }
        else {
          else_clock_IfBlock1 = m_supervision_status_ct ==
            ENUM_M_SUPERVISION_STATUS_super;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_supervision_status_int = INT_M_SUPERVISION_STATUS_superv;
          }
          else {
            m_supervision_status_int = INT_M_SUPERVISION_STATUS_CSM;
          }
        }
      }
    }
  }
  return m_supervision_status_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_SUPERVISION_STATUS_to_in.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


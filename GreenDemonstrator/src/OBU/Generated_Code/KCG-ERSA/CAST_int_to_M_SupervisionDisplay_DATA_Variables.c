/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_M_SupervisionDisplay_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_M_SupervisionDisplay */
M_SupervisionDisplay_T_DMI_Types_Pkg CAST_int_to_M_SupervisionDisplay_DATA_Variables(
  /* DATA::Variables::CAST_int_to_M_SupervisionDisplay::m_supervisiondisplay_int */ M_SupervisionDisplay_INT_T_DATA m_supervisiondisplay_int)
{
  /* DATA::Variables::CAST_int_to_M_SupervisionDisplay::IfBlock1::else */ kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_M_SupervisionDisplay::IfBlock1::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_M_SupervisionDisplay::IfBlock1::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_M_SupervisionDisplay::IfBlock1::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_M_SupervisionDisplay::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_M_SupervisionDisplay::m_supervisiondisplay_ct */ M_SupervisionDisplay_T_DMI_Types_Pkg m_supervisiondisplay_ct;
  
  IfBlock1_clock = m_supervisiondisplay_int ==
    INT_M_SupervisionDisplay_T_supDis_normal;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_supervisiondisplay_ct = ENUM_M_SupervisionDisplay_T_supDis_normal;
  }
  else {
    _3_else_clock_IfBlock1 = m_supervisiondisplay_int ==
      INT_M_SupervisionDisplay_T_supDis_indication;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_supervisiondisplay_ct = ENUM_M_SupervisionDisplay_T_supDis_indication;
    }
    else {
      _2_else_clock_IfBlock1 = m_supervisiondisplay_int ==
        INT_M_SupervisionDisplay_T_supDis_overspeed;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_supervisiondisplay_ct = ENUM_M_SupervisionDisplay_T_supDis_overspeed;
      }
      else {
        _1_else_clock_IfBlock1 = m_supervisiondisplay_int ==
          INT_M_SupervisionDisplay_T_supDis_warning;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_supervisiondisplay_ct = ENUM_M_SupervisionDisplay_T_supDis_warning;
        }
        else {
          else_clock_IfBlock1 = m_supervisiondisplay_int ==
            INT_M_SupervisionDisplay_T_supDis_intervention;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_supervisiondisplay_ct =
              ENUM_M_SupervisionDisplay_T_supDis_intervention;
          }
          else {
            m_supervisiondisplay_ct = ENUM_M_SupervisionDisplay_T_supDis_normal;
          }
        }
      }
    }
  }
  return m_supervisiondisplay_ct;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_M_SupervisionDisplay_DATA_Variables.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */


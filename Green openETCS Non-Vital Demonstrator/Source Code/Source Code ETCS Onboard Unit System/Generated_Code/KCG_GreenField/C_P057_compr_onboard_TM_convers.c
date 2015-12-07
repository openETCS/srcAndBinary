/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P057_compr_onboard_TM_convers.h"

/* TM_conversions::C_P057_compr_onboard */
void C_P057_compr_onboard_TM_convers(
  /* TM_conversions::C_P057_compr_onboard::PacketData */ CompressedPacketData_T_Common_T *PacketData,
  /* TM_conversions::C_P057_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_ *Metadata_Element,
  /* TM_conversions::C_P057_compr_onboard::P057_onboard */ P57_MovementAuthorityRequestPar *P057_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::C_P057_compr_onboard::_L34 */
  static array_int_6 _L34;
  
  kcg_copy_array_int_6(&_L34, (array_int_6 *) &(*PacketData)[0]);
  (*P057_onboard).valid = _L34[0] == 57;
  IfBlock1_clock_1 = _L34[1] == INT_Q_DIR_nomiinal_TM_conversio;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*P057_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversio;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L34[1] == INT_Q_DIR_reverse_TM_conversion;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*P057_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversio;
    }
    else {
      else_clock_1_IfBlock1 = _L34[1] == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*P057_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P057_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*P057_onboard).t_mar = /* 1 */ CAST_Int_to_T_MAR_TM_conversion(_L34[3]);
  (*P057_onboard).t_timeoutrqst = /* 1 */
    CAST_Int_to_T_TIMEOUTRQST_TM_co(_L34[4]);
  (*P057_onboard).t_cycrqst = /* 1 */ CAST_Int_to_T_CYCRQST_TM_conver(_L34[5]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P057_compr_onboard_TM_convers.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P042_compr_onboard_TM_convers.h"

/* TM_conversions::C_P042_compr_onboard */
void C_P042_compr_onboard_TM_convers(
  /* TM_conversions::C_P042_compr_onboard::PacketData */ CompressedPacketData_T_Common_T *PacketData,
  /* TM_conversions::C_P042_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_ *Metadata_Element,
  /* TM_conversions::C_P042_compr_onboard::P131_onboard */ P42_SessionManagement_T_Packet_ *P131_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  
  (*P131_onboard).valid = (*PacketData)[0] == 42;
  IfBlock1_clock_1 = (*PacketData)[1] == INT_Q_DIR_nomiinal_TM_conversio;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*P131_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversio;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*PacketData)[1] ==
      INT_Q_DIR_reverse_TM_conversion;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*P131_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversio;
    }
    else {
      else_clock_1_IfBlock1 = (*PacketData)[1] == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*P131_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P131_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*P131_onboard).q_rbc = /* 1 */
    CAST_Int_to_Q_RBC_TM_conversion((*PacketData)[3]);
  (*P131_onboard).nid_c = /* 1 */
    CAST_Int_to_NID_C_TM_conversion((*PacketData)[4]);
  (*P131_onboard).nid_rbc = /* 1 */
    CAST_Int_to_NID_RBC_TM_conversi((*PacketData)[5]);
  (*P131_onboard).nid_radio = /* 1 */
    CAST_Int_to_NID_RADIO_TM_conver((*PacketData)[6]);
  (*P131_onboard).q_sleepsession = /* 1 */
    CAST_Int_to_Q_SLEEPSESSION_TM_c((*PacketData)[7]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P042_compr_onboard_TM_convers.c
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */


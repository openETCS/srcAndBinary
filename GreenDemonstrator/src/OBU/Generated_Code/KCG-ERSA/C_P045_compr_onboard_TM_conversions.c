/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P045_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P045_compr_onboard */
void C_P045_compr_onboard_TM_conversions(
  /* TM_conversions::C_P045_compr_onboard::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P045_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P045_compr_onboard::P045_onboard */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *P045_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  
  (*P045_onboard).valid = (*PacketData)[0] == 45;
  IfBlock1_clock_1 = (*PacketData)[1] == INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*P045_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*PacketData)[1] ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*P045_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*PacketData)[1] == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*P045_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P045_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*P045_onboard).nid_mn = /* 1 */
    CAST_Int_to_NID_MN_TM_conversions((*PacketData)[3]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P045_compr_onboard_TM_conversions.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */


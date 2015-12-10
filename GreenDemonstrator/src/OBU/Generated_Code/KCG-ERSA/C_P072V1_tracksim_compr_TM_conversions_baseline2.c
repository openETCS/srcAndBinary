/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P072V1_tracksim_compr_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P072V1_tracksim_compr */
void C_P072V1_tracksim_compr_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P072V1_tracksim_compr::P072_from_track */ P072V1_trackside_int_T_TM_baseline2 *P072_from_track,
  /* TM_conversions_baseline2::C_P072V1_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions_baseline2::C_P072V1_tracksim_compr::P005_compressed */ CompressedPacketData_T_Common_Types_Pkg *P005_compressed)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  kcg_int i;
  
  (&(&(*P005_compressed)[0])[0])[0] = (*P072_from_track).NID_PACKET;
  (&(&(*P005_compressed)[0])[0])[1] = (*P072_from_track).Q_DIR;
  (&(&(*P005_compressed)[0])[0])[2] = (*P072_from_track).L_PACKET;
  (&(&(*P005_compressed)[0])[0])[3] = (*P072_from_track).Q_SCALE;
  (&(&(*P005_compressed)[0])[0])[4] = (*P072_from_track).Q_TEXTCLASS;
  (&(&(*P005_compressed)[0])[0])[5] = (*P072_from_track).Q_TEXTDISPLAY;
  (&(&(*P005_compressed)[0])[0])[6] = (*P072_from_track).D_TEXTDISPLAY_start;
  (&(&(*P005_compressed)[0])[0])[7] =
    (*P072_from_track).M_MODETEXTDISPLAY_start;
  (&(&(*P005_compressed)[0])[0])[8] =
    (*P072_from_track).M_LEVELTEXTDISPLAY_start;
  (&(&(*P005_compressed)[0])[0])[9] = (*P072_from_track).NID_NTC_start;
  (&(&(*P005_compressed)[0])[0])[10] = (*P072_from_track).L_TEXTDISPLAY_end;
  (&(&(*P005_compressed)[0])[0])[11] = (*P072_from_track).T_TEXTDISPLAY_end;
  (&(&(*P005_compressed)[0])[0])[12] = (*P072_from_track).M_MODETEXTDISPLAY_end;
  (&(&(*P005_compressed)[0])[0])[13] =
    (*P072_from_track).M_LEVELTEXTDISPLAY_end;
  (&(&(*P005_compressed)[0])[0])[14] = (*P072_from_track).NID_NTC_end;
  (&(&(*P005_compressed)[0])[0])[15] = (*P072_from_track).Q_TEXTCONFIRM;
  (&(&(*P005_compressed)[0])[0])[16] = (*P072_from_track).L_TEXT;
  (*Header).nid_packet = (*P072_from_track).NID_PACKET;
  (*Header).valid = (*P072_from_track).valid;
  (*Header).startAddress = 0;
  IfBlock1_clock_1 = (*P072_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P072_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P072_from_track).Q_DIR ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*Header).endAddress = /* 1 */
    T_DeterminePacketSizeInt_TM_lib_internal(
      (*P072_from_track).L_TEXT,
      16 + 1,
      1) - 1;
  kcg_copy_X_TEXT_trackside_T_TM(
    &(*P005_compressed)[17],
    &(*P072_from_track).X_TEXT);
  for (i = 0; i < 228; i++) {
    (&(*P005_compressed)[272])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P072V1_tracksim_compr_TM_conversions_baseline2.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */


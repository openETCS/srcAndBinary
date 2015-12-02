/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P012_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P012_tracksim_compr */
void C_P012_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P012_tracksim_compr::P012_from_track */ P012_trackside_int_T_TM *P012_from_track,
  /* TM_conversions::C_P012_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P012_tracksim_compr::P015_compressed */ CompressedPacketData_T_Common_Types_Pkg *P015_compressed)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  kcg_int i;
  
  (&(&(&(*P015_compressed)[0])[0])[0])[0] = (*P012_from_track).NID_PACKET;
  (&(&(&(*P015_compressed)[0])[0])[0])[1] = (*P012_from_track).Q_DIR;
  (&(&(&(*P015_compressed)[0])[0])[0])[2] = (*P012_from_track).L_PACKET;
  (&(&(&(*P015_compressed)[0])[0])[0])[3] = (*P012_from_track).Q_SCALE;
  (&(&(&(*P015_compressed)[0])[0])[0])[4] = (*P012_from_track).V_MAIN;
  (&(&(&(*P015_compressed)[0])[0])[0])[5] = (*P012_from_track).V_LOA;
  (&(&(&(*P015_compressed)[0])[0])[0])[6] = (*P012_from_track).T_LOA;
  (&(&(&(*P015_compressed)[0])[0])[0])[7] = (*P012_from_track).L_ENDSECTION;
  (&(&(&(*P015_compressed)[0])[0])[0])[8] = (*P012_from_track).Q_SECTIONTIMER;
  (&(&(&(*P015_compressed)[0])[0])[0])[9] = (*P012_from_track).T_SECTIONTIMER;
  (&(&(&(*P015_compressed)[0])[0])[0])[10] =
    (*P012_from_track).D_SECTIONTIMERSTOPLOC;
  (&(&(&(*P015_compressed)[0])[0])[0])[11] = (*P012_from_track).Q_ENDTIMER;
  (&(&(&(*P015_compressed)[0])[0])[0])[12] = (*P012_from_track).T_ENDTIMER;
  (&(&(&(*P015_compressed)[0])[0])[0])[13] =
    (*P012_from_track).D_ENDTIMERSTARTLOC;
  (&(&(&(*P015_compressed)[0])[0])[0])[14] = (*P012_from_track).Q_DANGERPOINT;
  (&(&(&(*P015_compressed)[0])[0])[0])[15] = (*P012_from_track).D_DP;
  (&(&(&(*P015_compressed)[0])[0])[0])[16] = (*P012_from_track).V_RELEASEDP;
  (&(&(&(*P015_compressed)[0])[0])[0])[17] = (*P012_from_track).Q_OVERLAP;
  (&(&(&(*P015_compressed)[0])[0])[0])[18] = (*P012_from_track).D_STARTOL;
  (&(&(&(*P015_compressed)[0])[0])[0])[19] = (*P012_from_track).T_OL;
  (&(&(&(*P015_compressed)[0])[0])[0])[20] = (*P012_from_track).D_OL;
  (&(&(&(*P015_compressed)[0])[0])[0])[21] = (*P012_from_track).V_RELEASEOL;
  (*Header).valid = (*P012_from_track).valid;
  (*Header).startAddress = 0;
  IfBlock1_clock_1 = (*P012_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  (*Header).nid_packet = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P012_from_track).NID_PACKET,
      (*P012_from_track).Q_DIR,
      0,
      12,
      INT_M_VERSION_2_0_TM);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P012_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P012_from_track).Q_DIR ==
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
      (*P012_from_track).N_ITER,
      7 + 1 + 15,
      4) - 1;
  (&(&(&(*P015_compressed)[0])[0])[22])[0] = (*P012_from_track).N_ITER;
  /* 1 */
  C_P015_flatten_sections_TM_lib_internal(
    &(*P012_from_track).SECTIONS,
    (P015_sections_array_flat_T_TM *) &(&(*P015_compressed)[0])[23]);
  for (i = 0; i < 349; i++) {
    (&(*P015_compressed)[151])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P012_tracksim_compr_TM_conversions.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */


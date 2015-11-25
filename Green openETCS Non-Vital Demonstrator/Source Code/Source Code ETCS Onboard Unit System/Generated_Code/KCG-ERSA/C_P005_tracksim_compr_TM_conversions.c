/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P005_tracksim_compr */
void C_P005_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P005_tracksim_compr::P005_from_track */ P005_trackside_int_T_TM *P005_from_track,
  /* TM_conversions::C_P005_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P005_tracksim_compr::P005_compressed */ CompressedPacketData_T_Common_Types_Pkg *P005_compressed)
{
  /* TM_conversions::C_P005_tracksim_compr */ P005_OBU_sectionlist_int_T_TM tmp;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  kcg_int i;
  
  (&tmp[0])[0].D_LINK = (*P005_from_track).D_LINK;
  (&tmp[0])[0].Q_NEWCOUNTRY = (*P005_from_track).Q_NEWCOUNTRY;
  (&tmp[0])[0].NID_C = (*P005_from_track).NID_C;
  (&tmp[0])[0].NID_BG = (*P005_from_track).NID_BG;
  (&tmp[0])[0].Q_LINKORIENTATION = (*P005_from_track).Q_LINKORIENTATION;
  (&tmp[0])[0].Q_LINKREACTION = (*P005_from_track).Q_LINKREACTION;
  (&tmp[0])[0].Q_LOCACC = (*P005_from_track).Q_LOCACC;
  (&(&(&(*P005_compressed)[0])[0])[0])[0] = (*P005_from_track).NID_PACKET;
  (&(&(&(*P005_compressed)[0])[0])[0])[1] = (*P005_from_track).Q_DIR;
  (&(&(&(*P005_compressed)[0])[0])[0])[2] = (*P005_from_track).L_PACKET;
  (&(&(&(*P005_compressed)[0])[0])[0])[3] = (*P005_from_track).Q_SCALE;
  (*Header).valid = (*P005_from_track).valid;
  (*Header).startAddress = 0;
  IfBlock1_clock_1 = (*P005_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  (*Header).nid_packet = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P005_from_track).NID_PACKET,
      (*P005_from_track).Q_DIR,
      0,
      5,
      INT_M_VERSION_2_0_TM);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P005_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P005_from_track).Q_DIR ==
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
      (*P005_from_track).N_ITER,
      4 + 1 + 7,
      7) - 1;
  (&(&(&(*P005_compressed)[0])[0])[4])[0] = (*P005_from_track).N_ITER;
  kcg_copy_P005_trackide_sectionlist_T_TM(
    &tmp[1],
    &(*P005_from_track).SECTIONS);
  /* 1 */
  C_P005_flatten_sections_TM_lib_internal(
    &tmp,
    (P005_sections_array_flat_T_TM *) &(&(*P005_compressed)[0])[5]);
  for (i = 0; i < 264; i++) {
    (&(*P005_compressed)[236])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_tracksim_compr_TM_conversions.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */


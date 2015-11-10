/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_one_sec.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section */
void C_P027V1_tracksim_compr_one_sec(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::i */ kcg_int i1,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_from_track */ P027V1_section_int_T_TM_baselin *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::meta_first_section_in */ kcg_int meta_first_section_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::q_dir */ Q_DIR q_dir,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::Header */ MetadataElement_T_Common_Types_ *Header,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_compressed */ CompressedPacketData_T_Common_T *P027V1_sections_compressed)
{
  static kcg_int i;
  
  (*Header).nid_packet = i1 + meta_first_section_in;
  (*Header).q_dir = q_dir;
  (*Header).valid = kcg_true;
  (*Header).startAddress = 0;
  (&(&(*P027V1_sections_compressed)[0])[0])[0] =
    (*P027V1_sections_from_track).D_STATIC;
  (&(&(*P027V1_sections_compressed)[0])[0])[1] =
    (*P027V1_sections_from_track).V_STATIC;
  (&(&(*P027V1_sections_compressed)[0])[0])[2] =
    (*P027V1_sections_from_track).Q_FRONT;
  (&(&(*P027V1_sections_compressed)[0])[0])[3] =
    (*P027V1_sections_from_track).N_ITER;
  /* 2 */
  C_P027_flatten_sections_qdiff_T(
    &(*P027V1_sections_from_track).SECTIONS_q_diff,
    (P027V1_sections_array_flat_qdif *)
      &(&(*P027V1_sections_compressed)[0])[4]);
  for (i = 0; i < 432; i++) {
    (&(*P027V1_sections_compressed)[68])[i] = 0;
  }
  (*Header).endAddress = /* 2 */
    T_DeterminePacketSizeInt_TM_lib(
      (*P027V1_sections_from_track).N_ITER,
      4,
      2) - 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_compr_one_sec.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


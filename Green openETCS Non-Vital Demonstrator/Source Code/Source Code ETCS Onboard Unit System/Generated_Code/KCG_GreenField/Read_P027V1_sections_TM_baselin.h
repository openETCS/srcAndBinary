/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _Read_P027V1_sections_TM_baseli
#define _Read_P027V1_sections_TM_baseli

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_interna.h"
#include "T_Decode_Metadata_L2_TM_lib_int.h"
#include "C_P027V1_compr_onboard_sections.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_baseline2::Read_P027V1_sections */
extern void Read_P027V1_sections_TM_baselin(
  /* TM_baseline2::Read_P027V1_sections::i */ kcg_int i,
  /* TM_baseline2::Read_P027V1_sections::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_baseline2::Read_P027V1_sections::n_iter_outer */ kcg_int n_iter_outer,
  /* TM_baseline2::Read_P027V1_sections::meta_sections */ kcg_int meta_sections,
  /* TM_baseline2::Read_P027V1_sections::cont */ kcg_bool *cont,
  /* TM_baseline2::Read_P027V1_sections::P027V1_OBU_section_out */ P027V1_section_enum_T_TM_baseli *P027V1_OBU_section_out);

#endif /* _Read_P027V1_sections_TM_baseli */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P027V1_sections_TM_baselin.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


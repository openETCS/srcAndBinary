/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 */
void C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::P027V1_section_onbard */ P027V1_section_enum_T_TM_baseline2 *P027V1_section_onbard)
{
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 */ kcg_bool cond_iterw;
  kcg_int i;
  kcg_int noname_1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L6 */ array_int_3 _L6;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L5 */ P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 _L5;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L29 */ array_int_64 _L29;
  
  (*P027V1_section_onbard).valid = kcg_true;
  (*P027V1_section_onbard).n_iter = (*PacketData)[3];
  kcg_copy_array_int_3(&_L6, (array_int_3 *) &(*PacketData)[0]);
  kcg_copy_array_int_64(&_L29, (array_int_64 *) &(*PacketData)[4]);
  /* 1 */ if ((*PacketData)[3] < 0) {
    /* 1 */ for (i = 0; i < 32; i++) {
      /* 1_1 */
      C_P027V1_us_array_qdiff_TM_lib_internal(
        i,
        (*PacketData)[3],
        &_L29,
        &cond_iterw,
        &_L5[i]);
      noname_1 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    noname_1 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = noname_1; i < 32; i++) {
    kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(
      &_L5[i],
      (P027V1_section_enum_qdiff_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &(*P027V1_section_onbard).SECTIONS_q_diff,
    &_L5);
  (*P027V1_section_onbard).d_static = /* 1 */
    CAST_Int_to_D_STATIC_TM_conversions(_L6[0]);
  (*P027V1_section_onbard).v_static = /* 1 */
    CAST_Int_to_V_STATIC_TM_conversions(_L6[1]);
  (*P027V1_section_onbard).q_front = /* 1 */
    CAST_Int_to_Q_FRONT_TM_conversions(_L6[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */


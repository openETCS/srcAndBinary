/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_sections_TM_baseline2.h"

/* TM_baseline2::Read_P027V1_sections */
void Read_P027V1_sections_TM_baseline2(
  /* TM_baseline2::Read_P027V1_sections::i */ kcg_int i,
  /* TM_baseline2::Read_P027V1_sections::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P027V1_sections::n_iter_outer */ kcg_int n_iter_outer,
  /* TM_baseline2::Read_P027V1_sections::meta_sections */ kcg_int meta_sections,
  /* TM_baseline2::Read_P027V1_sections::cont */ kcg_bool *cont,
  /* TM_baseline2::Read_P027V1_sections::P027V1_OBU_section_out */ P027V1_section_enum_T_TM_baseline2 *P027V1_OBU_section_out)
{
  /* TM_baseline2::Read_P027V1_sections */ kcg_int tmp;
  /* TM_baseline2::Read_P027V1_sections::_L172 */ CompressedPacketData_T_Common_Types_Pkg _L172;
  /* TM_baseline2::Read_P027V1_sections::_L173 */ MetadataElement_T_Common_Types_Pkg _L173;
  /* TM_baseline2::Read_P027V1_sections::_L181 */ kcg_bool _L181;
  
  tmp = /* 1 */ T_Decode_Metadata_L2_TM_lib_internal(meta_sections, i);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    Message_IN,
    tmp,
    kcg_true,
    kcg_true,
    &_L172,
    &_L173,
    &_L181);
  /* 1 */
  C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2(
    &_L172,
    &_L173,
    P027V1_OBU_section_out);
  *cont = i < n_iter_outer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P027V1_sections_TM_baseline2.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */


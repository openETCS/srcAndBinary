/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections */
void C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::i */ kcg_int i,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::PacketStream_in */ CompressedPackets_T_Common_Types_Pkg *PacketStream_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::P027V1_sections_from_track */ P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::n_iter */ kcg_int n_iter,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::meta_first_section_in */ kcg_int meta_first_section_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::q_dir */ Q_DIR q_dir,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::cont */ kcg_bool *cont,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::Packets_Out */ CompressedPackets_T_Common_Types_Pkg *Packets_Out)
{
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L432 */ CompressedPacketData_T_Common_Types_Pkg _L432;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L431 */ MetadataElement_T_Common_Types_Pkg _L431;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L436 */ kcg_int _L436;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L437 */ kcg_int _L437;
  
  /* 2 */
  C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2(
    i,
    P027V1_sections_from_track,
    meta_first_section_in,
    q_dir,
    &_L431,
    &_L432);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
    &(*PacketStream_in).PacketHeaders,
    &_L431,
    &(*Packets_Out).PacketHeaders,
    &_L436,
    &_L437);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    _L436,
    _L437,
    &(*PacketStream_in).PacketData,
    &_L432,
    &(*Packets_Out).PacketData);
  *cont = n_iter > i;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

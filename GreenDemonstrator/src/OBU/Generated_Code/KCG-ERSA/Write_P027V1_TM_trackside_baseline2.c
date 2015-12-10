/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P027V1_TM_trackside_baseline2.h"

/* TM_trackside_baseline2::Write_P027V1 */
void Write_P027V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P027V1::Packet27V1 */ P027V1_trackside_int_T_TM_baseline2 *Packet27V1,
  /* TM_trackside_baseline2::Write_P027V1::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside_baseline2::Write_P027V1::Error */ kcg_bool *Error,
  /* TM_trackside_baseline2::Write_P027V1::PacketsOut */ CompressedPackets_T_Common_Types_Pkg *PacketsOut)
{
  /* TM_trackside_baseline2::Write_P027V1 */ CompressedPackets_T_Common_Types_Pkg acc;
  /* TM_trackside_baseline2::Write_P027V1 */ kcg_bool cond_iterw;
  kcg_int i;
  /* TM_trackside_baseline2::Write_P027V1::_L21 */ kcg_int _L21;
  /* TM_trackside_baseline2::Write_P027V1::_L44 */ CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside_baseline2::Write_P027V1::_L43 */ MetadataElement_T_Common_Types_Pkg _L43;
  /* TM_trackside_baseline2::Write_P027V1::_L45 */ P027V1_OBU_sectionlist_int_T_TM_baseline2 _L45;
  /* TM_trackside_baseline2::Write_P027V1::_L46 */ kcg_int _L46;
  /* TM_trackside_baseline2::Write_P027V1::_L56 */ kcg_int _L56;
  /* TM_trackside_baseline2::Write_P027V1::_L59 */ Q_DIR _L59;
  
  *Error = kcg_false;
  /* 1 */
  C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
    Packet27V1,
    &_L43,
    &_L44,
    &_L45,
    &_L46,
    &_L56,
    &_L59);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
    &(*Packets).PacketHeaders,
    &_L43,
    &(*PacketsOut).PacketHeaders,
    &_L21,
    &i);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    _L21,
    i,
    &(*Packets).PacketData,
    &_L44,
    &(*PacketsOut).PacketData);
  for (i = 0; i < 33; i++) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&acc, PacketsOut);
    /* 1 */
    C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
      i,
      &acc,
      &_L45[i],
      _L46,
      _L56,
      _L59,
      &cond_iterw,
      PacketsOut);
    if (!cond_iterw) {
      break;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P027V1_TM_trackside_baseline2.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */


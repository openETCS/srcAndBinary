/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P027V1_TM_trackside_basel.h"

/* TM_trackside_baseline2::Write_P027V1 */
void Write_P027V1_TM_trackside_basel(
  /* TM_trackside_baseline2::Write_P027V1::Packet27V1 */ P027V1_trackside_int_T_TM_basel *Packet27V1,
  /* TM_trackside_baseline2::Write_P027V1::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_trackside_baseline2::Write_P027V1::Error */ kcg_bool *Error,
  /* TM_trackside_baseline2::Write_P027V1::PacketsOut */ CompressedPackets_T_Common_Type *PacketsOut)
{
  /* TM_trackside_baseline2::Write_P027V1 */
  static CompressedPackets_T_Common_Type acc;
  /* TM_trackside_baseline2::Write_P027V1 */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_trackside_baseline2::Write_P027V1::_L21 */
  static kcg_int _L21;
  /* TM_trackside_baseline2::Write_P027V1::_L44 */
  static CompressedPacketData_T_Common_T _L44;
  /* TM_trackside_baseline2::Write_P027V1::_L43 */
  static MetadataElement_T_Common_Types_ _L43;
  /* TM_trackside_baseline2::Write_P027V1::_L45 */
  static _3_P027V1_OBU_sectionlist_int_T _L45;
  /* TM_trackside_baseline2::Write_P027V1::_L46 */
  static kcg_int _L46;
  /* TM_trackside_baseline2::Write_P027V1::_L56 */
  static kcg_int _L56;
  /* TM_trackside_baseline2::Write_P027V1::_L59 */
  static Q_DIR _L59;
  
  *Error = kcg_false;
  /* 1 */
  C_P027V1_tracksim_compr_body_TM(
    Packet27V1,
    &_L43,
    &_L44,
    &_L45,
    &_L46,
    &_L56,
    &_L59);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_(
    &(*Packets).PacketHeaders,
    &_L43,
    &(*PacketsOut).PacketHeaders,
    &_L21,
    &i);
  /* 1 */
  SEND_MessageData_TM_lib_interna(
    _L21,
    i,
    &(*Packets).PacketData,
    &_L44,
    &(*PacketsOut).PacketData);
  for (i = 0; i < 33; i++) {
    kcg_copy_CompressedPackets_T_Co(&acc, PacketsOut);
    /* 1 */
    C_P027V1_tracksim_merge_section(
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
** Write_P027V1_TM_trackside_basel.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


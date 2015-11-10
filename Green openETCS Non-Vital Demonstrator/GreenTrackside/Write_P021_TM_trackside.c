/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P021_TM_trackside.h"

/* TM_trackside::Write_P021 */
void Write_P021_TM_trackside(
  /* TM_trackside::Write_P021::Packet21 */ P021_trackside_int_T_TM *Packet21,
  /* TM_trackside::Write_P021::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_trackside::Write_P021::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P021::RadioPacketsOut */ CompressedPackets_T_Common_Type *RadioPacketsOut)
{
  /* TM_trackside::Write_P021::_L21 */
  static kcg_int _L21;
  /* TM_trackside::Write_P021::_L22 */
  static kcg_int _L22;
  /* TM_trackside::Write_P021::_L44 */
  static CompressedPacketData_T_Common_T _L44;
  /* TM_trackside::Write_P021::_L43 */
  static MetadataElement_T_Common_Types_ _L43;
  
  *Error = kcg_false;
  /* 1 */ C_P021_tracksim_compr_TM_conver(Packet21, &_L43, &_L44);
  /* 1 */
  SEND_WriteBaliseMessageHeader_T(
    &(*Packets).PacketHeaders,
    &_L43,
    &(*RadioPacketsOut).PacketHeaders,
    &_L21,
    &_L22);
  /* 1 */
  SEND_MessageData_TM_lib_interna(
    _L21,
    _L22,
    &(*Packets).PacketData,
    &_L44,
    &(*RadioPacketsOut).PacketData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P021_TM_trackside.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


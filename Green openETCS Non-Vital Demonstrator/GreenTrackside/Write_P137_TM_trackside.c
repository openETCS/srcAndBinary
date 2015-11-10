/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P137_TM_trackside.h"

/* TM_trackside::Write_P137 */
void Write_P137_TM_trackside(
  /* TM_trackside::Write_P137::Packet137 */ P137_trackside_int_T_TM *Packet137,
  /* TM_trackside::Write_P137::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_trackside::Write_P137::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P137::RadioPacketsOut */ CompressedPackets_T_Common_Type *RadioPacketsOut)
{
  /* TM_trackside::Write_P137::_L21 */
  static kcg_int _L21;
  /* TM_trackside::Write_P137::_L22 */
  static kcg_int _L22;
  /* TM_trackside::Write_P137::_L44 */
  static CompressedPacketData_T_Common_T _L44;
  /* TM_trackside::Write_P137::_L43 */
  static MetadataElement_T_Common_Types_ _L43;
  
  *Error = kcg_false;
  /* 1 */ C_P137_tracksim_compr_TM_conver(Packet137, &_L43, &_L44);
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
** Write_P137_TM_trackside.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


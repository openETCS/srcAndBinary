/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P057_TM_trackside.h"

/* TM_trackside::Write_P057 */
void Write_P057_TM_trackside(
  /* TM_trackside::Write_P057::Packet57 */ P057_trackside_int_T_TM *Packet57,
  /* TM_trackside::Write_P057::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_trackside::Write_P057::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P057::RadioPacketsOut */ CompressedPackets_T_Common_Type *RadioPacketsOut)
{
  /* TM_trackside::Write_P057::_L21 */
  static kcg_int _L21;
  /* TM_trackside::Write_P057::_L22 */
  static kcg_int _L22;
  /* TM_trackside::Write_P057::_L44 */
  static CompressedPacketData_T_Common_T _L44;
  /* TM_trackside::Write_P057::_L43 */
  static MetadataElement_T_Common_Types_ _L43;
  
  *Error = kcg_false;
  /* 1 */ C_P057_tracksim_compr_TM_conver(Packet57, &_L43, &_L44);
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
** Write_P057_TM_trackside.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


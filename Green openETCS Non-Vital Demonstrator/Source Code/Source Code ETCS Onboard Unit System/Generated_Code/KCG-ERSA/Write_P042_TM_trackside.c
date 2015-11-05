/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P042_TM_trackside.h"

/* TM_trackside::Write_P042 */
void Write_P042_TM_trackside(
  /* TM_trackside::Write_P042::Packet42 */ P042_trackside_int_T_TM *Packet42,
  /* TM_trackside::Write_P042::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P042::Error */ kcg_bool *Error,
  /* TM_trackside::Write_P042::RadioPacketsOut */ CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut)
{
  /* TM_trackside::Write_P042::_L21 */
  static kcg_int _L21;
  /* TM_trackside::Write_P042::_L22 */
  static kcg_int _L22;
  /* TM_trackside::Write_P042::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside::Write_P042::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43;
  
  *Error = kcg_false;
  /* 1 */ C_P042_tracksim_compr_TM_conversions(Packet42, &_L43, &_L44);
  /* 1 */
  SEND_WriteBaliseMessageHeader_TM_lib_internal(
    &(*Packets).PacketHeaders,
    &_L43,
    &(*RadioPacketsOut).PacketHeaders,
    &_L21,
    &_L22);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    _L21,
    _L22,
    &(*Packets).PacketData,
    &_L44,
    &(*RadioPacketsOut).PacketData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_P042_TM_trackside.c
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P003V1_TM_trackside_basel.h"

/* TM_trackside_baseline2::Write_P003V1 */
void Write_P003V1_TM_trackside_basel(
  /* TM_trackside_baseline2::Write_P003V1::Packet003V1 */ P003V1_trackside_int_T_TM_basel *Packet003V1,
  /* TM_trackside_baseline2::Write_P003V1::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* TM_trackside_baseline2::Write_P003V1::Error */ kcg_bool *Error,
  /* TM_trackside_baseline2::Write_P003V1::RadioPacketsOut */ CompressedPackets_T_Common_Type *RadioPacketsOut)
{
  /* TM_trackside_baseline2::Write_P003V1::_L21 */
  static kcg_int _L21;
  /* TM_trackside_baseline2::Write_P003V1::_L22 */
  static kcg_int _L22;
  /* TM_trackside_baseline2::Write_P003V1::_L44 */
  static CompressedPacketData_T_Common_T _L44;
  /* TM_trackside_baseline2::Write_P003V1::_L43 */
  static MetadataElement_T_Common_Types_ _L43;
  
  *Error = kcg_false;
  /* 1 */ C_P003V1_tracksim_compr_TM_conv(Packet003V1, &_L43, &_L44);
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
** Write_P003V1_TM_trackside_basel.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


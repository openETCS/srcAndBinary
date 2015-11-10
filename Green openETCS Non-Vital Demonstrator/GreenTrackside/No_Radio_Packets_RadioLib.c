/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Radio_Packets_RadioLib.h"

/* RadioLib::No_Radio_Packets */
void No_Radio_Packets_RadioLib(
  /* RadioLib::No_Radio_Packets::Radio_packets_in */ CompressedPackets_T_Common_Type *Radio_packets_in,
  /* RadioLib::No_Radio_Packets::Radio_packets_out */ CompressedPackets_T_Common_Type *Radio_packets_out)
{
  kcg_copy_CompressedPackets_T_Co(Radio_packets_out, Radio_packets_in);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** No_Radio_Packets_RadioLib.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


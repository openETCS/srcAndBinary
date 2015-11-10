/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P255_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P255 */
void Send_P255_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P255::packet_data_in */ CompressedPackets_T_Common_Type *packet_data_in,
  /* MessageLibBaseline2::Send_P255::P255 */ P255_trackside_int_T_TM *P255,
  /* MessageLibBaseline2::Send_P255::packet_data_out */ CompressedPackets_T_Common_Type *packet_data_out)
{
  /* MessageLibBaseline2::Send_P255 */
  static kcg_bool op_call;
  
  /* ck__L5 */ if ((*P255).valid) {
    /* 1 */
    Write_P255_TM_trackside(P255, packet_data_in, &op_call, packet_data_out);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(packet_data_out, packet_data_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P255_MessageLibBaseline2.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P046_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P046 */
void Send_P046_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P046::B_data_in */ CompressedPackets_T_Common_Type *B_data_in,
  /* MessageLibBaseline2::Send_P046::P046 */ P046_trackside_int_T_TM *P046,
  /* MessageLibBaseline2::Send_P046::B_data_out */ CompressedPackets_T_Common_Type *B_data_out)
{
  /* MessageLibBaseline2::Send_P046 */
  static kcg_bool op_call;
  
  /* ck__L5 */ if ((*P046).valid) {
    /* 1 */ Write_P046_TM_trackside(P046, B_data_in, &op_call, B_data_out);
  }
  else {
    kcg_copy_CompressedPackets_T_Co(B_data_out, B_data_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P046_MessageLibBaseline2.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


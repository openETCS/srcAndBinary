/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P042_no_merge_TM_specific_send.h"

/* TM_specific_send::Send_P042_no_merge */
void Send_P042_no_merge_TM_specific_send(
  /* TM_specific_send::Send_P042_no_merge::Packet42 */ P42_SessionManagement_T_Packet_Types_Pkg *Packet42,
  /* TM_specific_send::Send_P042_no_merge::RadioPacketsOut */ CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut)
{
  /* TM_specific_send::Send_P042_no_merge */ P042_trackside_int_T_TM tmp;
  /* TM_specific_send::Send_P042_no_merge::_L1 */ kcg_bool _L1;
  
  /* 1 */ C_P042_onboard_legacy_to_int_TM_conversions(Packet42, &tmp);
  /* 1 */
  Write_P042_TM_trackside(
    &tmp,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_BaliseData_TM,
    &_L1,
    RadioPacketsOut);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P042_no_merge_TM_specific_send.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */


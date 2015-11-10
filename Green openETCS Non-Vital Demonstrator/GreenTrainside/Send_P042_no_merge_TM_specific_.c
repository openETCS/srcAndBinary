/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P042_no_merge_TM_specific_.h"

/* TM_specific_send::Send_P042_no_merge */
void Send_P042_no_merge_TM_specific_(
  /* TM_specific_send::Send_P042_no_merge::Packet42 */ P42_SessionManagement_T_Packet_ *Packet42,
  /* TM_specific_send::Send_P042_no_merge::RadioPacketsOut */ CompressedPackets_T_Common_Type *RadioPacketsOut)
{
  /* TM_specific_send::Send_P042_no_merge */
  static P042_trackside_int_T_TM tmp;
  /* TM_specific_send::Send_P042_no_merge::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ C_P042_onboard_legacy_to_int_TM(Packet42, &tmp);
  /* 1 */
  Write_P042_TM_trackside(
    &tmp,
    (CompressedPackets_T_Common_Type *) &DEFAULT_BaliseData_TM,
    &_L1,
    RadioPacketsOut);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_P042_no_merge_TM_specific_.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */


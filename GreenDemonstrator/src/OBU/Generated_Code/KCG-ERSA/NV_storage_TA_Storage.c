/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NV_storage_TA_Storage.h"

/* TA_Storage::NV_storage */
void NV_storage_TA_Storage(
  /* TA_Storage::NV_storage::Packet3_in */ P003V1_OBU_T_TM_baseline2 *Packet3_in,
  /* TA_Storage::NV_storage::P3_received */ kcg_bool *P3_received,
  /* TA_Storage::NV_storage::Packet3_out */ P003V1_OBU_T_TM_baseline2 *Packet3_out)
{
  *P3_received = kcg_true;
  kcg_copy_P003V1_OBU_T_TM_baseline2(Packet3_out, Packet3_in);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NV_storage_TA_Storage.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */


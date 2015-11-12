/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NV_storage_TA_Storage.h"

/* TA_Storage::NV_storage */
void NV_storage_TA_Storage(
  /* TA_Storage::NV_storage::Packet3_in */P003V1_OBU_T_TM_baseline2 *Packet3_in,
  /* TA_Storage::NV_storage::P3_received */kcg_bool *P3_received,
  /* TA_Storage::NV_storage::Packet3_out */P003V1_OBU_T_TM_baseline2 *Packet3_out)
{
  *P3_received = kcg_true;
  kcg_copy_P003V1_OBU_T_TM_baseline2(Packet3_out, Packet3_in);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NV_storage_TA_Storage.c
** Generation date: 2015-11-12T10:46:58
*************************************************************$ */


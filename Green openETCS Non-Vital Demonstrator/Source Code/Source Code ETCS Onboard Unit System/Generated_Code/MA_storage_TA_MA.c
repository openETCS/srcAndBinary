/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_storage_TA_MA.h"

/* TA_MA::MA_storage */
void MA_storage_TA_MA(
  /* TA_MA::MA_storage::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA::MA_storage::Packet15_out */ P015_OBU_T_TM *Packet15_out,
  /* TA_MA::MA_storage::vald_MA */ kcg_bool *vald_MA)
{
  *vald_MA = kcg_true;
  kcg_copy_P015_OBU_T_TM(Packet15_out, Packet15_in);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_storage_TA_MA.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


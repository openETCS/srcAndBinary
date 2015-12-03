/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_EOA_TA_MA_new.h"

/* TA_MA_new::Get_EOA */
L_internal_Type_Obu_BasicTypes_Pkg Get_EOA_TA_MA_new(
  /* TA_MA_new::Get_EOA::MA_absolute */ MovementAuthority_t_TrackAtlasTypes *MA_absolute)
{
  /* TA_MA_new::Get_EOA */ L_internal_Type_Obu_BasicTypes_Pkg acc;
  /* TA_MA_new::Get_EOA */ kcg_bool cond_iterw;
  kcg_int i;
  /* TA_MA_new::Get_EOA::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg currentEOA;
  
  currentEOA = DEFAULT_loc_TA_MA_new;
  /* 1 */ for (i = 0; i < 10; i++) {
    acc = currentEOA;
    /* 1 */
    Get_EOA_loop_TA_MA_new(
      i,
      acc,
      &(*MA_absolute).sections,
      &cond_iterw,
      &currentEOA);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  return currentEOA;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Get_EOA_TA_MA_new.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */


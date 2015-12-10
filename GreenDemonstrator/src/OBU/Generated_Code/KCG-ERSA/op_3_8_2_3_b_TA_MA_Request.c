/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_b_TA_MA_Request.h"

/* TA_MA_Request::op_3_8_2_3_b */
kcg_bool op_3_8_2_3_b_TA_MA_Request(
  /* TA_MA_Request::op_3_8_2_3_b::t_timeoutrqst */ kcg_int t_timeoutrqst,
  /* TA_MA_Request::op_3_8_2_3_b::ma_s */ MovementAuthority_t_TrackAtlasTypes *ma_s)
{
  /* TA_MA_Request::op_3_8_2_3_b */ T_internal_Type_Obu_BasicTypes_Pkg tmp;
  kcg_int i;
  /* TA_MA_Request::op_3_8_2_3_b::triggerMA */ kcg_bool triggerMA;
  
  tmp = 10000;
  /* 4 */ for (i = 0; i < 10; i++) {
    tmp = /* 1 */ CompareSectionTimer_TA_MA_Request(tmp, &(*ma_s).sections[i]);
  }
  triggerMA = (t_timeoutrqst <= tmp) | (t_timeoutrqst <= (*ma_s).t_loa);
  return triggerMA;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_8_2_3_b_TA_MA_Request.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */


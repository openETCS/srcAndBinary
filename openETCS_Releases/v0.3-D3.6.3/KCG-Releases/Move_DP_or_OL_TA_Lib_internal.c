/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Move_DP_or_OL_TA_Lib_internal.h"

/* TA_Lib_internal::Move_DP_or_OL */
void Move_DP_or_OL_TA_Lib_internal(
  /* TA_Lib_internal::Move_DP_or_OL::DP_or_OL_in */ DP_or_OL_t_TrackAtlasTypes *DP_or_OL_in,
  /* TA_Lib_internal::Move_DP_or_OL::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Lib_internal::Move_DP_or_OL::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Lib_internal::Move_DP_or_OL::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Lib_internal::Move_DP_or_OL::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Lib_internal::Move_DP_or_OL::DP_or_OL_out */ DP_or_OL_t_TrackAtlasTypes *DP_or_OL_out)
{
  /* TA_Lib_internal::Move_DP_or_OL */
  static kcg_int tmp;
  /* TA_Lib_internal::Move_DP_or_OL::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Move_DP_or_OL::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = msg_LRBG & !msg_prvLRBG;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(DP_or_OL_out, DP_or_OL_in);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    tmp = pos_LRBG;
  }
  else {
    else_clock_IfBlock1 = !msg_LRBG & msg_prvLRBG;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      tmp = pos_prvLRBG;
    }
    else {
      tmp = 0;
    }
  }
  (*DP_or_OL_out).d_DP_or_OL = (*DP_or_OL_in).d_DP_or_OL + tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Move_DP_or_OL_TA_Lib_internal.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_LRBG */
kcg_int Eval_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Eval_LRBG::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn)
{
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Eval_LRBG::LRBG */
  static kcg_int LRBG;
  
  IfBlock1_clock = (*MessageIn).source == ENUM_MsgSource_Balise_TA_Lib_internal;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    LRBG = (*MessageIn).BG_Common_Header.nid_bg;
  }
  else {
    else_clock_IfBlock1 = (*MessageIn).source ==
      ENUM_MsgSource_Euroradio_TA_Lib_internal;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      LRBG = (*MessageIn).Radio_Common_Header.nid_lrbg;
    }
    else {
      LRBG = 0;
    }
  }
  return LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Eval_LRBG_TA_Lib_internal.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


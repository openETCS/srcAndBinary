/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_LRBG */
void Eval_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Eval_LRBG::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Lib_internal::Eval_LRBG::valid */ kcg_bool *valid,
  /* TA_Lib_internal::Eval_LRBG::C */ kcg_int *C,
  /* TA_Lib_internal::Eval_LRBG::BG */ kcg_int *BG)
{
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*MessageIn).source == ENUM_MsgSource_Balise_TA_Lib_internal;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *C = (*MessageIn).BG_Common_Header.nid_c;
    *BG = (*MessageIn).BG_Common_Header.nid_bg;
  }
  else {
    else_clock_IfBlock1 = (*MessageIn).source ==
      ENUM_MsgSource_Euroradio_TA_Lib_internal;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* 2 */
      DECODE_NID_LRBG_TM_conversions(
        (*MessageIn).Radio_Common_Header.nid_lrbg,
        C,
        BG);
    }
    else {
      *C = 0;
      *BG = 0;
    }
  }
  *valid = (*MessageIn).valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Eval_LRBG_TA_Lib_internal.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */


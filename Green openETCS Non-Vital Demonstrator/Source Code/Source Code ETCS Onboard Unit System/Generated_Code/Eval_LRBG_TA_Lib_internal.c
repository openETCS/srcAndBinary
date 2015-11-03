/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_LRBG */
void Eval_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Eval_LRBG::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_Lib_internal::Eval_LRBG::valid */ kcg_bool *valid,
  /* TA_Lib_internal::Eval_LRBG::C */ kcg_int *C,
  /* TA_Lib_internal::Eval_LRBG::BG */ kcg_int *BG)
{
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*MessageIn).source == ENUM_MsgSource_Balise_TA_Lib_in;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *C = 0;
    *BG = (*MessageIn).BG_Common_Header.nid_bg;
  }
  else {
    else_clock_IfBlock1 = (*MessageIn).source ==
      ENUM_MsgSource_Euroradio_TA_Lib;
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
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */


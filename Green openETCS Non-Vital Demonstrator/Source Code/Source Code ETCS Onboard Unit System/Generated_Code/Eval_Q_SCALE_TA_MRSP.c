/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* TA_MRSP::Eval_Q_SCALE */
L_internal_Type_Obu_BasicTypes_Pkg Eval_Q_SCALE_TA_MRSP(
  /* TA_MRSP::Eval_Q_SCALE::q_scale_in */ Q_SCALE q_scale_in,
  /* TA_MRSP::Eval_Q_SCALE::d_in */ kcg_int d_in)
{
  /* TA_MRSP::Eval_Q_SCALE */
  static kcg_int tmp;
  /* TA_MRSP::Eval_Q_SCALE::d_out */
  static L_internal_Type_Obu_BasicTypes_Pkg d_out;
  
  /* 1 */ if (q_scale_in == ENUM_Q_SCALE_10cm_QSCALE_TM) {
    tmp = 10;
  }
  else /* 2 */ if (q_scale_in == ENUM_Q_SCALE_10m_QSCALE_TM) {
    tmp = 10 * 100;
  }
  else {
    tmp = 100;
  }
  d_out = tmp * d_in;
  return d_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Eval_Q_SCALE_TA_MRSP.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */


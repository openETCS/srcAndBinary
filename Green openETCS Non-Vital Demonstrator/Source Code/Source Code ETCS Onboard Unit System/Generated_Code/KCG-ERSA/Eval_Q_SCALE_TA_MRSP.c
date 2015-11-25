/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* TA_MRSP::Eval_Q_SCALE */
L_internal_Type_Obu_BasicTypes_Pkg Eval_Q_SCALE_TA_MRSP(
  /* TA_MRSP::Eval_Q_SCALE::q_scale_in */ Q_SCALE q_scale_in,
  /* TA_MRSP::Eval_Q_SCALE::d_in */ kcg_int d_in)
{
  /* TA_MRSP::Eval_Q_SCALE */ kcg_int tmp;
  /* TA_MRSP::Eval_Q_SCALE::d_out */ L_internal_Type_Obu_BasicTypes_Pkg d_out;
  
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
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */


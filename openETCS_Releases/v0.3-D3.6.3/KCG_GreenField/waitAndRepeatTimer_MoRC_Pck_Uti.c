/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "waitAndRepeatTimer_MoRC_Pck_Uti.h"

#ifndef KCG_USER_DEFINED_INIT
void waitAndRepeatTimer_init_MoRC_Pc(outC_waitAndRepeatTimer_MoRC_Pc *outC)
{
  outC->triggerAction = kcg_true;
  outC->elapsed = kcg_true;
  outC->init = kcg_true;
  outC->_L22 = 0;
  /* 1 */ countDownTimer_init_MoRC_Pck_Ut(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void waitAndRepeatTimer_reset_MoRC_P(outC_waitAndRepeatTimer_MoRC_Pc *outC)
{
  outC->init = kcg_true;
  /* 1 */ countDownTimer_reset_MoRC_Pck_U(&outC->Context_1);
}

/* MoRC_Pck::Utils::waitAndRepeatTimer */
void waitAndRepeatTimer_MoRC_Pck_Uti(
  /* MoRC_Pck::Utils::waitAndRepeatTimer::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::re_start */ kcg_bool re_start,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::stop */ kcg_bool stop,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::repeatInterval */ time_Type_MoRC_Pck repeatInterval,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::maxNoOfRepetitions */ kcg_int maxNoOfRepetitions,
  outC_waitAndRepeatTimer_MoRC_Pc *outC)
{
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L9 */
  static kcg_int _L9;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L14 */
  static kcg_bool _L14;
  
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    re_start,
    stop,
    actualTime,
    kcg_true,
    repeatInterval,
    &outC->Context_1);
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    _L9 = 0;
  }
  else {
    _L9 = outC->_L22;
  }
  outC->elapsed = _L9 >= maxNoOfRepetitions;
  _L14 = !outC->elapsed;
  /* 2 */ if (re_start) {
    outC->_L22 = 0;
  }
  else /* 1 */ if (outC->Context_1.expired) {
    outC->_L22 = 1 + _L9;
  }
  else {
    outC->_L22 = _L9;
  }
  outC->triggerAction = (_L14 & outC->Context_1.expired) | (_L14 &
      outC->Context_1.started);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** waitAndRepeatTimer_MoRC_Pck_Uti.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */


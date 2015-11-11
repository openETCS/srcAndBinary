/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void countDownTimer_init_MoRC_Pck_Ut(outC_countDownTimer_MoRC_Pck_Ut *outC)
{
  outC->expired = kcg_true;
  outC->started = kcg_true;
  outC->TimerStatus_SM_reset_nxt = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
  outC->_L4_TimerStatus_SM_Counting = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


void countDownTimer_reset_MoRC_Pck_U(outC_countDownTimer_MoRC_Pck_Ut *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}

/* MoRC_Pck::Utils::countDownTimer */
void countDownTimer_MoRC_Pck_Utils(
  /* MoRC_Pck::Utils::countDownTimer::re_start */ kcg_bool re_start,
  /* MoRC_Pck::Utils::countDownTimer::stop */ kcg_bool stop,
  /* MoRC_Pck::Utils::countDownTimer::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Utils::countDownTimer::autoretrigger */ kcg_bool autoretrigger,
  /* MoRC_Pck::Utils::countDownTimer::interval */ time_Type_MoRC_Pck interval,
  outC_countDownTimer_MoRC_Pck_Ut *outC)
{
  /* MoRC_Pck::Utils::countDownTimer */
  static kcg_bool tmp1;
  /* MoRC_Pck::Utils::countDownTimer */
  static kcg_bool tmp;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting::_L7 */
  static kcg_bool _L7_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool Counting_weakb_clock_TimerStatu;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool br_3_guard_TimerStatus_SM_Count;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM TimerStatus_SM_state_sel;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM TimerStatus_SM_state_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool TimerStatus_SM_reset_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM TimerStatus_SM_fired_strong;
  
  /* init_TimerStatus_SM */ if (outC->init1) {
    TimerStatus_SM_state_sel = SSM_st_Stopped_TimerStatus_SM;
    outC->init1 = kcg_false;
    Counting_weakb_clock_TimerStatu = kcg_false;
  }
  else {
    TimerStatus_SM_state_sel = outC->TimerStatus_SM_state_nxt;
    Counting_weakb_clock_TimerStatu = outC->TimerStatus_SM_reset_nxt;
  }
  /* sel_TimerStatus_SM */ switch (TimerStatus_SM_state_sel) {
    case SSM_st_Expired_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
        TimerStatus_SM_fired_strong = SSM_TR_Expired_1_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = SSM_st_Expired_TimerStatus_SM;
        TimerStatus_SM_fired_strong = SSM_TR_no_trans_TimerStatus_SM;
      }
      TimerStatus_SM_reset_act = stop;
      tmp1 = kcg_false;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
        TimerStatus_SM_fired_strong = SSM_TR_Counting_1_TimerStatus_S;
      }
      else {
        TimerStatus_SM_state_act = SSM_st_Counting_TimerStatus_SM;
        TimerStatus_SM_fired_strong = SSM_TR_no_trans_TimerStatus_SM;
      }
      if (Counting_weakb_clock_TimerStatu) {
        outC->init = kcg_true;
      }
      TimerStatus_SM_reset_act = stop;
      tmp1 = kcg_false;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      tmp = re_start | autoretrigger;
      /* guard_Stopped */ if (stop) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
        TimerStatus_SM_fired_strong = SSM_TR_Stopped_1_TimerStatus_SM;
        TimerStatus_SM_reset_act = kcg_true;
        tmp1 = kcg_false;
      }
      else {
        if (tmp) {
          TimerStatus_SM_state_act = SSM_st_Counting_TimerStatus_SM;
          TimerStatus_SM_fired_strong = SSM_TR_Stopped_2_TimerStatus_SM;
        }
        else {
          TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
          TimerStatus_SM_fired_strong = SSM_TR_no_trans_TimerStatus_SM;
        }
        TimerStatus_SM_reset_act = tmp;
        /* cb_anon_sm */ if (tmp) {
          tmp1 = kcg_true;
        }
        else {
          tmp1 = kcg_false;
        }
      }
      break;
    
  }
  /* act_TimerStatus_SM */ switch (TimerStatus_SM_state_act) {
    case SSM_st_Expired_TimerStatus_SM :
      outC->TimerStatus_SM_reset_nxt = re_start | autoretrigger;
      outC->expired = kcg_true;
      if (outC->TimerStatus_SM_reset_nxt) {
        tmp = kcg_true;
        outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
      }
      else {
        tmp = kcg_false;
        outC->TimerStatus_SM_state_nxt = SSM_st_Expired_TimerStatus_SM;
      }
      break;
    case SSM_st_Counting_TimerStatus_SM :
      Counting_weakb_clock_TimerStatu = TimerStatus_SM_fired_strong !=
        SSM_TR_no_trans_TimerStatus_SM;
      if (TimerStatus_SM_reset_act) {
        outC->init = kcg_true;
      }
      /* 1_fby_1_init_4 */ if (outC->init) {
        outC->_L4_TimerStatus_SM_Counting = actualTime;
      }
      _L7_TimerStatus_SM_Counting = actualTime - interval >=
        outC->_L4_TimerStatus_SM_Counting;
      outC->init = kcg_false;
      outC->expired = _L7_TimerStatus_SM_Counting;
      /* strong_fired_Counting */ if (Counting_weakb_clock_TimerStatu) {
        tmp = kcg_false;
        outC->TimerStatus_SM_reset_nxt = kcg_false;
        outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
      }
      else {
        br_3_guard_TimerStatus_SM_Count = _L7_TimerStatus_SM_Counting &
          autoretrigger;
        if (re_start) {
          tmp = kcg_true;
          outC->TimerStatus_SM_reset_nxt = kcg_true;
          outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
        }
        else {
          /* cb_anon_sm */ if (br_3_guard_TimerStatus_SM_Count) {
            tmp = kcg_true;
          }
          else {
            tmp = kcg_false;
          }
          if (br_3_guard_TimerStatus_SM_Count) {
            outC->TimerStatus_SM_reset_nxt = kcg_true;
            outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
          }
          else {
            if (_L7_TimerStatus_SM_Counting) {
              outC->TimerStatus_SM_state_nxt = SSM_st_Expired_TimerStatus_SM;
            }
            else {
              outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
            }
            outC->TimerStatus_SM_reset_nxt = _L7_TimerStatus_SM_Counting;
          }
        }
      }
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      tmp = kcg_false;
      outC->TimerStatus_SM_reset_nxt = kcg_false;
      outC->expired = kcg_false;
      outC->TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
      break;
    
  }
  outC->started = tmp1 | tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countDownTimer_MoRC_Pck_Utils.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */


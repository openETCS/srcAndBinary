/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "flagsFromMessages_InformationFi.h"

#ifndef KCG_USER_DEFINED_INIT
void flagsFromMessages_init_Informat(outC_flagsFromMessages_Informat *outC)
{
  outC->NTC_transitionPending = kcg_true;
  outC->p27valid = kcg_true;
  outC->p21valid = kcg_true;
  outC->p15valid = kcg_true;
  outC->p12valid = kcg_true;
  outC->L1_transitionPending = kcg_true;
  outC->L2L3_transitionPending = kcg_true;
  outC->init = kcg_true;
  outC->IF_toML.P12_received = kcg_true;
  outC->IF_toML.P15_received = kcg_true;
  outC->IF_toML.P21_received = kcg_true;
  outC->IF_toML.P27_received = kcg_true;
  outC->outFilterEvents.pendingL1Transition = kcg_true;
  outC->outFilterEvents.pendingL12L3Transition = kcg_true;
  outC->outFilterEvents.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->outFilterEvents.emergencyStopAccepted = kcg_true;
  outC->outFilterEvents.lastAckTextMessageId = 0;
  outC->outFilterEvents.pendingNTCTransition = kcg_true;
  outC->outFilterEvents.SPPAndGradientOnBoard = kcg_true;
  outC->outFilterEvents.MACoverNotFullLength = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void flagsFromMessages_reset_Informa(outC_flagsFromMessages_Informat *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::flagsFromMessages */
void flagsFromMessages_InformationFi(
  /* InformationFilter_Pkg::flagsFromMessages::doReset */ kcg_bool doReset,
  /* InformationFilter_Pkg::flagsFromMessages::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* InformationFilter_Pkg::flagsFromMessages::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  outC_flagsFromMessages_Informat *outC)
{
  /* InformationFilter_Pkg::flagsFromMessages */
  static kcg_bool tmp4;
  /* InformationFilter_Pkg::flagsFromMessages */
  static kcg_bool tmp3;
  /* InformationFilter_Pkg::flagsFromMessages */
  static kcg_bool tmp2;
  /* InformationFilter_Pkg::flagsFromMessages */
  static P27_InternationalStaticSpeedPro tmp1;
  /* InformationFilter_Pkg::flagsFromMessages */
  static kcg_bool tmp;
  /* InformationFilter_Pkg::flagsFromMessages::_L225 */
  static kcg_bool _L225;
  /* InformationFilter_Pkg::flagsFromMessages::_L208 */
  static kcg_bool _L208;
  /* InformationFilter_Pkg::flagsFromMessages::_L184 */
  static P021_OBU_T_TM _L184;
  /* InformationFilter_Pkg::flagsFromMessages::_L183 */
  static kcg_bool _L183;
  /* InformationFilter_Pkg::flagsFromMessages::_L182 */
  static P015_OBU_T_TM _L182;
  /* InformationFilter_Pkg::flagsFromMessages::_L181 */
  static kcg_bool _L181;
  /* InformationFilter_Pkg::flagsFromMessages::_L178 */
  static P012_OBU_T_TM _L178;
  /* InformationFilter_Pkg::flagsFromMessages::_L177 */
  static kcg_bool _L177;
  /* InformationFilter_Pkg::flagsFromMessages::p41 */
  static P041_OBU_T_TM p41;
  
  /* 1 */ Read_P041_TM(&(*actualMessage).packets, &tmp, &p41);
  /* ck_p41valid */ if (tmp) {
    outC->L2L3_transitionPending = (M_LEVELTR_Level_2 ==
        p41.sections[0].m_leveltr) | (p41.sections[0].m_leveltr ==
        M_LEVELTR_Level_3);
    outC->L1_transitionPending = p41.sections[0].m_leveltr == M_LEVELTR_Level_1;
    outC->NTC_transitionPending = p41.sections[0].m_leveltr ==
      M_LEVELTR_Level_NTC_specified_b;
  }
  else /* ck_anon_activ */ if (doReset) {
    outC->NTC_transitionPending = kcg_false;
    outC->L1_transitionPending = kcg_false;
    outC->L2L3_transitionPending = kcg_false;
  }
  else /* last_init_ck_NTC_transitionPending */ if (outC->init) {
    outC->NTC_transitionPending = kcg_false;
    outC->L1_transitionPending = kcg_false;
    outC->L2L3_transitionPending = kcg_false;
  }
  kcg_copy_filterRelatedEvents_T_(&outC->outFilterEvents, inFilterEvents);
  outC->outFilterEvents.pendingL12L3Transition = outC->L2L3_transitionPending;
  outC->outFilterEvents.SPPAndGradientOnBoard = outC->L2L3_transitionPending;
  outC->outFilterEvents.pendingL1Transition = outC->L1_transitionPending;
  /* 1 */ Read_P012_TM(&(*actualMessage).packets, &_L177, &_L178);
  /* 1 */ Read_P015_TM(&(*actualMessage).packets, &_L181, &_L182);
  /* 1 */ Read_P021_TM(&(*actualMessage).packets, &_L183, &_L184);
  _L208 = !doReset;
  _L225 = !tmp;
  /* last_init_ck_p27valid */ if (outC->init) {
    tmp4 = kcg_false;
    tmp3 = kcg_false;
    tmp2 = kcg_false;
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp4 = outC->p12valid;
    tmp3 = outC->p15valid;
    tmp2 = outC->p21valid;
    tmp = outC->p27valid;
  }
  outC->p12valid = _L208 & (_L177 | (_L225 & tmp4));
  outC->IF_toML.P12_received = outC->NTC_transitionPending | outC->p12valid;
  outC->p15valid = _L208 & (_L181 | (_L225 & tmp3));
  outC->IF_toML.P15_received = outC->p15valid;
  outC->p21valid = _L208 & (_L183 | (_L225 & tmp2));
  outC->IF_toML.P21_received = outC->p21valid;
  /* 1 */ Read_P027V1_Legacy_for_ML_TM_sp(&(*actualMessage).packets, &tmp1);
  outC->p27valid = _L208 & (tmp1.valid | (_L225 & tmp));
  outC->IF_toML.P27_received = outC->p27valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** flagsFromMessages_InformationFi.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


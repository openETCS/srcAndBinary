/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_Events_ProvidePositio.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervise_Events_init_ProvidePo(outC_Supervise_Events_ProvidePo *outC)
{
  outC->result = kcg_true;
  /* 1 */ op_3_6_5_1_4_j_init_ProvidePosi(&outC->_5_Context_1);
  /* 1 */ op_3_6_5_1_4_c_d_init_ProvidePo(&outC->_4_Context_1);
  /* 1 */ op_3_6_5_1_4_e_h_k_init_Provide(&outC->_3_Context_1);
  /* 1 */ op_3_6_5_1_4_f_g_init_ProvidePo(&outC->_2_Context_1);
  /* 1 */ op_3_6_5_1_4_b_init_ProvidePosi(&outC->_1_Context_1);
  /* 1 */ op_3_6_5_1_4_a_i_init_ProvidePo(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervise_Events_reset_ProvideP(outC_Supervise_Events_ProvidePo *outC)
{
  /* 1 */ op_3_6_5_1_4_j_reset_ProvidePos(&outC->_5_Context_1);
  /* 1 */ op_3_6_5_1_4_c_d_reset_ProvideP(&outC->_4_Context_1);
  /* 1 */ op_3_6_5_1_4_e_h_k_reset_Provid(&outC->_3_Context_1);
  /* 1 */ op_3_6_5_1_4_f_g_reset_ProvideP(&outC->_2_Context_1);
  /* 1 */ op_3_6_5_1_4_b_reset_ProvidePos(&outC->_1_Context_1);
  /* 1 */ op_3_6_5_1_4_a_i_reset_ProvideP(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervise_Events */
void Supervise_Events_ProvidePositio(
  /* ProvidePositionReport_Pkg::Supervise_Events::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::Supervise_Events::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_Events::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Supervise_Events::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::rbcComm */ RBC_Communication_T_ProvidePosi *rbcComm,
  /* ProvidePositionReport_Pkg::Supervise_Events::trackInfo */ LocationBasedEvents_T_ProvidePo *trackInfo,
  outC_Supervise_Events_ProvidePo *outC)
{
  /* ProvidePositionReport_Pkg::Supervise_Events::_L15 */
  static kcg_bool _L15;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L16 */
  static positionedBG_T_TrainPosition_Ty _L16;
  
  /* 1 */ op_GetLRBGfromBGs_ProvidePositi(posBGs, trainPos, &_L15, &_L16);
  /* 1 */ op_3_6_5_1_4_a_i_ProvidePositio(odometry, &outC->Context_1);
  /* 1 */ op_3_6_5_1_4_b_ProvidePositionR(modeLevelStatus, &outC->_1_Context_1);
  /* 1 */ op_3_6_5_1_4_f_g_ProvidePositio(modeLevelStatus, &outC->_2_Context_1);
  /* 1 */
  op_3_6_5_1_4_e_h_k_ProvidePosit(trackInfo, rbcComm, &outC->_3_Context_1);
  /* 1 */
  op_3_6_5_1_4_c_d_ProvidePositio(train2trackStatus, &outC->_4_Context_1);
  /* 1 */ op_3_6_5_1_4_j_ProvidePositionR(&_L16, trainPos, &outC->_5_Context_1);
  outC->result = outC->Context_1.trigger | outC->_1_Context_1.trigger |
    outC->_2_Context_1.trigger | outC->_3_Context_1.trigger |
    outC->_4_Context_1.trigger | outC->_5_Context_1.trigger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_Events_ProvidePositio.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_Events_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervise_Events_init_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  outC->result = kcg_true;
  /* 1 */ op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(&outC->_5_Context_1);
  /* 1 */ op_3_6_5_1_4_c_d_init_ProvidePositionReport_Pkg(&outC->_4_Context_1);
  /* 1 */
  op_3_6_5_1_4_e_h_k_init_ProvidePositionReport_Pkg(&outC->_3_Context_1);
  /* 1 */ op_3_6_5_1_4_f_g_init_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */ op_3_6_5_1_4_b_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ op_3_6_5_1_4_a_i_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervise_Events_reset_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(&outC->_5_Context_1);
  /* 1 */ op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(&outC->_4_Context_1);
  /* 1 */
  op_3_6_5_1_4_e_h_k_reset_ProvidePositionReport_Pkg(&outC->_3_Context_1);
  /* 1 */ op_3_6_5_1_4_f_g_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */ op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervise_Events */
void Supervise_Events_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervise_Events::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Supervise_Events::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_Events::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Supervise_Events::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::rbcComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::Supervise_Events::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Supervise_Events::_L15 */
  static kcg_bool _L15;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  
  /* 1 */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(posBGs, trainPos, &_L15, &_L16);
  /* 1 */
  op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(odometry, &outC->Context_1);
  /* 1 */
  op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
    modeLevelStatus,
    &outC->_1_Context_1);
  /* 1 */
  op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(
    modeLevelStatus,
    &outC->_2_Context_1);
  /* 1 */
  op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg(
    trackInfo,
    rbcComm,
    &outC->_3_Context_1);
  /* 1 */
  op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
    train2trackStatus,
    &outC->_4_Context_1);
  /* 1 */
  op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
    &_L16,
    trainPos,
    &outC->_5_Context_1);
  outC->result = outC->Context_1.trigger | outC->_1_Context_1.trigger |
    outC->_2_Context_1.trigger | outC->_3_Context_1.trigger |
    outC->_4_Context_1.trigger | outC->_5_Context_1.trigger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_Events_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */


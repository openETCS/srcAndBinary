/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_PosRepParam_ProvidePo.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervise_PosRepParam_init_Prov(outC_Supervise_PosRepParam_Prov *outC)
{
  outC->trigger = kcg_true;
  outC->_L11 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ Supervision_M_Loc_init_ProvideP(&outC->_1_Context_1);
  /* 1 */ Supervision_T_Cycloc_init_Provi(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervise_PosRepParam_reset_Pro(outC_Supervise_PosRepParam_Prov *outC)
{
  outC->init = kcg_true;
  /* 1 */ Supervision_M_Loc_reset_Provide(&outC->_1_Context_1);
  /* 1 */ Supervision_T_Cycloc_reset_Prov(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervise_PosRepParam */
void Supervise_PosRepParam_ProvidePo(
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posRepParam */ P58_PositionReportParameters_T_ *posRepParam,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::systemTime */ SystemTime_T_ProvidePositionRep systemTime,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  outC_Supervise_PosRepParam_Prov *outC)
{
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L17 */
  static kcg_bool _L17;
  
  _L17 = 0 != (*posRepParam).t_cycloc;
  /* ck__L17 */ if (_L17) {
    /* 1 */
    Supervision_T_Cycloc_ProvidePos(
      present,
      (*posRepParam).t_cycloc,
      systemTime,
      &outC->Context_1);
    outC->_L11 = outC->Context_1.trigger;
  }
  else if (outC->init) {
    outC->_L11 = kcg_false;
  }
  outC->init = kcg_false;
  /* 1 */
  Supervision_M_Loc_ProvidePositi(
    trainPos,
    posBGs,
    (*posRepParam).m_loc,
    present,
    &outC->_1_Context_1);
  outC->trigger = outC->_1_Context_1.trigger | /* 1 */
    Supervision_D_Cycloc_ProvidePos((*posRepParam).d_cycloc) | /* 1 */
    Supervision_N_Iter_ProvidePosit(
      (*posRepParam).n_iter,
      &(*posRepParam).iterPacket58List) | outC->_L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_PosRepParam_ProvidePo.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


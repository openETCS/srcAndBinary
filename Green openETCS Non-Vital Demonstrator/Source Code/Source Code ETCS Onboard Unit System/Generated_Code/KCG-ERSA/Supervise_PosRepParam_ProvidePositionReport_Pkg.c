/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_PosRepParam_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervise_PosRepParam_init_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  /* 1 */ Supervision_M_Loc_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ Supervision_T_Cycloc_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  /* 1 */
  Supervision_M_Loc_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervise_PosRepParam */
void Supervise_PosRepParam_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posRepParam */ P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam */ kcg_bool tmp;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L17 */ kcg_bool _L17;
  
  _L17 = 0 != (*posRepParam).t_cycloc;
  /* 1 */
  Supervision_M_Loc_ProvidePositionReport_Pkg(
    trainPos,
    posBGs,
    (*posRepParam).m_loc,
    present,
    &outC->_1_Context_1);
  /* ck__L17 */ if (_L17) {
    /* 1 */
    Supervision_T_Cycloc_ProvidePositionReport_Pkg(
      present,
      (*posRepParam).t_cycloc,
      systemTime,
      &outC->Context_1);
    tmp = outC->Context_1.trigger;
  }
  else {
    tmp = kcg_false;
  }
  outC->trigger = outC->_1_Context_1.trigger | /* 1 */
    Supervision_D_Cycloc_ProvidePositionReport_Pkg((*posRepParam).d_cycloc) |
    /* 1 */
    Supervision_N_Iter_ProvidePositionReport_Pkg(
      (*posRepParam).n_iter,
      &(*posRepParam).iterPacket58List) | tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_PosRepParam_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */


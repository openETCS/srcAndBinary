/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_PosRepParam_ProvidePositionReport_Pkg.h"

void Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ Supervision_M_Loc_reset_ProvidePositionReport_Pkg(&outC->Context_1);
  /* 1 */
  Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
}

/* ProvidePositionReport_Pkg::Supervise_PosRepParam */
void Supervise_PosRepParam_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posRepParam */P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::present */kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::systemTime */SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool tmp;
  
  tmp = 0 != (*posRepParam).t_cycloc;
  if (tmp) {
    /* 1 */
    Supervision_T_Cycloc_ProvidePositionReport_Pkg(
      present,
      (*posRepParam).t_cycloc,
      systemTime,
      &outC->_1_Context_1);
    outC->_L11 = outC->_1_Context_1.trigger;
  }
  else if (outC->init) {
    outC->_L11 = kcg_false;
  }
  outC->init = kcg_false;
  /* 1 */
  Supervision_M_Loc_ProvidePositionReport_Pkg(
    trainPos,
    posBGs,
    (*posRepParam).m_loc,
    present,
    &outC->Context_1);
  outC->trigger = outC->Context_1.trigger | /* 1 */
    Supervision_D_Cycloc_ProvidePositionReport_Pkg((*posRepParam).d_cycloc) |
    /* 1 */
    Supervision_N_Iter_ProvidePositionReport_Pkg(
      (*posRepParam).n_iter,
      &(*posRepParam).iterPacket58List) | outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervise_PosRepParam_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReceiveReportParameters_Provide.h"

#ifndef KCG_USER_DEFINED_INIT
void ReceiveReportParameters_init_Pr(outC_ReceiveReportParameters_Pr *outC)
{
  static kcg_int i;
  
  outC->present = kcg_true;
  outC->init = kcg_true;
  outC->posRepParam.valid = kcg_true;
  outC->posRepParam.nid_packet = 0;
  outC->posRepParam.q_dir = Q_DIR_Reverse;
  outC->posRepParam.l_packet = 0;
  outC->posRepParam.q_scale = Q_SCALE_10_cm_scale;
  outC->posRepParam.t_cycloc = 0;
  outC->posRepParam.d_cycloc = 0;
  outC->posRepParam.m_loc = M_LOC_Now;
  outC->posRepParam.n_iter = 0;
  for (i = 0; i < 2; i++) {
    outC->posRepParam.iterPacket58List[i].d_loc = 0;
    outC->posRepParam.iterPacket58List[i].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  for (i = 0; i < 8; i++) {
    outC->out_reportedBGs[i].valid = kcg_true;
    outC->out_reportedBGs[i].nidBG = 0;
    outC->out_reportedBGs[i].location.nominal = 0;
    outC->out_reportedBGs[i].location.d_min = 0;
    outC->out_reportedBGs[i].location.d_max = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ReceiveReportParameters_reset_P(outC_ReceiveReportParameters_Pr *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::ReceiveReportParameters */
void ReceiveReportParameters_Provide(
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */ ReportedBGList_T_ProvidePositio *reportedBGs,
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  outC_ReceiveReportParameters_Pr *outC)
{
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L69 */
  static P58_PositionReportParameters_T_ _L69;
  
  /* 1 */
  CheckValidityPacket58_ProvidePo(
    &(*inMessage).BG_Common_Header,
    reportedBGs,
    &_L8,
    &outC->out_reportedBGs);
  /* 1 */ Read_P058_Legacy_TM_specific(&(*inMessage).packets, &_L69);
  outC->present = _L69.valid;
  /* 1 */ if (outC->present) {
    kcg_copy_P58_PositionReportPara(&outC->posRepParam, &_L69);
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_P58_PositionReportPara(
      &outC->posRepParam,
      (P58_PositionReportParameters_T_ *) &emptyPacket58_ProvidePositionRe);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ReceiveReportParameters_Provide.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReceiveReportParameters_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void ReceiveReportParameters_init_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  kcg_int i;
  
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
void ReceiveReportParameters_reset_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::ReceiveReportParameters */
void ReceiveReportParameters_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L8 */ kcg_bool _L8;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L69 */ P58_PositionReportParameters_T_Packet_Types_Pkg _L69;
  
  /* 1 */
  CheckValidityPacket58_ProvidePositionReport_Pkg(
    &(*inMessage).BG_Common_Header,
    reportedBGs,
    &_L8,
    &outC->out_reportedBGs);
  /* 1 */ Read_P058_Legacy_TM_specific(&(*inMessage).packets, &_L69);
  outC->present = _L69.valid;
  /* 1 */ if (outC->present) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->posRepParam,
      &_L69);
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->posRepParam,
      (P58_PositionReportParameters_T_Packet_Types_Pkg *)
        &emptyPacket58_ProvidePositionReport_Pkg);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ReceiveReportParameters_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */


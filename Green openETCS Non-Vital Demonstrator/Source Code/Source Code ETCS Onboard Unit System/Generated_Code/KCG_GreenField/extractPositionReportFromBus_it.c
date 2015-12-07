/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_it.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr */
void extractPositionReportFromBus_it(
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::i */ kcg_int i,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::acc_in */ kcg_int acc_in,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::message */ M_TrainTrackMessageBus_t_TM_Tra *message,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::cont */ kcg_bool *cont,
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::acc_out */ kcg_int *acc_out)
{
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L8 */
  static M_TrainTrack_Message_T_TM_radio _L8;
  /* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr::_L89 */
  static kcg_bool _L89;
  
  if ((0 <= i) & (i < 5)) {
    kcg_copy_M_TrainTrack_Message_T(&_L8, &(*message)[i]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T(
      &_L8,
      (M_TrainTrack_Message_T_TM_radio *) &DEFAULT_TrainToTrackMessage_TM_);
  }
  _L89 = _L8.Message.valid & (136 == _L8.Message.nid_message) &
    ((nid_meta_p000_TM_radio_messages == _L8.OptionalPackets[0]) |
      (_L8.OptionalPackets[0] == nid_meta_p001_TM_radio_messages));
  *cont = !_L89;
  /* 1 */ if (_L89) {
    *acc_out = i;
  }
  else {
    *acc_out = acc_in;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** extractPositionReportFromBus_it.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */


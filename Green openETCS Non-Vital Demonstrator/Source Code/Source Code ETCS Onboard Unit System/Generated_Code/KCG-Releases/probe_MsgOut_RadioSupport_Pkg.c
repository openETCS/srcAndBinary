/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probe_MsgOut_RadioSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void probe_MsgOut_init_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->outTTrain = 0;
  outC->Msg_0ut = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void probe_MsgOut_reset_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RadioSupport_Pkg::probe_MsgOut */
void probe_MsgOut_RadioSupport_Pkg(
  /* RadioSupport_Pkg::probe_MsgOut::fromEVC */ M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* RadioSupport_Pkg::probe_MsgOut::show136 */ kcg_bool show136,
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  /* RadioSupport_Pkg::probe_MsgOut::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* RadioSupport_Pkg::probe_MsgOut::lastTTrain */
  static T_TRAIN last_lastTTrain;
  /* RadioSupport_Pkg::probe_MsgOut::lastMSG */
  static NID_MESSAGE last_lastMSG;
  
  /* last_init_ck_lastTTrain */ if (outC->init) {
    last_lastMSG = 0;
    outC->init = kcg_false;
    last_lastTTrain = 0;
  }
  else {
    last_lastMSG = outC->Msg_0ut;
    last_lastTTrain = outC->outTTrain;
  }
  /* ck_isValid */ if ((*fromEVC).Message.valid) {
    _L7_IfBlock1 = ((*fromEVC).Message.nid_message !=
        co136_Train_Position_Report_Id_Pkg) | show136;
    /* 5 */ if (_L7_IfBlock1) {
      outC->Msg_0ut = (*fromEVC).Message.nid_message;
      outC->outTTrain = (*fromEVC).Message.t_train;
    }
    else {
      outC->Msg_0ut = last_lastMSG;
      outC->outTTrain = last_lastTTrain;
    }
  }
  else {
    outC->Msg_0ut = last_lastMSG;
    outC->outTTrain = last_lastTTrain;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** probe_MsgOut_RadioSupport_Pkg.c
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */


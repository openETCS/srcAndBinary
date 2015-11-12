/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genMsgToRBC_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::genMsgToRBC */
void genMsgToRBC_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::present */ kcg_bool present,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::nid_message */ NID_MESSAGE nid_message,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::xt_train */ T_TRAIN xt_train,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::nid_engine */ NID_ENGINE nid_engine,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::radioMessage */ _9_Radio_TrainTrack_Message_T_R *radioMessage)
{
  (*radioMessage).present = present;
  (*radioMessage).header.present = present;
  (*radioMessage).header.nid_message = nid_message;
  (*radioMessage).header.t_train = t_train;
  (*radioMessage).header.nid_engine = nid_engine;
  (*radioMessage).header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_b;
  (*radioMessage).header.xT_TRAIN = xt_train;
  (*radioMessage).header.xNID_EM = 0;
  (*radioMessage).header.xQ_EMERGENCYSTOP = _32_Q_EMERGENCYSTOP_Conditional;
  (*radioMessage).header.xNID_TEXTMESSAGE = 0;
  kcg_copy_outPackets_T_Common_Ty(
    &(*radioMessage).packets,
    (outPackets_T_Common_Types_Pkg *) &cEmptyOutPackets_MoRC_Pck_Coder);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** genMsgToRBC_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Header_ProvidePositionRep.h"

/* ProvidePositionReport_Pkg::Build_Header */
void Build_Header_ProvidePositionRep(
  /* ProvidePositionReport_Pkg::Build_Header::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::Build_Header::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_Header::posRepHeader */ _9_Radio_TrainTrack_Header_T_Ra *posRepHeader)
{
  (*posRepHeader).present = kcg_true;
  (*posRepHeader).nid_message = 136;
  (*posRepHeader).t_train = t_train;
  (*posRepHeader).nid_engine = (*trainProps).nid_engine;
  (*posRepHeader).xQ_MARQSTREASON = cxQ_MARQSTREASON_ProvidePositio;
  (*posRepHeader).xT_TRAIN = cxT_TRAIN_ProvidePositionReport;
  (*posRepHeader).xNID_EM = cxNID_EM_ProvidePositionReport_;
  (*posRepHeader).xQ_EMERGENCYSTOP = cxQ_EMERGENCYSTOP_ProvidePositi;
  (*posRepHeader).xNID_TEXTMESSAGE = cxNID_TEXTMESSAGE_ProvidePositi;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Header_ProvidePositionRep.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */


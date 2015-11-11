/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:09
*************************************************************$ */
#ifndef _Trackside_GreenDemonstrator_Trackside_H_
#define _Trackside_GreenDemonstrator_Trackside_H_

#include "kcg_types.h"
#include "Story_Complete_Toolbox_Functions.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.h"
#include "RBC_New_RBC_Model_Pkg.h"

/* ========================  input structure  ====================== */
typedef struct {
  M_TrainTrack_Message_T_TM_radio_messages /* GreenDemonstrator::Trackside::Trackside::TrainTrackMessageIn */ TrainTrackMessageIn;
  kcg_int /* GreenDemonstrator::Trackside::Trackside::TrainPosition */ TrainPosition;
} inC_Trackside_GreenDemonstrator_Trackside;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_TM /* GreenDemonstrator::Trackside::Trackside::RadioMessage_out */ RadioMessage_out;
  CompressedPackets_T_Common_Types_Pkg /* GreenDemonstrator::Trackside::Trackside::RadioPackets_out */ RadioPackets_out;
  CompressedBaliseMessage_TM /* GreenDemonstrator::Trackside::Trackside::BaliseMessage */ BaliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  CompressedRadioMessage_TM /* GreenDemonstrator::Trackside::Trackside::_L16 */ _L16;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC_New_RBC_Model_Pkg /* 1 */ _1_Context_1;
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Trackside_GreenDemonstrator_Trackside;

/* ===========  node initialization and cycle functions  =========== */
/* GreenDemonstrator::Trackside::Trackside */
extern void Trackside_GreenDemonstrator_Trackside(
  inC_Trackside_GreenDemonstrator_Trackside *inC,
  outC_Trackside_GreenDemonstrator_Trackside *outC);

extern void Trackside_reset_GreenDemonstrator_Trackside(
  outC_Trackside_GreenDemonstrator_Trackside *outC);

#endif /* _Trackside_GreenDemonstrator_Trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Trackside_GreenDemonstrator_Trackside.h
** Generation date: 2015-11-10T18:22:09
*************************************************************$ */


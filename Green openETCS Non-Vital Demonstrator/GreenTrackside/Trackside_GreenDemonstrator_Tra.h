/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _Trackside_GreenDemonstrator_Tr
#define _Trackside_GreenDemonstrator_Tr

#include "kcg_types.h"
#include "Story_Complete_Toolbox_Function.h"
#include "_156_UtrechtAmsterdamScen_RBC_S.h"
#include "RBC_New_RBC_Model_Pkg.h"

/* ========================  input structure  ====================== */
typedef struct {
  M_TrainTrack_Message_T_TM_radio /* GreenDemonstrator::Trackside::Trackside::TrainTrackMessageIn */ TrainTrackMessageIn;
  kcg_int /* GreenDemonstrator::Trackside::Trackside::TrainPosition */ TrainPosition;
} inC_Trackside_GreenDemonstrator;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _6_Radio_TrackTrain_Header_T_TM /* GreenDemonstrator::Trackside::Trackside::RadioMessage_out */ RadioMessage_out;
  CompressedPackets_T_Common_Type /* GreenDemonstrator::Trackside::Trackside::RadioPackets_out */ RadioPackets_out;
  CompressedBaliseMessage_TM /* GreenDemonstrator::Trackside::Trackside::BaliseMessage */ BaliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  CompressedRadioMessage_TM /* GreenDemonstrator::Trackside::Trackside::_L16 */ _L16;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__156_UtrechtAmsterdamScen_ /* 1 */ _1_Context_1;
  outC_RBC_New_RBC_Model_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Trackside_GreenDemonstrato;

/* ===========  node initialization and cycle functions  =========== */
/* GreenDemonstrator::Trackside::Trackside */
extern void Trackside_GreenDemonstrator_Tra(
  inC_Trackside_GreenDemonstrator *inC,
  outC_Trackside_GreenDemonstrato *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Trackside_reset_GreenDemonstrat(
  outC_Trackside_GreenDemonstrato *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Trackside_init_GreenDemonstrato(
  outC_Trackside_GreenDemonstrato *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Trackside_GreenDemonstrator_Tr */
/* $**************** KCG Version 6.4 (build i21) ****************
** Trackside_GreenDemonstrator_Tra.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


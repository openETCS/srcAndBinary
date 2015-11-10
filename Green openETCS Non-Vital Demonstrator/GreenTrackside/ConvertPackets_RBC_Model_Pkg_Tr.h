/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _ConvertPackets_RBC_Model_Pkg_T
#define _ConvertPackets_RBC_Model_Pkg_T

#include "kcg_types.h"
#include "ConvertP000_RBC_Model_Pkg_Train.h"
#include "ConvertP001_RBC_Model_Pkg_Train.h"
#include "ConvertP003_RBC_Model_Pkg_Train.h"
#include "ConvertP004_RBC_Model_Pkg_Train.h"
#include "ConvertP005_RBC_Model_Pkg_Train.h"
#include "ConvertP009_RBC_Model_Pkg_Train.h"
#include "ConvertP011_RBC_Model_Pkg_Train.h"
#include "C_compr_P001_TM_TrainToTrack.h"
#include "C_compr_P000_TM_TrainToTrack.h"
#include "C_compr_P011_TM_TrainToTrack.h"
#include "C_compr_P009_TM_TrainToTrack.h"
#include "C_compr_P004_TM_TrainToTrack.h"
#include "C_compr_P005_TM_TrainToTrack.h"
#include "C_compr_P003_TM_TrainToTrack.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  outPackets_T_Common_Types_Pkg /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::oldPackets */ oldPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_compr_P003_TM_TrainToTra /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ConvertPackets_RBC_Model_P;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
extern void ConvertPackets_RBC_Model_Pkg_Tr(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::nid_message */ kcg_int nid_message,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::newPackets */ M_TrainTrack_compressed_packets *newPackets,
  outC_ConvertPackets_RBC_Model_P *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertPackets_reset_RBC_Model_(
  outC_ConvertPackets_RBC_Model_P *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertPackets_init_RBC_Model_P(
  outC_ConvertPackets_RBC_Model_P *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ConvertPackets_RBC_Model_Pkg_T */
/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertPackets_RBC_Model_Pkg_Tr.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */


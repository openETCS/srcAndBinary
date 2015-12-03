/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */
#ifndef _probePackets_EVC_MEM_Support_P
#define _probePackets_EVC_MEM_Support_P

#include "kcg_types.h"
#include "Read_P005_TM.h"
#include "Read_P042_TM.h"
#include "Read_P080_TM.h"
#include "Read_P065_TM.h"
#include "Read_P027V1_Legacy_for_ML_TM_sp.h"
#include "Read_P021_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P046_Legacy_TM_specific.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------   local probes  ------------------------- */
  P41_LevelTransistionOrders_T_Pa /* EVC_MEM_Support_Pkg::probePackets::p41 */ p41;
  P46_ConditionalLevelTransitionO /* EVC_MEM_Support_Pkg::probePackets::p46 */ p46;
  P005_OBU_T_TM /* EVC_MEM_Support_Pkg::probePackets::p05 */ p05;
  P27_InternationalStaticSpeedPro /* EVC_MEM_Support_Pkg::probePackets::p27 */ p27;
  P21_GradientProfiles_T_Packet_T /* EVC_MEM_Support_Pkg::probePackets::p21 */ p21;
  P42_SessionManagement_T_Packet_ /* EVC_MEM_Support_Pkg::probePackets::p42 */ p42;
  P080_OBU_T_TM /* EVC_MEM_Support_Pkg::probePackets::p80 */ p80;
  P065_OBU_T_TM /* EVC_MEM_Support_Pkg::probePackets::p65 */ p65;
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_probePackets_EVC_MEM_Suppo;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::probePackets */
extern void probePackets_EVC_MEM_Support_Pk(
  /* EVC_MEM_Support_Pkg::probePackets::actualMessage */ API_TrackSideInput_T_API_Msg_Pk *actualMessage,
  outC_probePackets_EVC_MEM_Suppo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void probePackets_reset_EVC_MEM_Supp(
  outC_probePackets_EVC_MEM_Suppo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void probePackets_init_EVC_MEM_Suppo(
  outC_probePackets_EVC_MEM_Suppo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _probePackets_EVC_MEM_Support_P */
/* $**************** KCG Version 6.4 (build i21) ****************
** probePackets_EVC_MEM_Support_Pk.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:32
*************************************************************$ */
#ifndef _probePackets_EVC_MEM_Support_Pkg_H_
#define _probePackets_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "Read_P005_TM.h"
#include "Read_P042_TM.h"
#include "Read_P080_TM.h"
#include "Read_P065_TM.h"
#include "Read_P021_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P027V1_TM_baseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------   local probes  ------------------------- */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* EVC_MEM_Support_Pkg::probePackets::p41 */ p41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* EVC_MEM_Support_Pkg::probePackets::p46 */ p46;
  P005_OBU_T_TM /* EVC_MEM_Support_Pkg::probePackets::p05 */ p05;
  P027V1_OBU_T_TM_baseline2 /* EVC_MEM_Support_Pkg::probePackets::p27 */ p27;
  P21_GradientProfiles_T_Packet_Types_Pkg /* EVC_MEM_Support_Pkg::probePackets::p21 */ p21;
  P42_SessionManagement_T_Packet_Types_Pkg /* EVC_MEM_Support_Pkg::probePackets::p42 */ p42;
  P080_OBU_T_TM /* EVC_MEM_Support_Pkg::probePackets::p80 */ p80;
  P065_OBU_T_TM /* EVC_MEM_Support_Pkg::probePackets::p65 */ p65;
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_probePackets_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::probePackets */
extern void probePackets_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::probePackets::actualMessage */ API_TrackSideInput_T_API_Msg_Pkg *actualMessage,
  outC_probePackets_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void probePackets_reset_EVC_MEM_Support_Pkg(
  outC_probePackets_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void probePackets_init_EVC_MEM_Support_Pkg(
  outC_probePackets_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _probePackets_EVC_MEM_Support_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** probePackets_EVC_MEM_Support_Pkg.h
** Generation date: 2015-12-07T14:52:32
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/additional_packets\kcg_s2c_config.txt
** Generation date: 2015-11-16T17:06:43
*************************************************************$ */
#ifndef _SEND_MergePackets_TM_API_H_
#define _SEND_MergePackets_TM_API_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  CompressedPackets_T_Common_Types_Pkg /* TM_API::SEND_MergePackets::packets_IN */ packets_IN;
  P001_trackside_int_T_TM /* TM_API::SEND_MergePackets::P001 */ P001;
  P002_trackside_int_T_TM /* TM_API::SEND_MergePackets::P002 */ P002;
  P003V1_trackside_int_T_TM_baseline2 /* TM_API::SEND_MergePackets::P003_baseline2 */ P003_baseline2;
  P005_trackside_int_T_TM /* TM_API::SEND_MergePackets::P005 */ P005;
  P012_trackside_int_T_TM /* TM_API::SEND_MergePackets::P012 */ P012;
  P015_trackside_int_T_TM /* TM_API::SEND_MergePackets::P015 */ P015;
  P016_trackside_int_T_TM /* TM_API::SEND_MergePackets::P016 */ P016;
  P021_trackside_int_T_TM /* TM_API::SEND_MergePackets::P021 */ P021;
  P027V1_trackside_int_T_TM_baseline2 /* TM_API::SEND_MergePackets::P027_baseline2 */ P027_baseline2;
  P039V1_trackside_int_T_TM_baseline2 /* TM_API::SEND_MergePackets::P039_baseline2 */ P039_baseline2;
  P040_trackside_int_T_TM /* TM_API::SEND_MergePackets::P040 */ P040;
  P041_trackside_int_T_TM /* TM_API::SEND_MergePackets::P041 */ P041;
  P042_trackside_int_T_TM /* TM_API::SEND_MergePackets::P042 */ P042;
  P045_trackside_int_T_TM /* TM_API::SEND_MergePackets::P045 */ P045;
  P046_trackside_int_T_TM /* TM_API::SEND_MergePackets::P046 */ P046;
  P057_trackside_int_T_TM /* TM_API::SEND_MergePackets::P057 */ P057;
  P058_trackside_int_T_TM /* TM_API::SEND_MergePackets::P058 */ P058;
  P064_trackside_int_T_TM /* TM_API::SEND_MergePackets::P064 */ P064;
  P065_trackside_int_T_TM /* TM_API::SEND_MergePackets::P065 */ P065;
  P066_trackside_int_T_TM /* TM_API::SEND_MergePackets::P066 */ P066;
  P071_trackside_int_T_TM /* TM_API::SEND_MergePackets::P071 */ P071;
  P072V1_trackside_int_T_TM_baseline2 /* TM_API::SEND_MergePackets::P072_baseline2 */ P072_baseline2;
  P080_trackside_int_T_TM /* TM_API::SEND_MergePackets::P080 */ P080;
  P131_trackside_int_T_TM /* TM_API::SEND_MergePackets::P131 */ P131;
  P132_trackside_int_T_TM /* TM_API::SEND_MergePackets::P132 */ P132;
  P133_trackside_int_T_TM /* TM_API::SEND_MergePackets::P133 */ P133;
  P134_trackside_int_T_TM /* TM_API::SEND_MergePackets::P134 */ P134;
  P135_trackside_int_T_TM /* TM_API::SEND_MergePackets::P135 */ P135;
  P136_trackside_int_T_TM /* TM_API::SEND_MergePackets::P136 */ P136;
  P137_trackside_int_T_TM /* TM_API::SEND_MergePackets::P137 */ P137;
  P138_trackside_int_T_TM /* TM_API::SEND_MergePackets::P138 */ P138;
  P139_trackside_int_T_TM /* TM_API::SEND_MergePackets::P139 */ P139;
  P140_trackside_int_T_TM /* TM_API::SEND_MergePackets::P140 */ P140;
  P141_trackside_int_T_TM /* TM_API::SEND_MergePackets::P141 */ P141;
  P143_trackside_int_T_TM /* TM_API::SEND_MergePackets::P143 */ P143;
  P145_trackside_int_T_TM /* TM_API::SEND_MergePackets::P145 */ P145;
  P254_trackside_int_T_TM /* TM_API::SEND_MergePackets::P254 */ P254;
  P255_trackside_int_T_TM /* TM_API::SEND_MergePackets::P255 */ P255;
} inC_SEND_MergePackets_TM_API;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* TM_API::SEND_MergePackets::packetsOUT */ packetsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SEND_MergePackets_TM_API;

/* ===========  node initialization and cycle functions  =========== */
/* TM_API::SEND_MergePackets */
extern void SEND_MergePackets_TM_API(
  inC_SEND_MergePackets_TM_API *inC,
  outC_SEND_MergePackets_TM_API *outC);

extern void SEND_MergePackets_reset_TM_API(outC_SEND_MergePackets_TM_API *outC);

#endif /* _SEND_MergePackets_TM_API_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_MergePackets_TM_API.h
** Generation date: 2015-11-16T17:06:43
*************************************************************$ */


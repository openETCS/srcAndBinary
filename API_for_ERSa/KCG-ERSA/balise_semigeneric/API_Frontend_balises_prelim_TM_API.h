/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/balise_semigeneric\kcg_s2c_config.txt
** Generation date: 2015-11-16T17:04:13
*************************************************************$ */
#ifndef _API_Frontend_balises_prelim_TM_API_H_
#define _API_Frontend_balises_prelim_TM_API_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  BaliseTelegramHeader_int_T_TM /* TM_API::API_Frontend_balises_prelim::telegram_header */ telegram_header;
  CompressedPackets_T_Common_Types_Pkg /* TM_API::API_Frontend_balises_prelim::packets_in */ packets_in;
  P001_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P001 */ P001;
  P002_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P002 */ P002;
  P003V1_trackside_int_T_TM_baseline2 /* TM_API::API_Frontend_balises_prelim::P003_baseline2 */ P003_baseline2;
  P005_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P005 */ P005;
  P012_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P012 */ P012;
  P015_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P015 */ P015;
  P016_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P016 */ P016;
  P021_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P021 */ P021;
  P027V1_trackside_int_T_TM_baseline2 /* TM_API::API_Frontend_balises_prelim::P027_baseline2 */ P027_baseline2;
  P039V1_trackside_int_T_TM_baseline2 /* TM_API::API_Frontend_balises_prelim::P039_baseline2 */ P039_baseline2;
  P040_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P040 */ P040;
  P041_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P041 */ P041;
  P042_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P042 */ P042;
  P045_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P045 */ P045;
  P046_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P046 */ P046;
  P057_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P057 */ P057;
  P058_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P058 */ P058;
  P064_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P064 */ P064;
  P065_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P065 */ P065;
  P066_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P066 */ P066;
  P071_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P071 */ P071;
  P072V1_trackside_int_T_TM_baseline2 /* TM_API::API_Frontend_balises_prelim::P072_baseline2 */ P072_baseline2;
  P080_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P080 */ P080;
  P131_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P131 */ P131;
  P132_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P132 */ P132;
  P133_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P133 */ P133;
  P134_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P134 */ P134;
  P135_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P135 */ P135;
  P136_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P136 */ P136;
  P137_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P137 */ P137;
  P138_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P138 */ P138;
  P139_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P139 */ P139;
  P140_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P140 */ P140;
  P141_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P141 */ P141;
  P143_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P143 */ P143;
  P145_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P145 */ P145;
  P254_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P254 */ P254;
  P255_trackside_int_T_TM /* TM_API::API_Frontend_balises_prelim::P255 */ P255;
} inC_API_Frontend_balises_prelim_TM_API;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* TM_API::API_Frontend_balises_prelim::telegram_out */ telegram_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_API_Frontend_balises_prelim_TM_API;

/* ===========  node initialization and cycle functions  =========== */
/* TM_API::API_Frontend_balises_prelim */
extern void API_Frontend_balises_prelim_TM_API(
  inC_API_Frontend_balises_prelim_TM_API *inC,
  outC_API_Frontend_balises_prelim_TM_API *outC);

extern void API_Frontend_balises_prelim_reset_TM_API(
  outC_API_Frontend_balises_prelim_TM_API *outC);

#endif /* _API_Frontend_balises_prelim_TM_API_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** API_Frontend_balises_prelim_TM_API.h
** Generation date: 2015-11-16T17:04:13
*************************************************************$ */


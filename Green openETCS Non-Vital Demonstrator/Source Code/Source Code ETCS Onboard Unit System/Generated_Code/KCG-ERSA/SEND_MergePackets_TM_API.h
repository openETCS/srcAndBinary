/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */
#ifndef _SEND_MergePackets_TM_API_H_
#define _SEND_MergePackets_TM_API_H_

#include "kcg_types.h"
#include "Write_P042_TM_trackside.h"
#include "Write_P001_TM_trackside.h"
#include "Write_P002_TM_trackside.h"
#include "Write_P005_TM_trackside.h"
#include "Write_P012_TM_trackside.h"
#include "Write_P015_TM_trackside.h"
#include "Write_P021_TM_trackside.h"
#include "Write_P016_TM_trackside.h"
#include "Write_P041_TM_trackside.h"
#include "Write_P040_TM_trackside.h"
#include "Write_P057_TM_trackside.h"
#include "Write_P046_TM_trackside.h"
#include "Write_P045_TM_trackside.h"
#include "Write_P065_TM_trackside.h"
#include "Write_P064_TM_trackside.h"
#include "Write_P058_TM_trackside.h"
#include "Write_P071_TM_trackside.h"
#include "Write_P066_TM_trackside.h"
#include "Write_P132_TM_trackside.h"
#include "Write_P131_TM_trackside.h"
#include "Write_P080_TM_trackside.h"
#include "Write_P135_TM_trackside.h"
#include "Write_P134_TM_trackside.h"
#include "Write_P133_TM_trackside.h"
#include "Write_P138_TM_trackside.h"
#include "Write_P137_TM_trackside.h"
#include "Write_P136_TM_trackside.h"
#include "Write_P141_TM_trackside.h"
#include "Write_P140_TM_trackside.h"
#include "Write_P139_TM_trackside.h"
#include "Write_P254_TM_trackside.h"
#include "Write_P145_TM_trackside.h"
#include "Write_P143_TM_trackside.h"
#include "Write_P255_TM_trackside.h"
#include "Write_P003V1_TM_trackside_baseline2.h"
#include "Write_P027V1_TM_trackside_baseline2.h"
#include "Write_P072V1_TM_trackside_baseline2.h"
#include "Write_P039V1_TM_trackside_baseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_API::SEND_MergePackets */
extern void SEND_MergePackets_TM_API(
  /* TM_API::SEND_MergePackets::packets_IN */ CompressedPackets_T_Common_Types_Pkg *packets_IN,
  /* TM_API::SEND_MergePackets::P001 */ P001_trackside_int_T_TM *P001,
  /* TM_API::SEND_MergePackets::P002 */ P002_trackside_int_T_TM *P002,
  /* TM_API::SEND_MergePackets::P003_baseline2 */ P003V1_trackside_int_T_TM_baseline2 *P003_baseline2,
  /* TM_API::SEND_MergePackets::P005 */ P005_trackside_int_T_TM *P005,
  /* TM_API::SEND_MergePackets::P012 */ P012_trackside_int_T_TM *P012,
  /* TM_API::SEND_MergePackets::P015 */ P015_trackside_int_T_TM *P015,
  /* TM_API::SEND_MergePackets::P016 */ P016_trackside_int_T_TM *P016,
  /* TM_API::SEND_MergePackets::P021 */ P021_trackside_int_T_TM *P021,
  /* TM_API::SEND_MergePackets::P027_baseline2 */ P027V1_trackside_int_T_TM_baseline2 *P027_baseline2,
  /* TM_API::SEND_MergePackets::P039_baseline2 */ P039V1_trackside_int_T_TM_baseline2 *P039_baseline2,
  /* TM_API::SEND_MergePackets::P040 */ P040_trackside_int_T_TM *P040,
  /* TM_API::SEND_MergePackets::P041 */ P041_trackside_int_T_TM *P041,
  /* TM_API::SEND_MergePackets::P042 */ P042_trackside_int_T_TM *P042,
  /* TM_API::SEND_MergePackets::P045 */ P045_trackside_int_T_TM *P045,
  /* TM_API::SEND_MergePackets::P046 */ P046_trackside_int_T_TM *P046,
  /* TM_API::SEND_MergePackets::P057 */ P057_trackside_int_T_TM *P057,
  /* TM_API::SEND_MergePackets::P058 */ P058_trackside_int_T_TM *P058,
  /* TM_API::SEND_MergePackets::P064 */ P064_trackside_int_T_TM *P064,
  /* TM_API::SEND_MergePackets::P065 */ P065_trackside_int_T_TM *P065,
  /* TM_API::SEND_MergePackets::P066 */ P066_trackside_int_T_TM *P066,
  /* TM_API::SEND_MergePackets::P071 */ P071_trackside_int_T_TM *P071,
  /* TM_API::SEND_MergePackets::P072_baseline2 */ P072V1_trackside_int_T_TM_baseline2 *P072_baseline2,
  /* TM_API::SEND_MergePackets::P080 */ P080_trackside_int_T_TM *P080,
  /* TM_API::SEND_MergePackets::P131 */ P131_trackside_int_T_TM *P131,
  /* TM_API::SEND_MergePackets::P132 */ P132_trackside_int_T_TM *P132,
  /* TM_API::SEND_MergePackets::P133 */ P133_trackside_int_T_TM *P133,
  /* TM_API::SEND_MergePackets::P134 */ P134_trackside_int_T_TM *P134,
  /* TM_API::SEND_MergePackets::P135 */ P135_trackside_int_T_TM *P135,
  /* TM_API::SEND_MergePackets::P136 */ P136_trackside_int_T_TM *P136,
  /* TM_API::SEND_MergePackets::P137 */ P137_trackside_int_T_TM *P137,
  /* TM_API::SEND_MergePackets::P138 */ P138_trackside_int_T_TM *P138,
  /* TM_API::SEND_MergePackets::P139 */ P139_trackside_int_T_TM *P139,
  /* TM_API::SEND_MergePackets::P140 */ P140_trackside_int_T_TM *P140,
  /* TM_API::SEND_MergePackets::P141 */ P141_trackside_int_T_TM *P141,
  /* TM_API::SEND_MergePackets::P143 */ P143_trackside_int_T_TM *P143,
  /* TM_API::SEND_MergePackets::P145 */ P145_trackside_int_T_TM *P145,
  /* TM_API::SEND_MergePackets::P254 */ P254_trackside_int_T_TM *P254,
  /* TM_API::SEND_MergePackets::P255 */ P255_trackside_int_T_TM *P255,
  /* TM_API::SEND_MergePackets::packetsOUT */ CompressedPackets_T_Common_Types_Pkg *packetsOUT);

#endif /* _SEND_MergePackets_TM_API_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MergePackets_TM_API.h
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */


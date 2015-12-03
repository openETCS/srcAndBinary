/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* TM::T_extract_nid_packet_from_metadata_selector */
kcg_int T_extract_nid_packet_from_metadata_selector_TM(
  /* TM::T_extract_nid_packet_from_metadata_selector::Metadata_in */ kcg_int Metadata_in)
{
  /* TM::T_extract_nid_packet_from_metadata_selector::nid_packet */ kcg_int nid_packet;
  
  nid_packet = Metadata_in / DIM_offset_metadata_nid_packet_TM_lib_internal;
  return nid_packet;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_extract_nid_packet_from_metadata_selector_TM.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */


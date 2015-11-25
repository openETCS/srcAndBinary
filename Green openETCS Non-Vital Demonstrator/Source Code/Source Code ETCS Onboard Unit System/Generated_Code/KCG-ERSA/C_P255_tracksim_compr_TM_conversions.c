/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P255_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P255_tracksim_compr */
void C_P255_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P255_tracksim_compr::P255_from_track */ P255_trackside_int_T_TM *P255_from_track,
  /* TM_conversions::C_P255_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P255_tracksim_compr::P005_compressed */ CompressedPacketData_T_Common_Types_Pkg *P005_compressed)
{
  kcg_int i;
  
  (&(*P005_compressed)[0])[0] = (*P255_from_track).NID_PACKET;
  (*Header).valid = (*P255_from_track).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = DIM_MaxElementsPacket255_TM - 1;
  (*Header).nid_packet = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P255_from_track).NID_PACKET,
      INT_Q_DIR_both_TM,
      0,
      255,
      INT_M_VERSION_2_0_TM);
  (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
  for (i = 0; i < 499; i++) {
    (&(*P005_compressed)[1])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P255_tracksim_compr_TM_conversions.c
** Generation date: 2015-11-25T14:46:15
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P001_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P001_tracksim_compr */
void C_P001_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P001_tracksim_compr::P001_from_track */ P001_trackside_int_T_TM *P001_from_track,
  /* TM_conversions::C_P001_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P001_tracksim_compr::P001_compressed */ CompressedPacketData_T_Common_Types_Pkg *P001_compressed)
{
  kcg_int i;
  
  (&(*P001_compressed)[0])[0] = (*P001_from_track).NID_PACKET;
  (&(*P001_compressed)[0])[1] = (*P001_from_track).NID_VBCMK;
  (*Header).valid = (*P001_from_track).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = DIM_MaxElementsPacket001_TM - 1;
  (*Header).nid_packet = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P001_from_track).NID_PACKET,
      INT_Q_DIR_both_TM_conversions,
      0,
      1,
      INT_M_VERSION_2_0_TM);
  (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
  for (i = 0; i < 498; i++) {
    (&(*P001_compressed)[2])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P001_tracksim_compr_TM_conversions.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */


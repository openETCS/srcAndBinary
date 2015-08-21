/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trackPackets_toML_EVC_Support_Pkg.h"

void trackPackets_toML_reset_EVC_Support_Pkg(
  outC_trackPackets_toML_EVC_Support_Pkg *outC)
{
  outC->init = kcg_true;
}

/* EVC_Support_Pkg::trackPackets_toML */
void trackPackets_toML_EVC_Support_Pkg(
  /* EVC_Support_Pkg::trackPackets_toML::inTAPackets */DataForModeAndLevel_t_TrackAtlasTypes *inTAPackets,
  outC_trackPackets_toML_EVC_Support_Pkg *outC)
{
  if ((*inTAPackets).train_packets.P_41[0].valid) {
    kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      &outC->outPacketforML,
      &(*inTAPackets).train_packets);
  }
  else if (outC->init) {
    kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      &outC->outPacketforML,
      (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *)
        &cNoPacketsForML_EVC_Support_Pkg);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trackPackets_toML_EVC_Support_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


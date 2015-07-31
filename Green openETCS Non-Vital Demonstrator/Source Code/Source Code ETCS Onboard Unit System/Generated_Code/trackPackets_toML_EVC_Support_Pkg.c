/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trackPackets_toML_EVC_Support_Pkg.h"

/* EVC_Support_Pkg::trackPackets_toML */
void trackPackets_toML_EVC_Support_Pkg(
  /* EVC_Support_Pkg::trackPackets_toML::inTrackMsg */ReceivedMessage_T_Common_Types_Pkg *inTrackMsg,
  /* EVC_Support_Pkg::trackPackets_toML::inFromTA */DataForModeAndLevel_t_TrackAtlasTypes *inFromTA,
  /* EVC_Support_Pkg::trackPackets_toML::outPacketforML */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *outPacketforML)
{
  /* EVC_Support_Pkg::trackPackets_toML::_L27 */
  static P135_OBU_T_TM _L27;
  /* EVC_Support_Pkg::trackPackets_toML::_L26 */
  static kcg_bool _L26;
  
  /* 1 */ Read_P135_TM(&(*inTrackMsg).packets, &_L26, &_L27);
  if ((*inTrackMsg).valid) {
    kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      outPacketforML,
      (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *)
        &cNoPacketsForML_EVC_Support_Pkg);
    /* 1 */
    Read_P015_Legacy_TM_specific(
      &(*inTrackMsg).packets,
      &(*outPacketforML).P_15);
    /* 1 */
    Read_P041_Legacy_TM_specific(
      &(*inTrackMsg).packets,
      &(*outPacketforML).P_41);
    /* 1 */
    Read_P046_Legacy_TM_specific(
      &(*inTrackMsg).packets,
      &(*outPacketforML).P_46);
    (*outPacketforML).P_135 = _L26;
  }
  else {
    kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      outPacketforML,
      (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *)
        &cNoPacketsForML_EVC_Support_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trackPackets_toML_EVC_Support_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


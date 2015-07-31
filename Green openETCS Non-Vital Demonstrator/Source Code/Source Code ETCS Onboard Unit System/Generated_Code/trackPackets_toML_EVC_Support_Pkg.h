/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
#ifndef _trackPackets_toML_EVC_Support_Pkg_H_
#define _trackPackets_toML_EVC_Support_Pkg_H_

#include "kcg_types.h"
#include "Read_P135_TM.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P046_Legacy_TM_specific.h"

/* =====================  no input structure  ====================== */


/* EVC_Support_Pkg::trackPackets_toML */
extern void trackPackets_toML_EVC_Support_Pkg(
  /* EVC_Support_Pkg::trackPackets_toML::inTrackMsg */ReceivedMessage_T_Common_Types_Pkg *inTrackMsg,
  /* EVC_Support_Pkg::trackPackets_toML::inFromTA */DataForModeAndLevel_t_TrackAtlasTypes *inFromTA,
  /* EVC_Support_Pkg::trackPackets_toML::outPacketforML */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *outPacketforML);

#endif /* _trackPackets_toML_EVC_Support_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** trackPackets_toML_EVC_Support_Pkg.h
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


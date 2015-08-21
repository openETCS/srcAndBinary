/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _trackPackets_toML_EVC_Support_Pkg_H_
#define _trackPackets_toML_EVC_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* EVC_Support_Pkg::trackPackets_toML::outPacketforML */ outPacketforML;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_trackPackets_toML_EVC_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_Support_Pkg::trackPackets_toML */
extern void trackPackets_toML_EVC_Support_Pkg(
  /* EVC_Support_Pkg::trackPackets_toML::inTAPackets */DataForModeAndLevel_t_TrackAtlasTypes *inTAPackets,
  outC_trackPackets_toML_EVC_Support_Pkg *outC);

extern void trackPackets_toML_reset_EVC_Support_Pkg(
  outC_trackPackets_toML_EVC_Support_Pkg *outC);

#endif /* _trackPackets_toML_EVC_Support_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** trackPackets_toML_EVC_Support_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


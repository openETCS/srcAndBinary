/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/merged_example\kcg_s2c_config.txt
** Generation date: 2015-11-16T11:33:59
*************************************************************$ */
#ifndef _SEND_MergeRadioPackets_TM_old_versions_H_
#define _SEND_MergeRadioPackets_TM_old_versions_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  Radio_TrackTrain_Header_T_TM /* TM_old_versions::SEND_MergeRadioPackets::Header */ Header;
  P003V1_trackside_int_T_TM_baseline2 /* TM_old_versions::SEND_MergeRadioPackets::M03 */ M03;
  P005_trackside_int_T_TM /* TM_old_versions::SEND_MergeRadioPackets::M05 */ M05;
  P015_trackside_int_T_TM /* TM_old_versions::SEND_MergeRadioPackets::M15 */ M15;
  P021_trackside_int_T_TM /* TM_old_versions::SEND_MergeRadioPackets::M21 */ M21;
  P027V1_trackside_int_T_TM_baseline2 /* TM_old_versions::SEND_MergeRadioPackets::M27 */ M27;
  P041_trackside_int_T_TM /* TM_old_versions::SEND_MergeRadioPackets::M41 */ M41;
  P057_trackside_int_T_TM /* TM_old_versions::SEND_MergeRadioPackets::M57 */ M57;
  P058_trackside_int_T_TM /* TM_old_versions::SEND_MergeRadioPackets::M58 */ M58;
} inC_SEND_MergeRadioPackets_TM_old_versions;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* TM_old_versions::SEND_MergeRadioPackets::MessageOUT */ MessageOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SEND_MergeRadioPackets_TM_old_versions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_old_versions::SEND_MergeRadioPackets */
extern void SEND_MergeRadioPackets_TM_old_versions(
  inC_SEND_MergeRadioPackets_TM_old_versions *inC,
  outC_SEND_MergeRadioPackets_TM_old_versions *outC);

extern void SEND_MergeRadioPackets_reset_TM_old_versions(
  outC_SEND_MergeRadioPackets_TM_old_versions *outC);

#endif /* _SEND_MergeRadioPackets_TM_old_versions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_MergeRadioPackets_TM_old_versions.h
** Generation date: 2015-11-16T11:33:59
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG-ERSA/M003\kcg_s2c_config.txt
** Generation date: 2015-11-16T11:28:18
*************************************************************$ */
#ifndef _Send_message_003_API_Examples_H_
#define _Send_message_003_API_Examples_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  M_003_int_T_TM_radio_messages /* API_Examples::Send_message_003::M003_in */ M003_in;
  P015_trackside_int_T_TM /* API_Examples::Send_message_003::P015_in */ P015_in;
  P021_trackside_int_T_TM /* API_Examples::Send_message_003::P021_in */ P021_in;
  P027V1_trackside_int_T_TM_baseline2 /* API_Examples::Send_message_003::P027_in */ P027_in;
  P003V1_trackside_int_T_TM_baseline2 /* API_Examples::Send_message_003::P003_in */ P003_in;
  P005_trackside_int_T_TM /* API_Examples::Send_message_003::P005_in */ P005_in;
  P041_trackside_int_T_TM /* API_Examples::Send_message_003::P041_in */ P041_in;
  P065_trackside_int_T_TM /* API_Examples::Send_message_003::P065_in */ P065_in;
} inC_Send_message_003_API_Examples;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* API_Examples::Send_message_003::Compressed_Radio_Message_out */ Compressed_Radio_Message_out;
  CompressedPackets_T_Common_Types_Pkg /* API_Examples::Send_message_003::Compressed_Packets_out */ Compressed_Packets_out;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* API_Examples::Send_message_003::RadioTrackTrainHeader_out */ RadioTrackTrainHeader_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Send_message_003_API_Examples;

/* ===========  node initialization and cycle functions  =========== */
/* API_Examples::Send_message_003 */
extern void Send_message_003_API_Examples(
  inC_Send_message_003_API_Examples *inC,
  outC_Send_message_003_API_Examples *outC);

extern void Send_message_003_reset_API_Examples(
  outC_Send_message_003_API_Examples *outC);

#endif /* _Send_message_003_API_Examples_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_message_003_API_Examples.h
** Generation date: 2015-11-16T11:28:18
*************************************************************$ */


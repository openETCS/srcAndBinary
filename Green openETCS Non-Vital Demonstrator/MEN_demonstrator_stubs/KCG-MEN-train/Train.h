/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */
#ifndef _Train_H_
#define _Train_H_

#include "kcg_types.h"
#include "Read_M003_TM_radio_messages.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "Read_P015_TM.h"
#include "Read_P021_TM.h"
#include "Read_P041_TM.h"
#include "Read_P005_TM.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Read_P003V1_TM_baseline2.h"
#include "Send_M157_TM_radio_messages.h"

/* ========================  input structure  ====================== */
typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages /* Train::RadioMessage_in */ RadioMessage_in;
  CompressedPackets_T_Common_Types_Pkg /* Train::RadioPackets_in */ RadioPackets_in;
  CompressedBaliseMessage_TM /* Train::BaliseMessage_in */ BaliseMessage_in;
} inC_Train;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_003_T_TM_radio_messages /* Train::M003_out */ M003_out;
  P003V1_OBU_T_TM_baseline2 /* Train::P003V1_OBU_out */ P003V1_OBU_out;
  kcg_bool /* Train::received */ received;
  P027V1_OBU_T_TM_baseline2 /* Train::P027V1_out */ P027V1_out;
  P005_OBU_T_TM /* Train::P005_OBU_out */ P005_OBU_out;
  P015_OBU_T_TM /* Train::P015_OBU_out */ P015_OBU_out;
  P021_OBU_T_TM /* Train::P021_OBU_out */ P021_OBU_out;
  P041_OBU_T_TM /* Train::P041_OBU_out */ P041_OBU_out;
  BaliseTelegramHeader_int_T_TM /* Train::BaliseTelegram */ BaliseTelegram;
  M_TrainTrack_Message_T_TM_radio_messages /* Train::MessageOut */ MessageOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M157_TM_radio_messages /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Train;

/* ===========  node initialization and cycle functions  =========== */
/* Train */
extern void Train(inC_Train *inC, outC_Train *outC);

extern void Train_reset(outC_Train *outC);

#endif /* _Train_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Train.h
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _SendBalises_H_
#define _SendBalises_H_

#include "kcg_types.h"
#include "Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"
#include "TrackDiscontinuity_InfraLib.h"
#include "TrackInit_InfraLib.h"
#include "TrackClose_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* SendBalises::BaliseMessage */ BaliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackClose_InfraLib /* 1 */ _3_Context_1;
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises /* 1 */ _2_Context_1;
  outC_TrackDiscontinuity_InfraLib /* 1 */ _1_Context_1;
  outC_TrackInit_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* SendBalises::_L1 */ _L1;
  TrackSectionData_T_InfraLib /* SendBalises::_L13 */ _L13;
  TrackSectionData_T_InfraLib /* SendBalises::_L15 */ _L15;
  kcg_real /* SendBalises::_L16 */ _L16;
  CompressedBaliseMessage_TM /* SendBalises::_L17 */ _L17;
} outC_SendBalises;

/* ===========  node initialization and cycle functions  =========== */
/* SendBalises */
extern void SendBalises(
  /* SendBalises::TrainPosSim_in */kcg_real TrainPosSim_in,
  outC_SendBalises *outC);

extern void SendBalises_reset(outC_SendBalises *outC);

#endif /* _SendBalises_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendBalises.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


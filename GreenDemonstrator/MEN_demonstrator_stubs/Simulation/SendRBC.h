/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _SendRBC_H_
#define _SendRBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "RBC_init_RadioLib.h"
#include "RBC_close_RadioLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* SendRBC::Message_out */ Message_out;
  CompressedPackets_T_Common_Types_Pkg /* SendRBC::Packets_out */ Packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC_close_RadioLib /* 1 */ _2_Context_1;
  outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* 1 */ _1_Context_1;
  outC_RBC_init_RadioLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* SendRBC::_L2 */ _L2;
  M_TrackTrain_Radio_T_TM_radio_messages /* SendRBC::_L3 */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* SendRBC::_L4 */ _L4;
  kcg_int /* SendRBC::_L5 */ _L5;
  kcg_bool /* SendRBC::_L6 */ _L6;
  R_data_internal_T_InfraLib /* SendRBC::_L7 */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* SendRBC::_L9 */ _L9;
  M_TrackTrain_Radio_T_TM_radio_messages /* SendRBC::_L8 */ _L8;
} outC_SendRBC;

/* ===========  node initialization and cycle functions  =========== */
/* SendRBC */
extern void SendRBC(
  /* SendRBC::Message_in */M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* SendRBC::Packets_in */CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* SendRBC::Trigger_in */kcg_int Trigger_in,
  /* SendRBC::Message_sent */kcg_bool Message_sent,
  outC_SendRBC *outC);

extern void SendRBC_reset(outC_SendRBC *outC);

#endif /* _SendRBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRBC.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


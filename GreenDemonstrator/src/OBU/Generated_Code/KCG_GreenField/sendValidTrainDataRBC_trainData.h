/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _sendValidTrainDataRBC_trainDat
#define _sendValidTrainDataRBC_trainDat

#include "kcg_types.h"
#include "nextGen_P00_radioOutput_Pkg.h"
#include "nextGen_P01_radioOutput_Pkg.h"
#include "headerMsg129_ng_trainData_pkg.h"
#include "packet_11_trainData_pkg.h"
#include "Send_M129_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainDataStatus_T_trainData_Typ /* trainData_pkg::sendValidTrainDataRBC::updatedStatus */ updatedStatus;
  M_TrainTrackMessageBus_t_TM_Tra /* trainData_pkg::sendValidTrainDataRBC::outMessageBus */ outMessageBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M129_TM_radio_message /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendValidTrainDataRBC_trai;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::sendValidTrainDataRBC */
extern void sendValidTrainDataRBC_trainData(
  /* trainData_pkg::sendValidTrainDataRBC::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::sendValidTrainDataRBC::evc_t_train */ T_TRAIN evc_t_train,
  /* trainData_pkg::sendValidTrainDataRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendValidTrainDataRBC::actualStatus */ trainDataStatus_T_trainData_Typ *actualStatus,
  /* trainData_pkg::sendValidTrainDataRBC::p0_positionReport */ PT0_PositionReport_T_Packet_Tra *p0_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::p1_positionReport */ PT1_PositionReport_2BG_T_Packet *p1_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* trainData_pkg::sendValidTrainDataRBC::inVersion */ M_VERSION inVersion,
  outC_sendValidTrainDataRBC_trai *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendValidTrainDataRBC_reset_tra(
  outC_sendValidTrainDataRBC_trai *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendValidTrainDataRBC_init_trai(
  outC_sendValidTrainDataRBC_trai *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _sendValidTrainDataRBC_trainDat */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendValidTrainDataRBC_trainData.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _trainDataStorage_trainData_pkg
#define _trainDataStorage_trainData_pkg

#include "kcg_types.h"
#include "storeDriverInput_trainData_pkg.h"
#include "storeTIUData_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* trainData_pkg::trainDataStorage::actualTrainData */ actualTrainData;
  trainDataStatus_T_trainData_Typ /* trainData_pkg::trainDataStorage::updatedStatus */ updatedStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_trainDataStorage_trainData;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::trainDataStorage */
extern void trainDataStorage_trainData_pkg(
  /* trainData_pkg::trainDataStorage::reset */ kcg_bool reset,
  /* trainData_pkg::trainDataStorage::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainDataStorage::trainDatafromDriver */ DMI_Train_Data_T_DMI_Messages_B *trainDatafromDriver,
  /* trainData_pkg::trainDataStorage::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messag *trainDataAckfromDriver,
  /* trainData_pkg::trainDataStorage::actualStatus */ trainDataStatus_T_trainData_Typ *actualStatus,
  /* trainData_pkg::trainDataStorage::eventsForTrainData */ trainData_Events_T_trainData_Ty *eventsForTrainData,
  outC_trainDataStorage_trainData *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void trainDataStorage_reset_trainDat(
  outC_trainDataStorage_trainData *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void trainDataStorage_init_trainData(
  outC_trainDataStorage_trainData *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _trainDataStorage_trainData_pkg */
/* $**************** KCG Version 6.4 (build i21) ****************
** trainDataStorage_trainData_pkg.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


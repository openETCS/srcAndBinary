/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRBCSystemVersion_trainData.h"

/* trainData_pkg::checkRBCSystemVersion */
void checkRBCSystemVersion_trainData(
  /* trainData_pkg::checkRBCSystemVersion::trackMessages */ ReceivedMessage_T_Common_Types_ *trackMessages,
  /* trainData_pkg::checkRBCSystemVersion::lastStatus */ trainDataStatus_T_trainData_Typ *lastStatus,
  /* trainData_pkg::checkRBCSystemVersion::updatedStatus */ trainDataStatus_T_trainData_Typ *updatedStatus)
{
  kcg_copy_trainDataStatus_T_trai(updatedStatus, lastStatus);
  (*updatedStatus).RBCsystemVersionOnboard = ((*trackMessages).valid &
      ((*trackMessages).source == msrc_Euroradio_Common_Types_Pkg) &
      ((*trackMessages).Radio_Common_Header.nid_message ==
        cm32_RBC_RIU_System_Version_Id_)) |
    (*lastStatus).RBCsystemVersionOnboard;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkRBCSystemVersion_trainData.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


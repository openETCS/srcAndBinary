/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateDMIStatus_manage_DMI_Inpu.h"

/* manage_DMI_Input_Pkg::updateDMIStatus */
void updateDMIStatus_manage_DMI_Inpu(
  /* manage_DMI_Input_Pkg::updateDMIStatus::oldStatus */ DMI_EVC_status_T_DMI_Types_Pkg *oldStatus,
  /* manage_DMI_Input_Pkg::updateDMIStatus::fromDMI */ DMI_to_EVC_Message_T_API_DMI_Pk *fromDMI,
  /* manage_DMI_Input_Pkg::updateDMIStatus::sndValidationRequested */ kcg_bool sndValidationRequested,
  /* manage_DMI_Input_Pkg::updateDMIStatus::newStatus */ DMI_EVC_status_T_DMI_Types_Pkg *newStatus)
{
  (*newStatus).DMI_Active = (*fromDMI).present | (*oldStatus).DMI_Active;
  (*newStatus).DMI_Error = kcg_false;
  (*newStatus).DMI_DriverIdValidated = (*oldStatus).DMI_DriverIdValidated |
    (*fromDMI).driverIdentifier.valid;
  (*newStatus).DMI_LevelSelectedByDirver =
    (*oldStatus).DMI_LevelSelectedByDirver | (*fromDMI).selectedLevel.valid;
  (*newStatus).DMI_TrainRunningNumberFirstVali =
    (*oldStatus).DMI_TrainRunningNumberFirstVali | (!sndValidationRequested &
      (*fromDMI).trainRunningNumber.valid);
  (*newStatus).DMI_TrainRunningNumberValidated =
    ((*fromDMI).trainRunningNumber.valid & sndValidationRequested) |
    (*oldStatus).DMI_TrainRunningNumberValidated;
  (*newStatus).DMI_StartReceived = (*oldStatus).DMI_StartReceived |
    ((*fromDMI).driverRequest.valid & ((*fromDMI).driverRequest.m_request ==
        Start_of_mission_DMI_Types_Pkg));
  /* 2 */ if ((*fromDMI).trainDataAck.valid) {
    (*newStatus).DMI_TrainDataValidated = (*fromDMI).trainDataAck.acknowledged;
  }
  else {
    (*newStatus).DMI_TrainDataValidated = (*oldStatus).DMI_TrainDataValidated;
  }
  /* 1 */ if ((*fromDMI).identifier.valid) {
    kcg_copy_DMI_Identifier_T_DMI_M(
      &(*newStatus).DMI_Identifier,
      &(*fromDMI).identifier);
  }
  else {
    kcg_copy_DMI_Identifier_T_DMI_M(
      &(*newStatus).DMI_Identifier,
      &(*oldStatus).DMI_Identifier);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** updateDMIStatus_manage_DMI_Inpu.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


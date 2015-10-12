/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "synchWithDMI_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::synchWithDMI */
void synchWithDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::synchWithDMI::dmi_identifierRequest */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::outputStatus */ dmiOutputs_T_manage_DMI_Output_Pkg *outputStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* manage_DMI_Output_Pkg::synchWithDMI::send_dmi_identifierRequest */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *send_dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::updatedOutputStatus */ dmiOutputs_T_manage_DMI_Output_Pkg *updatedOutputStatus)
{
  /* manage_DMI_Output_Pkg::synchWithDMI::doSend */
  static kcg_bool doSend;
  
  doSend = !(*dmi_identifierRequest).valid & (*TIU_TrainStatus).valid &
    (*TIU_TrainStatus).deskOpen & (*outputStatus).NO_initrequestSent;
  /* 1 */ if ((*dmi_identifierRequest).valid) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      send_dmi_identifierRequest,
      dmi_identifierRequest);
  }
  else /* 2 */ if (doSend) {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      send_dmi_identifierRequest,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cSendInitRequest_manage_DMI_Output_Pkg);
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      send_dmi_identifierRequest,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyInitRequest_manage_DMI_Output_Pkg);
  }
  (*send_dmi_identifierRequest).system_clock = systemTime;
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(
    updatedOutputStatus,
    outputStatus);
  (*updatedOutputStatus).NO_initrequestSent = doSend;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** synchWithDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


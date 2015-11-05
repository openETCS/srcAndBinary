/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "synchWithDMI_manage_DMI_Output_.h"

/* manage_DMI_Output_Pkg::synchWithDMI */
void synchWithDMI_manage_DMI_Output_(
  /* manage_DMI_Output_Pkg::synchWithDMI::dmi_identifierRequest */ _26_DMI_Identifier_Request_T_DM *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::outputStatus */ dmiOutputs_T_manage_DMI_Output_ *outputStatus,
  /* manage_DMI_Output_Pkg::synchWithDMI::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* manage_DMI_Output_Pkg::synchWithDMI::send_dmi_identifierRequest */ _26_DMI_Identifier_Request_T_DM *send_dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::synchWithDMI::updatedOutputStatus */ dmiOutputs_T_manage_DMI_Output_ *updatedOutputStatus)
{
  /* manage_DMI_Output_Pkg::synchWithDMI::doSend */
  static kcg_bool doSend;
  
  doSend = !(*dmi_identifierRequest).valid & (*TIU_TrainStatus).valid &
    (*TIU_TrainStatus).deskOpen & (*outputStatus).NO_initrequestSent;
  /* 1 */ if ((*dmi_identifierRequest).valid) {
    kcg_copy__26_DMI_Identifier_Req(
      send_dmi_identifierRequest,
      dmi_identifierRequest);
  }
  else /* 2 */ if (doSend) {
    kcg_copy__26_DMI_Identifier_Req(
      send_dmi_identifierRequest,
      (_26_DMI_Identifier_Request_T_DM *) &cSendInitRequest_manage_DMI_Out);
  }
  else {
    kcg_copy__26_DMI_Identifier_Req(
      send_dmi_identifierRequest,
      (_26_DMI_Identifier_Request_T_DM *) &cEmptyInitRequest_manage_DMI_Ou);
  }
  (*send_dmi_identifierRequest).system_clock = systemTime;
  kcg_copy_dmiOutputs_T_manage_DM(updatedOutputStatus, outputStatus);
  (*updatedOutputStatus).NO_initrequestSent = doSend;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** synchWithDMI_manage_DMI_Output_.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


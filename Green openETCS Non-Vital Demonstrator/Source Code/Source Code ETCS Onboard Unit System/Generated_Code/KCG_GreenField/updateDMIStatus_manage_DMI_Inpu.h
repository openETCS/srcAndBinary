/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _updateDMIStatus_manage_DMI_Inp
#define _updateDMIStatus_manage_DMI_Inp

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Input_Pkg::updateDMIStatus */
extern void updateDMIStatus_manage_DMI_Inpu(
  /* manage_DMI_Input_Pkg::updateDMIStatus::oldStatus */ DMI_EVC_status_T_DMI_Types_Pkg *oldStatus,
  /* manage_DMI_Input_Pkg::updateDMIStatus::fromDMI */ DMI_to_EVC_Message_T_API_DMI_Pk *fromDMI,
  /* manage_DMI_Input_Pkg::updateDMIStatus::sndValidationRequested */ kcg_bool sndValidationRequested,
  /* manage_DMI_Input_Pkg::updateDMIStatus::newStatus */ DMI_EVC_status_T_DMI_Types_Pkg *newStatus);

#endif /* _updateDMIStatus_manage_DMI_Inp */
/* $**************** KCG Version 6.4 (build i21) ****************
** updateDMIStatus_manage_DMI_Inpu.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _updateDMIStatus_manage_DMI_Input_Pkg_H_
#define _updateDMIStatus_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Input_Pkg::updateDMIStatus */
extern void updateDMIStatus_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::updateDMIStatus::oldStatus */ DMI_EVC_status_T_DMI_Types_Pkg *oldStatus,
  /* manage_DMI_Input_Pkg::updateDMIStatus::fromDMI */ DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::updateDMIStatus::sndValidationRequested */ kcg_bool sndValidationRequested,
  /* manage_DMI_Input_Pkg::updateDMIStatus::newStatus */ DMI_EVC_status_T_DMI_Types_Pkg *newStatus);

#endif /* _updateDMIStatus_manage_DMI_Input_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** updateDMIStatus_manage_DMI_Input_Pkg.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */
#ifndef _updateDMIStatus_manage_DMI_Input_Pkg_H_
#define _updateDMIStatus_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* manage_DMI_Input_Pkg::updateDMIStatus */
extern void updateDMIStatus_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::updateDMIStatus::oldStatus */DMI_EVC_status_T_DMI_Types_Pkg *oldStatus,
  /* manage_DMI_Input_Pkg::updateDMIStatus::fromDMI */DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::updateDMIStatus::sndValidationRequested */kcg_bool sndValidationRequested,
  /* manage_DMI_Input_Pkg::updateDMIStatus::newStatus */DMI_EVC_status_T_DMI_Types_Pkg *newStatus);

#endif /* _updateDMIStatus_manage_DMI_Input_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** updateDMIStatus_manage_DMI_Input_Pkg.h
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */


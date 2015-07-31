/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapToRTM_radioOutput_Pkg.h"

/* radioOutput_Pkg::mapToRTM */
void mapToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapToRTM::cmdsToMobile */mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::mapToRTM::toRTM */RadioManagement_T_API_RadioCommunication_Pkg *toRTM)
{
  (*toRTM).valid = (*cmdsToMobile).valid;
  (*toRTM).networkID = (*cmdsToMobile).radioNetworkID;
  (*toRTM).cmd = /* 1 */ mapActionToCmd_radioOutput_Pkg((*cmdsToMobile).action);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mapToRTM_radioOutput_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapToRTM_radioOutput_Pkg.h"

/* radioOutput_Pkg::mapToRTM */
void mapToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapToRTM::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::mapToRTM::toRTM */ RadioManagement_T_API_RadioCommunication_Pkg *toRTM)
{
  (*toRTM).valid = (*cmdsToMobile).valid;
  (*toRTM).networkID = (*cmdsToMobile).radioNetworkID;
  (*toRTM).cmd = /* 1 */ mapActionToCmd_radioOutput_Pkg((*cmdsToMobile).action);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapToRTM_radioOutput_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


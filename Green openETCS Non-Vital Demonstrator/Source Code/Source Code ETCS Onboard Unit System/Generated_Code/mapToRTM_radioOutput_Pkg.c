/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapToRTM_radioOutput_Pkg.h"

/* radioOutput_Pkg::mapToRTM */
void mapToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapToRTM::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::mapToRTM::toRTM */ RadioManagement_T_API_RadioCommunication_Pkg *toRTM1)
{
  (*toRTM1).valid = (*cmdsToMobile).valid;
  (*toRTM1).networkID = (*cmdsToMobile).radioNetworkID;
  (*toRTM1).cmd = /* 1 */
    mapActionToCmd_radioOutput_Pkg((*cmdsToMobile).action);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapToRTM_radioOutput_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */


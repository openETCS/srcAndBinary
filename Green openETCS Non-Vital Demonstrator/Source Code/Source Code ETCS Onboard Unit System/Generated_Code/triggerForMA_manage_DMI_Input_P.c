/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "triggerForMA_manage_DMI_Input_P.h"

/* manage_DMI_Input_Pkg::triggerForMA */
void triggerForMA_manage_DMI_Input_P(
  /* manage_DMI_Input_Pkg::triggerForMA::fromDMI_driverRequest */ DMI_Driver_Request_T_DMI_Messag *fromDMI_driverRequest,
  /* manage_DMI_Input_Pkg::triggerForMA::outForMA */ Driver2MAR_T_MA_Request *outForMA)
{
  /* ck_isValid */ if ((*fromDMI_driverRequest).valid) {
    (*outForMA).trackAheadFree = (*fromDMI_driverRequest).m_request ==
      Track_Ahead_Free_is_validated_D;
    (*outForMA).driverSelectsStart = (*fromDMI_driverRequest).m_request ==
      Start_of_mission_DMI_Types_Pkg;
  }
  else {
    kcg_copy_Driver2MAR_T_MA_Reques(
      outForMA,
      (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_P);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** triggerForMA_manage_DMI_Input_P.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


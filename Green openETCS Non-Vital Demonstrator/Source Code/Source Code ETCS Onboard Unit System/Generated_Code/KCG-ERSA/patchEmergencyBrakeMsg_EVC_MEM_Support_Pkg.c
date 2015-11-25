/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg */
void patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg::inFromTA */ DataForModeAndLevel_t_TrackAtlasTypes *inFromTA,
  /* EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg::outToML */ DataForModeAndLevel_t_TrackAtlasTypes *outToML)
{
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(outToML, inFromTA);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &(*outToML).train_messages,
    &(*inFromTA).train_messages);
  (*outToML).train_messages.Mess_15 = kcg_false;
  (*outToML).train_messages.Mess_15 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */


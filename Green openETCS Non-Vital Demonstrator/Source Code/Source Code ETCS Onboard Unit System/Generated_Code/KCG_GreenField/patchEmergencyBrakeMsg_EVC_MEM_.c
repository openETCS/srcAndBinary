/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "patchEmergencyBrakeMsg_EVC_MEM_.h"

/* EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg */
void patchEmergencyBrakeMsg_EVC_MEM_(
  /* EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg::inFromTA */ DataForModeAndLevel_t_TrackAtla *inFromTA,
  /* EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg::outToML */ DataForModeAndLevel_t_TrackAtla *outToML)
{
  kcg_copy_DataForModeAndLevel_t_(outToML, inFromTA);
  kcg_copy_T_Data_From_Track_Mess(
    &(*outToML).train_messages,
    &(*inFromTA).train_messages);
  (*outToML).train_messages.Mess_15 = kcg_false;
  (*outToML).train_messages.Mess_15 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** patchEmergencyBrakeMsg_EVC_MEM_.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */


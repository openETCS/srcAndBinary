/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _doEntryRequest_manage_DMI_Outp
#define _doEntryRequest_manage_DMI_Outp

#include "kcg_types.h"
#include "mapEntryForLevel_manage_DMI_Out.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Output_Pkg::doEntryRequest */
extern void doEntryRequest_manage_DMI_Outpu(
  /* manage_DMI_Output_Pkg::doEntryRequest::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Message *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_menuRequest */ DMI_Menu_Request_T_DMI_Messages *new_menuRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_entryRequest */ DMI_Entry_Request_T_DMI_Message *new_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::sendTrainDataToDMI */ kcg_bool *sendTrainDataToDMI,
  /* manage_DMI_Output_Pkg::doEntryRequest::outLevelsNeeded */ kcg_bool *outLevelsNeeded);

#endif /* _doEntryRequest_manage_DMI_Outp */
/* $**************** KCG Version 6.4 (build i21) ****************
** doEntryRequest_manage_DMI_Outpu.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */


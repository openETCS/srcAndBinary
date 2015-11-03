/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:10
*************************************************************$ */
#ifndef _collectDMIPackets_manage_DMI_O
#define _collectDMIPackets_manage_DMI_O

#include "kcg_types.h"
#include "synchWithDMI_manage_DMI_Output_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pk /* manage_DMI_Output_Pkg::collectDMIPackets::to_DMI */ to_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  dmiOutputs_T_manage_DMI_Output_ /* manage_DMI_Output_Pkg::collectDMIPackets::outputStatus */ rem_outputStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_collectDMIPackets_manage_D;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::collectDMIPackets */
extern void collectDMIPackets_manage_DMI_Ou(
  /* manage_DMI_Output_Pkg::collectDMIPackets::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_ *dmi_dynamic,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_menuRequest */ DMI_Menu_Request_T_DMI_Messages *dmi_menuRequest,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Message *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_evc_coded_train_data */ _27_DMI_EVC_Coded_Train_Data_T_ *dmi_evc_coded_train_data,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_text_message */ DMI_Text_Message_T_DMI_Messages *dmi_text_message,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_trackDescription */ DMI_Track_Description_T_DMI_Mes *dmi_trackDescription,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_identifierRequest */ _26_DMI_Identifier_Request_T_DM *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_systemVersion */ DMI_System_Version_T_DMI_Messag *dmi_systemVersion,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_displayControl */ DMI_Display_Control_T_DMI_Messa *dmi_displayControl,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_EVC_levelData */ DMI_EVC_Level_Data_T_DMI_Messag *dmi_EVC_levelData,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_EVC_radioNet */ _25_DMI_EVC_Radio_Net_Data_T_DM *dmi_EVC_radioNet,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_driverIdentifier */ _24_DMI_Driver_Identifier_T_DMI *dmi_driverIdentifier,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_trainRunningNumber */ _23_DMI_Train_Running_Number_T_ *dmi_trainRunningNumber,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_trainData */ DMI_Train_Data_T_DMI_Messages_B *dmi_trainData,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_adhesionFactor */ _22_DMI_Adhesion_Factor_Data_T_ *dmi_adhesionFactor,
  /* manage_DMI_Output_Pkg::collectDMIPackets::dmi_iconRequest */ DMI_Icons_T_DMI_Messages_EVC_to *dmi_iconRequest,
  /* manage_DMI_Output_Pkg::collectDMIPackets::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  outC_collectDMIPackets_manage_D *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void collectDMIPackets_reset_manage_(
  outC_collectDMIPackets_manage_D *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void collectDMIPackets_init_manage_D(
  outC_collectDMIPackets_manage_D *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _collectDMIPackets_manage_DMI_O */
/* $**************** KCG Version 6.4 (build i21) ****************
** collectDMIPackets_manage_DMI_Ou.h
** Generation date: 2015-11-03T14:28:10
*************************************************************$ */


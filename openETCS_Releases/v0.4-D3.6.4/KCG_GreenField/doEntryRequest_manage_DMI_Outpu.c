/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doEntryRequest_manage_DMI_Outpu.h"

/* manage_DMI_Output_Pkg::doEntryRequest */
void doEntryRequest_manage_DMI_Outpu(
  /* manage_DMI_Output_Pkg::doEntryRequest::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Message *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_menuRequest */ DMI_Menu_Request_T_DMI_Messages *new_menuRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_entryRequest */ DMI_Entry_Request_T_DMI_Message *new_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::sendTrainDataToDMI */ kcg_bool *sendTrainDataToDMI,
  /* manage_DMI_Output_Pkg::doEntryRequest::outLevelsNeeded */ kcg_bool *outLevelsNeeded)
{
  /* ck_valid */ if ((*dmi_entryRequest).valid) {
    switch ((*dmi_entryRequest).entry_request) {
      case Validate_train_data_DMI_Types_P :
        kcg_copy_DMI_Menu_Request_T_DMI(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages *) &cMenuTrainData_manage_DMI_Outpu);
        break;
      case Enter_revalidate_ETCS_level_DMI :
        kcg_copy_DMI_Menu_Request_T_DMI(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages *) &cMenuLevel_manage_DMI_Output_Pk);
        break;
      case Show_main_window_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages *) &cMenuStart_manage_DMI_Output_Pk);
        break;
      
      default :
        kcg_copy_DMI_Menu_Request_T_DMI(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages *) &cNoMenu_manage_DMI_Output_Pkg);
    }
    (*new_menuRequest).system_clock = inSystemTime;
    switch ((*dmi_entryRequest).entry_request) {
      case Validate_train_data_DMI_Types_P :
        *sendTrainDataToDMI = kcg_true;
        break;
      case Enter_revalidate_ETCS_level_DMI :
        *sendTrainDataToDMI = kcg_true;
        break;
      case Enter_revalidate_driver_identif :
        *sendTrainDataToDMI = kcg_true;
        break;
      
      default :
        *sendTrainDataToDMI = kcg_false;
    }
    *outLevelsNeeded = (*dmi_entryRequest).entry_request ==
      Enter_revalidate_ETCS_level_DMI;
  }
  else {
    *outLevelsNeeded = kcg_false;
    *sendTrainDataToDMI = kcg_false;
    kcg_copy_DMI_Menu_Request_T_DMI(
      new_menuRequest,
      (DMI_Menu_Request_T_DMI_Messages *) &cNoMenu_manage_DMI_Output_Pkg);
  }
  /* 1 */ mapEntryForLevel_manage_DMI_Out(dmi_entryRequest, new_entryRequest);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** doEntryRequest_manage_DMI_Outpu.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */


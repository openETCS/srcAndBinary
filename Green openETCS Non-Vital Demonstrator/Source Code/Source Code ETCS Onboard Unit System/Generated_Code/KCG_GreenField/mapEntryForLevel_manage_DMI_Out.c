/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapEntryForLevel_manage_DMI_Out.h"

/* manage_DMI_Output_Pkg::mapEntryForLevel */
void mapEntryForLevel_manage_DMI_Out(
  /* manage_DMI_Output_Pkg::mapEntryForLevel::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Message *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::mapEntryForLevel::new_entryRequest */ DMI_Entry_Request_T_DMI_Message *new_entryRequest)
{
  /* 1 */ if ((*dmi_entryRequest).valid & ((*dmi_entryRequest).entry_request ==
      Enter_revalidate_ETCS_level_DMI)) {
    kcg_copy_DMI_Entry_Request_T_DM(new_entryRequest, dmi_entryRequest);
    (*new_entryRequest).entry_request = Show_main_window_DMI_Types_Pkg;
  }
  else {
    kcg_copy_DMI_Entry_Request_T_DM(new_entryRequest, dmi_entryRequest);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapEntryForLevel_manage_DMI_Out.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


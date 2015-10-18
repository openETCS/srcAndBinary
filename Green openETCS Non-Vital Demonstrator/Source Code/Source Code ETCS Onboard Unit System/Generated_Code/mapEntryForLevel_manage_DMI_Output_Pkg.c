/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapEntryForLevel_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::mapEntryForLevel */
void mapEntryForLevel_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::mapEntryForLevel::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::mapEntryForLevel::new_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_entryRequest)
{
  /* 1 */ if ((*dmi_entryRequest).valid & ((*dmi_entryRequest).entry_request ==
      Enter_revalidate_ETCS_level_DMI_Types_Pkg)) {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      new_entryRequest,
      dmi_entryRequest);
    (*new_entryRequest).entry_request = Show_main_window_DMI_Types_Pkg;
  }
  else {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      new_entryRequest,
      dmi_entryRequest);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapEntryForLevel_manage_DMI_Output_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_EVC_to_DMI_to_int_Messages.h"

/* Messages::Write_EVC_to_DMI_to_int */
void Write_EVC_to_DMI_to_int_Messages(
  /* Messages::Write_EVC_to_DMI_to_int::evc_to_dmi_ct */ EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct,
  /* Messages::Write_EVC_to_DMI_to_int::evc_to_dmi_int */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int)
{
  /* ck__L3 */ if ((*evc_to_dmi_ct).present) {
    /* 1 */ CAST_EVC_to_DMI_to_int_Messages(evc_to_dmi_ct, evc_to_dmi_int);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      evc_to_dmi_int,
      (EVC_to_DMI_Message_int_T_API_DMI_Pkg *) &cEVC_DMI_int_array_Messages);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_EVC_to_DMI_to_int_Messages.c
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */


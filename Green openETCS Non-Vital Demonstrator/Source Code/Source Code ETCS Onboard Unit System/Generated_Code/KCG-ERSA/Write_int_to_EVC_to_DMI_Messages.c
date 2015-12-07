/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_EVC_to_DMI_Messages.h"

/* Messages::Write_int_to_EVC_to_DMI */
void Write_int_to_EVC_to_DMI_Messages(
  /* Messages::Write_int_to_EVC_to_DMI::evc_to_dmi_int */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int,
  /* Messages::Write_int_to_EVC_to_DMI::evc_to_dmi_ct */ EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct)
{
  /* Messages::Write_int_to_EVC_to_DMI::_L3 */ kcg_bool _L3;
  
  _L3 = (*evc_to_dmi_int)[0] == 1;
  /* ck__L3 */ if (_L3) {
    /* 1 */ CAST_int_to_EVC_to_DMI_Messages(evc_to_dmi_int, evc_to_dmi_ct);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
      evc_to_dmi_ct,
      (EVC_to_DMI_Message_T_API_DMI_Pkg *) &cEVC_to_DMI_CT_Messages);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_EVC_to_DMI_Messages.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */


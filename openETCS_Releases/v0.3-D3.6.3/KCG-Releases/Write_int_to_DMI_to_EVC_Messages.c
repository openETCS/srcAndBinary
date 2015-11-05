/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_to_EVC_Messages.h"

/* Messages::Write_int_to_DMI_to_EVC */
void Write_int_to_DMI_to_EVC_Messages(
  /* Messages::Write_int_to_DMI_to_EVC::dmi_to_evc_int */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  /* Messages::Write_int_to_DMI_to_EVC::dmi_to_evc_ct */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct)
{
  /* Messages::Write_int_to_DMI_to_EVC::_L3 */
  static kcg_bool _L3;
  
  _L3 = (*dmi_to_evc_int)[0] == 1;
  /* ck__L3 */ if (_L3) {
    /* 1 */ CAST_int_to_DMI_to_EVC_Messages(dmi_to_evc_int, dmi_to_evc_ct);
  }
  else {
    kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(
      dmi_to_evc_ct,
      (DMI_to_EVC_Message_T_API_DMI_Pkg *) &cDMI_EVC_CT_Messages);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_to_EVC_Messages.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_EVC_to_DMI_to_int_Message.h"

/* Messages::Write_EVC_to_DMI_to_int */
void Write_EVC_to_DMI_to_int_Message(
  /* Messages::Write_EVC_to_DMI_to_int::evc_to_dmi_ct */ EVC_to_DMI_Message_T_API_DMI_Pk *evc_to_dmi_ct,
  /* Messages::Write_EVC_to_DMI_to_int::evc_to_dmi_int */ EVC_to_DMI_Message_int_T_API_DM *evc_to_dmi_int)
{
  /* ck__L3 */ if ((*evc_to_dmi_ct).present) {
    /* 1 */ CAST_EVC_to_DMI_to_int_Messages(evc_to_dmi_ct, evc_to_dmi_int);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int(
      evc_to_dmi_int,
      (EVC_to_DMI_Message_int_T_API_DM *) &cEVC_DMI_int_array_Messages);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_EVC_to_DMI_to_int_Message.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */


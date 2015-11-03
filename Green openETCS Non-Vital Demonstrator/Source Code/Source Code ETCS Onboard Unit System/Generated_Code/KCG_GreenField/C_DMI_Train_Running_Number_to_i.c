/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Train_Running_Number_to_i.h"

/* DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int */
void C_DMI_Train_Running_Number_to_i(
  /* DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int::dmi_train_running_number_ct */ _23_DMI_Train_Running_Number_T_ *dmi_train_running_number_ct,
  /* DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int::dmi_train_running_number_int */ DMI_Train_Running_Number_int_ar *dmi_train_running_number_int)
{
  (*dmi_train_running_number_int)[1] =
    (*dmi_train_running_number_ct).systemTime;
  (*dmi_train_running_number_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_train_running_number_ct).valid);
  (*dmi_train_running_number_int)[2] = /* 1 */
    CAST_NID_OPERATIONAL_to_int_TM_(
      (*dmi_train_running_number_ct).trainRunningNumber);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Train_Running_Number_to_i.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */


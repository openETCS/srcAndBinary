/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Train_Data_Ack1_DA.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1 */
void C_int_to_DMI_Train_Data_Ack1_DA(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1::dmi_train_data_ack_int */ DMI_Train_Data_Ack_int_array_T_ *dmi_train_data_ack_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Train_Data_Ack1::dmi_train_data_ack_ct */ DMI_Train_Data_Ack_T_DMI_Messag *dmi_train_data_ack_ct)
{
  (*dmi_train_data_ack_ct).systemTime = (*dmi_train_data_ack_int)[1];
  (*dmi_train_data_ack_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_train_data_ack_int)[0]);
  (*dmi_train_data_ack_ct).acknowledged = /* 2 */
    Int_to_Bool_Utilities((*dmi_train_data_ack_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Train_Data_Ack1_DA.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Train_Data_Ack.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack */
void Write_int_to_DMI_Train_Data_Ack(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::dmi_train_data_ack_int */ DMI_Train_Data_Ack_int_array_T_ *dmi_train_data_ack_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::dmi_train_data_ack_ct */ DMI_Train_Data_Ack_T_DMI_Messag *dmi_train_data_ack_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::_L12 */
  static kcg_bool _L12;
  
  _L12 = 1 == (*dmi_train_data_ack_int)[0];
  /* ck__L12 */ if (_L12) {
    /* 1 */
    C_int_to_DMI_Train_Data_Ack1_DA(
      dmi_train_data_ack_int,
      dmi_train_data_ack_ct);
  }
  else {
    kcg_copy_DMI_Train_Data_Ack_T_D(
      dmi_train_data_ack_ct,
      (DMI_Train_Data_Ack_T_DMI_Messag *) &cDMI_Train_Data_Ack_DATA_Packet);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Train_Data_Ack.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_Reqest_.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest */
void Write_int_to_DMI_Driver_Reqest_(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::dmi_driver_request_int */ DMI_Driver_Request_int_array_T_ *dmi_driver_request_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::dmi_driver_request_ct */ DMI_Driver_Request_T_DMI_Messag *dmi_driver_request_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::_L11 */
  static kcg_bool _L11;
  
  _L11 = 1 == (*dmi_driver_request_int)[0];
  /* ck__L11 */ if (_L11) {
    /* 1 */
    C_int_to_DMI_Driver_Reqest_DATA(
      dmi_driver_request_int,
      dmi_driver_request_ct);
  }
  else {
    kcg_copy_DMI_Driver_Request_T_D(
      dmi_driver_request_ct,
      (DMI_Driver_Request_T_DMI_Messag *) &cDMI_Driver_Request_DATA_Packet);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Driver_Reqest_.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */


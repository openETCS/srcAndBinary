/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Driver_Reqest_DATA.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest */
void C_int_to_DMI_Driver_Reqest_DATA(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::dmi_driver_request_int */ DMI_Driver_Request_int_array_T_ *dmi_driver_request_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::dmi_driver_request_ct */ DMI_Driver_Request_T_DMI_Messag *dmi_driver_request_ct)
{
  (*dmi_driver_request_ct).systemTime = (*dmi_driver_request_int)[1];
  (*dmi_driver_request_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_driver_request_int)[0]);
  (*dmi_driver_request_ct).m_request = /* 1 */
    CAST_int_to_DMI_Request_DATA_Va((*dmi_driver_request_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Driver_Reqest_DATA.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */


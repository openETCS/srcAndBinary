/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DriverIdentfier_DAT.h"

/* DATA::Variables::CAST_int_to_DriverIdentfier */
void CAST_int_to_DriverIdentfier_DAT(
  /* DATA::Variables::CAST_int_to_DriverIdentfier::driverIdentfier_int_array */ DriverIdentifier_INT_T_DATA *driverIdentfier_int_array,
  /* DATA::Variables::CAST_int_to_DriverIdentfier::driverIdentfier_string */ driverIdentifier_T_DMI_Messages *driverIdentfier_string)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 9; i++) {
    (*driverIdentfier_string)[i] = /* 1 */
      Int_to_Char_Utilities((*driverIdentfier_int_array)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DriverIdentfier_DAT.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */


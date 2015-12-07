/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DriverIdentfier_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DriverIdentfier_to_int */
void CAST_DriverIdentfier_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DriverIdentfier_to_int::driverIdentfier_string */ driverIdentifier_T_DMI_Messages_Bothways_Pkg *driverIdentfier_string,
  /* DATA::Variables::CAST_DriverIdentfier_to_int::driverIdentfier_int_array */ DriverIdentifier_INT_T_DATA *driverIdentfier_int_array)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 9; i++) {
    (*driverIdentfier_int_array)[i] = /* 1 */
      Char_to_Int_Utilities((*driverIdentfier_string)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DriverIdentfier_to_int_DATA_Variables.c
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */


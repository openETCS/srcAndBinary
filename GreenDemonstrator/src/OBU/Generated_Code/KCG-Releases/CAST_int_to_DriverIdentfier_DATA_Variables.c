/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DriverIdentfier_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DriverIdentfier */
void CAST_int_to_DriverIdentfier_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DriverIdentfier::driverIdentfier_int_array */ DriverIdentifier_INT_T_DATA *driverIdentfier_int_array,
  /* DATA::Variables::CAST_int_to_DriverIdentfier::driverIdentfier_string */ driverIdentifier_T_DMI_Messages_Bothways_Pkg *driverIdentfier_string)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 9; i++) {
    (*driverIdentfier_string)[i] = /* 1 */
      Int_to_Char_Utilities((*driverIdentfier_int_array)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DriverIdentfier_DATA_Variables.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */


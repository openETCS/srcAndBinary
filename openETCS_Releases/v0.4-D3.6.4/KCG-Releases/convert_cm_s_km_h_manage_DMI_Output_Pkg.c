/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convert_cm_s_km_h_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::convert_cm_s_km_h */
V_internal_Type_Obu_BasicTypes_Pkg convert_cm_s_km_h_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::cm_s */ V_odometry_Type_Obu_BasicTypes_Pkg cm_s)
{
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::km_h */
  static V_internal_Type_Obu_BasicTypes_Pkg km_h;
  
  /* 1 */ if (cm_s >= 0) {
    km_h = cm_s * 36 / 1000;
  }
  else {
    km_h = cm_s;
  }
  return km_h;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** convert_cm_s_km_h_manage_DMI_Output_Pkg.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */


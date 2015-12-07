/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaleVelo_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::scaleVelo */
V_odometry_Type_Obu_BasicTypes_Pkg scaleVelo_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::scaleVelo::maMode */ M_MAMODE maMode,
  /* EVC_MEM_Support_Pkg::scaleVelo::v_track */ V_MAMODE v_track,
  /* EVC_MEM_Support_Pkg::scaleVelo::nationalValues */ P003_OBU_T_TM *nationalValues)
{
  /* EVC_MEM_Support_Pkg::scaleVelo::v_evc */
  static V_odometry_Type_Obu_BasicTypes_Pkg v_evc;
  
  /* 1 */ if (v_track == 127) {
    switch (maMode) {
      case M_MAMODE_Limited_Supervision :
        v_evc = (*nationalValues).v_nvlimsuperv * 1000 / 36;
        break;
      case M_MAMODE_On_Sight :
        v_evc = (*nationalValues).v_nvonsight * 1000 / 36;
        break;
      case M_MAMODE_Shunting :
        v_evc = (*nationalValues).v_nvshunt * 1000 / 36;
        break;
      
    }
  }
  else {
    v_evc = v_track * 5 * 1000 / 36;
  }
  return v_evc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaleVelo_EVC_MEM_Support_Pkg.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */


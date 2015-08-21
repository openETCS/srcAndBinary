/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convertCab_EVC_Support_Pkg.h"

/* EVC_Support_Pkg::convertCab */
T_Cab_Level_And_Mode_Types_Pkg convertCab_EVC_Support_Pkg(
  /* EVC_Support_Pkg::convertCab::inCabTIU */cab_ID_T_TIU_Types_Pkg inCabTIU)
{
  /* EVC_Support_Pkg::convertCab::outCabML */
  static T_Cab_Level_And_Mode_Types_Pkg outCabML;
  
  switch (inCabTIU) {
    case CabA_TIU_Types_Pkg :
      outCabML = A_Level_And_Mode_Types_Pkg;
      break;
    case CabB_TIU_Types_Pkg :
      outCabML = B_Level_And_Mode_Types_Pkg;
      break;
    
    default :
      outCabML = unknown_Level_And_Mode_Types_Pkg;
  }
  return outCabML;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** convertCab_EVC_Support_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


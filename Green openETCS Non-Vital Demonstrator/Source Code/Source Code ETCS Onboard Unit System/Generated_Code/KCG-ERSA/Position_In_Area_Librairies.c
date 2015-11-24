/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_In_Area_Librairies.h"

/* Librairies::Position_In_Area */
kcg_bool Position_In_Area_Librairies(
  /* Librairies::Position_In_Area::Position */ Location_T_Obu_BasicTypes_Pkg Position,
  /* Librairies::Position_In_Area::D_Area */ Location_T_Obu_BasicTypes_Pkg D_Area,
  /* Librairies::Position_In_Area::L_Area */ Location_T_Obu_BasicTypes_Pkg L_Area)
{
  /* Librairies::Position_In_Area::Position_In_Area */ kcg_bool Position_In_Area;
  
  Position_In_Area = (Position >= D_Area) & (Position <= D_Area + L_Area);
  return Position_In_Area;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Position_In_Area_Librairies.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */


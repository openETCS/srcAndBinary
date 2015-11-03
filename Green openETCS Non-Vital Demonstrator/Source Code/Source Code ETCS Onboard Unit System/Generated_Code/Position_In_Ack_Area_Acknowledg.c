/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_In_Ack_Area_Acknowledg.h"

/* Acknowledgement::Position_In_Ack_Area */
kcg_bool Position_In_Ack_Area_Acknowledg(
  /* Acknowledgement::Position_In_Ack_Area::Position */ Location_T_Obu_BasicTypes_Pkg Position,
  /* Acknowledgement::Position_In_Ack_Area::D_Area */ Location_T_Obu_BasicTypes_Pkg D_Area,
  /* Acknowledgement::Position_In_Ack_Area::L_Ack_Area */ Location_T_Obu_BasicTypes_Pkg L_Ack_Area)
{
  /* Acknowledgement::Position_In_Ack_Area::Position_In_Ack_Area */
  static kcg_bool Position_In_Ack_Area;
  
  Position_In_Ack_Area = (Position <= D_Area) & (Position >= D_Area -
      L_Ack_Area);
  return Position_In_Ack_Area;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Position_In_Ack_Area_Acknowledg.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */


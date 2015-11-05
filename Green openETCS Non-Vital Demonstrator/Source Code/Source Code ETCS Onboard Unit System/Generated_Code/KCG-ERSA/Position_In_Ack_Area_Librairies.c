/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_In_Ack_Area_Librairies.h"

/* Librairies::Position_In_Ack_Area */
kcg_bool Position_In_Ack_Area_Librairies(
  /* Librairies::Position_In_Ack_Area::Position */ Location_T_Obu_BasicTypes_Pkg Position,
  /* Librairies::Position_In_Ack_Area::D_Area */ Location_T_Obu_BasicTypes_Pkg D_Area,
  /* Librairies::Position_In_Ack_Area::L_Ack_Area */ Location_T_Obu_BasicTypes_Pkg L_Ack_Area)
{
  /* Librairies::Position_In_Ack_Area::Position_In_Ack_Area */
  static kcg_bool Position_In_Ack_Area;
  
  Position_In_Ack_Area = (Position <= D_Area) & (Position >= D_Area -
      L_Ack_Area);
  return Position_In_Ack_Area;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Position_In_Ack_Area_Librairies.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */


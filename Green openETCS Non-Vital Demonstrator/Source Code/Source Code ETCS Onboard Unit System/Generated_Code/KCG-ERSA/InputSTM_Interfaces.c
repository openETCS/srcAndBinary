/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSTM_Interfaces.h"

/* Interfaces::InputSTM */
void InputSTM_Interfaces(
  /* Interfaces::InputSTM::Data_From_STM */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* Interfaces::InputSTM::Interface_To_National_System */ kcg_bool *Interface_To_National_System,
  /* Interfaces::InputSTM::National_Trip_Order */ kcg_bool *National_Trip_Order)
{
  *National_Trip_Order = (*Data_From_STM).National_trip_Order;
  *Interface_To_National_System = (*Data_From_STM).Interface_To_National_System;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputSTM_Interfaces.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _InputSpeedAndSupervision_Inter
#define _InputSpeedAndSupervision_Inter

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Interfaces::InputSpeedAndSupervision */
extern void InputSpeedAndSupervision_Interf(
  /* Interfaces::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_L *Data_From_Speed_and_Supervision,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Overpass_SR_Distance */ kcg_bool *Estimated_Front_End_Overpass_SR,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */ kcg_bool *Estimated_Front_End_Rear_Locati,
  /* Interfaces::InputSpeedAndSupervision::Override_Function_Active */ kcg_bool *Override_Function_Active,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Antenna */ kcg_bool *Train_Overpass_EOA_Antenna,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Front_End */ kcg_bool *Train_Overpass_EOA_Front_End,
  /* Interfaces::InputSpeedAndSupervision::Train_Speed_Under_Override_Limit */ kcg_bool *Train_Speed_Under_Override_Limi);

#endif /* _InputSpeedAndSupervision_Inter */
/* $**************** KCG Version 6.4 (build i21) ****************
** InputSpeedAndSupervision_Interf.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


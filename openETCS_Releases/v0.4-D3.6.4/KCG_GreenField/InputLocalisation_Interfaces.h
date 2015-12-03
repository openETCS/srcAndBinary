/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _InputLocalisation_Interfaces_H
#define _InputLocalisation_Interfaces_H

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Interfaces::InputLocalisation */
extern void InputLocalisation_Interfaces(
  /* Interfaces::InputLocalisation::Data_From_Localisation */ T_Data_From_Localisation_Level_ *Data_From_Localisation,
  /* Interfaces::InputLocalisation::BG_In_Expected_List_In_SR */ kcg_bool *BG_In_Expected_List_In_SR,
  /* Interfaces::InputLocalisation::BG_In_Expected_List_In_SH */ kcg_bool *BG_In_Expected_List_In_SH,
  /* Interfaces::InputLocalisation::Linked_BG_Pased_In_Wrong_Direction */ kcg_bool *Linked_BG_Pased_In_Wrong_Direct,
  /* Interfaces::InputLocalisation::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Interfaces::InputLocalisation::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg *Train_Speed,
  /* Interfaces::InputLocalisation::Train_Standstill */ kcg_bool *Train_Standstill);

#endif /* _InputLocalisation_Interfaces_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** InputLocalisation_Interfaces.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */


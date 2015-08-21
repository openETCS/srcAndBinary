/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _InputTIUManagement_Interfaces_H_
#define _InputTIUManagement_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* Interfaces::InputTIUManagement */
extern void InputTIUManagement_Interfaces(
  /* Interfaces::InputTIUManagement::Data_from_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_from_TIU,
  /* Interfaces::InputTIUManagement::Cab */T_Cab_Level_And_Mode_Types_Pkg Cab,
  /* Interfaces::InputTIUManagement::Train_Permitted_NL */kcg_bool *Train_Permitted_NL,
  /* Interfaces::InputTIUManagement::Train_Permitted_PS */kcg_bool *Train_Permitted_PS,
  /* Interfaces::InputTIUManagement::Train_Req_SL */kcg_bool *Train_Req_SL,
  /* Interfaces::InputTIUManagement::All_Desks_Closed */kcg_bool *All_Desks_Closed,
  /* Interfaces::InputTIUManagement::Desk_Open */kcg_bool *Desk_Open);

#endif /* _InputTIUManagement_Interfaces_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputTIUManagement_Interfaces.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


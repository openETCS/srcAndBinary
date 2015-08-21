/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _Output_To_DMI_OutputManagement_H_
#define _Output_To_DMI_OutputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* OutputManagement::Output_To_DMI */
extern void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::previous_level */M_LEVEL previous_level,
  /* OutputManagement::Output_To_DMI::next_level */M_LEVEL next_level,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::Data_To_DMI */DMI_ModesToDMI_T_DMI_Types_Pkg *Data_To_DMI);

#endif /* _Output_To_DMI_OutputManagement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output_To_DMI_OutputManagement.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


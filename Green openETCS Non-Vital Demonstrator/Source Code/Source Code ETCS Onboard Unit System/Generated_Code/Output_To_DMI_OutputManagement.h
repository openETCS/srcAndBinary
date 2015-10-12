/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _Output_To_DMI_OutputManagement_H_
#define _Output_To_DMI_OutputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* OutputManagement::Output_To_DMI */
extern void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */ kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */ T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::isNewLevel */ kcg_bool isNewLevel,
  /* OutputManagement::Output_To_DMI::announcedLevelTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* OutputManagement::Output_To_DMI::isAvailableForUse */ kcg_bool isAvailableForUse,
  /* OutputManagement::Output_To_DMI::announcedLevel */ T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevel,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *Data_To_DMI_Ack);

#endif /* _Output_To_DMI_OutputManagement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_DMI_OutputManagement.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


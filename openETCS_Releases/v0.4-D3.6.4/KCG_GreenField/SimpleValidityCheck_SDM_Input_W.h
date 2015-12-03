/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _SimpleValidityCheck_SDM_Input_
#define _SimpleValidityCheck_SDM_Input_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Input_Wrappers::SimpleValidityCheck */
extern kcg_bool SimpleValidityCheck_SDM_Input_W(
  /* SDM_Input_Wrappers::SimpleValidityCheck::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDM_Input_Wrappers::SimpleValidityCheck::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SDM_Input_Wrappers::SimpleValidityCheck::TrainPosition */ trainPosition_T_TrainPosition_T *TrainPosition,
  /* SDM_Input_Wrappers::SimpleValidityCheck::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_Input_Wrappers::SimpleValidityCheck::dataFromTrackAtlas */ DataForSupervision_nextGen_t_Tr *dataFromTrackAtlas);

#endif /* _SimpleValidityCheck_SDM_Input_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SimpleValidityCheck_SDM_Input_W.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */


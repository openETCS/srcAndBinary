/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SimpleValidityCheck_SDM_Input_W.h"

/* SDM_Input_Wrappers::SimpleValidityCheck */
kcg_bool SimpleValidityCheck_SDM_Input_W(
  /* SDM_Input_Wrappers::SimpleValidityCheck::NationalValues */ P3_NationalValues_T_Packet_Type *NationalValues,
  /* SDM_Input_Wrappers::SimpleValidityCheck::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SDM_Input_Wrappers::SimpleValidityCheck::TrainPosition */ trainPosition_T_TrainPosition_T *TrainPosition,
  /* SDM_Input_Wrappers::SimpleValidityCheck::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_Input_Wrappers::SimpleValidityCheck::dataFromTrackAtlas */ DataForSupervision_nextGen_t_Tr *dataFromTrackAtlas)
{
  /* SDM_Input_Wrappers::SimpleValidityCheck::exception */
  static kcg_bool exception;
  
  exception = !((*NationalValues).valid & (*odometry).valid &
      (*TrainPosition).valid & (*trainData).valid &
      (*dataFromTrackAtlas).MRSP[0].valid & (*dataFromTrackAtlas).MA.valid &
      ((*odometry).motionDirection == cabAFirst_Obu_BasicTypes_Pkg) & (0 <=
        (*odometry).speed.v_safeNominal) & ((*odometry).speed.v_safeNominal >=
        (*odometry).speed.v_lower));
  return exception;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SimpleValidityCheck_SDM_Input_W.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


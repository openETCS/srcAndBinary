/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_V_MAXTRAIN_RBC_S.h"

/* RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN */
void TrainData__Set_V_MAXTRAIN_RBC_S(
  /* RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN::in_V_TRAIN */ V_TRAIN in_V_TRAIN,
  /* RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).v_maxtrain = in_V_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_V_MAXTRAIN_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_L_TRAIN_RBC_Sess.h"

/* RBC_Session_Pkg::TrainData__Set_L_TRAIN */
void TrainData__Set_L_TRAIN_RBC_Sess(
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::in_L_TRAIN */ L_TRAIN in_L_TRAIN,
  /* RBC_Session_Pkg::TrainData__Set_L_TRAIN::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).l_train = in_L_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_L_TRAIN_RBC_Sess.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_NC_TRAIN_RBC_Ses.h"

/* RBC_Session_Pkg::TrainData__Set_NC_TRAIN */
void TrainData__Set_NC_TRAIN_RBC_Ses(
  /* RBC_Session_Pkg::TrainData__Set_NC_TRAIN::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_NC_TRAIN::in_NC_TRAIN */ NC_TRAIN in_NC_TRAIN,
  /* RBC_Session_Pkg::TrainData__Set_NC_TRAIN::out_TrainData */ TrainData_T *out_TrainData)
{
  kcg_copy_TrainData_T(out_TrainData, inTrainData);
  (*out_TrainData).nc_train = in_NC_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_NC_TRAIN_RBC_Ses.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


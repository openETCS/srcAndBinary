/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_N_AXLE_RBC_Sessi.h"

/* RBC_Session_Pkg::TrainData__Set_N_AXLE */
void TrainData__Set_N_AXLE_RBC_Sessi(
  /* RBC_Session_Pkg::TrainData__Set_N_AXLE::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_N_AXLE::in_N_AXLE */ N_AXLE in_N_AXLE,
  /* RBC_Session_Pkg::TrainData__Set_N_AXLE::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).n_axle = in_N_AXLE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_N_AXLE_RBC_Sessi.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


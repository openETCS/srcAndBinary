/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_M_LOADINGGAUGE_R.h"

/* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE */
void TrainData__Set_M_LOADINGGAUGE_R(
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::in_M_LOADINGGAUGE */ M_LOADINGGAUGE in_M_LOADINGGAUGE,
  /* RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).m_loadinggauge = in_M_LOADINGGAUGE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_M_LOADINGGAUGE_R.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


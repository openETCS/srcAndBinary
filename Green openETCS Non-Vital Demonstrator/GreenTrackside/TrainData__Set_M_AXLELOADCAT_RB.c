/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_M_AXLELOADCAT_RB.h"

/* RBC_Session_Pkg::TrainData__Set_M_AXLELOADCAT */
void TrainData__Set_M_AXLELOADCAT_RB(
  /* RBC_Session_Pkg::TrainData__Set_M_AXLELOADCAT::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_M_AXLELOADCAT::in_M_AXLELOADCAT */ M_AXLELOADCAT in_M_AXLELOADCAT,
  /* RBC_Session_Pkg::TrainData__Set_M_AXLELOADCAT::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).m_axleloadcat = in_M_AXLELOADCAT;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_M_AXLELOADCAT_RB.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


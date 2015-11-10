/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_M_AIRTIGHT_RBC_S.h"

/* RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT */
void TrainData__Set_M_AIRTIGHT_RBC_S(
  /* RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT::in_M_AIRTIGHT */ M_AIRTIGHT in_M_AIRTIGHT,
  /* RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).m_airtight = in_M_AIRTIGHT;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__Set_M_AIRTIGHT_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


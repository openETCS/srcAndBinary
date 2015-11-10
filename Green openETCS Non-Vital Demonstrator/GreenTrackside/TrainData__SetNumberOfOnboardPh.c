/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetNumberOfOnboardPh.h"

/* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers */
void TrainData__SetNumberOfOnboardPh(
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::inNumberOfOnboardPhoneNumbers */ kcg_int inNumberOfOnboardPhoneNumbers,
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).m_NumberOfOnboardPhoneNumbers = inNumberOfOnboardPhoneNumbers;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__SetNumberOfOnboardPh.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


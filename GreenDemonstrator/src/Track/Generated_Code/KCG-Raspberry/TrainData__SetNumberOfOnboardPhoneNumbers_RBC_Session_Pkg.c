/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers */
void TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg(
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::inTrainData */TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::inNumberOfOnboardPhoneNumbers */kcg_int inNumberOfOnboardPhoneNumbers,
  /* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers::outTrainData */TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  (*outTrainData).m_NumberOfOnboardPhoneNumbers = inNumberOfOnboardPhoneNumbers;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */


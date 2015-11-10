/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetOnboardPhoneNumbe.h"

/* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers */
void TrainData__SetOnboardPhoneNumbe(
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::inOnboardPhoneNumbers */ aNID_RADIO_T_Packet_TrainTypes_ *inOnboardPhoneNumbers,
  /* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  kcg_copy_aNID_RADIO_T_Packet_Tr(
    &(*outTrainData).m_OnboardPhoneNumbers,
    inOnboardPhoneNumbers);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__SetOnboardPhoneNumbe.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


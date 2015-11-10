/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetNationalSystemIde.h"

/* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities */
void TrainData__SetNationalSystemIde(
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::inNationalSystemIdentity */ aNID_NTC_T_Packet_TrainTypes_Pk *inNationalSystemIdentity,
  /* RBC_Session_Pkg::TrainData__SetNationalSystemIdentities::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  kcg_copy_aNID_NTC_T_Packet_Trai(
    &(*outTrainData).m_NationalSystemIdentities,
    inNationalSystemIdentity);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__SetNationalSystemIde.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


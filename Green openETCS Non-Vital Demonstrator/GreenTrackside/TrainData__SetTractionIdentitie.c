/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetTractionIdentitie.h"

/* RBC_Session_Pkg::TrainData__SetTractionIdentities */
void TrainData__SetTractionIdentitie(
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::inTractionIdentity */ aTractionIdentity_T_Packet_Trai *inTractionIdentity,
  /* RBC_Session_Pkg::TrainData__SetTractionIdentities::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, inTrainData);
  kcg_copy_aTractionIdentity_T_Pa(
    &(*outTrainData).m_TractionIdentities,
    inTractionIdentity);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainData__SetTractionIdentitie.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__GetTrainData.h"

/* RBC_Session_Pkg::SessionManagement__GetTrainData */
void SessionManagement__GetTrainData(
  /* RBC_Session_Pkg::SessionManagement__GetTrainData::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__GetTrainData::outTrainData */ TrainData_T *outTrainData)
{
  kcg_copy_TrainData_T(outTrainData, &(*inSessionManagement).m_TrainData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__GetTrainData.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


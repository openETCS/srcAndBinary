/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__SetTrainData.h"

/* RBC_Session_Pkg::SessionManagement__SetTrainData */
void SessionManagement__SetTrainData(
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::inTrainData */ TrainData_T *inTrainData,
  /* RBC_Session_Pkg::SessionManagement__SetTrainData::outSessionManagement */ SessionManagement_T *outSessionManagement)
{
  kcg_copy_SessionManagement_T(outSessionManagement, inSessionManagement);
  kcg_copy_TrainData_T(&(*outSessionManagement).m_TrainData, inTrainData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__SetTrainData.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


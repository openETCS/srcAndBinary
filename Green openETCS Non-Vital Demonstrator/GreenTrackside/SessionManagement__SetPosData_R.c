/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__SetPosData_R.h"

/* RBC_Session_Pkg::SessionManagement__SetPosData */
void SessionManagement__SetPosData_R(
  /* RBC_Session_Pkg::SessionManagement__SetPosData::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__SetPosData::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::SessionManagement__SetPosData::outSessionManagement */ SessionManagement_T *outSessionManagement)
{
  kcg_copy_SessionManagement_T(outSessionManagement, inSessionManagement);
  kcg_copy_PosData_T(&(*outSessionManagement).m_PosData, inPosData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__SetPosData_R.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


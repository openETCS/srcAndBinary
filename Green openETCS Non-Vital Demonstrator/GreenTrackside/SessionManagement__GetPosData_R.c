/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__GetPosData_R.h"

/* RBC_Session_Pkg::SessionManagement__GetPosData */
void SessionManagement__GetPosData_R(
  /* RBC_Session_Pkg::SessionManagement__GetPosData::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__GetPosData::outPositionManagement */ PosData_T *outPositionManagement)
{
  kcg_copy_PosData_T(outPositionManagement, &(*inSessionManagement).m_PosData);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__GetPosData_R.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


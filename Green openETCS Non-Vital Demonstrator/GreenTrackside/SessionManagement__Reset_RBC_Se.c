/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__Reset_RBC_Se.h"

/* RBC_Session_Pkg::SessionManagement__Reset */
void SessionManagement__Reset_RBC_Se(
  /* RBC_Session_Pkg::SessionManagement__Reset::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__Reset::outSessionManagement */ SessionManagement_T *outSessionManagement)
{
  kcg_copy_SessionManagement_T(
    outSessionManagement,
    (SessionManagement_T *) &SESSION_MANAGEMENT_DEFAULT);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__Reset_RBC_Se.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


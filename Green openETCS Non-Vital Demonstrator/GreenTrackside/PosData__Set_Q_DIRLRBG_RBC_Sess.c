/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DIRLRBG_RBC_Sess.h"

/* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG */
void PosData__Set_Q_DIRLRBG_RBC_Sess(
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::in_Q_DIRLRBG */ Q_DIRLRBG in_Q_DIRLRBG,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).q_dirlrbg = in_Q_DIRLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_Q_DIRLRBG_RBC_Sess.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


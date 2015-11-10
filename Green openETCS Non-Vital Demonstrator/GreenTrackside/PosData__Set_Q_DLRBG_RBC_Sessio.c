/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DLRBG_RBC_Sessio.h"

/* RBC_Session_Pkg::PosData__Set_Q_DLRBG */
void PosData__Set_Q_DLRBG_RBC_Sessio(
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::in_Q_DLRBG */ Q_DLRBG in_Q_DLRBG,
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).q_dlrbg = in_Q_DLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_Q_DLRBG_RBC_Sessio.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


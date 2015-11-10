/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_D_LRBG_RBC_Session.h"

/* RBC_Session_Pkg::PosData__Set_D_LRBG */
void PosData__Set_D_LRBG_RBC_Session(
  /* RBC_Session_Pkg::PosData__Set_D_LRBG::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_D_LRBG::ni_D_LRBG */ D_LRBG ni_D_LRBG,
  /* RBC_Session_Pkg::PosData__Set_D_LRBG::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).d_lrbg = ni_D_LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_D_LRBG_RBC_Session.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


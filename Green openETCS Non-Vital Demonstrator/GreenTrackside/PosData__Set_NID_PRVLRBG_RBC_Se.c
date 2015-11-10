/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_NID_PRVLRBG_RBC_Se.h"

/* RBC_Session_Pkg::PosData__Set_NID_PRVLRBG */
void PosData__Set_NID_PRVLRBG_RBC_Se(
  /* RBC_Session_Pkg::PosData__Set_NID_PRVLRBG::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_NID_PRVLRBG::in_NID_PRVLRBG */ NID_PRVLRBG in_NID_PRVLRBG,
  /* RBC_Session_Pkg::PosData__Set_NID_PRVLRBG::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).nid_prvlrbg = in_NID_PRVLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_NID_PRVLRBG_RBC_Se.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


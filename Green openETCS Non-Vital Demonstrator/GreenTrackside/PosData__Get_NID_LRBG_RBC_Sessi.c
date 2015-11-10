/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_NID_LRBG_RBC_Sessi.h"

/* RBC_Session_Pkg::PosData__Get_NID_LRBG */
NID_LRBG PosData__Get_NID_LRBG_RBC_Sessi(
  /* RBC_Session_Pkg::PosData__Get_NID_LRBG::inPosData */ PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_NID_LRBG::out_NID_LRBG */
  static NID_LRBG out_NID_LRBG;
  
  out_NID_LRBG = (*inPosData).nid_lrbg;
  return out_NID_LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Get_NID_LRBG_RBC_Sessi.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


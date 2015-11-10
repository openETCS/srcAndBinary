/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_M_MODE_RBC_Session.h"

/* RBC_Session_Pkg::PosData__Set_M_MODE */
void PosData__Set_M_MODE_RBC_Session(
  /* RBC_Session_Pkg::PosData__Set_M_MODE::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_M_MODE::in_M_MODE */ M_MODE in_M_MODE,
  /* RBC_Session_Pkg::PosData__Set_M_MODE::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).m_mode = in_M_MODE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_M_MODE_RBC_Session.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


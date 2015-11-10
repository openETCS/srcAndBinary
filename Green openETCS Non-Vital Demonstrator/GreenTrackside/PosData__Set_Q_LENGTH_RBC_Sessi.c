/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_LENGTH_RBC_Sessi.h"

/* RBC_Session_Pkg::PosData__Set_Q_LENGTH */
void PosData__Set_Q_LENGTH_RBC_Sessi(
  /* RBC_Session_Pkg::PosData__Set_Q_LENGTH::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_LENGTH::in_Q_LENGTH */ Q_LENGTH in_Q_LENGTH,
  /* RBC_Session_Pkg::PosData__Set_Q_LENGTH::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).q_length = in_Q_LENGTH;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_Q_LENGTH_RBC_Sessi.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


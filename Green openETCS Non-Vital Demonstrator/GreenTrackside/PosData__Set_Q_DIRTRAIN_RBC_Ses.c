/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DIRTRAIN_RBC_Ses.h"

/* RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN */
void PosData__Set_Q_DIRTRAIN_RBC_Ses(
  /* RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN::in_Q_DIRTRAIN */ Q_DIRTRAIN in_Q_DIRTRAIN,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).q_dirtrain = in_Q_DIRTRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_Q_DIRTRAIN_RBC_Ses.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


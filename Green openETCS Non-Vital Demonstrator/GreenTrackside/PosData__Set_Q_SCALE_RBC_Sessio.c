/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_SCALE_RBC_Sessio.h"

/* RBC_Session_Pkg::PosData__Set_Q_SCALE */
void PosData__Set_Q_SCALE_RBC_Sessio(
  /* RBC_Session_Pkg::PosData__Set_Q_SCALE::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_SCALE::in_Q_SCALE */ Q_SCALE in_Q_SCALE,
  /* RBC_Session_Pkg::PosData__Set_Q_SCALE::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).q_scale = in_Q_SCALE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_Q_SCALE_RBC_Sessio.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


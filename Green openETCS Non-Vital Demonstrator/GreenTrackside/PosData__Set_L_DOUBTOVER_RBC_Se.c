/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_L_DOUBTOVER_RBC_Se.h"

/* RBC_Session_Pkg::PosData__Set_L_DOUBTOVER */
void PosData__Set_L_DOUBTOVER_RBC_Se(
  /* RBC_Session_Pkg::PosData__Set_L_DOUBTOVER::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_L_DOUBTOVER::in_L_DOUBTOVER */ L_DOUBTOVER in_L_DOUBTOVER,
  /* RBC_Session_Pkg::PosData__Set_L_DOUBTOVER::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).l_doubtover = in_L_DOUBTOVER;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_L_DOUBTOVER_RBC_Se.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


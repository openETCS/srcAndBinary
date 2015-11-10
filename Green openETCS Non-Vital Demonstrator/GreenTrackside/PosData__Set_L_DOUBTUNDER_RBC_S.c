/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_L_DOUBTUNDER_RBC_S.h"

/* RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER */
void PosData__Set_L_DOUBTUNDER_RBC_S(
  /* RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER::in_L_DOUBTUNDER */ L_DOUBTUNDER in_L_DOUBTUNDER,
  /* RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).l_doubtunder = in_L_DOUBTUNDER;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_L_DOUBTUNDER_RBC_S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


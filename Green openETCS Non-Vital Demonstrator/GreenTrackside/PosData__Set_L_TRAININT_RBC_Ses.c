/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_L_TRAININT_RBC_Ses.h"

/* RBC_Session_Pkg::PosData__Set_L_TRAININT */
void PosData__Set_L_TRAININT_RBC_Ses(
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::in_L_TRAININT */ L_TRAININT in_L_TRAININT,
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).l_trainint = in_L_TRAININT;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_L_TRAININT_RBC_Ses.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


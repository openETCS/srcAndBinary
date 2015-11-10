/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_V_TRAIN_RBC_Sessio.h"

/* RBC_Session_Pkg::PosData__Set_V_TRAIN */
void PosData__Set_V_TRAIN_RBC_Sessio(
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::in_V_TRAIN */ V_TRAIN in_V_TRAIN,
  /* RBC_Session_Pkg::PosData__Set_V_TRAIN::outPosData */ PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).v_train = in_V_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Set_V_TRAIN_RBC_Sessio.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


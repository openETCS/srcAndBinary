/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DLRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_Q_DLRBG */
void PosData__Set_Q_DLRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::in_Q_DLRBG */Q_DLRBG in_Q_DLRBG,
  /* RBC_Session_Pkg::PosData__Set_Q_DLRBG::outPosData */PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).q_dlrbg = in_Q_DLRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Set_Q_DLRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */


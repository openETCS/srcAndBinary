/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_NID_NTC_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_NID_NTC */
void PosData__Set_NID_NTC_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_NID_NTC::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_NID_NTC::in_NID_NTC */NID_NTC in_NID_NTC,
  /* RBC_Session_Pkg::PosData__Set_NID_NTC::outPosData */PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).nid_ntc = in_NID_NTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Set_NID_NTC_RBC_Session_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */


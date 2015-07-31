/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet4_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet4 */
void Build_Packet4_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet4::errorMsg */ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::Build_Packet4::packet4 */PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4)
{
  (*packet4).valid = (*errorMsg).present;
  (*packet4).M_ERROR = (*errorMsg).errorType;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_Packet4_ProvidePositionReport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


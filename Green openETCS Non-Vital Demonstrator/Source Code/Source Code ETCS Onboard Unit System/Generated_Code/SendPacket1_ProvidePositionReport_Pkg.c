/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendPacket1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::SendPacket1 */
void SendPacket1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::SendPacket1::lrbg */positionedBG_T_TrainPosition_Types_Pck *lrbg,
  /* ProvidePositionReport_Pkg::SendPacket1::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::SendPacket1::sendPacket0 */kcg_bool *sendPacket0,
  /* ProvidePositionReport_Pkg::SendPacket1::sendPacket1 */kcg_bool *sendPacket1)
{
  *sendPacket1 =
    (*lrbg).infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned &
    ((*lrbg).infoFromPassing.BG_Header.n_total ==
      N_TOTAL_1_balise_in_the_group) & (*lrbg).valid;
  *sendPacket0 = !*sendPacket1 & (*lrbg).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendPacket1_ProvidePositionReport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


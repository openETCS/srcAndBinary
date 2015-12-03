/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeterminePacketValidity_Provide.h"

/* ProvidePositionReport_Pkg::DeterminePacketValidity */
void DeterminePacketValidity_Provide(
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::lrbg */ positionedBG_T_TrainPosition_Ty *lrbg,
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::sendPacket0 */ kcg_bool *sendPacket0,
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::sendPacket1 */ kcg_bool *sendPacket1)
{
  *sendPacket1 =
    (*lrbg).infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign &
    ((*lrbg).infoFromPassing.BG_Header.n_total ==
      N_TOTAL_1_balise_in_the_group) & (*lrbg).valid;
  *sendPacket0 = !*sendPacket1 & (*lrbg).valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DeterminePacketValidity_Provide.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


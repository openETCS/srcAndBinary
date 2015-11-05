/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Activate_Packet0_ProvidePositio.h"

/* ProvidePositionReport_Pkg::Activate_Packet0 */
void Activate_Packet0_ProvidePositio(
  /* ProvidePositionReport_Pkg::Activate_Packet0::in_packet0 */ Position_Report_TrainToTrack *in_packet0,
  /* ProvidePositionReport_Pkg::Activate_Packet0::out_packet0 */ PT0_PositionReport_T_Packet_Tra *out_packet0)
{
  (*out_packet0).valid = kcg_true;
  kcg_copy_Position_Report_TrainT(&(*out_packet0).packet0, in_packet0);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Activate_Packet0_ProvidePositio.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
#ifndef _Build_Packet1_ProvidePositionReport_Pkg_H_
#define _Build_Packet1_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::Build_Packet1 */
extern void Build_Packet1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet1::packet0 */Position_Report_TrainToTrack *packet0,
  /* ProvidePositionReport_Pkg::Build_Packet1::prvDirTrain */Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::Build_Packet1::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packet1::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1);

#endif /* _Build_Packet1_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_Packet1_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */


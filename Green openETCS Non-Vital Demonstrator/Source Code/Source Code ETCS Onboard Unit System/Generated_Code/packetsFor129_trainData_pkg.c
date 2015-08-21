/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetsFor129_trainData_pkg.h"

/* trainData_pkg::packetsFor129 */
void packetsFor129_trainData_pkg(
  /* trainData_pkg::packetsFor129::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::packetsFor129::p0_positionReport */PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::packetsFor129::p1_positionReport */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::packetsFor129::packetsForRBC */outPackets_T_Common_Types_Pkg *packetsForRBC)
{
  kcg_copy_outPackets_T_Common_Types_Pkg(
    packetsForRBC,
    (outPackets_T_Common_Types_Pkg *) &cNoPackets_trainData_pkg);
  (*packetsForRBC).p11.valid = kcg_true;
  (*packetsForRBC).p11.NC_CDTRAIN = (*trainData).cantDeficientcy;
  (*packetsForRBC).p11.NC_TRAIN = (*trainData).trainCategory;
  (*packetsForRBC).p11.l_train = (*trainData).trainLength;
  (*packetsForRBC).p11.v_maxtrain = (*trainData).maxTrainSpeed;
  (*packetsForRBC).p11.m_loadinggoage = (*trainData).loadingGauge;
  (*packetsForRBC).p11.m_axleloadcat = (*trainData).axleLoadCategory;
  (*packetsForRBC).p11.m_airtight = (*trainData).airtightSystem;
  (*packetsForRBC).p11.n_axle = (*trainData).axleNumber;
  (*packetsForRBC).p11.nIter_tractionIdentity =
    (*trainData).numberTractionSystems - 1;
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &(*packetsForRBC).p11.tractionIdentity,
    &(*trainData).tractionSystem);
  (*packetsForRBC).p11.nIter_ntc = (*trainData).numberNationalSystems - 1;
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
    &(*packetsForRBC).p11.nid_ntc,
    &(*trainData).nationSystems);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &(*packetsForRBC).p0,
    p0_positionReport);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &(*packetsForRBC).p1,
    p1_positionReport);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** packetsFor129_trainData_pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


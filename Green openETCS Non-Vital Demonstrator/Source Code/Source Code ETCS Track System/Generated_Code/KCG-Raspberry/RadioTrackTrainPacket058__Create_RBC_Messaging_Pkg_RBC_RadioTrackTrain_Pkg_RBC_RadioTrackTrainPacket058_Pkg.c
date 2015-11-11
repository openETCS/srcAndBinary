/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create */
void RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_Q_DIR */Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_Q_SCALE */Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_T_CYCLOC */T_CYCLOC in_T_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_D_CYCLOC */D_CYCLOC in_D_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_M_LOC */M_LOC in_M_LOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::inNumberOfIncrementalDistancesAndQualifiers */N_ITER inNumberOfIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::inIncrementalDistancesAndQualifiers */array__47228 *inIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::outRadioTrackTrainPacket */P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  P058_trackside_int_T_TM tmp1;
  P058_trackside_int_T_TM tmp;
  
  /* 1 */
  RadioTrackTrainPacket058__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    (P058_trackside_int_T_TM *) &P058_DEFAULT,
    kcg_true,
    &tmp);
  /* 1 */
  RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp,
    58,
    &tmp1);
  /* 1 */
  RadioTrackTrainPacket058__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp1,
    P58_L_PACKET_STATIC_PART_RBC_Messaging_Pkg +
    P58_L_PACKET_D_LOC_Q_LGTLOC_RBC_Messaging_Pkg *
    inNumberOfIncrementalDistancesAndQualifiers,
    &tmp);
  /* 1 */
  RadioTrackTrainPacket058__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp,
    in_Q_DIR,
    &tmp1);
  /* 1 */
  RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp1,
    in_Q_SCALE,
    &tmp);
  /* 1 */
  RadioTrackTrainPacket058__Set_T_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp,
    in_T_CYCLOC,
    &tmp1);
  /* 1 */
  RadioTrackTrainPacket058__Set_D_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp1,
    in_D_CYCLOC,
    &tmp);
  /* 1 */
  RadioTrackTrainPacket058__Set_M_LOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp,
    in_M_LOC,
    &tmp1);
  /* 1 */
  RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp1,
    inNumberOfIncrementalDistancesAndQualifiers,
    &tmp);
  /* 1 */
  RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
    &tmp,
    inIncrementalDistancesAndQualifiers,
    outRadioTrackTrainPacket);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.c
** Generation date: 2015-11-10T18:22:11
*************************************************************$ */


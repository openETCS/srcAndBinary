/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_106_RadioTrackTrainFactory__Cr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058 */
void _106_RadioTrackTrainFactory__Cr(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_Q_SCALE */ Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_T_CYCLOC */ T_CYCLOC in_T_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_D_CYCLOC */ D_CYCLOC in_D_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_M_LOC */ M_LOC in_M_LOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::inNumberOfIncrementalDistancesAndQualifiers */ N_ITER inNumberOfIncrementalDistancesA,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::inIncrementalDistancesAndQualifiers */ array_44858 *inIncrementalDistancesAndQualif,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* 1 */
  RadioTrackTrainPacket058__Creat(
    in_Q_DIR,
    in_Q_SCALE,
    in_T_CYCLOC,
    in_D_CYCLOC,
    in_M_LOC,
    inNumberOfIncrementalDistancesA,
    inIncrementalDistancesAndQualif,
    outRadioTrackTrainPacket);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _106_RadioTrackTrainFactory__Cr.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


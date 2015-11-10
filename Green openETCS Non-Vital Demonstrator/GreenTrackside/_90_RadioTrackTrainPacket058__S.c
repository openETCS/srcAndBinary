/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_90_RadioTrackTrainPacket058__S.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers */
void _90_RadioTrackTrainPacket058__S(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::inRadioTrackTrainPacket */ P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::inIncrementalDistancesAndQualifiers */ array_44858 *inIncrementalDistancesAndQualif,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers */
  static array_45056 tmp;
  static kcg_int i;
  
  kcg_copy_P058_trackside_int_T_T(
    outRadioTrackTrainPacket,
    inRadioTrackTrainPacket);
  for (i = 0; i < 32; i++) {
    /* 1 */
    RadioTrackTrainPacket058__SetIn(
      &(*inIncrementalDistancesAndQualif)[i],
      &tmp[i]);
  }
  kcg_copy_P058_trackide_sectionl(&(*outRadioTrackTrainPacket).SECTIONS, &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _90_RadioTrackTrainPacket058__S.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


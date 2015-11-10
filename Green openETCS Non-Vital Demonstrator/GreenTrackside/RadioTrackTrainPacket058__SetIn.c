/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__SetIn.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable */
void RadioTrackTrainPacket058__SetIn(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::inIncrementalDistanceAndQualifier */ IterPacket58_T_Packet_Types_Pkg *inIncrementalDistanceAndQualifi,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::outIncrementalDistanceAndQualifier */ P058_section_int_T_TM *outIncrementalDistanceAndQualif)
{
  kcg_copy_P058_section_int_T_TM(
    outIncrementalDistanceAndQualif,
    (P058_section_int_T_TM *) &P058_SECTIONS_DEFAULT);
  (*outIncrementalDistanceAndQualif).D_LOC =
    (*inIncrementalDistanceAndQualifi).d_loc;
  (*outIncrementalDistanceAndQualif).Q_LGTLOC = /* 1 */
    CAST_Q_LGTLOC_to_int_TM_convers(
      (*inIncrementalDistanceAndQualifi).q_lgtloc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__SetIn.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


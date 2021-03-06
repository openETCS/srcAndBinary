/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P05_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P05 */
void nextGen_P05_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_P05::inP5 */ PT5_TrainRunningNumber_Packet_T *inP5,
  /* radioOutput_Pkg::nextGen_P05::outP5 */ P005_TM_TrainToTrack *outP5)
{
  (*outP5).valid = (*inP5).valid;
  (*outP5).nid_packet = cp005_TrainRunningNumber_ids;
  (*outP5).l_packet = 0;
  (*outP5).nid_opeartional = (*inP5).TrainRunningNumber;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_P05_radioOutput_Pkg.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


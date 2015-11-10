/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP009_RBC_Model_Pkg_Train.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009 */
void ConvertP009_RBC_Model_Pkg_Train(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::newP009 */ P009_TM_TrainToTrack *newP009,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::oldP009 */ PT9_Level23_TransitionInformati *oldP009)
{
  (*oldP009).valid = (*newP009).valid;
  (*oldP009).transitionInformation = (*newP009).nid_ltrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP009_RBC_Model_Pkg_Train.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


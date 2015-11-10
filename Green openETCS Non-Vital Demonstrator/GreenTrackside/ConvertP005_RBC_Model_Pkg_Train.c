/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP005_RBC_Model_Pkg_Train.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005 */
void ConvertP005_RBC_Model_Pkg_Train(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::newP005 */ P005_TM_TrainToTrack *newP005,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::oldP005 */ PT5_TrainRunningNumber_Packet_T *oldP005)
{
  (*oldP005).valid = (*newP005).valid;
  (*oldP005).TrainRunningNumber = (*newP005).nid_opeartional;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP005_RBC_Model_Pkg_Train.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


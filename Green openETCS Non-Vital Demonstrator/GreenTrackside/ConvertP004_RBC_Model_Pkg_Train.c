/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP004_RBC_Model_Pkg_Train.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004 */
void ConvertP004_RBC_Model_Pkg_Train(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::newP004 */ P004_TM_TrainToTrack *newP004,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::oldP004 */ PT4_ErrorReporting_T_Packet_Tra *oldP004)
{
  (*oldP004).valid = (*newP004).valid;
  (*oldP004).m_error = (*newP004).m_error;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP004_RBC_Model_Pkg_Train.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP003_RBC_Model_Pkg_Train.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003 */
void ConvertP003_RBC_Model_Pkg_Train(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::newP003 */ P003_TM_TrainToTrack *newP003,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::oldP003 */ PT3_OnboardTelephoneNumbers_T_P *oldP003)
{
  (*oldP003).valid = (*newP003).valid;
  (*oldP003).number = (*newP003).n_iter;
  kcg_copy_aNID_RADIO_T_Packet_Tr(
    &(*oldP003).aNID_RADIO,
    (aNID_RADIO_T_Packet_TrainTypes_ *) &cEMPTY_ANID_RADIO_RBC_Model_Pkg);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP003_RBC_Model_Pkg_Train.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP011_RBC_Model_Pkg_Train.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011 */
void ConvertP011_RBC_Model_Pkg_Train(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::newP011 */ P011_TM_TrainToTrack *newP011,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::oldP011 */ PT11_ValidatedTrainData_T_Packe *oldP011)
{
  (*oldP011).valid = (*newP011).valid;
  (*oldP011).nc_cdtrain = (*newP011).nc_cdtrain;
  (*oldP011).nc_train = (*newP011).nc_train;
  (*oldP011).l_train = 0;
  (*oldP011).v_maxtrain = 0;
  (*oldP011).m_loadinggoage = (*newP011).m_loadinggauge;
  (*oldP011).m_axleloadcat = (*newP011).m_axleloadcat;
  (*oldP011).m_airtight = (*newP011).m_airtight;
  (*oldP011).n_axle = (*newP011).n_axle;
  (*oldP011).nIter_tractionIdentity = 0;
  kcg_copy_aTractionIdentity_T_Pa(
    &(*oldP011).tractionIdentity,
    (aTractionIdentity_T_Packet_Trai *) &cEMPTY_TRACTION_IDENTITY_RBC_Mo);
  (*oldP011).nIter_ntc = 0;
  kcg_copy_aNID_NTC_T_Packet_Trai(
    &(*oldP011).nid_ntc,
    (aNID_NTC_T_Packet_TrainTypes_Pk *) &cEMPTY_NID_NTC_RBC_Model_Pkg_Tr);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP011_RBC_Model_Pkg_Train.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */


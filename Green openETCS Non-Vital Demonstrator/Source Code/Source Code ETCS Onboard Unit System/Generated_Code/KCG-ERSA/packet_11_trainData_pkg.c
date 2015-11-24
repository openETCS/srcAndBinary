/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packet_11_trainData_pkg.h"

/* trainData_pkg::packet_11 */
void packet_11_trainData_pkg(
  /* trainData_pkg::packet_11::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::packet_11::p11 */ P011_TM_TrainToTrack *p11)
{
  (*p11).valid = kcg_true;
  (*p11).nid_packet = cp011_ValidatedTrainData_ids;
  (*p11).l_packet = 0;
  (*p11).nc_cdtrain = (*trainData).cantDeficientcy;
  (*p11).nc_train = (*trainData).trainCategory;
  (*p11).l_train = (*trainData).trainLength / 100;
  (*p11).m_loadinggauge = (*trainData).loadingGauge;
  (*p11).m_axleloadcat = (*trainData).axleLoadCategory;
  (*p11).m_airtight = (*trainData).airtightSystem;
  (*p11).n_axle = (*trainData).axleNumber;
  (*p11).n_iter_voltage = (*trainData).numberTractionSystems - 1;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(
    &(*p11).voltage_list,
    &(*trainData).tractionSystem);
  (*p11).n_iter_nid_ntc = (*trainData).numberNationalSystems - 1;
  kcg_copy_P011_ntc_list_TM_TrainToTrack(
    &(*p11).nid_ntc_list,
    &(*trainData).nationSystems);
  (*p11).v_maxtrain = /* 1 */
    vIntern2Extern_RadioSupport_Pkg((*trainData).maxTrainSpeed);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** packet_11_trainData_pkg.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */


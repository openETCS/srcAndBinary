/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_input_input_from_TIU_.h"

#ifndef KCG_USER_DEFINED_INIT
void manageTIU_input_init_input_from(outC_manageTIU_input_input_from *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->outTIUCurrentInfo.train_status.valid = kcg_true;
  outC->outTIUCurrentInfo.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_;
  outC->outTIUCurrentInfo.train_status.m_nonleading_st =
    non_leading_signall_status_not_;
  outC->outTIUCurrentInfo.train_status.m_cab_st =
    cab_signal_status_not_defined_T;
  outC->outTIUCurrentInfo.train_status.m_directioncontroller_st =
    direction_controller_in_neutral;
  outC->outTIUCurrentInfo.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_;
  outC->outTIUCurrentInfo.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.valid = kcg_true;
  outC->outTIUCurrentInfo.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->outTIUCurrentInfo.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->outTIUCurrentInfo.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->outTIUCurrentInfo.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->outTIUCurrentInfo.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->outTIUCurrentInfo.brake_pressure.valid = kcg_true;
  outC->outTIUCurrentInfo.brake_pressure.pressure = 0;
  outC->outTIUCurrentInfo.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_data_info.valid = kcg_true;
  outC->outTIUCurrentInfo.train_data_info.acknowledgedByDriver = kcg_true;
  outC->outTIUCurrentInfo.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_;
  outC->outTIUCurrentInfo.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->outTIUCurrentInfo.train_data_info.trainLength = 0;
  outC->outTIUCurrentInfo.train_data_info.brakePerctage = 0;
  outC->outTIUCurrentInfo.train_data_info.maxTrainSpeed = 0;
  outC->outTIUCurrentInfo.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_n;
  outC->outTIUCurrentInfo.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->outTIUCurrentInfo.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  outC->outTIUCurrentInfo.train_data_info.axleNumber = 0;
  outC->outTIUCurrentInfo.train_data_info.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->outTIUCurrentInfo.train_data_info.nationSystems[i] = 0;
  }
  outC->outTIUCurrentInfo.train_data_info.numberTractionSystems = 0;
  for (i = 0; i < 4; i++) {
    outC->outTIUCurrentInfo.train_data_info.tractionSystem[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->outTIUCurrentInfo.train_data_info.tractionSystem[i].nid_ctraction = 0;
  }
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibiti.valid = kcg_true;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.d_test_trackcond.now =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.d_test_trackcond.distance =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.l_test_trackcond.now =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.l_test_trackcond.distance =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibiti.empty_profile_initial_state_to_.now =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibiti.empty_profile_initial_state_to_.distance =
    0;
  outC->outTIUStatus.valid = kcg_true;
  outC->outTIUStatus.deskOpen = kcg_true;
  outC->outTIUStatus.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->outTIUStatus.activeCab = CabUndefined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTIU_input_reset_input_fro(outC_manageTIU_input_input_from *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* input_from_TIU_API_Pkg::manageTIU_input */
void manageTIU_input_input_from_TIU_(
  /* input_from_TIU_API_Pkg::manageTIU_input::inTIUfromAPI */ TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* input_from_TIU_API_Pkg::manageTIU_input::evc_trainData */ trainData_T_TIU_Types_Pkg *evc_trainData,
  outC_manageTIU_input_input_from *outC)
{
  /* input_from_TIU_API_Pkg::manageTIU_input::_L8 */
  static Message_Train_Interface_to_EVC_ _L8;
  
  /* last_init_ck_storeTIU */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_Message_Train_Interfac(
      &_L8,
      (Message_Train_Interface_to_EVC_ *) &emptyTIUInfo_TIU_Types_Pkg);
  }
  else {
    kcg_copy_Message_Train_Interfac(&_L8, &outC->outTIUCurrentInfo);
  }
  /* ck__L40 */ if ((*inTIUfromAPI).valid) {
    /* 1 */
    mergeTIU_Info_input_from_TIU_AP(
      &(*inTIUfromAPI).info,
      &_L8,
      evc_trainData,
      &outC->outTIUCurrentInfo);
  }
  else {
    kcg_copy_Message_Train_Interfac(&outC->outTIUCurrentInfo, &_L8);
  }
  /* 1 */
  getTIUStatusFromData_input_from(
    &outC->outTIUCurrentInfo,
    &outC->outTIUStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_input_input_from_TIU_.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ROOT_EVC_EVC_IP_DMI.h"

void ROOT_EVC_reset_EVC_IP_DMI(outC_ROOT_EVC_EVC_IP_DMI *outC)
{
  outC->init = kcg_true;
  /* 1 */ EVC_reset(&outC->Context_1);
  /* 1 */ RemoteDMIBus_reset_EnvSim(&outC->_1_Context_1);
}

/* EVC_IP_DMI::ROOT_EVC */
void ROOT_EVC_EVC_IP_DMI(
  inC_ROOT_EVC_EVC_IP_DMI *inC,
  outC_ROOT_EVC_EVC_IP_DMI *outC)
{
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &tmp,
      (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
        &cEmptyEVC2DMIBusMessage_EVC_IP_DMI);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&tmp, &outC->rem__L4);
  }
  /* 1 */ RemoteDMIBus_EnvSim(&tmp, &inC->API_fromTIU, &outC->_1_Context_1);
  /* 1 */
  EVC(
    inC->EVC_reset,
    &inC->API_Odometry,
    inC->API_SystemTime,
    &inC->API_fromTrack,
    &outC->_1_Context_1.dmiToEVC,
    &inC->API_fromTIU,
    &inC->API_mobileHWStatus,
    &inC->API_persistentData,
    &outC->Context_1);
  outC->resetOut = outC->Context_1.resetOut;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    &outC->Context_1.API_toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->Context_1.API_RTM_management);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->API_toTIU,
    &outC->Context_1.API_toTIU);
  outC->EVC_ready = outC->Context_1.EVC_ready;
  outC->debugTrainPositionNominal = outC->Context_1.debugTrainPositionNominal;
  outC->debugTrainPositionDeltaMax = outC->Context_1.debugTrainPositionDeltaMax;
  outC->debugTrainPositionDeltaMin = outC->Context_1.debugTrainPositionDeltaMin;
  outC->debugPermittedSpeed = outC->Context_1.debugPermittedSpeed;
  outC->debugIinterventionSpeed = outC->Context_1.debugIinterventionSpeed;
  outC->debugCurrentMode = outC->Context_1.debugCurrentMode;
  outC->debugCurrentLevel = outC->Context_1.debugCurrentLevel;
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->rem__L4,
    &outC->Context_1.API_toDMI);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ROOT_EVC_EVC_IP_DMI.c
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */


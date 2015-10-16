/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGenRadioOutput_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGenRadioOutput */
void nextGenRadioOutput_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGenRadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::nextGenRadioOutput::cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck *cmdsToMobile,
  /* radioOutput_Pkg::nextGenRadioOutput::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::nextGenRadioOutput::inT_TRAIN */ T_TRAIN inT_TRAIN,
  /* radioOutput_Pkg::nextGenRadioOutput::MessageBus_out */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus_out,
  /* radioOutput_Pkg::nextGenRadioOutput::API_RTM_management */ RadioManagement_T_API_RadioCommunication_Pkg *_1_API_RTM_management)
{
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    MessageBus_out,
    MessageBus);
  /* 1 */ mapToRTM_radioOutput_Pkg(cmdsToMobile, _1_API_RTM_management);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGenRadioOutput_radioOutput_Pkg.c
** Generation date: 2015-10-16T18:56:08
*************************************************************$ */


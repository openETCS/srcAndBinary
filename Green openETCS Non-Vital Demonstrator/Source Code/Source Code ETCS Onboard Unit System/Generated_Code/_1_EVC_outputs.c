/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */
#include "_1_EVC.h"

/* EVC::debugCurrentLevel */
M_LEVEL debugCurrentLevel;
/* EVC::debugCurrentMode */
M_MODE debugCurrentMode;
/* EVC::debugIinterventionSpeed */
kcg_real debugIinterventionSpeed;
/* EVC::debugPermittedSpeed */
kcg_real debugPermittedSpeed;
/* EVC::debugTrainPositionDeltaMin */
L_internal_Type_Obu_BasicTypes_Pkg debugTrainPositionDeltaMin;
/* EVC::debugTrainPositionDeltaMax */
L_internal_Type_Obu_BasicTypes_Pkg debugTrainPositionDeltaMax;
/* EVC::debugTrainPositionNominal */
L_internal_Type_Obu_BasicTypes_Pkg debugTrainPositionNominal;
/* EVC::EVC_ready */
kcg_bool EVC_ready;
/* EVC::API_toTIU */
TIU_Output_msg_API_TIU_Pkg API_toTIU;
/* EVC::API_toDMI */
EVC_to_DMI_Message_T_API_DMI_Pkg API_toDMI;
/* EVC::API_RTM_management */
RadioManagement_T_API_RadioCommunication_Pkg API_RTM_management;
/* EVC::toRTM */
M_TrainTrackMessageBus_t_TM_TrainTrack_Bus toRTM;
/* EVC::resetOut */
kcg_bool resetOut;

/* $**************** KCG Version 6.4 (build i21) ****************
** _1_EVC_outputs.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */
#include "_29_EVC.h"

/* EVC::debugCurrentLevel */
M_LEVEL debugCurrentLevel;
/* EVC::debugCurrentMode */
M_MODE debugCurrentMode;
/* EVC::debugIinterventionSpeed */
kcg_real debugIinterventionSpeed;
/* EVC::debugPermittedSpeed */
kcg_real debugPermittedSpeed;
/* EVC::debugTrainPositionDeltaMin */
L_internal_Type_Obu_BasicTypes_ debugTrainPositionDeltaMin;
/* EVC::debugTrainPositionDeltaMax */
L_internal_Type_Obu_BasicTypes_ debugTrainPositionDeltaMax;
/* EVC::debugTrainPositionNominal */
L_internal_Type_Obu_BasicTypes_ debugTrainPositionNominal;
/* EVC::EVC_ready */
kcg_bool EVC_ready;
/* EVC::API_toTIU */
TIU_Output_msg_API_TIU_Pkg API_toTIU;
/* EVC::API_toDMI */
EVC_to_DMI_Message_int_T_API_DM API_toDMI;
/* EVC::API_RTM_management */
RadioManagement_T_API_RadioComm API_RTM_management;
/* EVC::API_toRBC */
M_TrainTrack_Message_T_TM_radio API_toRBC;
/* EVC::resetOut */
kcg_bool resetOut;

/* $**************** KCG Version 6.4 (build i21) ****************
** _29_EVC_outputs.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */


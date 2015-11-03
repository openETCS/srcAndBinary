/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Ordered_By_Track_P.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_SH_Ordered_By_Track_i(outC_Procedure_SH_Ordered_By_Tr *outC)
{
  outC->Condition50 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  /* 1 */ Procedure_With_Mode_Profile_ini(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_SH_Ordered_By_Track_r(outC_Procedure_SH_Ordered_By_Tr *outC)
{
  /* 1 */ Procedure_With_Mode_Profile_res(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_SH_Ordered_By_Track */
void Procedure_SH_Ordered_By_Track_P(
  /* Procedures::Procedure_SH_Ordered_By_Track::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Ordered_By_Track::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_SH_Ordered_By_Track::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_SH_Ordered_By_Tr *outC)
{
  /* Procedures::Procedure_SH_Ordered_By_Track */
  static kcg_bool tmp1;
  /* Procedures::Procedure_SH_Ordered_By_Track */
  static kcg_bool tmp;
  
  switch (Current_Mode) {
    case FS_Level_And_Mode_Types_Pkg :
      tmp1 = kcg_true;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      tmp1 = kcg_true;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      tmp1 = kcg_true;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      tmp1 = kcg_true;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      tmp1 = kcg_true;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      tmp1 = kcg_true;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      tmp1 = kcg_false;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      tmp1 = kcg_false;
      break;
    
    default :
      tmp1 = kcg_false;
  }
  switch (Current_Mode) {
    case FS_Level_And_Mode_Types_Pkg :
      tmp = kcg_true;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      tmp = kcg_true;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      tmp = kcg_true;
      break;
    
    default :
      tmp = kcg_false;
  }
  /* 1 */
  Procedure_With_Mode_Profile_Pro(
    Current_Mode,
    Driver_Ack_SH,
    Mode_Profile_On_Board,
    tmp1,
    Profile_SH_Level_And_Mode_Types,
    SH_Level_And_Mode_Types_Pkg,
    tmp,
    Train_Position,
    Train_Speed,
    &outC->Context_1);
  outC->Condition50 = outC->Context_1.Condition_15_50_70;
  outC->Condition61 = outC->Context_1.Condition_34_61_71;
  outC->Condition51 = outC->Context_1.Condition_40_51_72;
  outC->Ack_SH_Req_To_Driver = outC->Context_1.Service_Brake_Command;
  outC->Service_Brake_Command = outC->Context_1.Ack_Req_To_Driver;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_SH_Ordered_By_Track_P.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */


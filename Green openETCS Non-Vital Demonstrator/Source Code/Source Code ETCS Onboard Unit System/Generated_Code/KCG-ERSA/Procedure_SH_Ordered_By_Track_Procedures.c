/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Ordered_By_Track_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_SH_Ordered_By_Track_init_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  outC->Condition50 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  /* 1 */ Procedure_With_Mode_Profile_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_SH_Ordered_By_Track_reset_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  /* 1 */ Procedure_With_Mode_Profile_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_SH_Ordered_By_Track */
void Procedure_SH_Ordered_By_Track_Procedures(
  /* Procedures::Procedure_SH_Ordered_By_Track::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Ordered_By_Track::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_SH_Ordered_By_Track::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  /* Procedures::Procedure_SH_Ordered_By_Track */ kcg_bool tmp1;
  /* Procedures::Procedure_SH_Ordered_By_Track */ kcg_bool tmp;
  
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
  Procedure_With_Mode_Profile_Procedures(
    Current_Mode,
    Driver_Ack_SH,
    Mode_Profile_On_Board,
    tmp1,
    Profile_SH_Level_And_Mode_Types_Pkg,
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
** Procedure_SH_Ordered_By_Track_Procedures.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */


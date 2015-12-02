/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_LimitedSupervision_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_LimitedSupervision_init_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  outC->Condition70 = kcg_true;
  outC->Condition71 = kcg_true;
  outC->Condition72 = kcg_true;
  outC->Condition74 = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  /* 1 */ Procedure_With_Mode_Profile_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_LimitedSupervision_reset_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  /* 1 */ Procedure_With_Mode_Profile_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_LimitedSupervision */
void Procedure_LimitedSupervision_Procedures(
  /* Procedures::Procedure_LimitedSupervision::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_LimitedSupervision::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_LimitedSupervision::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_LimitedSupervision::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_LimitedSupervision::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  /* Procedures::Procedure_LimitedSupervision::_L504 */ kcg_bool _L504;
  /* Procedures::Procedure_LimitedSupervision::_L505 */ kcg_bool _L505;
  /* Procedures::Procedure_LimitedSupervision::_L506 */ kcg_bool _L506;
  /* Procedures::Procedure_LimitedSupervision::_L507 */ kcg_bool _L507;
  
  switch (Current_Mode) {
    case FS_Level_And_Mode_Types_Pkg :
      _L506 = kcg_true;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L506 = kcg_true;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L506 = kcg_true;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L506 = kcg_true;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L506 = kcg_true;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      _L506 = kcg_false;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      _L506 = kcg_false;
      break;
    
    default :
      _L506 = kcg_false;
  }
  switch (Current_Mode) {
    case FS_Level_And_Mode_Types_Pkg :
      _L507 = kcg_true;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L507 = kcg_true;
      break;
    
    default :
      _L507 = kcg_false;
  }
  /* 1 */
  Procedure_With_Mode_Profile_Procedures(
    Current_Mode,
    Driver_Ack_LS,
    Mode_Profile_On_Board,
    _L506,
    Profile_LS_Level_And_Mode_Types_Pkg,
    LS_Level_And_Mode_Types_Pkg,
    _L507,
    Train_Position,
    Train_Speed,
    &outC->Context_1);
  outC->Condition70 = outC->Context_1.Condition_15_50_70;
  outC->Condition71 = outC->Context_1.Condition_34_61_71;
  outC->Condition72 = outC->Context_1.Condition_40_51_72;
  outC->Service_Brake_Command = outC->Context_1.Service_Brake_Command;
  outC->Ack_LS_Req_To_Driver = outC->Context_1.Ack_Req_To_Driver;
  /* 1 */
  Mode_Profile_Calculations_Librairies(
    OS_Level_And_Mode_Types_Pkg,
    Mode_Profile_On_Board,
    Profile_OS_Level_And_Mode_Types_Pkg,
    Train_Speed,
    Train_Position,
    &_L504,
    &_L505,
    &_L506,
    &_L507);
  outC->Condition74 = !_L507 & outC->Context_1.Condition_73_74;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_LimitedSupervision_Procedures.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */


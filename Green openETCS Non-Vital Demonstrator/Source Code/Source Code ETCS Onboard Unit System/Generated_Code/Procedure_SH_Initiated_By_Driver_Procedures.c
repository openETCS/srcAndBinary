/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Initiated_By_Driver_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_SH_Initiated_By_Driver_init_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  outC->Condition5 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->init = kcg_true;
  outC->SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
  /* 1 */ SH_Initiated_By_Driver_On_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_SH_Initiated_By_Driver_reset_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  outC->init = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_SH_Initiated_By_Driver */
void Procedure_SH_Initiated_By_Driver_Procedures(
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_SH_Initiated_By_Driver::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Train_Standstill */ kcg_bool Train_Standstill,
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_sel;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool SH_Initiated_By_Driver_reset_act;
  /* Procedures::Procedure_SH_Initiated_By_Driver::Loc_Procedure_Possible */
  static kcg_bool Loc_Procedure_Possible;
  
  switch (Current_Mode) {
    case FS_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      Loc_Procedure_Possible = kcg_true;
      break;
    
    default :
      Loc_Procedure_Possible = kcg_false;
  }
  /* init_SH_Initiated_By_Driver */ if (outC->init) {
    outC->init = kcg_false;
    SH_Initiated_By_Driver_state_sel =
      SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
  }
  else {
    SH_Initiated_By_Driver_state_sel = outC->SH_Initiated_By_Driver_state_nxt;
  }
  /* sel_SH_Initiated_By_Driver */ switch (SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      SH_Initiated_By_Driver_reset_act = Loc_Procedure_Possible &
        Train_Standstill;
      if (SH_Initiated_By_Driver_reset_act) {
        SH_Initiated_By_Driver_state_act =
          SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      else {
        SH_Initiated_By_Driver_state_act =
          SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      break;
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      SH_Initiated_By_Driver_reset_act = !Loc_Procedure_Possible |
        !Train_Standstill;
      if (SH_Initiated_By_Driver_reset_act) {
        SH_Initiated_By_Driver_state_act =
          SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      else {
        SH_Initiated_By_Driver_state_act =
          SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      break;
    
  }
  /* act_SH_Initiated_By_Driver */ switch (SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Condition5 = kcg_false;
      outC->SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      break;
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      if (SH_Initiated_By_Driver_reset_act) {
        /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->Context_1);
      }
      /* 1 */
      SH_Initiated_By_Driver_On_Procedures(
        Current_Level,
        Driver_Req_SH,
        On_Going_Mission,
        Shunting_Granted_By_RBC,
        &outC->Context_1);
      outC->Condition5 = outC->Context_1.Condition5;
      outC->Condition6 = outC->Context_1.Condition6;
      outC->Clean_BG_List_SH_Area = outC->Context_1.Clean_BG_List_SH_Area;
      outC->End_Of_Mission_Procedure_Req =
        outC->Context_1.End_Of_Mission_Procedure_Req;
      outC->Request_For_SH_To_RBC = outC->Context_1.Request_For_SH_To_RBC;
      outC->SH_Refused_By_RBC_To_DMI = outC->Context_1.SH_Refused_By_RBC_To_DMI;
      outC->SH_Initiated_By_Driver_state_nxt =
        SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_SH_Initiated_By_Driver_Procedures.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */


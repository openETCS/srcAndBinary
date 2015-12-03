/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Initiated_By_Proce.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_SH_Initiated_By_init_(outC_Procedure_SH_Initiated_By_ *outC)
{
  outC->Condition5 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->init = kcg_true;
  outC->SH_Initiated_By_Driver_state_nx = SSM_st_SH_initiated_by_driver_p;
  /* 1 */ SH_Initiated_By_Driver_On_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_SH_Initiated_By_reset(outC_Procedure_SH_Initiated_By_ *outC)
{
  outC->init = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_SH_Initiated_By_Driver */
void Procedure_SH_Initiated_By_Proce(
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_SH_Initiated_By_Driver::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_SH_Initiated_By_Driver::Train_Standstill */ kcg_bool Train_Standstill,
  outC_Procedure_SH_Initiated_By_ *outC)
{
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_se;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_ac;
  /* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
  static kcg_bool SH_Initiated_By_Driver_reset_ac;
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
    SH_Initiated_By_Driver_state_se = SSM_st_SH_initiated_by_driver_p;
  }
  else {
    SH_Initiated_By_Driver_state_se = outC->SH_Initiated_By_Driver_state_nx;
  }
  /* sel_SH_Initiated_By_Driver */ switch (SH_Initiated_By_Driver_state_se) {
    case SSM_st_SH_initiated_by_driver_p :
      SH_Initiated_By_Driver_reset_ac = Loc_Procedure_Possible &
        Train_Standstill;
      if (SH_Initiated_By_Driver_reset_ac) {
        SH_Initiated_By_Driver_state_ac = SSM_st_S0_SH_initiated_by_drive;
      }
      else {
        SH_Initiated_By_Driver_state_ac = SSM_st_SH_initiated_by_driver_p;
      }
      break;
    case SSM_st_S0_SH_initiated_by_drive :
      SH_Initiated_By_Driver_reset_ac = !Loc_Procedure_Possible |
        !Train_Standstill;
      if (SH_Initiated_By_Driver_reset_ac) {
        SH_Initiated_By_Driver_state_ac = SSM_st_SH_initiated_by_driver_p;
      }
      else {
        SH_Initiated_By_Driver_state_ac = SSM_st_S0_SH_initiated_by_drive;
      }
      break;
    
  }
  /* act_SH_Initiated_By_Driver */ switch (SH_Initiated_By_Driver_state_ac) {
    case SSM_st_SH_initiated_by_driver_p :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Condition5 = kcg_false;
      outC->SH_Initiated_By_Driver_state_nx = SSM_st_SH_initiated_by_driver_p;
      break;
    case SSM_st_S0_SH_initiated_by_drive :
      if (SH_Initiated_By_Driver_reset_ac) {
        /* 1 */ SH_Initiated_By_Driver_On_reset(&outC->Context_1);
      }
      /* 1 */
      SH_Initiated_By_Driver_On_Proce(
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
      outC->SH_Initiated_By_Driver_state_nx = SSM_st_S0_SH_initiated_by_drive;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_SH_Initiated_By_Proce.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SH_Initiated_By_Driver_On_Proce.h"

#ifndef KCG_USER_DEFINED_INIT
void SH_Initiated_By_Driver_On_init_(outC_SH_Initiated_By_Driver_On_ *outC)
{
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Condition5 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->init = kcg_true;
  outC->SM_SH_Initiated_By_Driver_state = SSM_st_SH_procedure_possible_SM;
}
#endif /* KCG_USER_DEFINED_INIT */


void SH_Initiated_By_Driver_On_reset(outC_SH_Initiated_By_Driver_On_ *outC)
{
  outC->init = kcg_true;
}

/* Procedures::SH_Initiated_By_Driver_On */
void SH_Initiated_By_Driver_On_Proce(
  /* Procedures::SH_Initiated_By_Driver_On::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::SH_Initiated_By_Driver_On::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::SH_Initiated_By_Driver_On::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::SH_Initiated_By_Driver_On::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  outC_SH_Initiated_By_Driver_On_ *outC)
{
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_procedure_possible */
  static kcg_bool br_1_guard_SM_SH_Initiated_By_D;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::Issue_SH_Request_L2_L3 */
  static kcg_bool br_2_guard_SM_SH_Initiated_By_D;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Drive SM_SH_Initiated_By_Driver_state;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Drive _1_SM_SH_Initiated_By_Driver_st;
  /* Procedures::SH_Initiated_By_Driver_On::Loc_Level_2_3 */
  static kcg_bool Loc_Level_2_3;
  
  switch (Current_Level) {
    case M_LEVEL_Level_2 :
      Loc_Level_2_3 = kcg_true;
      break;
    case M_LEVEL_Level_3 :
      Loc_Level_2_3 = kcg_true;
      break;
    
    default :
      Loc_Level_2_3 = kcg_false;
  }
  /* init_SM_SH_Initiated_By_Driver */ if (outC->init) {
    outC->init = kcg_false;
    SM_SH_Initiated_By_Driver_state = SSM_st_SH_procedure_possible_SM;
  }
  else {
    SM_SH_Initiated_By_Driver_state = outC->SM_SH_Initiated_By_Driver_state;
  }
  /* sel_SM_SH_Initiated_By_Driver */ switch (SM_SH_Initiated_By_Driver_state) {
    case SSM_st_SH_procedure_possible_SM :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      br_1_guard_SM_SH_Initiated_By_D = !Loc_Level_2_3;
      if (Driver_Req_SH & (br_1_guard_SM_SH_Initiated_By_D | Loc_Level_2_3)) {
        if (br_1_guard_SM_SH_Initiated_By_D) {
          _1_SM_SH_Initiated_By_Driver_st = SSM_st_SH_Authorized_L0_L1_LNTC;
        }
        else {
          _1_SM_SH_Initiated_By_Driver_st = SSM_st_Issue_SH_Request_L2_L3_S;
        }
      }
      else {
        _1_SM_SH_Initiated_By_Driver_st = SSM_st_SH_procedure_possible_SM;
      }
      break;
    case SSM_st_Issue_SH_Request_L2_L3_S :
      br_2_guard_SM_SH_Initiated_By_D = !Shunting_Granted_By_RBC;
      if (Shunting_Granted_By_RBC) {
        outC->SH_Refused_By_RBC_To_DMI = kcg_false;
        _1_SM_SH_Initiated_By_Driver_st = SSM_st_SH_Authorized_L2_L3_SM_S;
      }
      else if (br_2_guard_SM_SH_Initiated_By_D) {
        outC->SH_Refused_By_RBC_To_DMI = kcg_true;
        _1_SM_SH_Initiated_By_Driver_st = SSM_st_SH_procedure_possible_SM;
      }
      else {
        outC->SH_Refused_By_RBC_To_DMI = kcg_false;
        _1_SM_SH_Initiated_By_Driver_st = SSM_st_Issue_SH_Request_L2_L3_S;
      }
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      _1_SM_SH_Initiated_By_Driver_st = SSM_st_SH_Authorized_L0_L1_LNTC;
      break;
    case SSM_st_SH_Authorized_L2_L3_SM_S :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      _1_SM_SH_Initiated_By_Driver_st = SSM_st_SH_Authorized_L2_L3_SM_S;
      break;
    
  }
  /* act_SM_SH_Initiated_By_Driver */ switch (_1_SM_SH_Initiated_By_Driver_st) {
    case SSM_st_SH_procedure_possible_SM :
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Condition5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->SM_SH_Initiated_By_Driver_state = SSM_st_SH_procedure_possible_SM;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_S :
      outC->Request_For_SH_To_RBC = kcg_true;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Condition5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->SM_SH_Initiated_By_Driver_state = SSM_st_Issue_SH_Request_L2_L3_S;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC :
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Condition5 = kcg_true;
      outC->Clean_BG_List_SH_Area = kcg_true;
      outC->End_Of_Mission_Procedure_Req = On_Going_Mission;
      outC->SM_SH_Initiated_By_Driver_state = SSM_st_SH_Authorized_L0_L1_LNTC;
      break;
    case SSM_st_SH_Authorized_L2_L3_SM_S :
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->Condition6 = kcg_true;
      outC->Condition5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_true;
      outC->End_Of_Mission_Procedure_Req = On_Going_Mission;
      outC->SM_SH_Initiated_By_Driver_state = SSM_st_SH_Authorized_L2_L3_SM_S;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SH_Initiated_By_Driver_On_Proce.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */


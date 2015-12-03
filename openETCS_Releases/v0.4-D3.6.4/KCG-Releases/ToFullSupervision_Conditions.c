/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToFullSupervision_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToFullSupervision_init_Conditions(outC_ToFullSupervision_Conditions *outC)
{
  outC->Condition25 = kcg_true;
  outC->Condition31 = kcg_true;
  outC->Condition32 = kcg_true;
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToFullSupervision_reset_Conditions(outC_ToFullSupervision_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToFullSupervision */
void ToFullSupervision_Conditions(
  /* Conditions::ToFullSupervision::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToFullSupervision::Trip_Order_Given_By_Balise */ kcg_bool Trip_Order_Given_By_Balise,
  /* Conditions::ToFullSupervision::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Conditions::ToFullSupervision::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  outC_ToFullSupervision_Conditions *outC)
{
  /* Conditions::ToFullSupervision */
  static kcg_bool tmp2;
  /* Conditions::ToFullSupervision */
  static kcg_bool tmp1;
  /* Conditions::ToFullSupervision */
  static M_LEVEL tmp;
  /* Conditions::ToFullSupervision::FS_Data_Condition */
  static kcg_bool FS_Data_Condition;
  
  FS_Data_Condition = ((*Mode_Profile_On_Board).Mode ==
      No_Profile_Level_And_Mode_Types_Pkg) & MA_SSP_Gradiant_Available;
  switch (Current_Level) {
    case M_LEVEL_Level_2 :
      tmp2 = kcg_true;
      break;
    case M_LEVEL_Level_3 :
      tmp2 = kcg_true;
      break;
    
    default :
      tmp2 = kcg_false;
  }
  outC->Condition31 = tmp2 & FS_Data_Condition;
  outC->Condition32 = (Current_Level == M_LEVEL_Level_1) &
    !Trip_Order_Given_By_Balise & FS_Data_Condition;
  switch (Current_Level) {
    case M_LEVEL_Level_1 :
      tmp2 = kcg_true;
      break;
    case M_LEVEL_Level_2 :
      tmp2 = kcg_true;
      break;
    case M_LEVEL_Level_3 :
      tmp2 = kcg_true;
      break;
    
    default :
      tmp2 = kcg_false;
  }
  /* last_init_ck_Current_Level */ if (outC->init) {
    outC->init = kcg_false;
    tmp = M_LEVEL_Level_0;
  }
  else {
    tmp = outC->rem_Current_Level;
  }
  switch (tmp) {
    case M_LEVEL_Level_0 :
      tmp1 = kcg_true;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      tmp1 = kcg_true;
      break;
    
    default :
      tmp1 = kcg_false;
  }
  outC->Condition25 = tmp2 & tmp1 & FS_Data_Condition;
  outC->rem_Current_Level = Current_Level;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToFullSupervision_Conditions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */


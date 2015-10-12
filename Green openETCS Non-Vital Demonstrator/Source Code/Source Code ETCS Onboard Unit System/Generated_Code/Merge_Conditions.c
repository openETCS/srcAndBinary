/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merge_Conditions.h"

/* Merge_Conditions */
void Merge_Conditions(
  /* Merge_Conditions::SH_Ref_SH */ kcg_bool SH_Ref_SH,
  /* Merge_Conditions::SH_Ref_SoM */ kcg_bool SH_Ref_SoM,
  /* Merge_Conditions::SH_ref_TR */ kcg_bool SH_ref_TR,
  /* Merge_Conditions::Ack_LS_LS */ kcg_bool Ack_LS_LS,
  /* Merge_Conditions::Ack_LS_SoM */ kcg_bool Ack_LS_SoM,
  /* Merge_Conditions::Ack_LS_TR */ kcg_bool Ack_LS_TR,
  /* Merge_Conditions::Ack_OS_OS */ kcg_bool Ack_OS_OS,
  /* Merge_Conditions::Ack_OS_SoM */ kcg_bool Ack_OS_SoM,
  /* Merge_Conditions::Ack_OS_TR */ kcg_bool Ack_OS_TR,
  /* Merge_Conditions::Ack_SH_SH */ kcg_bool Ack_SH_SH,
  /* Merge_Conditions::Ack_SH_SoM */ kcg_bool Ack_SH_SoM,
  /* Merge_Conditions::Ack_SH_TR */ kcg_bool Ack_SH_TR,
  /* Merge_Conditions::Ack_SR_SoM */ kcg_bool Ack_SR_SoM,
  /* Merge_Conditions::Ack_SR_TR */ kcg_bool Ack_SR_TR,
  /* Merge_Conditions::Clean_BG_SoM */ kcg_bool Clean_BG_SoM,
  /* Merge_Conditions::Clean_BG_SH */ kcg_bool Clean_BG_SH,
  /* Merge_Conditions::Clean_BG_TR */ kcg_bool Clean_BG_TR,
  /* Merge_Conditions::EoM_SB */ kcg_bool EoM_SB,
  /* Merge_Conditions::EoM_SH */ kcg_bool EoM_SH,
  /* Merge_Conditions::EoM_SoM */ kcg_bool EoM_SoM,
  /* Merge_Conditions::EoM_TR */ kcg_bool EoM_TR,
  /* Merge_Conditions::MA_SoM */ kcg_bool MA_SoM,
  /* Merge_Conditions::MA_TR */ kcg_bool MA_TR,
  /* Merge_Conditions::Req_SH_SH */ kcg_bool Req_SH_SH,
  /* Merge_Conditions::Req_SH_SoM */ kcg_bool Req_SH_SoM,
  /* Merge_Conditions::Req_SH_TR */ kcg_bool Req_SH_TR,
  /* Merge_Conditions::SB_LS */ kcg_bool SB_LS,
  /* Merge_Conditions::SB_OS */ kcg_bool SB_OS,
  /* Merge_Conditions::SB_SH */ kcg_bool SB_SH,
  /* Merge_Conditions::C15_OS */ kcg_bool C15_OS,
  /* Merge_Conditions::C15_SoM */ kcg_bool C15_SoM,
  /* Merge_Conditions::C15_TR */ kcg_bool C15_TR,
  /* Merge_Conditions::C31_FS */ kcg_bool C31_FS,
  /* Merge_Conditions::C31_TR */ kcg_bool C31_TR,
  /* Merge_Conditions::C46_NL */ kcg_bool C46_NL,
  /* Merge_Conditions::C46_SoM */ kcg_bool C46_SoM,
  /* Merge_Conditions::C50_SH */ kcg_bool C50_SH,
  /* Merge_Conditions::C50_SoM */ kcg_bool C50_SoM,
  /* Merge_Conditions::C50_TR */ kcg_bool C50_TR,
  /* Merge_Conditions::C5_SH */ kcg_bool C5_SH,
  /* Merge_Conditions::C5_SoM */ kcg_bool C5_SoM,
  /* Merge_Conditions::C5_TR */ kcg_bool C5_TR,
  /* Merge_Conditions::C6_SH */ kcg_bool C6_SH,
  /* Merge_Conditions::C6_SoM */ kcg_bool C6_SoM,
  /* Merge_Conditions::C6_TR */ kcg_bool C6_TR,
  /* Merge_Conditions::C70_LS */ kcg_bool C70_LS,
  /* Merge_Conditions::C70_SoM */ kcg_bool C70_SoM,
  /* Merge_Conditions::C70_TR */ kcg_bool C70_TR,
  /* Merge_Conditions::C8_SoM */ kcg_bool C8_SoM,
  /* Merge_Conditions::C8_TR */ kcg_bool C8_TR,
  /* Merge_Conditions::SH_Refused_By_RBC_To_DMI */ kcg_bool *SH_Refused_By_RBC_To_DMI,
  /* Merge_Conditions::Ack_LS_Req_To_Driver */ kcg_bool *Ack_LS_Req_To_Driver,
  /* Merge_Conditions::Ack_OS_Req_To_Driver */ kcg_bool *Ack_OS_Req_To_Driver,
  /* Merge_Conditions::Ack_SH_Req_To_Driver */ kcg_bool *Ack_SH_Req_To_Driver,
  /* Merge_Conditions::Ack_SR_Req_To_Driver */ kcg_bool *Ack_SR_Req_To_Driver,
  /* Merge_Conditions::Clean_BG_List_SH_Area */ kcg_bool *Clean_BG_List_SH_Area,
  /* Merge_Conditions::End_Of_Mission_Procedure_Req */ kcg_bool *End_Of_Mission_Procedure_Req,
  /* Merge_Conditions::MA_Req_To_RBC */ kcg_bool *MA_Req_To_RBC,
  /* Merge_Conditions::Request_For_SH_To_RBC */ kcg_bool *Request_For_SH_To_RBC,
  /* Merge_Conditions::Service_Brake_Command */ kcg_bool *Service_Brake_Command,
  /* Merge_Conditions::Condition15 */ kcg_bool *Condition15,
  /* Merge_Conditions::Condition31 */ kcg_bool *Condition31,
  /* Merge_Conditions::Condition46 */ kcg_bool *Condition46,
  /* Merge_Conditions::Condition50 */ kcg_bool *Condition50,
  /* Merge_Conditions::Condition5 */ kcg_bool *Condition5,
  /* Merge_Conditions::Condition6 */ kcg_bool *Condition6,
  /* Merge_Conditions::Condition70 */ kcg_bool *Condition70,
  /* Merge_Conditions::Condition8 */ kcg_bool *Condition8)
{
  *Condition15 = C15_OS | C15_SoM | C15_TR;
  *Condition31 = C31_FS | C31_TR;
  *Condition46 = C46_NL | C46_SoM;
  *Condition8 = C8_SoM | C8_TR;
  *Condition70 = C70_LS | C70_SoM | C70_TR;
  *Condition50 = C50_SH | C50_SoM | C50_TR;
  *Condition6 = C6_SH | C6_SoM | C6_TR;
  *MA_Req_To_RBC = MA_SoM | MA_TR;
  *Request_For_SH_To_RBC = Req_SH_SH | Req_SH_SoM | Req_SH_TR;
  *Service_Brake_Command = SB_LS | SB_OS | SB_SH;
  *Clean_BG_List_SH_Area = Clean_BG_SoM | Clean_BG_SH | Clean_BG_TR;
  *End_Of_Mission_Procedure_Req = EoM_SB | EoM_SH | EoM_SoM | EoM_TR;
  *Ack_SH_Req_To_Driver = Ack_SH_SH | Ack_SH_SoM | Ack_SH_TR;
  *SH_Refused_By_RBC_To_DMI = SH_Ref_SH | SH_Ref_SoM | SH_ref_TR;
  *Ack_SR_Req_To_Driver = Ack_SR_SoM | Ack_SR_TR;
  *Ack_LS_Req_To_Driver = Ack_LS_LS | Ack_LS_SoM | Ack_LS_TR;
  *Ack_OS_Req_To_Driver = Ack_OS_OS | Ack_OS_SoM | Ack_OS_TR;
  *Condition5 = C5_SH | C5_SoM | C5_TR;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merge_Conditions.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


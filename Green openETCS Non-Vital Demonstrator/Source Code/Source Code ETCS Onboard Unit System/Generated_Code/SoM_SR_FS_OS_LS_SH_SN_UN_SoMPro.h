/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _SoM_SR_FS_OS_LS_SH_SN_UN_SoMPr
#define _SoM_SR_FS_OS_LS_SH_SN_UN_SoMPr

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */ request_MA_FS_SR_OS_LS_SH_to_MA;
  kcg_bool /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */ request_Mode_Change_SB_to_FS_to;
  kcg_bool /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::start_ack_to_TIU */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _196_SSM_ST_SM1 /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SoM_SR_FS_OS_LS_SH_SN_UN_S;

/* ===========  node initialization and cycle functions  =========== */
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN */
extern void SoM_SR_FS_OS_LS_SH_SN_UN_SoMPro(
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */ kcg_bool Status_MA_FS_SR_OS_LS_SH_from_M,
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::Status_Mode_Change_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Typ *Status_Mode_Change_from_Level_a,
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_S *outC);

extern void SoM_SR_FS_OS_LS_SH_SN_UN_reset_(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_S *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SoM_SR_FS_OS_LS_SH_SN_UN_init_S(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_S *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SoM_SR_FS_OS_LS_SH_SN_UN_SoMPr */
/* $**************** KCG Version 6.4 (build i21) ****************
** SoM_SR_FS_OS_LS_SH_SN_UN_SoMPro.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */


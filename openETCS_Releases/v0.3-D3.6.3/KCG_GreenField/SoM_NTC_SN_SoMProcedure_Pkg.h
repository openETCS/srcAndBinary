/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */
#ifndef _SoM_NTC_SN_SoMProcedure_Pkg_H_
#define _SoM_NTC_SN_SoMProcedure_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SoMProcedure_Pkg::SoM_NTC_SN::start_ack_to_TIU */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_Level_NTC_and_Mode_SN /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */ Level_NTC_and_Mode_SN_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SoM_NTC_SN_SoMProcedure_Pk;

/* ===========  node initialization and cycle functions  =========== */
/* SoMProcedure_Pkg::SoM_NTC_SN */
extern void SoM_NTC_SN_SoMProcedure_Pkg(
  /* SoMProcedure_Pkg::SoM_NTC_SN::Status_Mode_Change_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Typ *Status_Mode_Change_from_Level_a,
  outC_SoM_NTC_SN_SoMProcedure_Pk *outC);

extern void SoM_NTC_SN_reset_SoMProcedure_P(
  outC_SoM_NTC_SN_SoMProcedure_Pk *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SoM_NTC_SN_init_SoMProcedure_Pk(
  outC_SoM_NTC_SN_SoMProcedure_Pk *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SoM_NTC_SN_SoMProcedure_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SoM_NTC_SN_SoMProcedure_Pkg.h
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */


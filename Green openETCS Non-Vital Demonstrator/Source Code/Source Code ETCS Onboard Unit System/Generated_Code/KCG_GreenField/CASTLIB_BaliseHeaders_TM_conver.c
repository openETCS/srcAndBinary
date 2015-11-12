/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CASTLIB_BaliseHeaders_TM_conver.h"

/* TM_conversions::CASTLIB_BaliseHeaders */
void CASTLIB_BaliseHeaders_TM_conver(
  /* TM_conversions::CASTLIB_BaliseHeaders::In */ BaliseTelegramHeader_int_T_TM *In,
  /* TM_conversions::CASTLIB_BaliseHeaders::Out */ TelegramHeader_T_BG_Types_Pkg *Out)
{
  (*Out).q_updown = /* 1 */ CAST_Int_to_Q_UPDOWN_TM_convers((*In).q_updown);
  (*Out).m_version = /* 1 */ CAST_Int_to_M_VERSION_TM_conver((*In).m_version);
  (*Out).q_media = /* 1 */ CAST_Int_to_Q_MEDIA_TM_conversi((*In).q_media);
  (*Out).n_pig = /* 1 */ CAST_Int_to_N_PIG_TM_conversion((*In).n_pig);
  (*Out).n_total = /* 1 */ CAST_Int_to_N_TOTAL_TM_conversi((*In).n_total);
  (*Out).m_dup = /* 1 */ CAST_Int_to_M_DUP_TM_conversion((*In).m_dup);
  (*Out).m_mcount = /* 1 */ CAST_Int_to_M_MCOUNT_TM_convers((*In).m_mcount);
  (*Out).nid_c = /* 1 */ CAST_Int_to_NID_C_TM_conversion((*In).nid_c);
  (*Out).nid_bg = /* 1 */ CAST_Int_to_NID_BG_TM_conversio((*In).nid_bg);
  (*Out).q_link = /* 1 */ CAST_Int_to_Q_LINK_TM_conversio((*In).q_link);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CASTLIB_BaliseHeaders_TM_conver.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */


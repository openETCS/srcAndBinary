/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Preprocessing_TA_SSP.h"

/* TA_SSP::SSP_Preprocessing */
void SSP_Preprocessing_TA_SSP(
  /* TA_SSP::SSP_Preprocessing::p27v1 */ P027V1_OBU_T_TM_baseline2 *p27v1,
  /* TA_SSP::SSP_Preprocessing::reset */ kcg_bool reset,
  /* TA_SSP::SSP_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_SSP::SSP_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_SSP::SSP_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::SSP */ StaticSpeedProfile_t_TrackAtlas *SSP)
{
  /* TA_SSP::SSP_Preprocessing */
  static StaticSpeedProfile_t_TrackAtlas tmp;
  
  /* 1 */ _203_SSP_Convert_P27V1_to_Dista(p27v1, &tmp);
  /* 1 */
  MoveSSPSectionsAbsolute_TA_Lib_(
    &tmp,
    msg_prvLRBG,
    msg_LRBG,
    pos_LRBG,
    pos_prvLRBG,
    SSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Preprocessing_TA_SSP.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */


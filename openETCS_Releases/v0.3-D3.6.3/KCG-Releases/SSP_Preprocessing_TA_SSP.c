/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
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
  /* TA_SSP::SSP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::SSP */ StaticSpeedProfile_t_TrackAtlasTypes *SSP)
{
  /* TA_SSP::SSP_Preprocessing */
  static StaticSpeedProfile_t_TrackAtlasTypes tmp;
  
  /* 1 */ SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(p27v1, &tmp);
  /* 1 */
  MoveSSPSectionsAbsolute_TA_Lib_internal(
    &tmp,
    msg_prvLRBG,
    msg_LRBG,
    pos_LRBG,
    pos_prvLRBG,
    SSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Preprocessing_TA_SSP.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */


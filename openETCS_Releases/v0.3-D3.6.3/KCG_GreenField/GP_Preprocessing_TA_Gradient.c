/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Preprocessing_TA_Gradient.h"

/* TA_Gradient::GP_Preprocessing */
void GP_Preprocessing_TA_Gradient(
  /* TA_Gradient::GP_Preprocessing::p21 */ P021_OBU_T_TM *p21,
  /* TA_Gradient::GP_Preprocessing::reset */ kcg_bool reset,
  /* TA_Gradient::GP_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Gradient::GP_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_Gradient::GP_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::GP */ GradientProfile_t_TrackAtlasTyp *GP)
{
  /* TA_Gradient::GP_Preprocessing */
  static GradientProfile_t_TrackAtlasTyp tmp;
  
  /* 1 */ _201_GP_Convert_P21_to_Distance(p21, &tmp);
  /* 1 */
  MoveGPSectionsAbsolute_TA_Lib_i(
    &tmp,
    msg_prvLRBG,
    msg_LRBG,
    pos_LRBG,
    pos_prvLRBG,
    GP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Preprocessing_TA_Gradient.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */


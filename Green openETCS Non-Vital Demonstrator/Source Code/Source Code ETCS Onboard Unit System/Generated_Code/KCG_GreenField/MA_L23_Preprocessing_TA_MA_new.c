/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_L23_Preprocessing_TA_MA_new.h"

/* TA_MA_new::MA_L23_Preprocessing */
void MA_L23_Preprocessing_TA_MA_new(
  /* TA_MA_new::MA_L23_Preprocessing::p15 */ P015_OBU_T_TM *p15,
  /* TA_MA_new::MA_L23_Preprocessing::reset */ kcg_bool reset,
  /* TA_MA_new::MA_L23_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_MA_new::MA_L23_Preprocessing::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::MA_L23_Preprocessing::MA */ MovementAuthority_t_TrackAtlasT *MA)
{
  /* TA_MA_new::MA_L23_Preprocessing */
  static MovementAuthority_t_TrackAtlasT tmp;
  
  /* 1 */ _214_MA_Convert_P15_to_Distance(p15, NV_in, &tmp);
  /* 1 */ MoveMAAbsolute_new_TA_Lib_inter(&tmp, pos_LRBG, MA);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_L23_Preprocessing_TA_MA_new.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */


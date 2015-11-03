/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_L23_Preprocessing_TA_MA.h"

/* TA_MA::MA_L23_Preprocessing */
void MA_L23_Preprocessing_TA_MA(
  /* TA_MA::MA_L23_Preprocessing::p15 */ P015_OBU_T_TM *p15,
  /* TA_MA::MA_L23_Preprocessing::reset */ kcg_bool reset,
  /* TA_MA::MA_L23_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_MA::MA_L23_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_MA::MA_L23_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_ pos_LRBG,
  /* TA_MA::MA_L23_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_ pos_prvLRBG,
  /* TA_MA::MA_L23_Preprocessing::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::MA_L23_Preprocessing::MA */ MovementAuthority_t_TrackAtlasT *MA)
{
  /* TA_MA::MA_L23_Preprocessing */
  static MovementAuthority_t_TrackAtlasT tmp;
  
  /* 1 */ _206_MA_Convert_P15_to_Distance(p15, NV_in, &tmp);
  /* 1 */
  MoveMAAbsolute_TA_Lib_internal(
    &tmp,
    msg_prvLRBG,
    msg_LRBG,
    pos_LRBG,
    pos_prvLRBG,
    MA);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_L23_Preprocessing_TA_MA.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */


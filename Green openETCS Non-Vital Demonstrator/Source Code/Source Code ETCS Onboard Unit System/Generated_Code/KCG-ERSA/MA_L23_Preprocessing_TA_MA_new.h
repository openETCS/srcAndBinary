/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:09
*************************************************************$ */
#ifndef _MA_L23_Preprocessing_TA_MA_new_H_
#define _MA_L23_Preprocessing_TA_MA_new_H_

#include "kcg_types.h"
#include "MA_Convert_P15_to_DistanceProfile_TA_MA_new.h"
#include "MoveMAAbsolute_new_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_MA_new::MA_L23_Preprocessing */
extern void MA_L23_Preprocessing_TA_MA_new(
  /* TA_MA_new::MA_L23_Preprocessing::p15 */ P015_OBU_T_TM *p15,
  /* TA_MA_new::MA_L23_Preprocessing::reset */ kcg_bool reset,
  /* TA_MA_new::MA_L23_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_MA_new::MA_L23_Preprocessing::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA_new::MA_L23_Preprocessing::MA */ MovementAuthority_t_TrackAtlasTypes *MA);

#endif /* _MA_L23_Preprocessing_TA_MA_new_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MA_L23_Preprocessing_TA_MA_new.h
** Generation date: 2015-11-25T14:46:09
*************************************************************$ */


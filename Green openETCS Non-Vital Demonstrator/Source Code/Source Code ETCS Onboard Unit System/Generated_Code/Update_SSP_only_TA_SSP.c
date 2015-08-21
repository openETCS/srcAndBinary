/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_SSP_only_TA_SSP.h"

/* TA_SSP::Update_SSP_only */
void Update_SSP_only_TA_SSP(
  /* TA_SSP::Update_SSP_only::SP_in */SSP_cat_t_TA_MRSP *SP_in,
  /* TA_SSP::Update_SSP_only::P27V1_in */P027V1_OBU_T_TM_baseline2 *P27V1_in,
  /* TA_SSP::Update_SSP_only::train_length_in */L_internal_Type_Obu_BasicTypes_Pkg train_length_in,
  /* TA_SSP::Update_SSP_only::new_profile_out */SSP_cat_t_TA_MRSP *new_profile_out)
{
  /* TA_SSP::Update_SSP_only::_L8 */
  static SSP_section_t_TA_MRSP _L8;
  /* TA_SSP::Update_SSP_only::_L7 */
  static SSP_section_t_TA_MRSP _L7;
  /* TA_SSP::Update_SSP_only::_L6 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* TA_SSP::Update_SSP_only::_L5 */
  static SSP_cat_t_TA_MRSP _L5;
  
  /* 1 */
  Convert_P27_to_DistanceProfile_TA_SSP(
    P27V1_in,
    train_length_in,
    &_L5,
    &_L6,
    &_L7,
    &_L8);
  /* 1 */
  Update_SP_per_LRBG_TA_Lib_internal(
    &_L5,
    _L6,
    &_L7,
    &_L8,
    SP_in,
    new_profile_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_SSP_only_TA_SSP.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


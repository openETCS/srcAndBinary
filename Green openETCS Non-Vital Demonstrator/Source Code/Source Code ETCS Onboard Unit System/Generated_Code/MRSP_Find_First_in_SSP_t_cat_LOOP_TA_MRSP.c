/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.h"

/* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP */
void MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::Loc */SSP_target_t_TA_MRSP Loc,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::SSP_section_in */SSP_t_section_t_TA_MRSP SSP_section_in,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::cont */kcg_bool *cont,
  /* TA_MRSP::MRSP_Find_First_in_SSP_t_cat_LOOP::Last_Loc */SSP_target_t_TA_MRSP *Last_Loc)
{
  *Last_Loc = SSP_section_in;
  *cont = !(*Last_Loc > 0);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


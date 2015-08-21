/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_MRS_TA_MRSP.h"

/* TA_MRSP::MRSP_Determine_MRS */
SSP_s_section_t_TA_MRSP MRSP_Determine_MRS_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_MRS::CurrentTarget */SSP_t_section_t_TA_MRSP CurrentTarget,
  /* TA_MRSP::MRSP_Determine_MRS::SSP_matrix */SSP_matrix_t_TA_MRSP *SSP_matrix)
{
  static kcg_int i;
  /* TA_MRSP::MRSP_Determine_MRS::MRS */
  static SSP_s_section_t_TA_MRSP MRS;
  
  MRS = 0;
  for (i = 0; i < 11; i++) {
    MRS = /* 1 */
      MRSP_Determine_Lowest_Speed_TA_MRSP(
        i,
        MRS,
        /* 1 */
        MRSP_DetermineRelevantSpeedperCat_TA_MRSP(
          CurrentTarget,
          &(*SSP_matrix)[i]));
  }
  return MRS;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_MRS_TA_MRSP.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


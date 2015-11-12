/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMRSP_section_SDM_Input_W.h"

/* SDM_Input_Wrappers::ConvertMRSP_section */
void ConvertMRSP_section_SDM_Input_W(
  /* SDM_Input_Wrappers::ConvertMRSP_section::MRSP_section_ext */ MRSP_section_t_TrackAtlasTypes *MRSP_section_ext,
  /* SDM_Input_Wrappers::ConvertMRSP_section::MRSP_section_int */ MRSP_internal_section_T_TargetM *MRSP_section_int)
{
  (*MRSP_section_int).valid = (*MRSP_section_ext).valid;
  (*MRSP_section_int).Loc_Abs = /* 12 */
    TransformL_intToL_real_SDM_Type((*MRSP_section_ext).Loc_Abs);
  (*MRSP_section_int).MRS = /* 6 */
    TransformV_intToV_real_SDM_Type((*MRSP_section_ext).MRS);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertMRSP_section_SDM_Input_W.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


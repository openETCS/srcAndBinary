/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::getMRSFromMRSP */
V_internal_real_Type_SDM_Types_ getMRSFromMRSP_SDM_Types_Pkg(
  /* SDM_Types_Pkg::getMRSFromMRSP::MRSP */ MRSP_internal_T_TargetManagemen *MRSP,
  /* SDM_Types_Pkg::getMRSFromMRSP::d_max_safe_front */ L_internal_real_Type_SDM_Types_ d_max_safe_front)
{
  /* SDM_Types_Pkg::getMRSFromMRSP */
  static MRSP_internal_section_T_TargetM tmp;
  /* SDM_Types_Pkg::getMRSFromMRSP */
  static MRSP_internal_section_T_TargetM acc;
  static kcg_int i;
  /* SDM_Types_Pkg::getMRSFromMRSP::V_MRSP */
  static V_internal_real_Type_SDM_Types_ V_MRSP;
  
  kcg_copy_MRSP_internal_section_(&tmp, &(*MRSP)[0]);
  for (i = 0; i < 200; i++) {
    kcg_copy_MRSP_internal_section_(&acc, &tmp);
    /* 1 */ if ((*MRSP)[i].valid & ((*MRSP)[i].Loc_Abs <= d_max_safe_front)) {
      kcg_copy_MRSP_internal_section_(&tmp, &(*MRSP)[i]);
    }
    else {
      kcg_copy_MRSP_internal_section_(&tmp, &acc);
    }
  }
  V_MRSP = tmp.MRS;
  return V_MRSP;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getMRSFromMRSP_SDM_Types_Pkg.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


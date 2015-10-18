/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::getMRSFromMRSP */
V_internal_real_Type_SDM_Types_Pkg getMRSFromMRSP_SDM_Types_Pkg(
  /* SDM_Types_Pkg::getMRSFromMRSP::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* SDM_Types_Pkg::getMRSFromMRSP::d_max_safe_front */ L_internal_real_Type_SDM_Types_Pkg d_max_safe_front)
{
  /* SDM_Types_Pkg::getMRSFromMRSP */
  static MRSP_internal_section_T_TargetManagement_types tmp;
  /* SDM_Types_Pkg::getMRSFromMRSP */
  static MRSP_internal_section_T_TargetManagement_types acc;
  static kcg_int i;
  /* SDM_Types_Pkg::getMRSFromMRSP::V_MRSP */
  static V_internal_real_Type_SDM_Types_Pkg V_MRSP;
  
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp, &(*MRSP)[0]);
  for (i = 0; i < 200; i++) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&acc, &tmp);
    /* 1 */ if ((*MRSP)[i].valid & ((*MRSP)[i].Loc_Abs <= d_max_safe_front)) {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(
        &tmp,
        &(*MRSP)[i]);
    }
    else {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp, &acc);
    }
  }
  V_MRSP = tmp.MRS;
  return V_MRSP;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getMRSFromMRSP_SDM_Types_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */


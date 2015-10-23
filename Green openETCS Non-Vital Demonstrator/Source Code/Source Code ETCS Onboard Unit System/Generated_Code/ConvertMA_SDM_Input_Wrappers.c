/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMA_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertMA */
void ConvertMA_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertMA::LRBGlocation */ LocWithInAcc_T_Obu_BasicTypes_Pkg *LRBGlocation,
  /* SDM_Input_Wrappers::ConvertMA::Ma_in */ MovementAuthority_t_TrackAtlasTypes *Ma_in,
  /* SDM_Input_Wrappers::ConvertMA::Ma_out */ MA_section_real_T_TargetManagement_types *Ma_out)
{
  /* SDM_Input_Wrappers::ConvertMA */
  static L_internal_Type_Obu_BasicTypes_Pkg acc;
  /* SDM_Input_Wrappers::ConvertMA */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* SDM_Input_Wrappers::ConvertMA::_L129 */
  static DP_or_OL_t_TrackAtlasTypes _L129;
  /* SDM_Input_Wrappers::ConvertMA::_L190 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L190;
  
  (*Ma_out).valid = (*Ma_in).valid;
  (*Ma_out).DP_valid = (*Ma_in).q_dangerpoint;
  (*Ma_out).OL_valid = (*Ma_in).q_overlap;
  (*Ma_out).level = (*Ma_in).Level;
  _L190 = (*LRBGlocation).nominal;
  /* 2 */ if ((*Ma_in).valid) {
    /* 2 */ for (i = 0; i < 10; i++) {
      acc = _L190;
      /* 1 */
      SummarizeSections_SDM_Input_Wrappers(
        acc,
        &(*Ma_in).sections[i],
        &cond_iterw,
        &_L190);
      /* 2 */ if (!cond_iterw) {
        break;
      }
    }
  }
  /* 1 */ if ((*Ma_in).q_overlap) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L129, &(*Ma_in).overlap);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&_L129, &(*Ma_in).dangerpoint);
  }
  (*Ma_out).q_calculate_release = _L129.calc_v_release_onboard;
  (*Ma_out).v_main = /* 3 */
    TransformV_intToV_real_SDM_Types_Pkg((*Ma_in).v_main);
  (*Ma_out).EOA.Location = /* 2 */ TransformL_intToL_real_SDM_Types_Pkg(_L190);
  (*Ma_out).EOA.TargetSpeed = /* 2 */
    TransformV_intToV_real_SDM_Types_Pkg((*Ma_in).v_loa);
  (*Ma_out).DangerPoint = /* 1 */
    TransformL_intToL_real_SDM_Types_Pkg((*Ma_in).dangerpoint.d_DP_or_OL);
  (*Ma_out).Overlap = /* 3 */
    TransformL_intToL_real_SDM_Types_Pkg((*Ma_in).overlap.d_DP_or_OL);
  (*Ma_out).ReleaseSpeed = /* 1 */
    TransformV_intToV_real_SDM_Types_Pkg(_L129.v_release);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertMA_SDM_Input_Wrappers.c
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */


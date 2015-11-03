/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyTrackDescription_manage_DMI.h"

/* manage_DMI_Output_Pkg::copyTrackDescription */
void copyTrackDescription_manage_DMI(
  /* manage_DMI_Output_Pkg::copyTrackDescription::fromTrackAtlas */ DataForDMI_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copyTrackDescription::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::copyTrackDescription::toDMI */ DMI_Track_Description_T_DMI_Mes *toDMI)
{
  /* manage_DMI_Output_Pkg::copyTrackDescription */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L7 */
  static DMI_SpeedProfileArray_T_DMI_Typ _L7;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L19 */
  static DMI_gradientProfileArray_T_DMI_ _L19;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L20 */
  static kcg_int _L20;
  
  kcg_copy_DMI_trackCondition_T_D(
    &(*toDMI).trackConditions,
    (DMI_trackCondition_T_DMI_Types_ *) &cNoTrackCondition_manage_DMI_Ou);
  (*toDMI).speedProfiles.profileChanged = (*fromTrackAtlas).MRSP_updated;
  /* 1 */ if ((*fromTrackAtlas).MRSP_updated) {
    /* 1 */ for (i = 0; i < 32; i++) {
      /* 1 */
      copySpeedProfileElement_manage_(
        i,
        &(*fromTrackAtlas).MRSP[i + 0],
        &cond_iterw,
        &_L7[i]);
      _L20 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L20 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L20; i < 32; i++) {
    kcg_copy_DMI_speedProfileElemen(
      &_L7[i],
      (DMI_speedProfileElement_T_DMI_T *) &cEmptySpeedProfileElement_manag);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_DMI_SpeedProfileArray_(&(*toDMI).speedProfiles.speedProfiles, &_L7);
  (*toDMI).gradientProfiles.profileChanged =
    (*fromTrackAtlas).Gradient_profile_updated;
  /* 2 */ if ((*fromTrackAtlas).Gradient_profile_updated) {
    /* 2 */ for (i = 0; i < 32; i++) {
      /* 1 */
      copyGradientElement_manage_DMI_(
        i,
        &(*fromTrackAtlas).GradientProfile[i + 0],
        &cond_iterw,
        &_L19[i]);
      _L20 = i + 1;
      /* 2 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L20 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 2 */ for (i = _L20; i < 32; i++) {
    kcg_copy_DMI_gradientProfileEle(
      &_L19[i],
      (DMI_gradientProfileElement_T_DM *) &cEmptyGradientProfileElement_ma);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_DMI_gradientProfileArr(
    &(*toDMI).gradientProfiles.gradientProfiles,
    &_L19);
  cond_iterw = (*fromTrackAtlas).Gradient_profile_updated |
    (*fromTrackAtlas).MRSP_updated;
  (*toDMI).valid = cond_iterw;
  /* 1 */ if (cond_iterw) {
    (*toDMI).system_clock = inSystemTime;
  }
  else {
    (*toDMI).system_clock = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** copyTrackDescription_manage_DMI.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */


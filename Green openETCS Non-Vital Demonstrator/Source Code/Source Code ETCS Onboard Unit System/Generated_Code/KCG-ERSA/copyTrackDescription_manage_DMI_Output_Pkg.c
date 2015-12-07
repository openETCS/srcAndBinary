/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyTrackDescription_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copyTrackDescription */
void copyTrackDescription_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::copyTrackDescription::fromTrackAtlas */ DataForDMI_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copyTrackDescription::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::copyTrackDescription::toDMI */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *toDMI)
{
  /* manage_DMI_Output_Pkg::copyTrackDescription */ kcg_bool cond_iterw;
  kcg_int i;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L7 */ DMI_SpeedProfileArray_T_DMI_Types_Pkg _L7;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L19 */ DMI_gradientProfileArray_T_DMI_Types_Pkg _L19;
  /* manage_DMI_Output_Pkg::copyTrackDescription::_L20 */ kcg_int _L20;
  
  kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(
    &(*toDMI).trackConditions,
    (DMI_trackCondition_T_DMI_Types_Pkg *)
      &cNoTrackCondition_manage_DMI_Output_Pkg);
  (*toDMI).speedProfiles.profileChanged = (*fromTrackAtlas).MRSP_updated;
  /* 1 */ if ((*fromTrackAtlas).MRSP_updated) {
    /* 1 */ for (i = 0; i < 32; i++) {
      /* 1 */
      copySpeedProfileElement_manage_DMI_Output_Pkg(
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
    kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(
      &_L7[i],
      (DMI_speedProfileElement_T_DMI_Types_Pkg *)
        &cEmptySpeedProfileElement_manage_DMI_Output_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &(*toDMI).speedProfiles.speedProfiles,
    &_L7);
  (*toDMI).gradientProfiles.profileChanged =
    (*fromTrackAtlas).Gradient_profile_updated;
  /* 2 */ if ((*fromTrackAtlas).Gradient_profile_updated) {
    /* 2 */ for (i = 0; i < 32; i++) {
      /* 1 */
      copyGradientElement_manage_DMI_Output_Pkg(
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
    kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
      &_L19[i],
      (DMI_gradientProfileElement_T_DMI_Types_Pkg *)
        &cEmptyGradientProfileElement_manage_DMI_Output_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
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
** copyTrackDescription_manage_DMI_Output_Pkg.c
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */


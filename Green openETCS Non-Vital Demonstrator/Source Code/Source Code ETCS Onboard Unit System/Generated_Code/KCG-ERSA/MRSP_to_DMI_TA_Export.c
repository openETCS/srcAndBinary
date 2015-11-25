/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_to_DMI_TA_Export.h"

/* TA_Export::MRSP_to_DMI */
void MRSP_to_DMI_TA_Export(
  /* TA_Export::MRSP_to_DMI::EoA */ L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::MRSP_to_DMI::MRSP_in */ MRSP_Profile_t_TrackAtlasTypes *MRSP_in,
  /* TA_Export::MRSP_to_DMI::MRSP_to_DMI */ MRSP_Profile_t_TrackAtlasTypes *MRSP_to_DMI)
{
  /* TA_Export::MRSP_to_DMI */ MRSP_reduction_acc_TA_Export acc;
  /* TA_Export::MRSP_to_DMI */ kcg_bool cond_iterw;
  kcg_int i;
  /* TA_Export::MRSP_to_DMI::_L665 */ MRSP_reduction_acc_TA_Export _L665;
  /* TA_Export::MRSP_to_DMI::_L669 */ kcg_int _L669;
  
  kcg_copy_MRSP_reduction_acc_TA_Export(
    &_L665,
    (MRSP_reduction_acc_TA_Export *) &DEFAULT_MRSP_reduction_acc_TA_Export);
  /* 2 */ for (i = 0; i < 110; i++) {
    kcg_copy_MRSP_reduction_acc_TA_Export(&acc, &_L665);
    /* 1 */ MRSP_reduction_TA_Export(i, &acc, MRSP_in, &cond_iterw, &_L665);
    /* 2 */ if (!cond_iterw) {
      break;
    }
  }
  /* 3 */ for (i = 0; i < 110; i++) {
    /* 1 */
    MRSP_limit_to_EOA_TA_Export(
      i,
      &_L665.MRSP,
      EoA,
      &cond_iterw,
      &(*MRSP_to_DMI)[i]);
    _L669 = i + 1;
    /* 3 */ if (!cond_iterw) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  /* 3 */ for (i = _L669; i < 110; i++) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &(*MRSP_to_DMI)[i],
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSP_to_DMI_TA_Export.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */


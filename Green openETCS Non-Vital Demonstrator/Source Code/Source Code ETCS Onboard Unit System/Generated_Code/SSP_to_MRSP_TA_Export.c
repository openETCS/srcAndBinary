/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_to_MRSP_TA_Export.h"

/* TA_Export::SSP_to_MRSP */
void SSP_to_MRSP_TA_Export(
  /* TA_Export::SSP_to_MRSP::i */ kcg_int i,
  /* TA_Export::SSP_to_MRSP::MRSP_init */ MRSP_Profile_t_TrackAtlasTypes *MRSP_init,
  /* TA_Export::SSP_to_MRSP::SSP */ StaticSpeedProfile_t_TrackAtlasTypes *SSP,
  /* TA_Export::SSP_to_MRSP::cont */ kcg_bool *cont,
  /* TA_Export::SSP_to_MRSP::MRSP */ MRSP_Profile_t_TrackAtlasTypes *MRSP)
{
  /* TA_Export::SSP_to_MRSP */
  static V_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_Export::SSP_to_MRSP::_L7 */
  static StaticSpeedSection_t_TrackAtlasTypes _L7;
  
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L7, &(*SSP)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L7,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  *cont = _L7.valid;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(MRSP, MRSP_init);
  /* 1 */ if (635 != _L7.v_static) {
    tmp = _L7.v_static;
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 200)) {
    (*MRSP)[i].valid = *cont;
    (*MRSP)[i].Loc_Abs = _L7.d_static_abs;
    (*MRSP)[i].Loc_LRBG = _L7.d_static_LRBG;
    (*MRSP)[i].MRS = tmp;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_to_MRSP_TA_Export.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */


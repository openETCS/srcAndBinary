/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_EOA_loop_TA_MA_new.h"

/* TA_MA_new::Get_EOA_loop */
void Get_EOA_loop_TA_MA_new(
  /* TA_MA_new::Get_EOA_loop::i */ kcg_int i,
  /* TA_MA_new::Get_EOA_loop::acc */ L_internal_Type_Obu_BasicTypes_Pkg acc,
  /* TA_MA_new::Get_EOA_loop::MA_sections */ MovementAuthoritySectionlist_t_TrackAtlasTypes *MA_sections,
  /* TA_MA_new::Get_EOA_loop::cont */ kcg_bool *cont,
  /* TA_MA_new::Get_EOA_loop::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg *currentEOA)
{
  /* TA_MA_new::Get_EOA_loop::_L34 */ MovementAuthoritySection_t_TrackAtlasTypes _L34;
  /* TA_MA_new::Get_EOA_loop::_L40 */ kcg_bool _L40;
  
  if ((0 <= i) & (i < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L34,
      &(*MA_sections)[i]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L34,
      (MovementAuthoritySection_t_TrackAtlasTypes *)
        &DefaultMA_section_TA_MA_new);
  }
  _L40 = _L34.valid & _L34.q_endsection;
  *cont = !_L40;
  /* 1 */ if (_L40) {
    *currentEOA = _L34.l_section;
  }
  else {
    *currentEOA = DEFAULT_loc_TA_MA_new;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Get_EOA_loop_TA_MA_new.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */


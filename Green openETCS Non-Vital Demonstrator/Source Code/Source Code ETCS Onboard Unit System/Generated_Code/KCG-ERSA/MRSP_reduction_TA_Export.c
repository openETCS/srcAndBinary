/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_reduction_TA_Export.h"

/* TA_Export::MRSP_reduction */
void MRSP_reduction_TA_Export(
  /* TA_Export::MRSP_reduction::i */ kcg_int i,
  /* TA_Export::MRSP_reduction::acc */ MRSP_reduction_acc_TA_Export *acc,
  /* TA_Export::MRSP_reduction::MRSP */ MRSP_Profile_t_TrackAtlasTypes *MRSP,
  /* TA_Export::MRSP_reduction::cont */ kcg_bool *cont,
  /* TA_Export::MRSP_reduction::reduced */ MRSP_reduction_acc_TA_Export *reduced)
{
  /* TA_Export::MRSP_reduction */ MRSP_section_t_TrackAtlasTypes tmp;
  /* TA_Export::MRSP_reduction::_L19 */ MRSP_section_t_TrackAtlasTypes _L19;
  
  if ((0 <= i) & (i < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&_L19, &(*MRSP)[i]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &_L19,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  if ((0 <= i - 1) & (i - 1 < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&tmp, &(*MRSP)[i - 1]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &tmp,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  /* 1 */ if (_L19.MRS == tmp.MRS) {
    (*reduced).write_index = (*acc).write_index;
  }
  else {
    (*reduced).write_index = (*acc).write_index + 1;
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&(*reduced).MRSP, &(*acc).MRSP);
  if ((0 <= (*acc).write_index) & ((*acc).write_index < 110)) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &(*reduced).MRSP[(*acc).write_index],
      &_L19);
  }
  *cont = _L19.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSP_reduction_TA_Export.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */


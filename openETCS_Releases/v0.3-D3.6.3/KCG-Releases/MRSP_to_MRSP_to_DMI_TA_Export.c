/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_to_MRSP_to_DMI_TA_Export.h"

/* TA_Export::MRSP_to_MRSP_to_DMI */
void MRSP_to_MRSP_to_DMI_TA_Export(
  /* TA_Export::MRSP_to_MRSP_to_DMI::i */ kcg_int i,
  /* TA_Export::MRSP_to_MRSP_to_DMI::MRSP_in */ MRSP_section_t_TrackAtlasTypes *MRSP_in,
  /* TA_Export::MRSP_to_MRSP_to_DMI::cont */ kcg_bool *cont,
  /* TA_Export::MRSP_to_MRSP_to_DMI::MRSP_to_DMI */ MRSP_section_t_TrackAtlasTypes *MRSP_to_DMI)
{
  *cont = (*MRSP_in).valid;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(MRSP_to_DMI, MRSP_in);
  /* 2 */ if (END_OF_SSP_TA_Export == (*MRSP_in).MRS) {
    (*MRSP_to_DMI).MRS = END_OF_SSP_encoding_TA_Export;
  }
  else {
    (*MRSP_to_DMI).MRS = (*MRSP_in).MRS;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSP_to_MRSP_to_DMI_TA_Export.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */


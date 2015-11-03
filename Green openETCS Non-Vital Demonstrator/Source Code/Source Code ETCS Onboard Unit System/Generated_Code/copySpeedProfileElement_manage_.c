/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copySpeedProfileElement_manage_.h"

/* manage_DMI_Output_Pkg::copySpeedProfileElement */
void copySpeedProfileElement_manage_(
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::index */ kcg_int index,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::fromTrackAtlas */ MRSP_section_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::continue */ kcg_bool *_1_continue,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::toDMI */ DMI_speedProfileElement_T_DMI_T *toDMI)
{
  (*toDMI).Loc_Abs = (*fromTrackAtlas).Loc_Abs;
  (*toDMI).Loc_LRBG = (*fromTrackAtlas).Loc_LRBG;
  (*toDMI).MRS = (*fromTrackAtlas).MRS;
  *_1_continue = (*fromTrackAtlas).valid;
  (*toDMI).valid = *_1_continue;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** copySpeedProfileElement_manage_.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


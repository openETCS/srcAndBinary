/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copySpeedProfileElement_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::copySpeedProfileElement */
void copySpeedProfileElement_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::index */kcg_int index,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::fromTrackAtlas */MRSP_section_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::continue */kcg_bool *_1_continue,
  /* manage_DMI_Output_Pkg::copySpeedProfileElement::toDMI */DMI_speedProfileElement_T_DMI_Types_Pkg *toDMI)
{
  (*toDMI).Loc_Abs = (*fromTrackAtlas).Loc_Abs;
  (*toDMI).Loc_LRBG = (*fromTrackAtlas).Loc_LRBG;
  (*toDMI).MRS = (*fromTrackAtlas).MRS;
  *_1_continue = (*fromTrackAtlas).valid;
  (*toDMI).valid = *_1_continue;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** copySpeedProfileElement_manage_DMI_Output_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:10
*************************************************************$ */
#ifndef _copyTrackDescription_manage_DM
#define _copyTrackDescription_manage_DM

#include "kcg_types.h"
#include "copySpeedProfileElement_manage_.h"
#include "copyGradientElement_manage_DMI_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Output_Pkg::copyTrackDescription */
extern void copyTrackDescription_manage_DMI(
  /* manage_DMI_Output_Pkg::copyTrackDescription::fromTrackAtlas */ DataForDMI_t_TrackAtlasTypes *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copyTrackDescription::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::copyTrackDescription::toDMI */ DMI_Track_Description_T_DMI_Mes *toDMI);

#endif /* _copyTrackDescription_manage_DM */
/* $**************** KCG Version 6.4 (build i21) ****************
** copyTrackDescription_manage_DMI.h
** Generation date: 2015-11-03T14:28:10
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CombineSections_TA_MA.h"

/* TA_MA::CombineSections */
void CombineSections_TA_MA(
  /* TA_MA::CombineSections::endSection */ MovementAuthoritySection_t_TrackAtlasTypes *endSection,
  /* TA_MA::CombineSections::sections */ MovementAuthoritySectionlist_t_TrackAtlasTypes *sections,
  /* TA_MA::CombineSections::allSections */ MovementAuthoritySectionlist_t_TrackAtlasTypes *allSections)
{
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    allSections,
    sections);
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
    &(*allSections)[0],
    endSection);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CombineSections_TA_MA.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */


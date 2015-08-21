/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SummarizeSections_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SummarizeSections */
void SummarizeSections_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SummarizeSections::l */L_internal_Type_Obu_BasicTypes_Pkg l,
  /* SDM_Input_Wrappers::SummarizeSections::section */MovementAuthoritySection_t_TrackAtlasTypes *section,
  /* SDM_Input_Wrappers::SummarizeSections::go_on */kcg_bool *go_on,
  /* SDM_Input_Wrappers::SummarizeSections::sum */L_internal_Type_Obu_BasicTypes_Pkg *sum)
{
  static L_internal_Type_Obu_BasicTypes_Pkg tmp;
  
  *go_on = (*section).valid;
  if (*go_on) {
    tmp = (*section).l_section;
  }
  else {
    tmp = 0;
  }
  *sum = l + tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SummarizeSections_SDM_Input_Wrappers.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


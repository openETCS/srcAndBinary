/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "copyGradientElement_manage_DMI_.h"

/* manage_DMI_Output_Pkg::copyGradientElement */
void copyGradientElement_manage_DMI_(
  /* manage_DMI_Output_Pkg::copyGradientElement::index */ kcg_int index,
  /* manage_DMI_Output_Pkg::copyGradientElement::fromTrackAtlas */ _23_GradientProfile_for_DMI_sec *fromTrackAtlas,
  /* manage_DMI_Output_Pkg::copyGradientElement::continue */ kcg_bool *_1_continue,
  /* manage_DMI_Output_Pkg::copyGradientElement::toDMI */ DMI_gradientProfileElement_T_DM *toDMI)
{
  (*toDMI).begin_section = (*fromTrackAtlas).begin_section;
  (*toDMI).end_section = (*fromTrackAtlas).end_section;
  (*toDMI).gradient = (*fromTrackAtlas).gradient;
  *_1_continue = (*fromTrackAtlas).valid;
  (*toDMI).valid = *_1_continue;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** copyGradientElement_manage_DMI_.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */


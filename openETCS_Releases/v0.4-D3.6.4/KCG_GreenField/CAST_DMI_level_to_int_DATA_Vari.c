/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_level_to_int_DATA_Vari.h"

/* DATA::Variables::CAST_DMI_level_to_int */
void CAST_DMI_level_to_int_DATA_Vari(
  /* DATA::Variables::CAST_DMI_level_to_int::dmi_level_ct */ DMI_level_T_DMI_Types_Pkg *dmi_level_ct,
  /* DATA::Variables::CAST_DMI_level_to_int::level_int */ kcg_int *level_int,
  /* DATA::Variables::CAST_DMI_level_to_int::nid_stm_int */ kcg_int *nid_stm_int)
{
  *nid_stm_int = (*dmi_level_ct).nid_stm;
  *level_int = /* 1 */ CAST_M_LEVEL_to_int_TM_conversi((*dmi_level_ct).level);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_level_to_int_DATA_Vari.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */


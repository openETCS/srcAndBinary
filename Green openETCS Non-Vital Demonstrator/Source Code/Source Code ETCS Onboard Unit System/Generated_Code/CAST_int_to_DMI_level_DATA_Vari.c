/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_level_DATA_Vari.h"

/* DATA::Variables::CAST_int_to_DMI_level */
void CAST_int_to_DMI_level_DATA_Vari(
  /* DATA::Variables::CAST_int_to_DMI_level::level_int */ kcg_int level_int,
  /* DATA::Variables::CAST_int_to_DMI_level::nid_stm_int */ kcg_int nid_stm_int,
  /* DATA::Variables::CAST_int_to_DMI_level::dmi_level_ct */ DMI_level_T_DMI_Types_Pkg *dmi_level_ct)
{
  (*dmi_level_ct).nid_stm = nid_stm_int;
  (*dmi_level_ct).level = /* 1 */ CAST_Int_to_M_LEVEL_TM_conversi(level_int);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_level_DATA_Vari.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


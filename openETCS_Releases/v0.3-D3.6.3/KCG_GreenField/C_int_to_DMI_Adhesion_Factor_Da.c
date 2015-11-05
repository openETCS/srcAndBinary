/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Adhesion_Factor_Da.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data */
void C_int_to_DMI_Adhesion_Factor_Da(
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::dmi_adhesion_factor_data_int */ DMI_Adhesion_Factor_Data_int_ar *dmi_adhesion_factor_data_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::dmi_adhesion_factor_data_ct */ _22_DMI_Adhesion_Factor_Data_T_ *dmi_adhesion_factor_data_ct)
{
  (*dmi_adhesion_factor_data_ct).systemTime =
    (*dmi_adhesion_factor_data_int)[1];
  (*dmi_adhesion_factor_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_adhesion_factor_data_int)[0]);
  (*dmi_adhesion_factor_data_ct).adhesionFactor = /* 1 */
    CAST_Int_to_M_ADHESION_TM_conve((*dmi_adhesion_factor_data_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Adhesion_Factor_Da.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */


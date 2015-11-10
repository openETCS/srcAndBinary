/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Adhesion_Factor_Data_to_i.h"

/* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int */
void C_DMI_Adhesion_Factor_Data_to_i(
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::dmi_adhesion_factor_data_ct */ _24_DMI_Adhesion_Factor_Data_T_ *dmi_adhesion_factor_data_ct,
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::dmi_adhesion_factor_data_int */ DMI_Adhesion_Factor_Data_int_ar *dmi_adhesion_factor_data_int)
{
  (*dmi_adhesion_factor_data_int)[1] =
    (*dmi_adhesion_factor_data_ct).systemTime;
  (*dmi_adhesion_factor_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_adhesion_factor_data_ct).valid);
  (*dmi_adhesion_factor_data_int)[2] = /* 1 */
    CAST_M_ADHESION_to_int_TM_conve(
      (*dmi_adhesion_factor_data_ct).adhesionFactor);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Adhesion_Factor_Data_to_i.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */


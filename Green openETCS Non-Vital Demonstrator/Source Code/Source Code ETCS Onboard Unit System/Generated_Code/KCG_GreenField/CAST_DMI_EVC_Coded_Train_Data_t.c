/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Coded_Train_Data_t.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int */
void CAST_DMI_EVC_Coded_Train_Data_t(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::dmi_evc_coded_train_data_ct */ _27_DMI_EVC_Coded_Train_Data_T_ *dmi_evc_coded_train_data_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int::dmi_evc_coded_train_data_int */ DMI_EVC_Coded_Train_Data_int_ar *dmi_evc_coded_train_data_int)
{
  (*dmi_evc_coded_train_data_int)[1] =
    (*dmi_evc_coded_train_data_ct).system_clock;
  (*dmi_evc_coded_train_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_evc_coded_train_data_ct).valid);
  (*dmi_evc_coded_train_data_int)[2] = /* 1 */
    CAST_DMI_train_id_to_int_DATA_V(&(*dmi_evc_coded_train_data_ct).trainID);
  (*dmi_evc_coded_train_data_int)[3] = /* 1 */
    CAST_DMI_train_length_to_int_DA(
      &(*dmi_evc_coded_train_data_ct).trainLength);
  (*dmi_evc_coded_train_data_int)[4] = /* 1 */
    CAST_DMI_brakeModel_id_to_int_D(&(*dmi_evc_coded_train_data_ct).brakeModel);
  (*dmi_evc_coded_train_data_int)[5] = /* 1 */
    CAST_DMI_vMax_id_to_int_DATA_Va(&(*dmi_evc_coded_train_data_ct).vmax);
  (*dmi_evc_coded_train_data_int)[6] = /* 1 */
    CAST_M_AXLELOADCAT_to_int_TM_co((*dmi_evc_coded_train_data_ct).mAxleLoad);
  (*dmi_evc_coded_train_data_int)[7] = /* 1 */
    CAST_DMI_airtightSystem_to_int_(
      &(*dmi_evc_coded_train_data_ct).airTightSystem);
  (*dmi_evc_coded_train_data_int)[8] = /* 1 */
    CAST_DMI_loadingGauge_to_int_DA(
      &(*dmi_evc_coded_train_data_ct).mLoadingGauge);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_EVC_Coded_Train_Data_t.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */


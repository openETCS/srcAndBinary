/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int */
void Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::dmi_track_description_ct */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct,
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::dmi_track_description_int */ DMI_Track_Description_int_array_T *dmi_track_description_int)
{
  /* ck__L14 */ if ((*dmi_track_description_ct).valid) {
    /* 1 */
    CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
      dmi_track_description_ct,
      dmi_track_description_int);
  }
  else {
    kcg_copy_DMI_Track_Description_int_array_T(
      dmi_track_description_int,
      (DMI_Track_Description_int_array_T *)
        &cDMI_Track_Description_in_DATA_Packets_EVC_to_DMI);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */


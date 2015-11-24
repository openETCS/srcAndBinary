/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description */
void Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::dmi_track_description_int */ DMI_Track_Description_int_array_T *dmi_track_description_int,
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::dmi_track_description_ct */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct)
{
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::_L26 */ kcg_bool _L26;
  
  _L26 = 1 == (*dmi_track_description_int)[0];
  /* ck__L26 */ if (_L26) {
    /* 1 */
    CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
      dmi_track_description_int,
      dmi_track_description_ct);
  }
  else {
    kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_track_description_ct,
      (DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDMI_Track_Description_DATA_Packets_EVC_to_DMI);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Track_Description_to_i.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int */
void CAST_DMI_Track_Description_to_i(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::Input1 */ DMI_Track_Description_T_DMI_Mes *Input1,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int::Output1 */ _51_DMI_Track_Description_int_a *Output1)
{
  (&(&(&(*Output1)[0])[0])[0])[1] = (*Input1).system_clock;
  (&(&(&(*Output1)[0])[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*Input1).valid);
  /* 1 */
  CAST_DMI_speedProfile_to_int_DA(
    &(*Input1).speedProfiles,
    (DMI_speedProfile_int_array_T_DA *) &(&(&(*Output1)[0])[0])[2]);
  /* 1 */
  CAST_DMI_gradientProfile_to_int(
    &(*Input1).gradientProfiles,
    (DMI_gradientProfile_int_arrayT *) &(&(*Output1)[0])[131]);
  /* 1 */
  CAST_DMI_trackCondition_to_int_(
    &(*Input1).trackConditions,
    (DMI_trackCondition_int_array_T *) &(*Output1)[260]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Track_Description_to_i.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_System_Version_to_int_.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_System_Version_to_int */
void CAST_DMI_System_Version_to_int_(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_System_Version_to_int::dmi_system_version_ct */ DMI_System_Version_T_DMI_Messag *dmi_system_version_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_System_Version_to_int::dmi_system_version_int */ DMI_System_Version_int_array_T_ *dmi_system_version_int)
{
  (*dmi_system_version_int)[1] = (*dmi_system_version_ct).system_clock;
  (*dmi_system_version_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_system_version_ct).valid);
  (*dmi_system_version_int)[2] = /* 1 */
    CAST_M_VERSION_to_int_TM_conver((*dmi_system_version_ct).system_version);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_System_Version_to_int_.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */


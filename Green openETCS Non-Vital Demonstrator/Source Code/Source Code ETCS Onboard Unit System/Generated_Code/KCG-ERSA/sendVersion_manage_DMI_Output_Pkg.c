/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendVersion_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendVersion_init_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  outC->versionSent = kcg_true;
  outC->init = kcg_true;
  outC->VersionPkg.valid = kcg_true;
  outC->VersionPkg.system_clock = 0;
  outC->VersionPkg.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendVersion_reset_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::sendVersion */
void sendVersion_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendVersion::ownVersion */ M_VERSION ownVersion,
  /* manage_DMI_Output_Pkg::sendVersion::dmiStatus */ DMI_EVC_status_T_DMI_Types_Pkg *dmiStatus,
  /* manage_DMI_Output_Pkg::sendVersion::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendVersion_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::sendVersion::sendPkg */ kcg_bool sendPkg;
  /* manage_DMI_Output_Pkg::sendVersion::_L7 */ kcg_bool _L7;
  
  /* last_init_ck_versionSent */ if (outC->init) {
    outC->init = kcg_false;
    _L7 = kcg_false;
  }
  else {
    _L7 = outC->versionSent;
  }
  sendPkg = (*dmiStatus).DMI_Active & _L7;
  /* 1 */ if (sendPkg) {
    outC->VersionPkg.valid = kcg_true;
    outC->VersionPkg.system_clock = inSystemTime;
    outC->VersionPkg.system_version = ownVersion;
  }
  else {
    kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->VersionPkg,
      (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyVersion_manage_DMI_Output_Pkg);
  }
  outC->versionSent = sendPkg | _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendVersion_manage_DMI_Output_Pkg.c
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */


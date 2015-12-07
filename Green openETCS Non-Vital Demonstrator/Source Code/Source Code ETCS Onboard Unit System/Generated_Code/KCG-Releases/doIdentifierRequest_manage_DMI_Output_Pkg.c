/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doIdentifierRequest_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void doIdentifierRequest_init_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->identifierRequest.valid = kcg_true;
  outC->identifierRequest.system_clock = 0;
  outC->identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->identifierRequest.l_name = 0;
  for (i = 0; i < 255; i++) {
    outC->identifierRequest.x_name[i] = ' ';
  }
  outC->identifierRequest.l_extra = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void doIdentifierRequest_reset_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::doIdentifierRequest */
void doIdentifierRequest_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doIdentifierRequest::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::ownVersion */ M_VERSION ownVersion,
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC)
{
  /* ck_isStarted */ if ((*TIU_TrainStatus).deskOpen) {
    /* 1 */ if (outC->init) {
      outC->init = kcg_false;
      kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->identifierRequest,
        (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEVCIdentifierRequest_manage_DMI_Output_Pkg);
      outC->identifierRequest.system_clock = inSystemTime;
      outC->identifierRequest.ERTMS_Version = ownVersion;
      outC->identifierRequest.EVC_Version = ownVersion;
    }
    else {
      kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->identifierRequest,
        (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEmptyIdentifierRequest_manage_DMI_Output_Pkg);
    }
  }
  else {
    kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->identifierRequest,
      (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyIdentifierRequest_manage_DMI_Output_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** doIdentifierRequest_manage_DMI_Output_Pkg.c
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */


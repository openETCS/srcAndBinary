/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doIdentifierRequest_manage_DMI_.h"

#ifndef KCG_USER_DEFINED_INIT
void doIdentifierRequest_init_manage(outC_doIdentifierRequest_manage *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->identifierRequest.valid = kcg_true;
  outC->identifierRequest.system_clock = 0;
  outC->identifierRequest.ERTMS_Version = M_VERSION_Previous_versions_acc;
  outC->identifierRequest.EVC_Version = M_VERSION_Previous_versions_acc;
  outC->identifierRequest.l_name = 0;
  for (i = 0; i < 255; i++) {
    outC->identifierRequest.x_name[i] = ' ';
  }
  outC->identifierRequest.l_extra = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void doIdentifierRequest_reset_manag(outC_doIdentifierRequest_manage *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::doIdentifierRequest */
void doIdentifierRequest_manage_DMI_(
  /* manage_DMI_Output_Pkg::doIdentifierRequest::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::ownVersion */ M_VERSION ownVersion,
  outC_doIdentifierRequest_manage *outC)
{
  /* ck_isStarted */ if ((*TIU_TrainStatus).deskOpen) {
    /* 1 */ if (outC->init) {
      outC->init = kcg_false;
      kcg_copy__28_DMI_Identifier_Req(
        &outC->identifierRequest,
        (_28_DMI_Identifier_Request_T_DM *) &cEVCIdentifierRequest_manage_DM);
      outC->identifierRequest.system_clock = inSystemTime;
      outC->identifierRequest.ERTMS_Version = ownVersion;
      outC->identifierRequest.EVC_Version = ownVersion;
    }
    else {
      kcg_copy__28_DMI_Identifier_Req(
        &outC->identifierRequest,
        (_28_DMI_Identifier_Request_T_DM *) &cEmptyIdentifierRequest_manage_);
    }
  }
  else {
    kcg_copy__28_DMI_Identifier_Req(
      &outC->identifierRequest,
      (_28_DMI_Identifier_Request_T_DM *) &cEmptyIdentifierRequest_manage_);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** doIdentifierRequest_manage_DMI_.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */


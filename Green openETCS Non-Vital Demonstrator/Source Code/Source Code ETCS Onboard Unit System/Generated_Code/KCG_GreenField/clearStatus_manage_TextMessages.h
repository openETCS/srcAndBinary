/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _clearStatus_manage_TextMessage
#define _clearStatus_manage_TextMessage

#include "kcg_types.h"
#include "deleteElement_manage_TextMessag.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_TextMessages_Pkg::clearStatus */
extern void clearStatus_manage_TextMessages(
  /* manage_TextMessages_Pkg::clearStatus::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_TextMessages_Pkg::clearStatus::inMessageID */ DMI_TextMessage_ID_T_DMI_Types_ inMessageID,
  /* manage_TextMessages_Pkg::clearStatus::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList,
  /* manage_TextMessages_Pkg::clearStatus::outIndex */ kcg_int *outIndex);

#endif /* _clearStatus_manage_TextMessage */
/* $**************** KCG Version 6.4 (build i21) ****************
** clearStatus_manage_TextMessages.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */


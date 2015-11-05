/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
#ifndef _checkIfNeeded_manage_TextMessages_Pkg_H_
#define _checkIfNeeded_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "findForCheck_manage_TextMessages_Pkg.h"
#include "mapMLtoElement_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_TextMessages_Pkg::checkIfNeeded */
extern kcg_bool checkIfNeeded_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::checkIfNeeded::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::checkIfNeeded::announcedLevel */ M_LEVEL announcedLevel,
  /* manage_TextMessages_Pkg::checkIfNeeded::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList);

#endif /* _checkIfNeeded_manage_TextMessages_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkIfNeeded_manage_TextMessages_Pkg.h
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */


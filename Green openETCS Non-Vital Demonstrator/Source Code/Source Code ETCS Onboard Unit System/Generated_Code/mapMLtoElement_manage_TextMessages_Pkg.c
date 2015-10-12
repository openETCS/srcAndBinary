/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMLtoElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::mapMLtoElement */
void mapMLtoElement_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::mapMLtoElement::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::mapMLtoElement::announcedLevel */ M_LEVEL announcedLevel,
  /* manage_TextMessages_Pkg::mapMLtoElement::outDerivedElement */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *outDerivedElement)
{
  (*outDerivedElement).valid = (*inModeLevel_Ack).valid;
  (*outDerivedElement).dmi_textMessageID = 0;
  (*outDerivedElement).timeStamp = 0;
  (*outDerivedElement).textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  (*outDerivedElement).nid_textmessage = 0;
  (*outDerivedElement).whichLevel = announcedLevel;
  (*outDerivedElement).whichMode = (*inModeLevel_Ack).whichMode;
  /* 1 */ if ((*inModeLevel_Ack).valid) {
    /* 2 */ if ((*inModeLevel_Ack).LevelNeedsAck) {
      (*outDerivedElement).context = con_levelMgmt_DMI_Types_Pkg;
    }
    else {
      (*outDerivedElement).context = con_modeChange_DMI_Types_Pkg;
    }
  }
  else {
    (*outDerivedElement).context = con_undefined_DMI_Types_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapMLtoElement_manage_TextMessages_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


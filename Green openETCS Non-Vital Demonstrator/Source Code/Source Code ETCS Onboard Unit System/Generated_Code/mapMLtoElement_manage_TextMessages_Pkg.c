/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMLtoElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::mapMLtoElement */
void mapMLtoElement_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::mapMLtoElement::dmi_FromML_Change */DMI_ModesToDMI_T_DMI_Types_Pkg *dmi_FromML_Change,
  /* manage_TextMessages_Pkg::mapMLtoElement::outDerivedElement */DMI_TXT_MSG_status_T_DMI_Types_Pkg *outDerivedElement)
{
  (*outDerivedElement).valid = (*dmi_FromML_Change).valid;
  (*outDerivedElement).dmi_textMessageID = 0;
  (*outDerivedElement).timeStamp = 0;
  (*outDerivedElement).textReport =
    Q_TEXTREPORT_No_driver_acknowledgement_report_required;
  (*outDerivedElement).nid_textmessage = 0;
  (*outDerivedElement).whichLevel = (*dmi_FromML_Change).newLevel;
  (*outDerivedElement).whichMode = (*dmi_FromML_Change).whichMode;
  if ((*dmi_FromML_Change).valid) {
    if ((*dmi_FromML_Change).newLevel != (*dmi_FromML_Change).previousLevel) {
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mapMLtoElement_manage_TextMessages_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


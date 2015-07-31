/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trackMsg_toML_EVC_Support_Pkg.h"

/* EVC_Support_Pkg::trackMsg_toML */
void trackMsg_toML_EVC_Support_Pkg(
  /* EVC_Support_Pkg::trackMsg_toML::inTrackMsg */ReceivedMessage_T_Common_Types_Pkg *inTrackMsg,
  /* EVC_Support_Pkg::trackMsg_toML::inTrackErrors */MSG_Errors_T_Common_Types_Pkg *inTrackErrors,
  /* EVC_Support_Pkg::trackMsg_toML::outMsgforML */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *outMsgforML)
{
  /* EVC_Support_Pkg::trackMsg_toML::isRadio */
  static kcg_bool isRadio;
  
  isRadio = (*inTrackMsg).valid & ((*inTrackMsg).source ==
      msrc_Euroradio_Common_Types_Pkg);
  if (isRadio) {
    (*outMsgforML).Mess_15 = (*inTrackMsg).Radio_Common_Header.nid_message ==
      cm15_Conditional_Emergency_Stop_Id_Pkg;
    (*outMsgforML).Mess_16 = (*inTrackMsg).Radio_Common_Header.nid_message ==
      cm16_Unconditional_Emergency_Stop_Id_Pkg;
    (*outMsgforML).Mess_2 = (*inTrackMsg).Radio_Common_Header.nid_message ==
      cm02_SR_Authorization_Id_Pkg;
    (*outMsgforML).Mess_27 = (*inTrackMsg).Radio_Common_Header.nid_message ==
      cm27_SH_Refused_Id_Pkg;
    (*outMsgforML).Mess_28 = (*inTrackMsg).Radio_Common_Header.nid_message ==
      cm28_SH_Authorised_Id_Pkg;
    (*outMsgforML).Mess_6 = (*inTrackMsg).Radio_Common_Header.nid_message ==
      cm06_Recognition_Of_Exit_From_Trip_Mode_Id_Pkg;
    (*outMsgforML).T_NVCONTACT_Overpass = (*inTrackErrors).tNvContactError;
  }
  else {
    kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
      outMsgforML,
      (T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *)
        &cNoMessageForML_EVC_Support_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trackMsg_toML_EVC_Support_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


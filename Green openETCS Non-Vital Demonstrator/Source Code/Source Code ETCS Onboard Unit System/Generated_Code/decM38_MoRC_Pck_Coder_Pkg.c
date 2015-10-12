/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "decM38_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::decM38 */
kcg_bool decM38_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::decM38::inMessage */ msgFromTrack_T_RCM_MsgTypes_Pkg *inMessage)
{
  /* MoRC_Pck::Coder_Pkg::decM38::m38_initiationOfComSession */
  static kcg_bool m38_initiationOfComSession;
  
  m38_initiationOfComSession = (*inMessage).valid & (((*inMessage).source ==
        msrc_Euroradio_Common_Types_Pkg) | ((*inMessage).source ==
        msrc_RadioInfillUnit_Common_Types_Pkg)) &
    ((*inMessage).Radio_Common_Header.nid_message ==
      cm38_Initiation_of_a_Communication_Session_Id_Pkg);
  return m38_initiationOfComSession;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** decM38_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


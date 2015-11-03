/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WriteDirection2PassedBG_CheckBG.h"

/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG */
void WriteDirection2PassedBG_CheckBG(
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::isNominal */ kcg_bool isNominal,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_in */ ReceivedMessage_T_Common_Types_ *passedBG_in,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_out */ ReceivedMessage_T_Common_Types_ *passedBG_out)
{
  /* 1 */ if (isNominal) {
    kcg_copy_ReceivedMessage_T_Comm(passedBG_out, passedBG_in);
    (*passedBG_out).BG_Common_Header.trainOrientationToBG =
      cQDirLrbgNominal_CheckBGConsist;
    (*passedBG_out).BG_Common_Header.trainRunningDirectionToBG =
      cQqDirTrainNominal_CheckBGConsi;
  }
  else {
    kcg_copy_ReceivedMessage_T_Comm(passedBG_out, passedBG_in);
    (*passedBG_out).BG_Common_Header.trainOrientationToBG =
      cQDirLrbgRevers_CheckBGConsiste;
    (*passedBG_out).BG_Common_Header.trainRunningDirectionToBG =
      cQqDirTrainRevers_CheckBGConsis;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** WriteDirection2PassedBG_CheckBG.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


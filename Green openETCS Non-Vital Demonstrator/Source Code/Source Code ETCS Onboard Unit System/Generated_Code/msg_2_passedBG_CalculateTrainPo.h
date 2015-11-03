/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _msg_2_passedBG_CalculateTrainP
#define _msg_2_passedBG_CalculateTrainP

#include "kcg_types.h"
#include "Read_P005_ForCalcTrainPos_TM_sp.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateT.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateT.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG */
extern void msg_2_passedBG_CalculateTrainPo(
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::msgFromTrack */ ReceivedMessage_T_Common_Types_ *msgFromTrack,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::BG_passed */ kcg_bool *BG_passed,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::onlyBGsAnnouncedViaRadio */ kcg_bool *onlyBGsAnnouncedViaRadio);

#endif /* _msg_2_passedBG_CalculateTrainP */
/* $**************** KCG Version 6.4 (build i21) ****************
** msg_2_passedBG_CalculateTrainPo.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */


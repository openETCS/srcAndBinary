/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _InputDMI_Interfaces_H_
#define _InputDMI_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Interfaces::InputDMI */
extern void InputDMI_Interfaces(
  /* Interfaces::InputDMI::Data_From_DMI */ T_Data_From_DMI_Level_And_Mode_ *Data_From_DMI,
  /* Interfaces::InputDMI::Driver_Ack_LS */ kcg_bool *Driver_Ack_LS,
  /* Interfaces::InputDMI::Driver_Ack_OS */ kcg_bool *Driver_Ack_OS,
  /* Interfaces::InputDMI::Driver_Ack_RV */ kcg_bool *Driver_Ack_RV,
  /* Interfaces::InputDMI::Driver_Ack_SH */ kcg_bool *Driver_Ack_SH,
  /* Interfaces::InputDMI::Driver_Ack_SN */ kcg_bool *Driver_Ack_SN,
  /* Interfaces::InputDMI::Driver_Ack_SR */ kcg_bool *Driver_Ack_SR,
  /* Interfaces::InputDMI::Driver_Ack_TR */ kcg_bool *Driver_Ack_TR,
  /* Interfaces::InputDMI::Driver_Ack_UN */ kcg_bool *Driver_Ack_UN,
  /* Interfaces::InputDMI::Driver_Req_Exit_SH */ kcg_bool *Driver_Req_Exit_SH,
  /* Interfaces::InputDMI::Driver_Req_NL */ kcg_bool *Driver_Req_NL,
  /* Interfaces::InputDMI::Driver_Req_Override */ kcg_bool *Driver_Req_Override,
  /* Interfaces::InputDMI::Driver_Req_SH */ kcg_bool *Driver_Req_SH,
  /* Interfaces::InputDMI::Driver_Req_Start */ kcg_bool *Driver_Req_Start,
  /* Interfaces::InputDMI::ETCS_Isolated */ kcg_bool *ETCS_Isolated);

#endif /* _InputDMI_Interfaces_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InputDMI_Interfaces.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FilterSequence_InformationFilte.h"

/* InformationFilter_Pkg::FilterSequence */
void FilterSequence_InformationFilte(
  /* InformationFilter_Pkg::FilterSequence::message */ ReceivedMessage_T_Common_Types_ *message,
  /* InformationFilter_Pkg::FilterSequence::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FilterSequence::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  /* InformationFilter_Pkg::FilterSequence::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::FilterSequence::inMode */ M_MODE inMode,
  /* InformationFilter_Pkg::FilterSequence::outMessage */ ReceivedMessage_T_Common_Types_ *outMessage,
  /* InformationFilter_Pkg::FilterSequence::bufferMessage */ ReceivedMessage_T_Common_Types_ *bufferMessage,
  /* InformationFilter_Pkg::FilterSequence::storeInBuffer */ kcg_bool *storeInBuffer)
{
  /* InformationFilter_Pkg::FilterSequence::_L6 */
  static ReceivedMessage_T_Common_Types_ _L6;
  /* InformationFilter_Pkg::FilterSequence::_L7 */
  static ReceivedMessage_T_Common_Types_ _L7;
  /* InformationFilter_Pkg::FilterSequence::_L8 */
  static kcg_bool _L8;
  /* InformationFilter_Pkg::FilterSequence::_L9 */
  static ReceivedMessage_T_Common_Types_ _L9;
  /* InformationFilter_Pkg::FilterSequence::_L11 */
  static kcg_bool _L11;
  
  /* 1 */
  FirstFilter_InformationFilter_P(
    message,
    inLevel,
    inFilterEvents,
    &_L6,
    &_L7,
    &_L8);
  /* 1 */
  SecondFilter_InformationFilter_(
    &_L6,
    &_L7,
    inSupervisingDevice,
    &_L11,
    bufferMessage,
    &_L9);
  /* 1 */ if (_L9.valid) {
    /* 1 */ ThirdFilter_InformationFilter_P(&_L9, inMode, outMessage);
  }
  else {
    kcg_copy_ReceivedMessage_T_Comm(outMessage, &_L9);
  }
  *storeInBuffer = _L8 | _L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FilterSequence_InformationFilte.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */


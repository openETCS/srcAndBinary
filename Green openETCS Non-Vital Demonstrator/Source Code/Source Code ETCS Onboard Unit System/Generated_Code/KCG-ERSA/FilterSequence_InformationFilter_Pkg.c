/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FilterSequence_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::FilterSequence */
void FilterSequence_InformationFilter_Pkg(
  /* InformationFilter_Pkg::FilterSequence::message */ ReceivedMessage_T_Common_Types_Pkg *message,
  /* InformationFilter_Pkg::FilterSequence::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FilterSequence::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::FilterSequence::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::FilterSequence::inMode */ M_MODE inMode,
  /* InformationFilter_Pkg::FilterSequence::outMessage */ ReceivedMessage_T_Common_Types_Pkg *outMessage,
  /* InformationFilter_Pkg::FilterSequence::bufferMessage */ ReceivedMessage_T_Common_Types_Pkg *bufferMessage,
  /* InformationFilter_Pkg::FilterSequence::storeInBuffer */ kcg_bool *storeInBuffer)
{
  /* InformationFilter_Pkg::FilterSequence::_L6 */ ReceivedMessage_T_Common_Types_Pkg _L6;
  /* InformationFilter_Pkg::FilterSequence::_L7 */ ReceivedMessage_T_Common_Types_Pkg _L7;
  /* InformationFilter_Pkg::FilterSequence::_L8 */ kcg_bool _L8;
  /* InformationFilter_Pkg::FilterSequence::_L9 */ ReceivedMessage_T_Common_Types_Pkg _L9;
  /* InformationFilter_Pkg::FilterSequence::_L11 */ kcg_bool _L11;
  
  /* 1 */
  FirstFilter_InformationFilter_Pkg_FirstFilter(
    message,
    inLevel,
    inFilterEvents,
    &_L6,
    &_L7,
    &_L8);
  /* 1 */
  SecondFilter_InformationFilter_Pkg_SecondFilter(
    &_L6,
    &_L7,
    inSupervisingDevice,
    &_L11,
    bufferMessage,
    &_L9);
  /* 1 */ if (_L9.valid) {
    /* 1 */
    ThirdFilter_InformationFilter_Pkg_ThirdFilter(&_L9, inMode, outMessage);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessage, &_L9);
  }
  *storeInBuffer = _L8 | _L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FilterSequence_InformationFilter_Pkg.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "keepP42_EVC_Support_Pkg.h"

void keepP42_reset_EVC_Support_Pkg(outC_keepP42_EVC_Support_Pkg *outC)
{
  outC->init = kcg_true;
}

/* EVC_Support_Pkg::keepP42 */
void keepP42_EVC_Support_Pkg(
  /* EVC_Support_Pkg::keepP42::fromTrack */ReceivedMessage_T_Common_Types_Pkg *fromTrack,
  outC_keepP42_EVC_Support_Pkg *outC)
{
  /* EVC_Support_Pkg::keepP42::_L3 */
  static kcg_bool _L3;
  /* EVC_Support_Pkg::keepP42::_L6 */
  static kcg_bool _L6;
  
  if (outC->init) {
    _L6 = kcg_false;
  }
  else {
    _L6 = outC->storeMsg;
  }
  _L3 = (*fromTrack).BG_Common_Header.nid_bg == 353;
  if ((*fromTrack).valid & !_L3 & _L6) {
    outC->storeMsg = kcg_false;
  }
  else if (_L3) {
    outC->storeMsg = kcg_true;
  }
  else {
    outC->storeMsg = _L6;
  }
  if (_L3) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->store, fromTrack);
  }
  else if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->store,
      (ReceivedMessage_T_Common_Types_Pkg *) &cNoTrackMsg_EVC_Support_Pkg);
  }
  outC->init = kcg_false;
  if (outC->storeMsg) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->toMoRC, &outC->store);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->toMoRC, fromTrack);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** keepP42_EVC_Support_Pkg.c
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */


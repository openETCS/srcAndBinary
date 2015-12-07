/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetValidBasics_xdebugSupport.h"

/* xdebugSupport_Pkg::packetValidBasics */
void packetValidBasics_xdebugSupport(
  /* xdebugSupport_Pkg::packetValidBasics::accu */ kcg_bool accu,
  /* xdebugSupport_Pkg::packetValidBasics::element */ MetadataElement_T_Common_Types_ *element,
  /* xdebugSupport_Pkg::packetValidBasics::which_ID */ NID_PACKET which_ID,
  /* xdebugSupport_Pkg::packetValidBasics::continue */ kcg_bool *_1_continue,
  /* xdebugSupport_Pkg::packetValidBasics::packtIsValid */ kcg_bool *packtIsValid)
{
  *packtIsValid = (*element).valid & (/* 1 */
      T_extract_nid_packet_from_metad((*element).nid_packet) == which_ID);
  *_1_continue = ((*element).nid_packet != 0) & !*packtIsValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** packetValidBasics_xdebugSupport.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */


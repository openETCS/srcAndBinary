/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetValid_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::packetValid */
kcg_bool packetValid_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::packetValid::packetHeader */ Metadata_T_Common_Types_Pkg *packetHeader,
  /* xdebugSupport_Pkg::packetValid::which_ID */ NID_PACKET which_ID)
{
  /* xdebugSupport_Pkg::packetValid */
  static kcg_bool acc;
  /* xdebugSupport_Pkg::packetValid */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* xdebugSupport_Pkg::packetValid::isValid */
  static kcg_bool isValid;
  
  isValid = kcg_true;
  /* 1 */ for (i = 0; i < 30; i++) {
    acc = isValid;
    /* 1 */
    packetValidBasics_xdebugSupport(
      acc,
      &(*packetHeader)[i],
      which_ID,
      &cond_iterw,
      &isValid);
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  return isValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** packetValid_xdebugSupport_Pkg.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */


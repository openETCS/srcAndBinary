/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "packetValid_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::packetValid */
kcg_bool packetValid_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::packetValid::packetHeader */ Metadata_T_Common_Types_Pkg *packetHeader,
  /* xdebugSupport_Pkg::packetValid::which_ID */ NID_PACKET which_ID)
{
  /* xdebugSupport_Pkg::packetValid */ kcg_bool acc;
  /* xdebugSupport_Pkg::packetValid */ kcg_bool cond_iterw;
  kcg_int i;
  /* xdebugSupport_Pkg::packetValid::isValid */ kcg_bool isValid;
  
  isValid = kcg_true;
  /* 1 */ for (i = 0; i < 30; i++) {
    acc = isValid;
    /* 1 */
    packetValidBasics_xdebugSupport_Pkg(
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
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */


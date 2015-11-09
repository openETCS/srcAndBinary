/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getP41Level_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::getP41Level */
M_LEVEL getP41Level_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::getP41Level::p41 */P41_LevelTransistionOrders_T_Packet_Types_Pkg *p41)
{
  /* xdebugSupport_Pkg::getP41Level::p41_level */
  static M_LEVEL p41_level;
  
  switch ((*p41)[0].m_leveltr) {
    case M_LEVELTR_Level_0 :
      p41_level = M_LEVEL_Level_0;
      break;
    case M_LEVELTR_Level_NTC_specified_by_NID_NTC :
      p41_level = M_LEVEL_Level_NTC_specified_by_NID_NTC;
      break;
    case M_LEVELTR_Level_1 :
      p41_level = M_LEVEL_Level_1;
      break;
    case M_LEVELTR_Level_2 :
      p41_level = M_LEVEL_Level_2;
      break;
    case M_LEVELTR_Level_3 :
      p41_level = M_LEVEL_Level_3;
      break;
    
  }
  return p41_level;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getP41Level_xdebugSupport_Pkg.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */


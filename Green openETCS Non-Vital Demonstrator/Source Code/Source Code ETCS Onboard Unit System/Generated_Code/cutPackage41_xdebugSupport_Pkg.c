/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-19T12:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "cutPackage41_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::cutPackage41 */
void cutPackage41_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::cutPackage41::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::cutPackage41::P15 */P15_Level23MovementAuthorities_T_Packet_Types_Pkg *P15,
  /* xdebugSupport_Pkg::cutPackage41::P41 */P41_LevelTransistionOrders_T_Packet_Types_Pkg *P41,
  /* xdebugSupport_Pkg::cutPackage41::messageAfterCut */ReceivedMessage_T_Common_Types_Pkg *messageAfterCut)
{
  /* xdebugSupport_Pkg::cutPackage41::IfBlock1::then::_L12 */
  static P15_Level23MovementAuthorities_T_Packet_Types_Pkg _L12_IfBlock1;
  /* xdebugSupport_Pkg::cutPackage41::IfBlock1::then::_L3 */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _L3_IfBlock1;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(messageAfterCut, actualMessage);
  if ((*messageAfterCut).valid) {
    /* 1 */
    Read_P015_Legacy_TM_specific(&(*messageAfterCut).packets, &_L12_IfBlock1);
    /* 1 */
    Read_P041_Legacy_TM_specific(&(*messageAfterCut).packets, &_L3_IfBlock1);
    if (_L12_IfBlock1[0].valid) {
      kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
        P15,
        &_L12_IfBlock1);
    }
    else {
      kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
        P15,
        (P15_Level23MovementAuthorities_T_Packet_Types_Pkg *)
          &cNoP15_xdebugSupport_Pkg);
    }
    if (_L3_IfBlock1[0].valid) {
      kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
        P41,
        &_L3_IfBlock1);
    }
    else {
      kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
        P41,
        (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
          &cNoP41_xdebugSupport_Pkg);
    }
  }
  else {
    kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
      P15,
      (P15_Level23MovementAuthorities_T_Packet_Types_Pkg *)
        &cNoP15_xdebugSupport_Pkg);
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      P41,
      (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
        &cNoP41_xdebugSupport_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** cutPackage41_xdebugSupport_Pkg.c
** Generation date: 2015-08-19T12:47:26
*************************************************************$ */


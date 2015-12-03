/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P042_onboard_legacy_to_int_TM_conversions.h"

/* TM_conversions::C_P042_onboard_legacy_to_int */
void C_P042_onboard_legacy_to_int_TM_conversions(
  /* TM_conversions::C_P042_onboard_legacy_to_int::PacketData */ P42_SessionManagement_T_Packet_Types_Pkg *PacketData,
  /* TM_conversions::C_P042_onboard_legacy_to_int::P042_int */ P042_trackside_int_T_TM *P042_int)
{
  (*P042_int).valid = (*PacketData).valid;
  (*P042_int).NID_PACKET = 42;
  (*P042_int).L_PACKET = 0;
  (*P042_int).Q_DIR = /* 1 */
    CAST_Q_DIR_to_int_TM_conversions((*PacketData).q_dir);
  (*P042_int).Q_RBC = /* 1 */
    CAST_Q_RBC_to_int_TM_conversions((*PacketData).q_rbc);
  (*P042_int).NID_C = /* 1 */
    CAST_NID_C_to_int_TM_conversions((*PacketData).nid_c);
  (*P042_int).NID_RBC = /* 1 */
    CAST_NID_RBC_to_int_TM_conversions((*PacketData).nid_rbc);
  (*P042_int).NID_RADIO = /* 1 */
    CAST_NID_RADIO_to_int_TM_conversions((*PacketData).nid_radio);
  (*P042_int).Q_SLEEPSESSION = /* 1 */
    CAST_Q_SLEEPSESSION_to_int_TM_conversions((*PacketData).q_sleepsession);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P042_onboard_legacy_to_int_TM_conversions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P042_onboard_legacy_to_int_TM.h"

/* TM_conversions::C_P042_onboard_legacy_to_int */
void C_P042_onboard_legacy_to_int_TM(
  /* TM_conversions::C_P042_onboard_legacy_to_int::PacketData */ P42_SessionManagement_T_Packet_ *PacketData,
  /* TM_conversions::C_P042_onboard_legacy_to_int::P042_int */ P042_trackside_int_T_TM *P042_int)
{
  (*P042_int).valid = (*PacketData).valid;
  (*P042_int).NID_PACKET = 42;
  (*P042_int).L_PACKET = 0;
  (*P042_int).Q_DIR = /* 1 */
    CAST_Q_DIR_to_int_TM_conversion((*PacketData).q_dir);
  (*P042_int).Q_RBC = /* 1 */
    CAST_Q_RBC_to_int_TM_conversion((*PacketData).q_rbc);
  (*P042_int).NID_C = /* 1 */
    CAST_NID_C_to_int_TM_conversion((*PacketData).nid_c);
  (*P042_int).NID_RBC = /* 1 */
    CAST_NID_RBC_to_int_TM_conversi((*PacketData).nid_rbc);
  (*P042_int).NID_RADIO = /* 1 */
    CAST_NID_RADIO_to_int_TM_conver((*PacketData).nid_radio);
  (*P042_int).Q_SLEEPSESSION = /* 1 */
    CAST_Q_SLEEPSESSION_to_int_TM_c((*PacketData).q_sleepsession);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P042_onboard_legacy_to_int_TM.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */


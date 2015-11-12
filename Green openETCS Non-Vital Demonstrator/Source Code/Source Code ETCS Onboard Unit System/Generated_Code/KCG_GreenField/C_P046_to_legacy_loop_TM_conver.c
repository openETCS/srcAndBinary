/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_loop_TM_conver.h"

/* TM_conversions::C_P046_to_legacy_loop */
void C_P046_to_legacy_loop_TM_conver(
  /* TM_conversions::C_P046_to_legacy_loop::i */ kcg_int i,
  /* TM_conversions::C_P046_to_legacy_loop::q_dir_in */ Q_DIR q_dir_in,
  /* TM_conversions::C_P046_to_legacy_loop::P046_section_in */ P046_OBU_sectionlist_enum_T_TM *P046_section_in,
  /* TM_conversions::C_P046_to_legacy_loop::P046_legacy_out */ P46_ConditionalLevelTransitionO *P046_legacy_out)
{
  /* TM_conversions::C_P046_to_legacy_loop::_L21 */
  static P046_section_enum_T_TM _L21;
  
  (*P046_legacy_out).q_dir = q_dir_in;
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P046_section_enum_T_TM(&_L21, &(*P046_section_in)[i]);
  }
  else {
    kcg_copy_P046_section_enum_T_TM(
      &_L21,
      (P046_section_enum_T_TM *) &DEFAULT_P046_OBU_section_TM);
  }
  (*P046_legacy_out).valid = _L21.valid;
  (*P046_legacy_out).m_leveltr = _L21.m_leveltr;
  (*P046_legacy_out).nid_ntc = _L21.nid_ntc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_to_legacy_loop_TM_conver.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */


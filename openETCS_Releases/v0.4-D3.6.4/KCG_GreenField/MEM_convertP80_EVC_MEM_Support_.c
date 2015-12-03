/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_convertP80_EVC_MEM_Support_.h"

/* EVC_MEM_Support_Pkg::MEM_convertP80 */
void MEM_convertP80_EVC_MEM_Support_(
  /* EVC_MEM_Support_Pkg::MEM_convertP80::P080_OBU */ P080_OBU_T_TM *P080_OBU,
  /* EVC_MEM_Support_Pkg::MEM_convertP80::p80 */ P80_ModeProfiles_T_Packet_Types *p80)
{
  /* EVC_MEM_Support_Pkg::MEM_convertP80 */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* EVC_MEM_Support_Pkg::MEM_convertP80::_L4 */
  static kcg_int _L4;
  
  /* 1 */ if ((*P080_OBU).valid) {
    /* 1 */ for (i = 0; i < 3; i++) {
      /* 1 */
      MEM_convertP80_element_EVC_MEM_(
        &(*P080_OBU).sections[i + 0],
        (*P080_OBU).q_dir,
        (*P080_OBU).q_scale,
        &cond_iterw,
        &(*p80)[i]);
      _L4 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L4 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L4; i < 3; i++) {
    kcg_copy_P80_ModeProfile_T_Pack(
      &(*p80)[i],
      (P80_ModeProfile_T_Packet_Types_ *) &Default_P80_element_EVC_MEM_Sup);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_convertP80_EVC_MEM_Support_.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */


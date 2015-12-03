/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_convertP80_element_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_convertP80_element */
void MEM_convertP80_element_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::MEM_convertP80_element::p80TM */ P080_section_enum_T_TM *p80TM,
  /* EVC_MEM_Support_Pkg::MEM_convertP80_element::qDir */ Q_DIR qDir,
  /* EVC_MEM_Support_Pkg::MEM_convertP80_element::qScale */ Q_SCALE qScale,
  /* EVC_MEM_Support_Pkg::MEM_convertP80_element::continue */ kcg_bool *_1_continue,
  /* EVC_MEM_Support_Pkg::MEM_convertP80_element::p80 */ P80_ModeProfile_T_Packet_Types_Pkg *p80)
{
  (*p80).q_dir = qDir;
  (*p80).q_scale = qScale;
  (*p80).m_mamode = (*p80TM).m_mamode;
  (*p80).v_mamode = (*p80TM).v_mamode;
  (*p80).q_mamode = (*p80TM).q_mamode;
  *_1_continue = (*p80TM).valid;
  (*p80).valid = *_1_continue;
  (*p80).d_mamode = /* 1 */
    scaledDistance_2_distance_InputManagement(qScale, (*p80TM).d_mamode);
  (*p80).l_mamode = /* 2 */
    scaledDistance_2_distance_InputManagement(qScale, (*p80TM).l_mamode);
  (*p80).l_ackmamode = /* 3 */
    scaledDistance_2_distance_InputManagement(qScale, (*p80TM).l_ackmamode);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_convertP80_element_EVC_MEM_Support_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */


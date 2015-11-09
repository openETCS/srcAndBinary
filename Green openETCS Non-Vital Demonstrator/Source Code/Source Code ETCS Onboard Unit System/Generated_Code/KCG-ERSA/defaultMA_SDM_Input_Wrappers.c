/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "defaultMA_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::defaultMA */
void defaultMA_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::defaultMA::Ma_out */MA_section_real_T_TargetManagement_types *Ma_out)
{
  (*Ma_out).valid = kcg_false;
  (*Ma_out).v_main = 0.0;
  (*Ma_out).EOA.Location = 0.0;
  (*Ma_out).EOA.TargetSpeed = 0.0;
  (*Ma_out).DP_valid = kcg_false;
  (*Ma_out).DangerPoint = 0.0;
  (*Ma_out).OL_valid = kcg_false;
  (*Ma_out).Overlap = 0.0;
  (*Ma_out).q_calculate_release = kcg_false;
  (*Ma_out).ReleaseSpeed = 0.0;
  (*Ma_out).level = MA_L23_TrackAtlasTypes;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** defaultMA_SDM_Input_Wrappers.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */


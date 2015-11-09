/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage */
void C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::section */P011_voltage_TM_TrainToTrack *section,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::section_arrays */P011_voltage_section_array_T_TM_TrainToTrack *section_arrays)
{
  (*section_arrays)[0] = /* 1 */
    CAST_M_VOLTAGE_to_int_TM_conversions((*section).m_voltage);
  (*section_arrays)[1] = /* 1 */
    CAST_NID_CTRACTION_to_int_TM_conversions((*section).nid_ctraction);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */


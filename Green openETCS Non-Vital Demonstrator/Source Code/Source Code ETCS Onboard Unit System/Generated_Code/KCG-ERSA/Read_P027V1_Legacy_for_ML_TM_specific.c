/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"

/* TM_specific::Read_P027V1_Legacy_for_ML */
void Read_P027V1_Legacy_for_ML_TM_specific(
  /* TM_specific::Read_P027V1_Legacy_for_ML::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P027V1_Legacy_for_ML::P027_legacy_out */P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *P027_legacy_out)
{
  /* TM_specific::Read_P027V1_Legacy_for_ML::_L2 */
  static P027V1_OBU_T_TM_baseline2 _L2;
  /* TM_specific::Read_P027V1_Legacy_for_ML::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P027V1_TM_baseline2(Message_IN, &_L1, &_L2);
  if (_L1) {
    /* 1 */
    C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
      &_L2,
      P027_legacy_out);
  }
  else {
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      P027_legacy_out,
      (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *)
        &DEFAULT_P027V1_legacy_TM_baseline2);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_Legacy_for_ML_TM_specific.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */


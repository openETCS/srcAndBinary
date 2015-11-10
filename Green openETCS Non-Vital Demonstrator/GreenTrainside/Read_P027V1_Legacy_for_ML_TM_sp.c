/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_Legacy_for_ML_TM_sp.h"

/* TM_specific::Read_P027V1_Legacy_for_ML */
void Read_P027V1_Legacy_for_ML_TM_sp(
  /* TM_specific::Read_P027V1_Legacy_for_ML::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_specific::Read_P027V1_Legacy_for_ML::P027_legacy_out */ P27_InternationalStaticSpeedPro *P027_legacy_out)
{
  /* TM_specific::Read_P027V1_Legacy_for_ML::_L2 */
  static P027V1_OBU_T_TM_baseline2 _L2;
  /* TM_specific::Read_P027V1_Legacy_for_ML::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P027V1_TM_baseline2(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P027V1_legacy_for_ML_export_T(&_L2, P027_legacy_out);
  }
  else {
    kcg_copy_P27_InternationalStati(
      P027_legacy_out,
      (P27_InternationalStaticSpeedPro *) &DEFAULT_P027V1_legacy_TM_baseli);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P027V1_Legacy_for_ML_TM_sp.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */


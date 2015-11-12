/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NC_TRAIN_to_int_TM_convers.h"

/* TM_conversions::CAST_NC_TRAIN_to_int */
kcg_int CAST_NC_TRAIN_to_int_TM_convers(
  /* TM_conversions::CAST_NC_TRAIN_to_int::nc_train */ NC_TRAIN nc_train)
{
  /* TM_conversions::CAST_NC_TRAIN_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_TRAIN_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_TRAIN_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_TRAIN_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_NC_TRAIN_to_int::nc_train_int */
  static kcg_int nc_train_int;
  
  IfBlock1_clock = nc_train == ENUM_NC_TRAIN_no_train_categroy;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    nc_train_int = INT_NC_TRAIN_no_train_categroy_;
  }
  else {
    _2_else_clock_IfBlock1 = nc_train == ENUM_NC_TRAIN_freight_P_TM_conv;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      nc_train_int = INT_NC_TRAIN_freight_P_TM_conve;
    }
    else {
      _1_else_clock_IfBlock1 = nc_train == ENUM_NC_TRAIN_freight_G_TM_conv;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        nc_train_int = INT_NC_TRAIN_freight_G_TM_conve;
      }
      else {
        else_clock_IfBlock1 = nc_train == ENUM_NC_TRAIN_passenger_TM_conv;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          nc_train_int = INT_NC_TRAIN_passenger_TM_conve;
        }
        else {
          nc_train_int = INT_NC_TRAIN_no_train_categroy_;
        }
      }
    }
  }
  return nc_train_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NC_TRAIN_to_int_TM_convers.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */


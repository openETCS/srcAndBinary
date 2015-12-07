/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NC_TRAIN_TM_convers.h"

/* TM_conversions::CAST_Int_to_NC_TRAIN */
NC_TRAIN CAST_Int_to_NC_TRAIN_TM_convers(
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train_int */ kcg_int nc_train_int)
{
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN nc_train;
  
  IfBlock1_clock = nc_train_int == INT_NC_TRAIN_no_train_categroy_;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    nc_train = ENUM_NC_TRAIN_no_train_categroy;
  }
  else {
    _2_else_clock_IfBlock1 = nc_train_int == INT_NC_TRAIN_freight_P_TM_conve;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      nc_train = ENUM_NC_TRAIN_freight_P_TM_conv;
    }
    else {
      _1_else_clock_IfBlock1 = nc_train_int == INT_NC_TRAIN_freight_G_TM_conve;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        nc_train = ENUM_NC_TRAIN_freight_G_TM_conv;
      }
      else {
        else_clock_IfBlock1 = nc_train_int == INT_NC_TRAIN_passenger_TM_conve;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          nc_train = ENUM_NC_TRAIN_passenger_TM_conv;
        }
        else {
          nc_train = ENUM_NC_TRAIN_no_train_categroy;
        }
      }
    }
  }
  return nc_train;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NC_TRAIN_TM_convers.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */


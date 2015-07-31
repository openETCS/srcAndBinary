/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter */
kcg_int TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter::TrainCatEnum */NC_TRAIN TrainCatEnum)
{
  /* DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter::TrainCatIndex */
  static kcg_int TrainCatIndex;
  
  switch (TrainCatEnum) {
    case NC_TRAIN_Passenger_train :
      TrainCatIndex = 2;
      break;
    case NC_TRAIN_Freight_train_braked_in_P_position :
      TrainCatIndex = 3;
      break;
    case NC_TRAIN_Freight_train_braked_in_G_position :
      TrainCatIndex = 4;
      break;
    
    default :
      TrainCatIndex = 1;
  }
  return TrainCatIndex;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */


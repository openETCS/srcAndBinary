/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intSetIterator_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intSetIterator */
void Kv_intSetIterator_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intSetIterator::akku */ kcg_bool akku,
  /* SDMConversionModelPkg::Kv_intSetIterator::Kv_intSet */ nvkvintset_T_Packet_Types_Pkg *Kv_intSet,
  /* SDMConversionModelPkg::Kv_intSetIterator::CTrain */ NC_TRAIN CTrain,
  /* SDMConversionModelPkg::Kv_intSetIterator::goOn */ kcg_bool *goOn,
  /* SDMConversionModelPkg::Kv_intSetIterator::akku_out */ kcg_bool *akku_out)
{
  /* SDMConversionModelPkg::Kv_intSetIterator */ Q_NVKVINTSET tmp;
  
  *akku_out = akku;
  switch (CTrain) {
    case NC_TRAIN_Passenger_train :
      tmp = Q_NVKVINTSET_Conventional_passenger_trains;
      break;
    
    default :
      tmp = Q_NVKVINTSET_Freight_trains;
  }
  *goOn = !((*Kv_intSet).valid & ((*Kv_intSet).q_nvkvintset == tmp));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intSetIterator_SDMConversionModelPkg.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */


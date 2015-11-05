/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator */
void getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::accumulator */ positionedBG_T_TrainPosition_Types_Pck *accumulator,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_c */ NID_C nid_c,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_lrbg */ NID_LRBG nid_lrbg,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::positionedBG */ positionedBG_T_TrainPosition_Types_Pck *positionedBG,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::LRBG */ positionedBG_T_TrainPosition_Types_Pck *LRBG)
{
  /* 1 */ if ((nid_c == (*positionedBG).nid_c) & (nid_lrbg ==
      (*positionedBG).nid_bg) & (*positionedBG).valid) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(LRBG, positionedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(LRBG, accumulator);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGForRadioMessageIterator_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */


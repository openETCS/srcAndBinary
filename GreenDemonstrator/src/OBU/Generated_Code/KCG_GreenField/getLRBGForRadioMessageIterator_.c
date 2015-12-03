/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessageIterator_.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator */
void getLRBGForRadioMessageIterator_(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::accumulator */ positionedBG_T_TrainPosition_Ty *accumulator,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_c */ NID_C nid_c,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_lrbg */ NID_LRBG nid_lrbg,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::positionedBG */ positionedBG_T_TrainPosition_Ty *positionedBG,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::LRBG */ positionedBG_T_TrainPosition_Ty *LRBG)
{
  /* 1 */ if ((nid_c == (*positionedBG).nid_c) & (nid_lrbg ==
      (*positionedBG).nid_bg) & (*positionedBG).valid) {
    kcg_copy_positionedBG_T_TrainPo(LRBG, positionedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(LRBG, accumulator);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGForRadioMessageIterator_.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocation_Calcu.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation */
void improveUnlinkedBGLocation_Calcu(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_2 */ positionedBG_T_TrainPosition_Ty *passedLinkedBG_2,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_1 */ positionedBG_T_TrainPosition_Ty *passedLinkedBG_1,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_in */ positionedBG_T_TrainPosition_Ty *unlinkedBG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_out */ positionedBG_T_TrainPosition_Ty *unlinkedBG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L31 */
  static kcg_bool _L31;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L30 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L30;
  
  /* 1 */
  odoLoc_2_refLocations_BasicLoca(
    &(*passedLinkedBG_2).location,
    &(*passedLinkedBG_1).location,
    &(*passedLinkedBG_2).infoFromPassing.BG_Header.bgPosition.odo,
    &(*passedLinkedBG_1).infoFromPassing.BG_Header.bgPosition.odo,
    &(*unlinkedBG_in).infoFromPassing.BG_Header.bgPosition.odo,
    &tmp);
  /* 1 */
  overlapOf_2_Locations_BasicLoca(
    &tmp,
    &(*unlinkedBG_in).location,
    &_L30,
    &_L31);
  kcg_copy_positionedBG_T_TrainPo(unlinkedBG_out, unlinkedBG_in);
  /* 1 */ if ((*passedLinkedBG_2).valid & ((*passedLinkedBG_2).q_link ==
      Q_LINK_Linked) & (*passedLinkedBG_2).infoFromPassing.valid &
    !kcg_comp_positionedBG_T_TrainPo(passedLinkedBG_2, passedLinkedBG_1) &
    ((*passedLinkedBG_1).valid & ((*passedLinkedBG_1).q_link == Q_LINK_Linked) &
      (*passedLinkedBG_1).infoFromPassing.valid) & ((*unlinkedBG_in).valid &
      ((*unlinkedBG_in).q_link == Q_LINK_Unlinked)) & _L31) {
    kcg_copy_LocWithInAcc_T_Obu_Bas(&(*unlinkedBG_out).location, &_L30);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_Bas(
      &(*unlinkedBG_out).location,
      &(*unlinkedBG_in).location);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improveUnlinkedBGLocation_Calcu.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */


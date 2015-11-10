/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendBalises.h"

void SendBalises_reset(outC_SendBalises *outC)
{
  /* 1 */ TrackClose_reset_InfraLib(&outC->_3_Context_1);
  /* 1 */
  Balises0001_Amstel_UB_Sig_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_2_Context_1);
  /* 1 */ TrackDiscontinuity_reset_InfraLib(&outC->_1_Context_1);
  /* 1 */ TrackInit_reset_InfraLib(&outC->Context_1);
}

/* SendBalises */
void SendBalises(
  /* SendBalises::TrainPosSim_in */kcg_real TrainPosSim_in,
  outC_SendBalises *outC)
{
  outC->_L16 = TrainPosSim_in;
  /* 1 */ TrackInit_InfraLib(outC->_L16, 0, &outC->Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L15,
    &outC->Context_1.SectionData_out);
  /* 1 */
  TrackDiscontinuity_InfraLib(&outC->_L15, 104775, 105650, &outC->_1_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L13,
    &outC->_1_Context_1.SectionData_out);
  /* 1 */
  Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L13,
    &outC->_2_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L1,
    &outC->_2_Context_1.SectionData_out);
  /* 1 */ TrackClose_InfraLib(&outC->_L1, &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L17,
    &outC->_3_Context_1.BaliseMessage);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BaliseMessage, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendBalises.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */


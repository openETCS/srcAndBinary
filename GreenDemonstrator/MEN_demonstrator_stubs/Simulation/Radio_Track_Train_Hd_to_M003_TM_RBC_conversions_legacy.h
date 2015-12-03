/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy_H_
#define _Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_003_T_TM_radio_messages /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::M003_out */ M003_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L1 */ _L1;
  M_VERSION /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L16 */ _L16;
  D_EMERGENCYSTOP /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L15 */ _L15;
  Q_DIR /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L14 */ _L14;
  D_REF /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L13 */ _L13;
  T_TRAIN /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L12 */ _L12;
  D_SR /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L11 */ _L11;
  Q_SCALE /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L10 */ _L10;
  NID_EM /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L9 */ _L9;
  T_TRAIN /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L8 */ _L8;
  NID_LRBG /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L7 */ _L7;
  M_ACK /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L6 */ _L6;
  T_TRAIN /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L5 */ _L5;
  NID_MESSAGE /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L4 */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L3 */ _L3;
  kcg_int /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L2 */ _L2;
  M_003_T_TM_radio_messages /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L32 */ _L32;
  kcg_bool /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L33 */ _L33;
  kcg_int /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::_L34 */ _L34;
} outC_Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003 */
extern void Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::Radio_Track_Train_Hd_to_M003::RadioHeaderUniversalIn */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeaderUniversalIn,
  outC_Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy *outC);

extern void Radio_Track_Train_Hd_to_M003_reset_TM_RBC_conversions_legacy(
  outC_Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy *outC);

#endif /* _Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


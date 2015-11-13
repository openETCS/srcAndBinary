/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CmdTrainSupervisionStatus_SDM_C.h"

#ifndef KCG_USER_DEFINED_INIT
void CmdTrainSupervisionStatus_init_(outC_CmdTrainSupervisionStatus_ *outC)
{
  outC->revokedSB = kcg_true;
  outC->triggeredSB = kcg_true;
  outC->revokedEB = kcg_true;
  outC->triggeredEB = kcg_true;
  outC->revokedTCO = kcg_true;
  outC->triggeredTCO = kcg_true;
  outC->ebCmd = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->modeInterplay_state_nxt = SSM_st_CSM_modeInterplay;
  outC->RSM_state_nxt_modeInterplay_RSM = SSM_st_Init_modeInterplay_RSM_R;
  outC->SM4_state_nxt_modeInterplay_TSM = SSM_st_init_modeInterplay_TSM_S;
  outC->CSM_state_nxt_modeInterplay_CSM = SSM_st_Init_modeInterplay_CSM_C;
  outC->triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pk;
  outC->revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pk;
  outC->sdmType = CSM_SDM_Types_Pkg;
  outC->supVisStatus = Normal_Supervision_SDM_Types_Pk;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CmdTrainSupervisionStatus_reset(outC_CmdTrainSupervisionStatus_ *outC)
{
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::CmdTrainSupervisionStatus */
void CmdTrainSupervisionStatus_SDM_C(
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::SupervisedTargetsListUpdated */ kcg_bool SupervisedTargetsListUpdated,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::TrainData_int */ trainData_internal_t_SDM_Types_ *TrainData_int,
  outC_CmdTrainSupervisionStatus_ *outC)
{
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L102 */
  static kcg_bool _L102_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L78 */
  static kcg_bool _L78_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L58 */
  static kcg_bool _L58_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c5 */
  static kcg_bool c5_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c4 */
  static kcg_bool c4_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c3 */
  static kcg_bool c3_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c1 */
  static kcg_bool c1_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t5 */
  static kcg_bool t5_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t4 */
  static kcg_bool t4_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t3 */
  static kcg_bool t3_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t2 */
  static kcg_bool t2_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t1 */
  static kcg_bool t1_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM CSM_state_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM CSM_state_sel_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::WarningStatus */
  static kcg_bool br_1_guard_modeInterplay_CSM_CS;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus */
  static kcg_bool _8_br_1_guard_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus */
  static kcg_bool _9_br_1_guard_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool _10_br_1_guard_modeInterplay_CS;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_2_guard_modeInterplay_CSM_CS;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_6_guard_modeInterplay_CSM_CS;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L2 */
  static TSM_triggerCond_T_SDM_Commands_ _L2_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L1 */
  static TSM_revokeCond_T_SDM_Commands_P _L1_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t10_12 */
  static kcg_bool t10_12_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t7_9 */
  static kcg_bool t7_9_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t4_6 */
  static kcg_bool t4_6_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM SM4_state_sel_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool _1_br_1_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool _2_br_2_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool _3_br_1_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool _4_br_2_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool _5_br_1_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool _6_br_1_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool _7_br_3_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::WS_OS2IS */
  static kcg_bool WS_OS2IS_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::US_NS2IS */
  static kcg_bool US_NS2IS_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::notInt2Int */
  static kcg_bool notInt2Int_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::t2 */
  static kcg_bool t2_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::t1 */
  static kcg_bool t1_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM RSM_state_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM RSM_state_sel_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_1_guard_modeInterplay_RSM_RS;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_2_guard_modeInterplay_RSM_RS;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_P last_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool last_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool last_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg last_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay modeInterplay_state_sel;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay modeInterplay_state_act;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool modeInterplay_reset_act;
  
  /* 1 */
  CalcRSMandPreindicationLocation(
    locations,
    trainLocations,
    &br_3_guard_modeInterplay_TSM_SM,
    &_1_br_1_guard_modeInterplay_TSM);
  /* last_init_ck_triggeredEB */ if (outC->init3) {
    modeInterplay_state_sel = SSM_st_CSM_modeInterplay;
    last_sdmType = cSDM_Types_SDM_Commands_Pkg;
    last_status = cSupervisionStatus_SDM_Commands;
    last_revokedEB = kcg_false;
    outC->init3 = kcg_false;
    last_triggeredEB = kcg_false;
  }
  else {
    modeInterplay_state_sel = outC->modeInterplay_state_nxt;
    last_sdmType = outC->sdmType;
    last_status = outC->supVisStatus;
    last_revokedEB = outC->revokedEB;
    last_triggeredEB = outC->triggeredEB;
  }
  /* sel_modeInterplay */ switch (modeInterplay_state_sel) {
    case SSM_st_CSM_modeInterplay :
      br_2_guard_modeInterplay_TSM_SM = SupervisedTargetsListUpdated &
        _1_br_1_guard_modeInterplay_TSM;
      if (br_3_guard_modeInterplay_TSM_SM) {
        modeInterplay_reset_act = kcg_true;
        modeInterplay_state_act = SSM_st_TSM_modeInterplay;
      }
      else {
        if (br_2_guard_modeInterplay_TSM_SM) {
          modeInterplay_state_act = SSM_st_RSM_modeInterplay;
        }
        else {
          modeInterplay_state_act = SSM_st_CSM_modeInterplay;
        }
        modeInterplay_reset_act = br_2_guard_modeInterplay_TSM_SM;
      }
      break;
    case SSM_st_TSM_modeInterplay :
      br_1_guard_modeInterplay_TSM_SM = SupervisedTargetsListUpdated &
        !br_3_guard_modeInterplay_TSM_SM;
      if (_1_br_1_guard_modeInterplay_TSM) {
        modeInterplay_reset_act = kcg_true;
        modeInterplay_state_act = SSM_st_RSM_modeInterplay;
      }
      else {
        if (br_1_guard_modeInterplay_TSM_SM) {
          modeInterplay_state_act = SSM_st_CSM_modeInterplay;
        }
        else {
          modeInterplay_state_act = SSM_st_TSM_modeInterplay;
        }
        modeInterplay_reset_act = br_1_guard_modeInterplay_TSM_SM;
      }
      break;
    case SSM_st_RSM_modeInterplay :
      br_1_guard_modeInterplay_RSM_RS = SupervisedTargetsListUpdated &
        !br_3_guard_modeInterplay_TSM_SM;
      br_2_guard_modeInterplay_RSM_RS = SupervisedTargetsListUpdated &
        br_3_guard_modeInterplay_TSM_SM & !_1_br_1_guard_modeInterplay_TSM;
      if (br_1_guard_modeInterplay_RSM_RS) {
        modeInterplay_reset_act = kcg_true;
        modeInterplay_state_act = SSM_st_CSM_modeInterplay;
      }
      else {
        if (br_2_guard_modeInterplay_RSM_RS) {
          modeInterplay_state_act = SSM_st_TSM_modeInterplay;
        }
        else {
          modeInterplay_state_act = SSM_st_RSM_modeInterplay;
        }
        modeInterplay_reset_act = br_2_guard_modeInterplay_RSM_RS;
      }
      break;
    
  }
  outC->ebCmd = /* 1 */
    CommandTripBraking_SDM_Commands(trainLocations, mrdt, TrainData_int);
  /* act_modeInterplay */ switch (modeInterplay_state_act) {
    case SSM_st_RSM_modeInterplay :
      if (modeInterplay_reset_act) {
        outC->init = kcg_true;
      }
      /* init_RSM */ if (outC->init) {
        RSM_state_sel_modeInterplay_RSM = SSM_st_Init_modeInterplay_RSM_R;
      }
      else {
        RSM_state_sel_modeInterplay_RSM = outC->RSM_state_nxt_modeInterplay_RSM;
      }
      t1_modeInterplay_RSM = (*speeds).V_est <= (*speeds).V_release;
      t2_modeInterplay_RSM = !t1_modeInterplay_RSM;
      outC->triggeredSB = kcg_false;
      outC->revokedSB = kcg_false;
      US_NS2IS_modeInterplay_RSM = ((Undefined_Supervision_SDM_Types ==
            last_status) | (last_status == Normal_Supervision_SDM_Types_Pk)) &
        t1_modeInterplay_RSM;
      WS_OS2IS_modeInterplay_RSM = ((Warning_Supervision_SDM_Types_P ==
            last_status) | (last_status == Overspeed_Supervision_SDM_Types)) &
        t1_modeInterplay_RSM;
      notInt2Int_modeInterplay_RSM = (last_status !=
          Indication_Supervision_SDM_Type) & t2_modeInterplay_RSM &
        (last_status != Intervention_Supervision_SDM_Ty);
      outC->triggeredTCO = kcg_false;
      outC->revokedTCO = kcg_false;
      /* sel_RSM */ switch (RSM_state_sel_modeInterplay_RSM) {
        case SSM_st_InterventionStatus_modeI :
          outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
          /* guard_InterventionStatus */ if ((*speeds).OdoStandStill) {
            RSM_state_act_modeInterplay_RSM = SSM_st_IndicationStatus_modeInt;
            outC->revokedSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->revokedEB = kcg_true;
          }
          else {
            RSM_state_act_modeInterplay_RSM = SSM_st_InterventionStatus_modeI;
            outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->revokedEB = kcg_false;
          }
          outC->triggeredEB = kcg_false;
          break;
        case SSM_st_IndicationStatus_modeInt :
          outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
          outC->revokedEB = kcg_false;
          /* guard_IndicationStatus */ if (t2_modeInterplay_RSM) {
            RSM_state_act_modeInterplay_RSM = SSM_st_InterventionStatus_modeI;
            outC->triggeredSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->triggeredEB = kcg_true;
          }
          else {
            RSM_state_act_modeInterplay_RSM = SSM_st_IndicationStatus_modeInt;
            outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->triggeredEB = kcg_false;
          }
          break;
        case SSM_st_Init_modeInterplay_RSM_R :
          br_1_guard_modeInterplay_RSM_RS = last_status ==
            Indication_Supervision_SDM_Type;
          br_2_guard_modeInterplay_RSM_RS = last_status ==
            Intervention_Supervision_SDM_Ty;
          outC->revokedEB = kcg_false;
          /* guard_Init */ if (br_1_guard_modeInterplay_RSM_RS) {
            RSM_state_act_modeInterplay_RSM = SSM_st_IndicationStatus_modeInt;
            outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->triggeredEB = kcg_false;
          }
          else {
            if (br_2_guard_modeInterplay_RSM_RS) {
              RSM_state_act_modeInterplay_RSM = SSM_st_InterventionStatus_modeI;
            }
            else if (US_NS2IS_modeInterplay_RSM) {
              RSM_state_act_modeInterplay_RSM = SSM_st_IndicationStatus_modeInt;
            }
            else if (WS_OS2IS_modeInterplay_RSM) {
              RSM_state_act_modeInterplay_RSM = SSM_st_IndicationStatus_modeInt;
            }
            else if (notInt2Int_modeInterplay_RSM) {
              RSM_state_act_modeInterplay_RSM = SSM_st_InterventionStatus_modeI;
            }
            else {
              RSM_state_act_modeInterplay_RSM = SSM_st_Init_modeInterplay_RSM_R;
            }
            /* cb_anon_sm */ if (br_2_guard_modeInterplay_RSM_RS) {
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands;
              outC->triggeredEB = kcg_false;
            }
            else /* cb_anon_sm */ if (US_NS2IS_modeInterplay_RSM) {
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              outC->triggeredSupervisionStatus =
                Indication_Supervision_SDM_Type;
              outC->triggeredEB = kcg_false;
            }
            else /* cb_anon_sm */ if (WS_OS2IS_modeInterplay_RSM) {
              outC->revokedSupervisionStatus = last_status;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands;
              outC->triggeredEB = kcg_false;
            }
            else {
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              /* cb_anon_sm */ if (notInt2Int_modeInterplay_RSM) {
                outC->triggeredSupervisionStatus =
                  Intervention_Supervision_SDM_Ty;
                outC->triggeredEB = kcg_true;
              }
              else {
                outC->triggeredSupervisionStatus =
                  cSupervisionStatus_SDM_Commands;
                outC->triggeredEB = kcg_false;
              }
            }
          }
          break;
        
      }
      outC->modeInterplay_state_nxt = SSM_st_RSM_modeInterplay;
      /* act_RSM */ switch (RSM_state_act_modeInterplay_RSM) {
        case SSM_st_InterventionStatus_modeI :
          outC->sdmType = RSM_SDM_Types_Pkg;
          outC->supVisStatus = Intervention_Supervision_SDM_Ty;
          outC->RSM_state_nxt_modeInterplay_RSM =
            SSM_st_InterventionStatus_modeI;
          break;
        case SSM_st_IndicationStatus_modeInt :
          outC->sdmType = RSM_SDM_Types_Pkg;
          outC->supVisStatus = Indication_Supervision_SDM_Type;
          outC->RSM_state_nxt_modeInterplay_RSM =
            SSM_st_IndicationStatus_modeInt;
          break;
        case SSM_st_Init_modeInterplay_RSM_R :
          outC->sdmType = last_sdmType;
          outC->supVisStatus = cSupervisionStatus_SDM_Commands;
          outC->RSM_state_nxt_modeInterplay_RSM =
            SSM_st_Init_modeInterplay_RSM_R;
          break;
        
      }
      outC->init = kcg_false;
      break;
    case SSM_st_TSM_modeInterplay :
      if (modeInterplay_reset_act) {
        outC->init1 = kcg_true;
      }
      /* init_SM4 */ if (outC->init1) {
        SM4_state_sel_modeInterplay_TSM = SSM_st_init_modeInterplay_TSM_S;
      }
      else {
        SM4_state_sel_modeInterplay_TSM = outC->SM4_state_nxt_modeInterplay_TSM;
      }
      /* 1 */
      CalcRevokationCondForTSM_SDM_Co(
        speeds,
        locations,
        mrdt,
        trainLocations,
        floiIsSB1,
        &_L1_modeInterplay_TSM);
      /* 1 */
      CalcTriggerCondForTSM_SDM_Comma(
        speeds,
        locations,
        mrdt,
        trainLocations,
        floiIsSB1,
        &_L2_modeInterplay_TSM);
      t10_12_modeInterplay_TSM = _L2_modeInterplay_TSM.t10 |
        _L2_modeInterplay_TSM.t11 | _L2_modeInterplay_TSM.t12;
      t7_9_modeInterplay_TSM = _L2_modeInterplay_TSM.t7 |
        _L2_modeInterplay_TSM.t8 | _L2_modeInterplay_TSM.t9;
      t4_6_modeInterplay_TSM = _L2_modeInterplay_TSM.t4 |
        _L2_modeInterplay_TSM.t5 | _L2_modeInterplay_TSM.t6;
      /* sel_SM4 */ switch (SM4_state_sel_modeInterplay_TSM) {
        case SSM_st_Intervention_modeInterpl :
          br_1_guard_modeInterplay_TSM_SM = _L1_modeInterplay_TSM.r1 |
            _L1_modeInterplay_TSM.r2;
          outC->triggeredSB = kcg_false;
          outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
          outC->triggeredTCO = kcg_false;
          /* guard_Intervention */ if (br_1_guard_modeInterplay_TSM_SM) {
            SM4_state_act_modeInterplay_TSM = SSM_st_Normal_modeInterplay_TSM;
            outC->revokedSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->revokedSB = kcg_true;
            outC->revokedTCO = kcg_true;
          }
          else {
            if (_L1_modeInterplay_TSM.r0) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Normal_modeInterplay_TSM;
            }
            else if (_L1_modeInterplay_TSM.r3) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Indication_modeInterplay;
            }
            else {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            /* cb_anon_sm */ if (_L1_modeInterplay_TSM.r0) {
              outC->revokedSupervisionStatus = Intervention_Supervision_SDM_Ty;
              outC->revokedSB = kcg_false;
              outC->revokedTCO = kcg_false;
            }
            else /* cb_anon_sm */ if (_L1_modeInterplay_TSM.r3) {
              outC->revokedSupervisionStatus = Indication_Supervision_SDM_Type;
              outC->revokedSB = kcg_true;
              outC->revokedTCO = kcg_true;
            }
            else {
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              outC->revokedSB = kcg_false;
              outC->revokedTCO = kcg_false;
            }
          }
          break;
        case SSM_st_Warning_modeInterplay_TS :
          br_2_guard_modeInterplay_TSM_SM = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14;
          br_3_guard_modeInterplay_TSM_SM = _L1_modeInterplay_TSM.r1 |
            _L1_modeInterplay_TSM.r2;
          outC->triggeredTCO = kcg_false;
          /* guard_Warning */ if (t10_12_modeInterplay_TSM) {
            SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            outC->triggeredSB = kcg_true;
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->triggeredSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->revokedTCO = kcg_false;
          }
          else {
            if (br_2_guard_modeInterplay_TSM_SM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            else if (br_3_guard_modeInterplay_TSM_SM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Normal_modeInterplay_TSM;
            }
            else if (_L1_modeInterplay_TSM.r3) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Indication_modeInterplay;
            }
            else {
              SM4_state_act_modeInterplay_TSM = SSM_st_Warning_modeInterplay_TS;
            }
            outC->triggeredSB = kcg_false;
            /* cb_anon_sm */ if (br_2_guard_modeInterplay_TSM_SM) {
              outC->revokedSB = kcg_false;
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Ty;
              outC->revokedTCO = kcg_false;
            }
            else {
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands;
              /* cb_anon_sm */ if (br_3_guard_modeInterplay_TSM_SM) {
                outC->revokedSupervisionStatus =
                  Warning_Supervision_SDM_Types_P;
                outC->revokedSB = kcg_true;
                outC->revokedTCO = kcg_true;
              }
              else /* cb_anon_sm */ if (_L1_modeInterplay_TSM.r3) {
                outC->revokedSupervisionStatus =
                  Warning_Supervision_SDM_Types_P;
                outC->revokedSB = kcg_true;
                outC->revokedTCO = kcg_true;
              }
              else {
                outC->revokedSupervisionStatus =
                  cSupervisionStatus_SDM_Commands;
                outC->revokedSB = kcg_false;
                outC->revokedTCO = kcg_false;
              }
            }
          }
          break;
        case SSM_st_Overspeed_modeInterplay_ :
          _1_br_1_guard_modeInterplay_TSM = _L1_modeInterplay_TSM.r1 |
            _L1_modeInterplay_TSM.r2;
          _2_br_2_guard_modeInterplay_TSM = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14;
          /* guard_Overspeed */ if (_1_br_1_guard_modeInterplay_TSM) {
            SM4_state_act_modeInterplay_TSM = SSM_st_Normal_modeInterplay_TSM;
            outC->triggeredSB = kcg_false;
            outC->revokedSB = kcg_true;
            outC->revokedSupervisionStatus = Overspeed_Supervision_SDM_Types;
            outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->triggeredTCO = kcg_false;
            outC->revokedTCO = kcg_true;
          }
          else {
            if (_2_br_2_guard_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            else if (t10_12_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            else if (_L1_modeInterplay_TSM.r3) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Indication_modeInterplay;
            }
            else if (t7_9_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Warning_modeInterplay_TS;
            }
            else {
              SM4_state_act_modeInterplay_TSM = SSM_st_Overspeed_modeInterplay_;
            }
            /* cb_anon_sm */ if (_2_br_2_guard_modeInterplay_TSM) {
              outC->triggeredSB = kcg_false;
              outC->revokedSB = kcg_false;
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Ty;
              outC->triggeredTCO = kcg_false;
              outC->revokedTCO = kcg_false;
            }
            else /* cb_anon_sm */ if (t10_12_modeInterplay_TSM) {
              outC->triggeredSB = kcg_true;
              outC->revokedSB = kcg_false;
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Ty;
              outC->triggeredTCO = kcg_false;
              outC->revokedTCO = kcg_false;
            }
            else {
              outC->triggeredSB = kcg_false;
              /* cb_anon_sm */ if (_L1_modeInterplay_TSM.r3) {
                outC->revokedSB = kcg_true;
                outC->revokedSupervisionStatus =
                  Overspeed_Supervision_SDM_Types;
                outC->triggeredSupervisionStatus =
                  cSupervisionStatus_SDM_Commands;
                outC->triggeredTCO = kcg_false;
                outC->revokedTCO = kcg_true;
              }
              else {
                outC->revokedSB = kcg_false;
                outC->revokedSupervisionStatus =
                  cSupervisionStatus_SDM_Commands;
                outC->revokedTCO = kcg_false;
                /* cb_anon_sm */ if (t7_9_modeInterplay_TSM) {
                  outC->triggeredSupervisionStatus =
                    Warning_Supervision_SDM_Types_P;
                  outC->triggeredTCO = kcg_true;
                }
                else {
                  outC->triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands;
                  outC->triggeredTCO = kcg_false;
                }
              }
            }
          }
          break;
        case SSM_st_Indication_modeInterplay :
          _3_br_1_guard_modeInterplay_TSM = _L1_modeInterplay_TSM.r1 |
            _L1_modeInterplay_TSM.r2;
          _4_br_2_guard_modeInterplay_TSM = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14;
          /* guard_Indication */ if (_3_br_1_guard_modeInterplay_TSM) {
            SM4_state_act_modeInterplay_TSM = SSM_st_Normal_modeInterplay_TSM;
            outC->triggeredSB = kcg_false;
            outC->revokedSB = kcg_true;
            outC->revokedSupervisionStatus = Indication_Supervision_SDM_Type;
            outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->triggeredTCO = kcg_false;
            outC->revokedTCO = kcg_true;
          }
          else {
            if (_4_br_2_guard_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            else if (t10_12_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            else if (t7_9_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Warning_modeInterplay_TS;
            }
            else if (t4_6_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Overspeed_modeInterplay_;
            }
            else {
              SM4_state_act_modeInterplay_TSM = SSM_st_Indication_modeInterplay;
            }
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->revokedTCO = kcg_false;
            /* cb_anon_sm */ if (_4_br_2_guard_modeInterplay_TSM) {
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Ty;
              outC->triggeredSB = kcg_false;
              outC->triggeredTCO = kcg_false;
            }
            else /* cb_anon_sm */ if (t10_12_modeInterplay_TSM) {
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Ty;
              outC->triggeredSB = kcg_true;
              outC->triggeredTCO = kcg_false;
            }
            else {
              outC->triggeredSB = kcg_false;
              /* cb_anon_sm */ if (t7_9_modeInterplay_TSM) {
                outC->triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_P;
                outC->triggeredTCO = kcg_true;
              }
              else {
                /* cb_anon_sm */ if (t4_6_modeInterplay_TSM) {
                  outC->triggeredSupervisionStatus =
                    Overspeed_Supervision_SDM_Types;
                }
                else {
                  outC->triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands;
                }
                outC->triggeredTCO = kcg_false;
              }
            }
          }
          break;
        case SSM_st_Normal_modeInterplay_TSM :
          _5_br_1_guard_modeInterplay_TSM = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14;
          outC->revokedSB = kcg_false;
          outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
          outC->revokedTCO = kcg_false;
          /* guard_Normal */ if (_5_br_1_guard_modeInterplay_TSM) {
            SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            outC->triggeredSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->triggeredSB = kcg_false;
            outC->triggeredTCO = kcg_false;
          }
          else {
            if (t10_12_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            else if (t7_9_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Warning_modeInterplay_TS;
            }
            else if (t4_6_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Overspeed_modeInterplay_;
            }
            else if (_L2_modeInterplay_TSM.t3) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Indication_modeInterplay;
            }
            else {
              SM4_state_act_modeInterplay_TSM = SSM_st_Normal_modeInterplay_TSM;
            }
            /* cb_anon_sm */ if (t10_12_modeInterplay_TSM) {
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Ty;
              outC->triggeredSB = kcg_true;
              outC->triggeredTCO = kcg_false;
            }
            else {
              outC->triggeredSB = kcg_false;
              /* cb_anon_sm */ if (t7_9_modeInterplay_TSM) {
                outC->triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_P;
                outC->triggeredTCO = kcg_true;
              }
              else {
                /* cb_anon_sm */ if (t4_6_modeInterplay_TSM) {
                  outC->triggeredSupervisionStatus =
                    Overspeed_Supervision_SDM_Types;
                }
                else /* cb_anon_sm */ if (_L2_modeInterplay_TSM.t3) {
                  outC->triggeredSupervisionStatus =
                    Indication_Supervision_SDM_Type;
                }
                else {
                  outC->triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands;
                }
                outC->triggeredTCO = kcg_false;
              }
            }
          }
          break;
        case SSM_st_init_modeInterplay_TSM_S :
          _6_br_1_guard_modeInterplay_TSM = _L2_modeInterplay_TSM.t1 |
            _L2_modeInterplay_TSM.t2;
          _7_br_3_guard_modeInterplay_TSM = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14;
          outC->revokedSB = kcg_false;
          outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
          outC->revokedTCO = kcg_false;
          /* guard_init */ if (_6_br_1_guard_modeInterplay_TSM) {
            SM4_state_act_modeInterplay_TSM = SSM_st_Normal_modeInterplay_TSM;
            outC->triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pk;
            outC->triggeredSB = kcg_false;
            outC->triggeredTCO = kcg_false;
          }
          else {
            if (t10_12_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            else if (_7_br_3_guard_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Intervention_modeInterpl;
            }
            else if (t7_9_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Warning_modeInterplay_TS;
            }
            else if (t4_6_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Overspeed_modeInterplay_;
            }
            else if (_L2_modeInterplay_TSM.t3) {
              SM4_state_act_modeInterplay_TSM = SSM_st_Indication_modeInterplay;
            }
            else {
              SM4_state_act_modeInterplay_TSM = SSM_st_init_modeInterplay_TSM_S;
            }
            /* cb_anon_sm */ if (t10_12_modeInterplay_TSM) {
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Ty;
              outC->triggeredSB = kcg_true;
              outC->triggeredTCO = kcg_false;
            }
            else {
              outC->triggeredSB = kcg_false;
              /* cb_anon_sm */ if (_7_br_3_guard_modeInterplay_TSM) {
                outC->triggeredSupervisionStatus =
                  Intervention_Supervision_SDM_Ty;
                outC->triggeredTCO = kcg_false;
              }
              else /* cb_anon_sm */ if (t7_9_modeInterplay_TSM) {
                outC->triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_P;
                outC->triggeredTCO = kcg_true;
              }
              else {
                /* cb_anon_sm */ if (t4_6_modeInterplay_TSM) {
                  outC->triggeredSupervisionStatus =
                    Overspeed_Supervision_SDM_Types;
                }
                else /* cb_anon_sm */ if (_L2_modeInterplay_TSM.t3) {
                  outC->triggeredSupervisionStatus =
                    Indication_Supervision_SDM_Type;
                }
                else {
                  outC->triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands;
                }
                outC->triggeredTCO = kcg_false;
              }
            }
          }
          break;
        
      }
      outC->modeInterplay_state_nxt = SSM_st_TSM_modeInterplay;
      /* act_SM4 */ switch (SM4_state_act_modeInterplay_TSM) {
        case SSM_st_Intervention_modeInterpl :
          outC->sdmType = TSM_SDM_Types_Pkg;
          outC->revokedEB = kcg_false;
          outC->triggeredEB = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14 | last_triggeredEB;
          outC->supVisStatus = Intervention_Supervision_SDM_Ty;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Intervention_modeInterpl;
          break;
        case SSM_st_Warning_modeInterplay_TS :
          outC->sdmType = TSM_SDM_Types_Pkg;
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Warning_Supervision_SDM_Types_P;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Warning_modeInterplay_TS;
          break;
        case SSM_st_Overspeed_modeInterplay_ :
          outC->sdmType = TSM_SDM_Types_Pkg;
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Overspeed_Supervision_SDM_Types;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Overspeed_modeInterplay_;
          break;
        case SSM_st_Indication_modeInterplay :
          outC->sdmType = TSM_SDM_Types_Pkg;
          outC->revokedEB = _L1_modeInterplay_TSM.r3 | last_revokedEB;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Indication_Supervision_SDM_Type;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Indication_modeInterplay;
          break;
        case SSM_st_Normal_modeInterplay_TSM :
          outC->sdmType = TSM_SDM_Types_Pkg;
          outC->revokedEB = _L1_modeInterplay_TSM.r0 |
            _L1_modeInterplay_TSM.r1 | _L1_modeInterplay_TSM.r2 |
            _L1_modeInterplay_TSM.r3 | last_revokedEB;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Normal_Supervision_SDM_Types_Pk;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Normal_modeInterplay_TSM;
          break;
        case SSM_st_init_modeInterplay_TSM_S :
          outC->sdmType = last_sdmType;
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = cSupervisionStatus_SDM_Commands;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_init_modeInterplay_TSM_S;
          break;
        
      }
      outC->init1 = kcg_false;
      break;
    case SSM_st_CSM_modeInterplay :
      if (modeInterplay_reset_act) {
        outC->init2 = kcg_true;
      }
      /* init_CSM */ if (outC->init2) {
        CSM_state_sel_modeInterplay_CSM = SSM_st_Init_modeInterplay_CSM_C;
      }
      else {
        CSM_state_sel_modeInterplay_CSM = outC->CSM_state_nxt_modeInterplay_CSM;
      }
      t1_modeInterplay_CSM = (*speeds).V_est <= (*speeds).V_MRSP;
      t4_modeInterplay_CSM = (*speeds).V_est > (*speeds).dV_sbi_V_MRSP +
        (*speeds).V_MRSP;
      t5_modeInterplay_CSM = (*speeds).V_est > (*speeds).dV_ebi_V_MRSP +
        (*speeds).V_MRSP;
      t3_modeInterplay_CSM = (*speeds).V_est > (*speeds).dV_warning_V_MRSP +
        (*speeds).V_MRSP;
      t2_modeInterplay_CSM = !t1_modeInterplay_CSM;
      _L78_modeInterplay_CSM = t1_modeInterplay_CSM | t4_modeInterplay_CSM |
        t5_modeInterplay_CSM;
      c4_modeInterplay_CSM = ((Undefined_Supervision_SDM_Types == last_status) &
          !_L78_modeInterplay_CSM & t3_modeInterplay_CSM) |
        ((Indication_Supervision_SDM_Type == last_status) &
          !_L78_modeInterplay_CSM & t3_modeInterplay_CSM);
      _L102_modeInterplay_CSM = t4_modeInterplay_CSM | t5_modeInterplay_CSM;
      c5_modeInterplay_CSM = ((Undefined_Supervision_SDM_Types == last_status) &
          _L102_modeInterplay_CSM & t2_modeInterplay_CSM) |
        (_L102_modeInterplay_CSM & (Indication_Supervision_SDM_Type ==
            last_status) & t2_modeInterplay_CSM);
      c1_modeInterplay_CSM = (Undefined_Supervision_SDM_Types == last_status) &
        t1_modeInterplay_CSM;
      _L58_modeInterplay_CSM = t1_modeInterplay_CSM | t3_modeInterplay_CSM |
        t4_modeInterplay_CSM | t5_modeInterplay_CSM;
      c3_modeInterplay_CSM = ((Undefined_Supervision_SDM_Types == last_status) &
          !_L58_modeInterplay_CSM & t2_modeInterplay_CSM) |
        ((Indication_Supervision_SDM_Type == last_status) &
          !_L58_modeInterplay_CSM & t2_modeInterplay_CSM);
      /* sel_CSM */ switch (CSM_state_sel_modeInterplay_CSM) {
        case _193_SSM_st_InterventionStatus_ :
          outC->triggeredSB = kcg_false;
          outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
          /* guard_InterventionStatus */ if ((*speeds).OdoStandStill) {
            CSM_state_act_modeInterplay_CSM = SSM_st_NormalStatus_modeInterpl;
            outC->revokedSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->revokedSB = kcg_false;
          }
          else {
            if (t1_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = SSM_st_NormalStatus_modeInterpl;
            }
            else {
              CSM_state_act_modeInterplay_CSM = _193_SSM_st_InterventionStatus_;
            }
            /* cb_anon_sm */ if (t1_modeInterplay_CSM) {
              outC->revokedSupervisionStatus = Intervention_Supervision_SDM_Ty;
              outC->revokedSB = kcg_true;
            }
            else {
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              outC->revokedSB = kcg_false;
            }
          }
          break;
        case SSM_st_WarningStatus_modeInterp :
          br_1_guard_modeInterplay_CSM_CS = t4_modeInterplay_CSM |
            t5_modeInterplay_CSM;
          /* guard_WarningStatus */ if (br_1_guard_modeInterplay_CSM_CS) {
            CSM_state_act_modeInterplay_CSM = _193_SSM_st_InterventionStatus_;
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->triggeredSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->triggeredSB = t4_modeInterplay_CSM;
          }
          else {
            outC->triggeredSB = kcg_false;
            outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
            /* cb_anon_sm */ if (t1_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = SSM_st_NormalStatus_modeInterpl;
              outC->revokedSupervisionStatus = Warning_Supervision_SDM_Types_P;
              outC->revokedSB = kcg_true;
            }
            else {
              CSM_state_act_modeInterplay_CSM = SSM_st_WarningStatus_modeInterp;
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              outC->revokedSB = kcg_false;
            }
          }
          break;
        case SSM_st_OverspeedStatus_modeInte :
          _8_br_1_guard_modeInterplay_CSM = t4_modeInterplay_CSM |
            t5_modeInterplay_CSM;
          /* guard_OverspeedStatus */ if (_8_br_1_guard_modeInterplay_CSM) {
            CSM_state_act_modeInterplay_CSM = _193_SSM_st_InterventionStatus_;
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
            outC->triggeredSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->triggeredSB = t4_modeInterplay_CSM;
          }
          else {
            outC->triggeredSB = kcg_false;
            /* cb_anon_sm */ if (t1_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = SSM_st_NormalStatus_modeInterpl;
              outC->revokedSB = kcg_true;
              outC->revokedSupervisionStatus = Overspeed_Supervision_SDM_Types;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands;
            }
            else {
              outC->revokedSB = kcg_false;
              outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
              /* cb_anon_sm */ if (t3_modeInterplay_CSM) {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_WarningStatus_modeInterp;
                outC->triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_P;
              }
              else {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_OverspeedStatus_modeInte;
                outC->triggeredSupervisionStatus =
                  cSupervisionStatus_SDM_Commands;
              }
            }
          }
          break;
        case SSM_st_NormalStatus_modeInterpl :
          _9_br_1_guard_modeInterplay_CSM = t4_modeInterplay_CSM |
            t5_modeInterplay_CSM;
          outC->revokedSB = kcg_false;
          outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
          /* guard_NormalStatus */ if (_9_br_1_guard_modeInterplay_CSM) {
            CSM_state_act_modeInterplay_CSM = _193_SSM_st_InterventionStatus_;
            outC->triggeredSupervisionStatus = Intervention_Supervision_SDM_Ty;
            outC->triggeredSB = t4_modeInterplay_CSM;
          }
          else {
            /* cb_anon_sm */ if (t3_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = SSM_st_WarningStatus_modeInterp;
              outC->triggeredSupervisionStatus =
                Warning_Supervision_SDM_Types_P;
            }
            else /* cb_anon_sm */ if (t2_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = SSM_st_OverspeedStatus_modeInte;
              outC->triggeredSupervisionStatus =
                Overspeed_Supervision_SDM_Types;
            }
            else {
              CSM_state_act_modeInterplay_CSM = SSM_st_NormalStatus_modeInterpl;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands;
            }
            outC->triggeredSB = kcg_false;
          }
          break;
        case SSM_st_Init_modeInterplay_CSM_C :
          _10_br_1_guard_modeInterplay_CS = (Indication_Supervision_SDM_Type ==
              last_status) & t1_modeInterplay_CSM;
          br_2_guard_modeInterplay_CSM_CS = last_status ==
            Overspeed_Supervision_SDM_Types;
          br_6_guard_modeInterplay_CSM_CS = last_status ==
            Normal_Supervision_SDM_Types_Pk;
          outC->triggeredSB = kcg_false;
          /* guard_Init */ if (_10_br_1_guard_modeInterplay_CS) {
            CSM_state_act_modeInterplay_CSM = SSM_st_NormalStatus_modeInterpl;
            outC->revokedSB = kcg_true;
            outC->revokedSupervisionStatus = Indication_Supervision_SDM_Type;
            outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands;
          }
          else {
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands;
            /* cb_anon_sm */ if (br_2_guard_modeInterplay_CSM_CS) {
              CSM_state_act_modeInterplay_CSM = SSM_st_OverspeedStatus_modeInte;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands;
            }
            else /* cb_anon_sm */ if (c4_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = SSM_st_WarningStatus_modeInterp;
              outC->triggeredSupervisionStatus =
                Warning_Supervision_SDM_Types_P;
            }
            else /* cb_anon_sm */ if (c5_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = _193_SSM_st_InterventionStatus_;
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Ty;
            }
            else /* cb_anon_sm */ if (c1_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = SSM_st_NormalStatus_modeInterpl;
              outC->triggeredSupervisionStatus =
                Normal_Supervision_SDM_Types_Pk;
            }
            else /* cb_anon_sm */ if (br_6_guard_modeInterplay_CSM_CS) {
              CSM_state_act_modeInterplay_CSM = SSM_st_NormalStatus_modeInterpl;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands;
            }
            else /* cb_anon_sm */ if (c3_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM = SSM_st_OverspeedStatus_modeInte;
              outC->triggeredSupervisionStatus =
                Overspeed_Supervision_SDM_Types;
            }
            else {
              if (last_status == Warning_Supervision_SDM_Types_P) {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_WarningStatus_modeInterp;
              }
              else if (last_status == Intervention_Supervision_SDM_Ty) {
                CSM_state_act_modeInterplay_CSM =
                  _193_SSM_st_InterventionStatus_;
              }
              else {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_Init_modeInterplay_CSM_C;
              }
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands;
            }
          }
          break;
        
      }
      outC->triggeredTCO = kcg_false;
      outC->revokedTCO = kcg_false;
      outC->modeInterplay_state_nxt = SSM_st_CSM_modeInterplay;
      /* act_CSM */ switch (CSM_state_act_modeInterplay_CSM) {
        case _193_SSM_st_InterventionStatus_ :
          outC->sdmType = CSM_SDM_Types_Pkg;
          outC->revokedEB = kcg_false;
          outC->triggeredEB = t5_modeInterplay_CSM | last_triggeredEB;
          outC->supVisStatus = Intervention_Supervision_SDM_Ty;
          outC->CSM_state_nxt_modeInterplay_CSM =
            _193_SSM_st_InterventionStatus_;
          break;
        case SSM_st_WarningStatus_modeInterp :
          outC->sdmType = CSM_SDM_Types_Pkg;
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Warning_Supervision_SDM_Types_P;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_WarningStatus_modeInterp;
          break;
        case SSM_st_OverspeedStatus_modeInte :
          outC->sdmType = CSM_SDM_Types_Pkg;
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Overspeed_Supervision_SDM_Types;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_OverspeedStatus_modeInte;
          break;
        case SSM_st_NormalStatus_modeInterpl :
          outC->sdmType = CSM_SDM_Types_Pkg;
          outC->revokedEB = t1_modeInterplay_CSM | (*speeds).OdoStandStill |
            last_revokedEB;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Normal_Supervision_SDM_Types_Pk;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_NormalStatus_modeInterpl;
          break;
        case SSM_st_Init_modeInterplay_CSM_C :
          outC->sdmType = last_sdmType;
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = cSupervisionStatus_SDM_Commands;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_Init_modeInterplay_CSM_C;
          break;
        
      }
      outC->init2 = kcg_false;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CmdTrainSupervisionStatus_SDM_C.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */


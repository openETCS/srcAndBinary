/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelStateMachine_Levels_Pkg.h"

void LevelStateMachine_reset_Levels_Pkg(outC_LevelStateMachine_Levels_Pkg *outC)
{
  outC->init = kcg_true;
}

/* Levels_Pkg::LevelStateMachine */
void LevelStateMachine_Levels_Pkg(
  /* Levels_Pkg::LevelStateMachine::input_conditions */T_TransitionConditions_Level_And_Mode_Types_Pkg *input_conditions,
  outC_LevelStateMachine_Levels_Pkg *outC)
{
  /* Levels_Pkg::LevelStateMachine::MainLevelOutput */
  static SSM_ST_MainLevelOutput MainLevelOutput_state_sel;
  /* Levels_Pkg::LevelStateMachine::MainLevelOutput */
  static SSM_ST_MainLevelOutput MainLevelOutput_state_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    MainLevelOutput_state_sel = SSM_st_Level_L0_MainLevelOutput;
  }
  else {
    MainLevelOutput_state_sel = outC->MainLevelOutput_state_nxt;
  }
  switch (MainLevelOutput_state_sel) {
    case SSM_st_Level_L1_MainLevelOutput :
      if ((*input_conditions)[5]) {
        MainLevelOutput_state_act = SSM_st_Level_L2_MainLevelOutput;
      }
      else if ((*input_conditions)[6]) {
        MainLevelOutput_state_act = SSM_st_Level_L3_MainLevelOutput;
      }
      else if ((*input_conditions)[7]) {
        MainLevelOutput_state_act = SSM_st_Level_NTC_MainLevelOutput;
      }
      else if ((*input_conditions)[4]) {
        MainLevelOutput_state_act = SSM_st_Level_L0_MainLevelOutput;
      }
      else {
        MainLevelOutput_state_act = SSM_st_Level_L1_MainLevelOutput;
      }
      break;
    case SSM_st_Level_L2_MainLevelOutput :
      if ((*input_conditions)[8]) {
        MainLevelOutput_state_act = SSM_st_Level_L0_MainLevelOutput;
      }
      else if ((*input_conditions)[9]) {
        MainLevelOutput_state_act = SSM_st_Level_L1_MainLevelOutput;
      }
      else if ((*input_conditions)[10]) {
        MainLevelOutput_state_act = SSM_st_Level_L3_MainLevelOutput;
      }
      else if ((*input_conditions)[11]) {
        MainLevelOutput_state_act = SSM_st_Level_NTC_MainLevelOutput;
      }
      else {
        MainLevelOutput_state_act = SSM_st_Level_L2_MainLevelOutput;
      }
      break;
    case SSM_st_Level_L3_MainLevelOutput :
      if ((*input_conditions)[13]) {
        MainLevelOutput_state_act = SSM_st_Level_L1_MainLevelOutput;
      }
      else if ((*input_conditions)[15]) {
        MainLevelOutput_state_act = SSM_st_Level_NTC_MainLevelOutput;
      }
      else if ((*input_conditions)[14]) {
        MainLevelOutput_state_act = SSM_st_Level_L2_MainLevelOutput;
      }
      else if ((*input_conditions)[12]) {
        MainLevelOutput_state_act = SSM_st_Level_L0_MainLevelOutput;
      }
      else {
        MainLevelOutput_state_act = SSM_st_Level_L3_MainLevelOutput;
      }
      break;
    case SSM_st_Level_L0_MainLevelOutput :
      if ((*input_conditions)[3]) {
        MainLevelOutput_state_act = SSM_st_Level_NTC_MainLevelOutput;
      }
      else if ((*input_conditions)[1]) {
        MainLevelOutput_state_act = SSM_st_Level_L2_MainLevelOutput;
      }
      else if ((*input_conditions)[0]) {
        MainLevelOutput_state_act = SSM_st_Level_L1_MainLevelOutput;
      }
      else if ((*input_conditions)[2]) {
        MainLevelOutput_state_act = SSM_st_Level_L3_MainLevelOutput;
      }
      else {
        MainLevelOutput_state_act = SSM_st_Level_L0_MainLevelOutput;
      }
      break;
    case SSM_st_Level_NTC_MainLevelOutput :
      if ((*input_conditions)[16]) {
        MainLevelOutput_state_act = SSM_st_Level_L0_MainLevelOutput;
      }
      else if ((*input_conditions)[19]) {
        MainLevelOutput_state_act = SSM_st_Level_L3_MainLevelOutput;
      }
      else if ((*input_conditions)[17]) {
        MainLevelOutput_state_act = SSM_st_Level_L1_MainLevelOutput;
      }
      else if ((*input_conditions)[18]) {
        MainLevelOutput_state_act = SSM_st_Level_L2_MainLevelOutput;
      }
      else {
        MainLevelOutput_state_act = SSM_st_Level_NTC_MainLevelOutput;
      }
      break;
    
  }
  switch (MainLevelOutput_state_act) {
    case SSM_st_Level_L1_MainLevelOutput :
      outC->MainLevelOutput_state_nxt = SSM_st_Level_L1_MainLevelOutput;
      outC->OutLevel = M_LEVEL_Level_1;
      break;
    case SSM_st_Level_L2_MainLevelOutput :
      outC->MainLevelOutput_state_nxt = SSM_st_Level_L2_MainLevelOutput;
      outC->OutLevel = M_LEVEL_Level_2;
      break;
    case SSM_st_Level_L3_MainLevelOutput :
      outC->MainLevelOutput_state_nxt = SSM_st_Level_L3_MainLevelOutput;
      outC->OutLevel = M_LEVEL_Level_3;
      break;
    case SSM_st_Level_L0_MainLevelOutput :
      outC->MainLevelOutput_state_nxt = SSM_st_Level_L0_MainLevelOutput;
      outC->OutLevel = M_LEVEL_Level_0;
      break;
    case SSM_st_Level_NTC_MainLevelOutput :
      outC->MainLevelOutput_state_nxt = SSM_st_Level_NTC_MainLevelOutput;
      outC->OutLevel = M_LEVEL_Level_NTC_specified_by_NID_NTC;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelStateMachine_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


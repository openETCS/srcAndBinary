/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeLevelByDiver_manage_DMI_I.h"

/* manage_DMI_Input_Pkg::changeLevelByDiver */
void changeLevelByDiver_manage_DMI_I(
  /* manage_DMI_Input_Pkg::changeLevelByDiver::levelData */ DMI_Level_Data_T_DMI_Messages_B *levelData,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::lasttNTC */ NID_STM_DMI_Types_Pkg lasttNTC,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::ML_levelTransition */ T_LevelTransition_Level_And_Mod *ML_levelTransition,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::updatedNTC */ NID_STM_DMI_Types_Pkg *updatedNTC)
{
  (*ML_levelTransition).is_set = (*levelData).valid;
  (*ML_levelTransition).LRBG = 0;
  (*ML_levelTransition).referenceLocation = 0;
  /* 1 */ if ((*levelData).valid) {
    (*ML_levelTransition).transition.level = (*levelData).level.level;
    (*ML_levelTransition).transition.position = 0;
    (*ML_levelTransition).transition.transitionType =
      M_TransitionType_DriverInit_Lev;
    (*ML_levelTransition).transition.immediateAck = kcg_true;
    (*ML_levelTransition).transition.AckLength = 0;
  }
  else {
    kcg_copy_T_LevelTansitionInfo_L(
      &(*ML_levelTransition).transition,
      (T_LevelTansitionInfo_Level_And_ *) &cNoLevelTransitionInfo_manage_D);
  }
  /* 2 */ if ((*levelData).valid & ((*levelData).level.level ==
      M_LEVEL_Level_NTC_specified_by_)) {
    *updatedNTC = (*levelData).level.nid_stm;
  }
  else /* 3 */ if ((*levelData).valid & ((*levelData).level.level !=
      M_LEVEL_Level_NTC_specified_by_)) {
    *updatedNTC = cNo_STM_manage_DMI_Input_Pkg;
  }
  else {
    *updatedNTC = lasttNTC;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** changeLevelByDiver_manage_DMI_I.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */


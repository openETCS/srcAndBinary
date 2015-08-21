/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IncorporateAbsenceOfSB_SDM_OutputWrapper.h"

/* SDM_OutputWrapper::IncorporateAbsenceOfSB */
void IncorporateAbsenceOfSB_SDM_OutputWrapper(
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::in_sdmCmd */SDM_Commands_real_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::NoSBInterface */kcg_bool NoSBInterface,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::triggeredEB */kcg_bool *triggeredEB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::triggeredSB */kcg_bool *triggeredSB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::revokedEB */kcg_bool *revokedEB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::revokedSB */kcg_bool *revokedSB)
{
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::NoSBinTSM */
  static kcg_bool NoSBinTSM;
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::TSM */
  static kcg_bool TSM;
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::SB2SB */
  static kcg_bool SB2SB;
  
  NoSBinTSM = (*NationalValues).q_nvsbtsmperm == Q_NVSBTSMPERM_No;
  TSM = (*in_sdmCmd).sdmType == TSM_SDM_Types_Pkg;
  SB2SB = NoSBInterface | (NoSBinTSM & TSM);
  *revokedEB = ((*in_sdmCmd).revokedEB & (((*odometry).motionState ==
          noMotion_Obu_BasicTypes_Pkg) | ((*NationalValues).q_nvemrrls ==
          Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded))) |
    (SB2SB & (*in_sdmCmd).revokedSB);
  *triggeredEB = (*in_sdmCmd).triggeredEB | (*in_sdmCmd).ebCmd | (SB2SB &
      (*in_sdmCmd).triggeredSB);
  SB2SB = ((!NoSBinTSM & TSM) | !TSM) & !NoSBInterface;
  *revokedSB = (*in_sdmCmd).revokedSB & SB2SB;
  *triggeredSB = (*in_sdmCmd).triggeredSB & SB2SB;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IncorporateAbsenceOfSB_SDM_OutputWrapper.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */


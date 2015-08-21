/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _IncorporateAbsenceOfSB_SDM_OutputWrapper_H_
#define _IncorporateAbsenceOfSB_SDM_OutputWrapper_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* SDM_OutputWrapper::IncorporateAbsenceOfSB */
extern void IncorporateAbsenceOfSB_SDM_OutputWrapper(
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::in_sdmCmd */SDM_Commands_real_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::NoSBInterface */kcg_bool NoSBInterface,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::triggeredEB */kcg_bool *triggeredEB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::triggeredSB */kcg_bool *triggeredSB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::revokedEB */kcg_bool *revokedEB,
  /* SDM_OutputWrapper::IncorporateAbsenceOfSB::revokedSB */kcg_bool *revokedSB);

#endif /* _IncorporateAbsenceOfSB_SDM_OutputWrapper_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** IncorporateAbsenceOfSB_SDM_OutputWrapper.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "headerMsg129_trainData_pkg.h"

/* trainData_pkg::headerMsg129 */
void headerMsg129_trainData_pkg(
  /* trainData_pkg::headerMsg129::nidEngine */NID_ENGINE nidEngine,
  /* trainData_pkg::headerMsg129::timeStamp */T_TRAIN timeStamp,
  /* trainData_pkg::headerMsg129::header */Radio_TrainTrack_Header_T_Radio_Types_Pkg *header)
{
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    header,
    (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
      &cMsgBasicHeader_trainData_pkg);
  (*header).nid_message = co129_Validated_Train_Data_Id_Pkg;
  (*header).t_train = timeStamp;
  (*header).nid_engine = nidEngine;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** headerMsg129_trainData_pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


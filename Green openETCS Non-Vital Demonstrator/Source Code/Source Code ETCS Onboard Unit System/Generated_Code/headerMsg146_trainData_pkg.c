/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "headerMsg146_trainData_pkg.h"

/* trainData_pkg::headerMsg146 */
void headerMsg146_trainData_pkg(
  /* trainData_pkg::headerMsg146::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::headerMsg146::timeStamp */ T_TRAIN timeStamp,
  /* trainData_pkg::headerMsg146::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::headerMsg146::header */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *header)
{
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    header,
    (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
      &cMsgBasicHeader_trainData_pkg);
  (*header).nid_message = co146_Acknowledgement_Id_Pkg;
  (*header).t_train = timeStamp;
  (*header).nid_engine = nidEngine;
  (*header).xT_TRAIN = RBC_timeStamp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** headerMsg146_trainData_pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */


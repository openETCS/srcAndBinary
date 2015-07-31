/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getRadioManagement_packagesSupport_Pkg.h"

/* packagesSupport_Pkg::getRadioManagement */
void getRadioManagement_packagesSupport_Pkg(
  /* packagesSupport_Pkg::getRadioManagement::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* packagesSupport_Pkg::getRadioManagement::ourForRadioManagement */radioManagementMessage_T_Common_Types_Pkg *ourForRadioManagement)
{
  /* packagesSupport_Pkg::getRadioManagement::P42_valid */
  static kcg_bool P42_valid;
  /* packagesSupport_Pkg::getRadioManagement::P45_valid */
  static kcg_bool P45_valid;
  
  (*ourForRadioManagement).messageSource = (*inMessage).source;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*ourForRadioManagement).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*ourForRadioManagement).sendingRBC,
    &(*inMessage).sendingRBC);
  /* 1 */
  Read_P045_TM(
    &(*inMessage).packets,
    &P45_valid,
    &(*ourForRadioManagement).p45);
  /* 1 */
  Read_P042_TM(
    &(*inMessage).packets,
    &P42_valid,
    &(*ourForRadioManagement).p42);
  (*ourForRadioManagement).valid = (/* 1 */
      checkRadioManagementType_packagesSupport_Pkg(
        (*inMessage).source,
        (*inMessage).Radio_Common_Header.nid_message) & ((*inMessage).source ==
        msrc_Euroradio_Common_Types_Pkg)) | P42_valid | P45_valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getRadioManagement_packagesSupport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


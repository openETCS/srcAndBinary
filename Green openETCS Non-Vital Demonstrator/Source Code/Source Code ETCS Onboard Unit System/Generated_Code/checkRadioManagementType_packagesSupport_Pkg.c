/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRadioManagementType_packagesSupport_Pkg.h"

/* packagesSupport_Pkg::checkRadioManagementType */
kcg_bool checkRadioManagementType_packagesSupport_Pkg(
  /* packagesSupport_Pkg::checkRadioManagementType::inSource */MsgSource_T_Common_Types_Pkg inSource,
  /* packagesSupport_Pkg::checkRadioManagementType::inMsg */NID_MESSAGE inMsg)
{
  /* packagesSupport_Pkg::checkRadioManagementType::outValid */
  static kcg_bool outValid;
  
  outValid = (inSource == msrc_Euroradio_Common_Types_Pkg) & ((inMsg ==
        cm38_Initiation_of_a_Communication_Session_Id_Pkg) | (inMsg ==
        cm32_RBC_RIU_System_Version_Id_Pkg) | (inMsg ==
        cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg));
  return outValid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkRadioManagementType_packagesSupport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */


/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteElement_manage_TextMessag.h"

/* manage_TextMessages_Pkg::deleteElement */
void deleteElement_manage_TextMessag(
  /* manage_TextMessages_Pkg::deleteElement::indexMAPwi */ kcg_int indexMAPwi,
  /* manage_TextMessages_Pkg::deleteElement::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_ *fromStore,
  /* manage_TextMessages_Pkg::deleteElement::inMessageID */ DMI_TextMessage_ID_T_DMI_Types_ inMessageID,
  /* manage_TextMessages_Pkg::deleteElement::continue */ kcg_bool *_1_continue,
  /* manage_TextMessages_Pkg::deleteElement::toStore */ DMI_TXT_MSG_status_T_DMI_Types_ *toStore)
{
  /* manage_TextMessages_Pkg::deleteElement::deleteIt */
  static kcg_bool deleteIt;
  
  deleteIt = (*fromStore).valid & ((*fromStore).dmi_textMessageID ==
      inMessageID);
  /* ck_deleteIt */ if (deleteIt) {
    *_1_continue = kcg_false;
    kcg_copy_DMI_TXT_MSG_status_T_D(
      toStore,
      (DMI_TXT_MSG_status_T_DMI_Types_ *) &cFreeTestStatusElement_DMI_Type);
  }
  else {
    *_1_continue = kcg_true;
    kcg_copy_DMI_TXT_MSG_status_T_D(toStore, fromStore);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteElement_manage_TextMessag.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */


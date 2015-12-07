/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Cast_Int_to_DMI_trackConditionElement_DATA_Variables.h"

/* DATA::Variables::Cast_Int_to_DMI_trackConditionElement */
void Cast_Int_to_DMI_trackConditionElement_DATA_Variables(
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::d_trackcond_int */ kcg_int d_trackcond_int,
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::m_trackcond_int */ kcg_int m_trackcond_int,
  /* DATA::Variables::Cast_Int_to_DMI_trackConditionElement::dmi_trackConditionElemen_ct */ DMI_trackConditionElement_T_DMI_Types_Pkg *dmi_trackConditionElemen_ct)
{
  (*dmi_trackConditionElemen_ct).d_trackcond = /* 1 */
    CAST_Int_to_D_TRACKCOND_TM_conversions(d_trackcond_int);
  (*dmi_trackConditionElemen_ct).m_trackcond = /* 1 */
    CAST_Int_to_M_TRACKCOND_TM_conversions(m_trackcond_int);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Cast_Int_to_DMI_trackConditionElement_DATA_Variables.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */


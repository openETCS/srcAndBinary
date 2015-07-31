/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask */
void WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::dmi_entry_request */DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_entry_request,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::window_mask */array_bool_15 *window_mask)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L18 */
  static kcg_int _L18;
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L19 */
  static kcg_int _L19;
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L25 */
  static kcg_int _L25;
  
  _L19 = 0;
  for (i = 0; i < 15; i++) {
    _L25 = _L19;
    /* 1 */
    GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
      i,
      _L25,
      cDMI_List_Entry_Request_DMI_Control_Pkg[i],
      dmi_entry_request,
      &tmp,
      &_L19);
    _L18 = i + 1;
    if (!tmp) {
      break;
    }
  }
  _L25 = _L18 - 1;
  for (i = 0; i < 15; i++) {
    (*window_mask)[i] = /* 1 */
      Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
        i,
        _L25);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */


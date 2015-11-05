/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::SecondFilter */
void SecondFilter_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageAccepted */ kcg_bool *outMessageAccepted,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::messagesForTransitionBuffer */
  static kcg_bool messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::isFromRBC */
  static kcg_bool isFromRBC;
  
  isFromRBC = (*inMessage).source == msrc_Euroradio_Common_Types_Pkg;
  /* ck_isFromRBC */ if (isFromRBC) {
    IfBlock2_clock_IfBlock1 = !((*inMessage).Radio_Common_Header.radioDevice ==
        inSupervisingDevice);
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      switch ((*inMessage).Radio_Common_Header.nid_message) {
        case 18 :
          IfBlock3_clock_IfBlock1_IfBlock2 = kcg_false;
          break;
        
        default :
          IfBlock3_clock_IfBlock1_IfBlock2 = kcg_true;
      }
      /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1_IfBlock2) {
        switch ((*inMessage).Radio_Common_Header.nid_message) {
          case 8 :
            messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 = kcg_false;
            break;
          case 38 :
            messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 = kcg_false;
            break;
          case 39 :
            messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 = kcg_false;
            break;
          
          default :
            messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 = kcg_true;
        }
        /* ck_messagesForTransitionBuffer */ if (messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3) {
          *outStoreInTransitionBuffer = kcg_true;
          *outMessageAccepted = kcg_false;
        }
        else {
          *outStoreInTransitionBuffer = kcg_false;
          *outMessageAccepted = kcg_true;
        }
      }
      else {
        *outStoreInTransitionBuffer = kcg_false;
        *outMessageAccepted = kcg_false;
      }
    }
    else {
      *outStoreInTransitionBuffer = kcg_false;
      *outMessageAccepted = kcg_true;
    }
  }
  else {
    *outStoreInTransitionBuffer = kcg_false;
    *outMessageAccepted = kcg_true;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SecondFilter_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */


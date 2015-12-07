/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SecondFilter_InformationFilter_.h"

/* InformationFilter_Pkg::SecondFilter::SecondFilter */
void SecondFilter_InformationFilter_(
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter2 */ ReceivedMessage_T_Common_Types_ *messageForFilter2,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inMessageForBuffer */ ReceivedMessage_T_Common_Types_ *inMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */ kcg_bool *storeInBuffer2,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */ ReceivedMessage_T_Common_Types_ *outMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */ ReceivedMessage_T_Common_Types_ *messageForFilter3)
{
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::messagesForTransitionBuffer */
  static kcg_bool messagesForTransitionBuffer_IfB;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1_IfBlock;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::isFromRBC */
  static kcg_bool isFromRBC;
  
  isFromRBC = (*messageForFilter2).source == msrc_Euroradio_Common_Types_Pkg;
  /* ck_isFromRBC */ if (isFromRBC) {
    IfBlock2_clock_IfBlock1 =
      !((*messageForFilter2).Radio_Common_Header.radioDevice ==
        inSupervisingDevice);
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      switch ((*messageForFilter2).Radio_Common_Header.nid_message) {
        case 9 :
          IfBlock3_clock_IfBlock1_IfBlock = kcg_false;
          break;
        case 18 :
          IfBlock3_clock_IfBlock1_IfBlock = kcg_false;
          break;
        
        default :
          IfBlock3_clock_IfBlock1_IfBlock = kcg_true;
      }
      /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1_IfBlock) {
        switch ((*messageForFilter2).Radio_Common_Header.nid_message) {
          case 8 :
            messagesForTransitionBuffer_IfB = kcg_false;
            break;
          case 38 :
            messagesForTransitionBuffer_IfB = kcg_false;
            break;
          case 39 :
            messagesForTransitionBuffer_IfB = kcg_false;
            break;
          
          default :
            messagesForTransitionBuffer_IfB = kcg_true;
        }
        /* ck_messagesForTransitionBuffer */ if (messagesForTransitionBuffer_IfB) {
          *storeInBuffer2 = kcg_true;
          (*messageForFilter3).valid = kcg_false;
          (*messageForFilter3).source = (*messageForFilter2).source;
          kcg_copy_RadioMetadata_T_Common(
            &(*messageForFilter3).radioMetadata,
            &(*messageForFilter2).radioMetadata);
          kcg_copy_BG_Header_T_BG_Types_P(
            &(*messageForFilter3).BG_Common_Header,
            &(*messageForFilter2).BG_Common_Header);
          kcg_copy_Radio_TrackTrain_Heade(
            &(*messageForFilter3).Radio_Common_Header,
            &(*messageForFilter2).Radio_Common_Header);
          kcg_copy_CompressedPackets_T_Co(
            &(*messageForFilter3).packets,
            &(*messageForFilter2).packets);
          kcg_copy_RBC_Id_T_Common_Types_(
            &(*messageForFilter3).sendingRBC,
            &(*messageForFilter2).sendingRBC);
          /* 1 */
          DetermineBufferMessage_Informat(
            messageForFilter2,
            inMessageForBuffer,
            outMessageForBuffer);
        }
        else {
          *storeInBuffer2 = kcg_false;
          kcg_copy_ReceivedMessage_T_Comm(
            outMessageForBuffer,
            inMessageForBuffer);
          kcg_copy_ReceivedMessage_T_Comm(messageForFilter3, messageForFilter2);
        }
      }
      else {
        *storeInBuffer2 = kcg_false;
        (*messageForFilter3).valid = kcg_false;
        (*messageForFilter3).source = (*messageForFilter2).source;
        kcg_copy_RadioMetadata_T_Common(
          &(*messageForFilter3).radioMetadata,
          &(*messageForFilter2).radioMetadata);
        kcg_copy_BG_Header_T_BG_Types_P(
          &(*messageForFilter3).BG_Common_Header,
          &(*messageForFilter2).BG_Common_Header);
        kcg_copy_Radio_TrackTrain_Heade(
          &(*messageForFilter3).Radio_Common_Header,
          &(*messageForFilter2).Radio_Common_Header);
        kcg_copy_CompressedPackets_T_Co(
          &(*messageForFilter3).packets,
          &(*messageForFilter2).packets);
        kcg_copy_RBC_Id_T_Common_Types_(
          &(*messageForFilter3).sendingRBC,
          &(*messageForFilter2).sendingRBC);
        kcg_copy_ReceivedMessage_T_Comm(
          outMessageForBuffer,
          inMessageForBuffer);
      }
    }
    else {
      *storeInBuffer2 = kcg_false;
      kcg_copy_ReceivedMessage_T_Comm(outMessageForBuffer, inMessageForBuffer);
      kcg_copy_ReceivedMessage_T_Comm(messageForFilter3, messageForFilter2);
    }
  }
  else {
    *storeInBuffer2 = kcg_false;
    kcg_copy_ReceivedMessage_T_Comm(outMessageForBuffer, inMessageForBuffer);
    kcg_copy_ReceivedMessage_T_Comm(messageForFilter3, messageForFilter2);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SecondFilter_InformationFilter_.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */


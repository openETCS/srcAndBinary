/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Update_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Update */
void PosData__Update_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Update::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Update::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Session_Pkg::PosData__Update::outPosData */ PosData_T *outPosData)
{
  /* RBC_Session_Pkg::PosData__Update */
  static PT0_PositionReport_T_Packet_Tra tmp2;
  /* RBC_Session_Pkg::PosData__Update */
  static kcg_bool tmp1;
  /* RBC_Session_Pkg::PosData__Update */
  static PT1_PositionReport_2BG_T_Packet tmp;
  /* RBC_Session_Pkg::PosData__Update::validPacket0 */
  static kcg_bool validPacket0;
  /* RBC_Session_Pkg::PosData__Update::_L2 */
  static outPackets_T_Common_Types_Pkg _L2;
  
  /* 1 */ RadioTrainTrackMessage__GetPack(inRadioTrainTrackMessage, &_L2);
  /* 1 */ _149_RadioTrainTrackPackets__Ge(&_L2, &tmp2);
  validPacket0 = /* 1 */ RadioTrainTrackPacket000__IsVal(&tmp2);
  /* ck_validPacket0 */ if (validPacket0) {
    /* 1 */
    PosData__UpdateWithP000_RBC_Ses(
      inPosData,
      inRadioTrainTrackMessage,
      outPosData);
  }
  else {
    /* 1 */ _150_RadioTrainTrackPackets__Ge(&_L2, &tmp);
    tmp1 = /* 1 */ RadioTrainTrackPacket001__IsVal(&tmp);
    /* ck_anon_activ */ if (tmp1) {
      /* 1 */
      PosData__UpdateWithP001_RBC_Ses(
        inPosData,
        inRadioTrainTrackMessage,
        outPosData);
    }
    else {
      kcg_copy_PosData_T(outPosData, inPosData);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosData__Update_RBC_Session_Pkg.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */


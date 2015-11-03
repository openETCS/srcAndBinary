/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bildBGHeader_CheckBGConsistency.h"

/* CheckBGConsistency_Pkg::SubFunction::bildBGHeader */
void bildBGHeader_CheckBGConsistency(
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::trackSideForCheck */ TrackSide_ForCheck_T_Common_Typ *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::bgHeader */ BG_Header_T_BG_Types_Pkg *bgHeader)
{
  (*bgHeader).valid = (*trackSideForCheck).valid;
  (*bgHeader).q_updown =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.q_updown;
  (*bgHeader).m_version =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.m_version;
  (*bgHeader).q_media =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.q_media;
  (*bgHeader).n_total =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.n_total;
  (*bgHeader).m_mcount =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.m_mcount;
  (*bgHeader).nid_c =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_c;
  (*bgHeader).nid_bg =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_bg;
  (*bgHeader).q_link =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.q_link;
  kcg_copy_odometry_T_Obu_BasicTy(
    &(*bgHeader).bgPosition,
    &(*trackSideForCheck).telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection);
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &(*bgHeader).BG_centerDetectionInaccuraccura,
    &(*trackSideForCheck).telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccura);
  (*bgHeader).q_nvlocacc = q_nvlocacc;
  (*bgHeader).noCoordinateSystemHasBeenAssign = kcg_false;
  (*bgHeader).trainOrientationToBG = cQDirLRBGunknown_CheckBGConsist;
  (*bgHeader).trainRunningDirectionToBG = cQqDirTrain_CheckBGConsistency_;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** bildBGHeader_CheckBGConsistency.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */


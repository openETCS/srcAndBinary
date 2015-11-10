/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* TM::OrBG */
typedef enum { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* TM::OrLine */
typedef enum { N_TM, Z_TM } OrLine_TM;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* Q_STATUS */
typedef enum {
  Q_STATUS_Invalid = 0,
  Q_STATUS_Valid = 1,
  Q_STATUS_Unknown = 2
} Q_STATUS;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_DIRLRBG */
typedef enum {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DLRBG */
typedef enum {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_LENGTH */
typedef enum {
  Q_LENGTH_No_train_integrity_information_available = 0,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
/* Q_DIRTRAIN */
typedef enum {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* M_MODE */
typedef enum {
  M_MODE_Full_Supervision = 0,
  M_MODE_On_Sight = 1,
  M_MODE_Staff_Responsible = 2,
  M_MODE_Shunting = 3,
  M_MODE_Unfitted = 4,
  M_MODE_Sleeping = 5,
  M_MODE_Stand_By = 6,
  M_MODE_Trip = 7,
  M_MODE_Post_Trip = 8,
  M_MODE_System_Failure = 9,
  M_MODE_Isolation = 10,
  M_MODE_Non_Leading = 11,
  M_MODE_Limited_Supervision = 12,
  M_MODE_National_System = 13,
  M_MODE_Reversing = 14,
  M_MODE_Passive_Shunting = 15,
  M_MODE_No_Power = 16
} M_MODE;
/* M_LEVEL */
typedef enum {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
/* M_ERROR */
typedef enum {
  M_ERROR_Balise_group_linking_consistency_error = 0,
  M_ERROR_Linked_balise_group_message_consistency_erro = 1,
  M_ERROR_Unlinked_balise_group_message_consistency_error = 2,
  M_ERROR_Radio_message_consistency_error = 3,
  M_ERROR_Radio_sequence_error = 4,
  M_ERROR_Radio_safe_radio_connection_error = 5,
  M_ERROR_Safety_critical_failure = 6,
  M_ERROR_Double_linking_error = 7,
  M_ERROR_Double_repositioning_error = 8
} M_ERROR;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* D_LRBG */
typedef kcg_int D_LRBG;

/* L_DOUBTOVER */
typedef kcg_int L_DOUBTOVER;

/* L_DOUBTUNDER */
typedef kcg_int L_DOUBTUNDER;

/* L_TRAININT */
typedef kcg_int L_TRAININT;

/* V_TRAIN */
typedef kcg_int V_TRAIN;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* NID_PRVLRBG */
typedef kcg_int NID_PRVLRBG;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_XUSER */
typedef kcg_int NID_XUSER;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__7465;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__7465 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__7473[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__7473 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__7476;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__7476 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_int q_updown;
  kcg_int m_version;
  kcg_int q_media;
  kcg_int n_pig;
  kcg_int n_total;
  kcg_int m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  kcg_int q_link;
} struct__7481;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__7481 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__7494;

/* TM::CompressedBaliseMessage */
typedef struct__7494 CompressedBaliseMessage_TM;

typedef kcg_int array_int_1[1];

/* TM_TrainToTrack::P044_other_data */
typedef array_int_1 P044_other_data_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} struct__7502;

/* TM_TrainToTrack::P044 */
typedef struct__7502 P044_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} struct__7510;

/* TM_TrainToTrack::P005 */
typedef struct__7510 P005_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} struct__7517;

/* TM_TrainToTrack::P004 */
typedef struct__7517 P004_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  NID_LRBG nid_lrbg;
  NID_PRVLRBG nid_prvlrbg;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
} struct__7524;

/* TM_TrainToTrack::P001 */
typedef struct__7524 P001_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  NID_LRBG nid_lrbg;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
} struct__7545;

/* TM_TrainToTrack::P000 */
typedef struct__7545 P000_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
  kcg_int field4;
  kcg_int field5;
  kcg_int field6;
  kcg_int field7;
  kcg_int field8;
} struct__7565;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__7565 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_STATUS q_status;
} struct__7580;

/* TM_radio_messages::M_157_T */
typedef struct__7580 M_157_T_TM_radio_messages;

typedef kcg_int array_int_50[50];

/* TM_radio_messages::M_TrainTrack_compressed_packets_T */
typedef array_int_50 M_TrainTrack_compressed_packets_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
} struct__7592;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct__7592 M_TrainTrack_MessageHd_T_TM_radio_messages;

typedef struct {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} struct__7603;

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct__7603 M_TrainTrack_Message_T_TM_radio_messages;

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P044_TrainTrack_int */
typedef array_int_25 P044_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_3[3];

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToTrack;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToTrack;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__7617;

/* InfraLib::TrainPosRaw_T */
typedef struct__7617 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__7623;

/* InfraLib::TrackSectionData_T */
typedef struct__7623 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__7628;

/* TM::BaliseGroupData */
typedef struct__7628 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__7628 BaliseGroupData_Basics;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__7636;

/* InfraLib::B_data_internal_T */
typedef struct__7636 B_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__7645;

/* TM::P045_trackside_int_T */
typedef struct__7645 P045_trackside_int_T_TM;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__7653;

/* TM::P255_trackside_int_T */
typedef struct__7653 P255_trackside_int_T_TM;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__7658;

/* InfraLib::R_data_internal_T */
typedef struct__7658 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__7665;

/* TM_radio_messages::M_003_int_T */
typedef struct__7665 M_003_int_T_TM_radio_messages;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__7674;

/* TM::P015_section_int_T */
typedef struct__7674 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__7681[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__7681 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__7681 P015_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_LOA;
  kcg_int T_LOA;
  kcg_int N_ITER;
  P015_trackide_sectionlist_T_TM SECTIONS;
  kcg_int L_ENDSECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
  kcg_int Q_ENDTIMER;
  kcg_int T_ENDTIMER;
  kcg_int D_ENDTIMERSTARTLOC;
  kcg_int Q_DANGERPOINT;
  kcg_int D_DP;
  kcg_int V_RELEASEDP;
  kcg_int Q_OVERLAP;
  kcg_int D_STARTOL;
  kcg_int T_OL;
  kcg_int D_OL;
  kcg_int V_RELEASEOL;
} struct__7684;

/* TM::P015_trackside_int_T */
typedef struct__7684 P015_trackside_int_T_TM;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_TSR;
  kcg_int D_TSR;
  kcg_int L_TSR;
  kcg_int Q_FRONT;
  kcg_int V_TSR;
} struct__7720;

/* TM::P065_trackside_int_T */
typedef struct__7720 P065_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__7733;

/* TM::P041_section_int_T */
typedef struct__7733 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__7739[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__7739 P041_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LEVELTR;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
  kcg_int N_ITER;
  P041_trackide_sectionlist_T_TM SECTIONS;
} struct__7742;

/* TM::P041_trackside_int_T */
typedef struct__7742 P041_trackside_int_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__7762[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__7762 P041_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__7765;

/* TM::P005_section_int_T */
typedef struct__7765 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__7775[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__7775 P005_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
  kcg_int N_ITER;
  P005_trackide_sectionlist_T_TM SECTIONS;
} struct__7778;

/* TM::P005_trackside_int_T */
typedef struct__7778 P005_trackside_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__7804[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__7804 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_trackide_sectionlist_T */
typedef array_int_32 P003V1_trackide_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int N_ITER;
  P003V1_trackide_sectionlist_T_TM_baseline2 SECTIONS;
  kcg_int V_NVSHUNT;
  kcg_int V_NVSTFF;
  kcg_int V_NVONSIGHT;
  kcg_int V_NVUNFIT;
  kcg_int V_NVREL;
  kcg_int D_NVROLL;
  kcg_int Q_NVSRBKTRG;
  kcg_int Q_NVEMRRLS;
  kcg_int V_NVALLOWOVTRP;
  kcg_int V_NVSUPOVTRP;
  kcg_int D_NVOVTRP;
  kcg_int T_NVOVTRP;
  kcg_int D_NVPOTRP;
  kcg_int M_NVCONTACT;
  kcg_int T_NVCONTACT;
  kcg_int M_NVDERUN;
  kcg_int D_NVSTFF;
  kcg_int Q_NVDRIVER_ADHES;
} struct__7810;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__7810 P003V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__7842;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__7842 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__7847[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__7847 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__7847 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__7850;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__7850 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__7864[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__7864 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__7867[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__7867 P027V1_trackside_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER_n;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackside_sectionlist_T_TM_baseline2 SECTIONS_SSP;
} struct__7870;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__7870 P027V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__7885;

/* TM::P021_section_int_T */
typedef struct__7885 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__7891[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__7891 P021_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
  kcg_int N_ITER;
  P021_trackide_sectionlist_T_TM SECTIONS;
} struct__7894;

/* TM::P021_trackside_int_T */
typedef struct__7894 P021_trackside_int_T_TM;

typedef P021_section_int_T_TM array__7907[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__7907 P021_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_350[350];

#ifndef kcg_copy_struct__7465
#define kcg_copy_struct__7465(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7465)))
#endif /* kcg_copy_struct__7465 */

#ifndef kcg_copy_struct__7476
#define kcg_copy_struct__7476(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7476)))
#endif /* kcg_copy_struct__7476 */

#ifndef kcg_copy_struct__7481
#define kcg_copy_struct__7481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7481)))
#endif /* kcg_copy_struct__7481 */

#ifndef kcg_copy_struct__7494
#define kcg_copy_struct__7494(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7494)))
#endif /* kcg_copy_struct__7494 */

#ifndef kcg_copy_struct__7502
#define kcg_copy_struct__7502(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7502)))
#endif /* kcg_copy_struct__7502 */

#ifndef kcg_copy_struct__7510
#define kcg_copy_struct__7510(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7510)))
#endif /* kcg_copy_struct__7510 */

#ifndef kcg_copy_struct__7517
#define kcg_copy_struct__7517(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7517)))
#endif /* kcg_copy_struct__7517 */

#ifndef kcg_copy_struct__7524
#define kcg_copy_struct__7524(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7524)))
#endif /* kcg_copy_struct__7524 */

#ifndef kcg_copy_struct__7545
#define kcg_copy_struct__7545(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7545)))
#endif /* kcg_copy_struct__7545 */

#ifndef kcg_copy_struct__7565
#define kcg_copy_struct__7565(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7565)))
#endif /* kcg_copy_struct__7565 */

#ifndef kcg_copy_struct__7580
#define kcg_copy_struct__7580(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7580)))
#endif /* kcg_copy_struct__7580 */

#ifndef kcg_copy_struct__7592
#define kcg_copy_struct__7592(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7592)))
#endif /* kcg_copy_struct__7592 */

#ifndef kcg_copy_struct__7603
#define kcg_copy_struct__7603(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7603)))
#endif /* kcg_copy_struct__7603 */

#ifndef kcg_copy_struct__7617
#define kcg_copy_struct__7617(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7617)))
#endif /* kcg_copy_struct__7617 */

#ifndef kcg_copy_struct__7623
#define kcg_copy_struct__7623(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7623)))
#endif /* kcg_copy_struct__7623 */

#ifndef kcg_copy_struct__7628
#define kcg_copy_struct__7628(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7628)))
#endif /* kcg_copy_struct__7628 */

#ifndef kcg_copy_struct__7636
#define kcg_copy_struct__7636(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7636)))
#endif /* kcg_copy_struct__7636 */

#ifndef kcg_copy_struct__7645
#define kcg_copy_struct__7645(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7645)))
#endif /* kcg_copy_struct__7645 */

#ifndef kcg_copy_struct__7653
#define kcg_copy_struct__7653(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7653)))
#endif /* kcg_copy_struct__7653 */

#ifndef kcg_copy_struct__7658
#define kcg_copy_struct__7658(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7658)))
#endif /* kcg_copy_struct__7658 */

#ifndef kcg_copy_struct__7665
#define kcg_copy_struct__7665(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7665)))
#endif /* kcg_copy_struct__7665 */

#ifndef kcg_copy_struct__7674
#define kcg_copy_struct__7674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7674)))
#endif /* kcg_copy_struct__7674 */

#ifndef kcg_copy_struct__7684
#define kcg_copy_struct__7684(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7684)))
#endif /* kcg_copy_struct__7684 */

#ifndef kcg_copy_struct__7720
#define kcg_copy_struct__7720(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7720)))
#endif /* kcg_copy_struct__7720 */

#ifndef kcg_copy_struct__7733
#define kcg_copy_struct__7733(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7733)))
#endif /* kcg_copy_struct__7733 */

#ifndef kcg_copy_struct__7742
#define kcg_copy_struct__7742(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7742)))
#endif /* kcg_copy_struct__7742 */

#ifndef kcg_copy_struct__7765
#define kcg_copy_struct__7765(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7765)))
#endif /* kcg_copy_struct__7765 */

#ifndef kcg_copy_struct__7778
#define kcg_copy_struct__7778(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7778)))
#endif /* kcg_copy_struct__7778 */

#ifndef kcg_copy_struct__7810
#define kcg_copy_struct__7810(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7810)))
#endif /* kcg_copy_struct__7810 */

#ifndef kcg_copy_struct__7842
#define kcg_copy_struct__7842(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7842)))
#endif /* kcg_copy_struct__7842 */

#ifndef kcg_copy_struct__7850
#define kcg_copy_struct__7850(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7850)))
#endif /* kcg_copy_struct__7850 */

#ifndef kcg_copy_struct__7870
#define kcg_copy_struct__7870(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7870)))
#endif /* kcg_copy_struct__7870 */

#ifndef kcg_copy_struct__7885
#define kcg_copy_struct__7885(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7885)))
#endif /* kcg_copy_struct__7885 */

#ifndef kcg_copy_struct__7894
#define kcg_copy_struct__7894(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__7894)))
#endif /* kcg_copy_struct__7894 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__7473
#define kcg_copy_array__7473(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7473)))
#endif /* kcg_copy_array__7473 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array__7681
#define kcg_copy_array__7681(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7681)))
#endif /* kcg_copy_array__7681 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__7739
#define kcg_copy_array__7739(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7739)))
#endif /* kcg_copy_array__7739 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__7762
#define kcg_copy_array__7762(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7762)))
#endif /* kcg_copy_array__7762 */

#ifndef kcg_copy_array__7775
#define kcg_copy_array__7775(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7775)))
#endif /* kcg_copy_array__7775 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__7804
#define kcg_copy_array__7804(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7804)))
#endif /* kcg_copy_array__7804 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__7847
#define kcg_copy_array__7847(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7847)))
#endif /* kcg_copy_array__7847 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__7864
#define kcg_copy_array__7864(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7864)))
#endif /* kcg_copy_array__7864 */

#ifndef kcg_copy_array__7867
#define kcg_copy_array__7867(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7867)))
#endif /* kcg_copy_array__7867 */

#ifndef kcg_copy_array__7891
#define kcg_copy_array__7891(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7891)))
#endif /* kcg_copy_array__7891 */

#ifndef kcg_copy_array__7907
#define kcg_copy_array__7907(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__7907)))
#endif /* kcg_copy_array__7907 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_comp_struct__7465
extern kcg_bool kcg_comp_struct__7465(
  struct__7465 *kcg_c1,
  struct__7465 *kcg_c2);
#endif /* kcg_comp_struct__7465 */

#ifndef kcg_comp_struct__7476
extern kcg_bool kcg_comp_struct__7476(
  struct__7476 *kcg_c1,
  struct__7476 *kcg_c2);
#endif /* kcg_comp_struct__7476 */

#ifndef kcg_comp_struct__7481
extern kcg_bool kcg_comp_struct__7481(
  struct__7481 *kcg_c1,
  struct__7481 *kcg_c2);
#endif /* kcg_comp_struct__7481 */

#ifndef kcg_comp_struct__7494
extern kcg_bool kcg_comp_struct__7494(
  struct__7494 *kcg_c1,
  struct__7494 *kcg_c2);
#endif /* kcg_comp_struct__7494 */

#ifndef kcg_comp_struct__7502
extern kcg_bool kcg_comp_struct__7502(
  struct__7502 *kcg_c1,
  struct__7502 *kcg_c2);
#endif /* kcg_comp_struct__7502 */

#ifndef kcg_comp_struct__7510
extern kcg_bool kcg_comp_struct__7510(
  struct__7510 *kcg_c1,
  struct__7510 *kcg_c2);
#endif /* kcg_comp_struct__7510 */

#ifndef kcg_comp_struct__7517
extern kcg_bool kcg_comp_struct__7517(
  struct__7517 *kcg_c1,
  struct__7517 *kcg_c2);
#endif /* kcg_comp_struct__7517 */

#ifndef kcg_comp_struct__7524
extern kcg_bool kcg_comp_struct__7524(
  struct__7524 *kcg_c1,
  struct__7524 *kcg_c2);
#endif /* kcg_comp_struct__7524 */

#ifndef kcg_comp_struct__7545
extern kcg_bool kcg_comp_struct__7545(
  struct__7545 *kcg_c1,
  struct__7545 *kcg_c2);
#endif /* kcg_comp_struct__7545 */

#ifndef kcg_comp_struct__7565
extern kcg_bool kcg_comp_struct__7565(
  struct__7565 *kcg_c1,
  struct__7565 *kcg_c2);
#endif /* kcg_comp_struct__7565 */

#ifndef kcg_comp_struct__7580
extern kcg_bool kcg_comp_struct__7580(
  struct__7580 *kcg_c1,
  struct__7580 *kcg_c2);
#endif /* kcg_comp_struct__7580 */

#ifndef kcg_comp_struct__7592
extern kcg_bool kcg_comp_struct__7592(
  struct__7592 *kcg_c1,
  struct__7592 *kcg_c2);
#endif /* kcg_comp_struct__7592 */

#ifndef kcg_comp_struct__7603
extern kcg_bool kcg_comp_struct__7603(
  struct__7603 *kcg_c1,
  struct__7603 *kcg_c2);
#endif /* kcg_comp_struct__7603 */

#ifndef kcg_comp_struct__7617
extern kcg_bool kcg_comp_struct__7617(
  struct__7617 *kcg_c1,
  struct__7617 *kcg_c2);
#endif /* kcg_comp_struct__7617 */

#ifndef kcg_comp_struct__7623
extern kcg_bool kcg_comp_struct__7623(
  struct__7623 *kcg_c1,
  struct__7623 *kcg_c2);
#endif /* kcg_comp_struct__7623 */

#ifndef kcg_comp_struct__7628
extern kcg_bool kcg_comp_struct__7628(
  struct__7628 *kcg_c1,
  struct__7628 *kcg_c2);
#endif /* kcg_comp_struct__7628 */

#ifndef kcg_comp_struct__7636
extern kcg_bool kcg_comp_struct__7636(
  struct__7636 *kcg_c1,
  struct__7636 *kcg_c2);
#endif /* kcg_comp_struct__7636 */

#ifndef kcg_comp_struct__7645
extern kcg_bool kcg_comp_struct__7645(
  struct__7645 *kcg_c1,
  struct__7645 *kcg_c2);
#endif /* kcg_comp_struct__7645 */

#ifndef kcg_comp_struct__7653
extern kcg_bool kcg_comp_struct__7653(
  struct__7653 *kcg_c1,
  struct__7653 *kcg_c2);
#endif /* kcg_comp_struct__7653 */

#ifndef kcg_comp_struct__7658
extern kcg_bool kcg_comp_struct__7658(
  struct__7658 *kcg_c1,
  struct__7658 *kcg_c2);
#endif /* kcg_comp_struct__7658 */

#ifndef kcg_comp_struct__7665
extern kcg_bool kcg_comp_struct__7665(
  struct__7665 *kcg_c1,
  struct__7665 *kcg_c2);
#endif /* kcg_comp_struct__7665 */

#ifndef kcg_comp_struct__7674
extern kcg_bool kcg_comp_struct__7674(
  struct__7674 *kcg_c1,
  struct__7674 *kcg_c2);
#endif /* kcg_comp_struct__7674 */

#ifndef kcg_comp_struct__7684
extern kcg_bool kcg_comp_struct__7684(
  struct__7684 *kcg_c1,
  struct__7684 *kcg_c2);
#endif /* kcg_comp_struct__7684 */

#ifndef kcg_comp_struct__7720
extern kcg_bool kcg_comp_struct__7720(
  struct__7720 *kcg_c1,
  struct__7720 *kcg_c2);
#endif /* kcg_comp_struct__7720 */

#ifndef kcg_comp_struct__7733
extern kcg_bool kcg_comp_struct__7733(
  struct__7733 *kcg_c1,
  struct__7733 *kcg_c2);
#endif /* kcg_comp_struct__7733 */

#ifndef kcg_comp_struct__7742
extern kcg_bool kcg_comp_struct__7742(
  struct__7742 *kcg_c1,
  struct__7742 *kcg_c2);
#endif /* kcg_comp_struct__7742 */

#ifndef kcg_comp_struct__7765
extern kcg_bool kcg_comp_struct__7765(
  struct__7765 *kcg_c1,
  struct__7765 *kcg_c2);
#endif /* kcg_comp_struct__7765 */

#ifndef kcg_comp_struct__7778
extern kcg_bool kcg_comp_struct__7778(
  struct__7778 *kcg_c1,
  struct__7778 *kcg_c2);
#endif /* kcg_comp_struct__7778 */

#ifndef kcg_comp_struct__7810
extern kcg_bool kcg_comp_struct__7810(
  struct__7810 *kcg_c1,
  struct__7810 *kcg_c2);
#endif /* kcg_comp_struct__7810 */

#ifndef kcg_comp_struct__7842
extern kcg_bool kcg_comp_struct__7842(
  struct__7842 *kcg_c1,
  struct__7842 *kcg_c2);
#endif /* kcg_comp_struct__7842 */

#ifndef kcg_comp_struct__7850
extern kcg_bool kcg_comp_struct__7850(
  struct__7850 *kcg_c1,
  struct__7850 *kcg_c2);
#endif /* kcg_comp_struct__7850 */

#ifndef kcg_comp_struct__7870
extern kcg_bool kcg_comp_struct__7870(
  struct__7870 *kcg_c1,
  struct__7870 *kcg_c2);
#endif /* kcg_comp_struct__7870 */

#ifndef kcg_comp_struct__7885
extern kcg_bool kcg_comp_struct__7885(
  struct__7885 *kcg_c1,
  struct__7885 *kcg_c2);
#endif /* kcg_comp_struct__7885 */

#ifndef kcg_comp_struct__7894
extern kcg_bool kcg_comp_struct__7894(
  struct__7894 *kcg_c1,
  struct__7894 *kcg_c2);
#endif /* kcg_comp_struct__7894 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__7473
extern kcg_bool kcg_comp_array__7473(array__7473 *kcg_c1, array__7473 *kcg_c2);
#endif /* kcg_comp_array__7473 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */

#ifndef kcg_comp_array__7681
extern kcg_bool kcg_comp_array__7681(array__7681 *kcg_c1, array__7681 *kcg_c2);
#endif /* kcg_comp_array__7681 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_4_32
extern kcg_bool kcg_comp_array_int_4_32(
  array_int_4_32 *kcg_c1,
  array_int_4_32 *kcg_c2);
#endif /* kcg_comp_array_int_4_32 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array__7739
extern kcg_bool kcg_comp_array__7739(array__7739 *kcg_c1, array__7739 *kcg_c2);
#endif /* kcg_comp_array__7739 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__7762
extern kcg_bool kcg_comp_array__7762(array__7762 *kcg_c1, array__7762 *kcg_c2);
#endif /* kcg_comp_array__7762 */

#ifndef kcg_comp_array__7775
extern kcg_bool kcg_comp_array__7775(array__7775 *kcg_c1, array__7775 *kcg_c2);
#endif /* kcg_comp_array__7775 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__7804
extern kcg_bool kcg_comp_array__7804(array__7804 *kcg_c1, array__7804 *kcg_c2);
#endif /* kcg_comp_array__7804 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__7847
extern kcg_bool kcg_comp_array__7847(array__7847 *kcg_c1, array__7847 *kcg_c2);
#endif /* kcg_comp_array__7847 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__7864
extern kcg_bool kcg_comp_array__7864(array__7864 *kcg_c1, array__7864 *kcg_c2);
#endif /* kcg_comp_array__7864 */

#ifndef kcg_comp_array__7867
extern kcg_bool kcg_comp_array__7867(array__7867 *kcg_c1, array__7867 *kcg_c2);
#endif /* kcg_comp_array__7867 */

#ifndef kcg_comp_array__7891
extern kcg_bool kcg_comp_array__7891(array__7891 *kcg_c1, array__7891 *kcg_c2);
#endif /* kcg_comp_array__7891 */

#ifndef kcg_comp_array__7907
extern kcg_bool kcg_comp_array__7907(array__7907 *kcg_c1, array__7907 *kcg_c2);
#endif /* kcg_comp_array__7907 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#define kcg_comp_P044_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P044_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P044_other_data_TM_TrainToTrack kcg_comp_array_int_1

#define kcg_copy_P044_other_data_TM_TrainToTrack kcg_copy_array_int_1

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__7617

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__7617

#define kcg_comp_P044_TM_TrainToTrack kcg_comp_struct__7502

#define kcg_copy_P044_TM_TrainToTrack kcg_copy_struct__7502

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__7623

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__7623

#define kcg_comp_P005_TM_TrainToTrack kcg_comp_struct__7510

#define kcg_copy_P005_TM_TrainToTrack kcg_copy_struct__7510

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__7636

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__7636

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__7658

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__7658

#define kcg_comp_P004_TM_TrainToTrack kcg_comp_struct__7517

#define kcg_copy_P004_TM_TrainToTrack kcg_copy_struct__7517

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TM_TrainToTrack kcg_comp_struct__7524

#define kcg_copy_P001_TM_TrainToTrack kcg_copy_struct__7524

#define kcg_comp_P000_TM_TrainToTrack kcg_comp_struct__7545

#define kcg_copy_P000_TM_TrainToTrack kcg_copy_struct__7545

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__7810

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__7810

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__7847

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__7847

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__7864

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__7864

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__7850

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__7850

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__7867

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__7867

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__7842

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__7842

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__7847

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__7847

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__7870

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__7870

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__7476

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__7476

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__7465

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__7465

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__7473

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__7473

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__7494

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__7494

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__7628

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__7628

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__7645

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__7645

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__7653

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__7653

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__7481

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__7481

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__7681

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__7681

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__7674

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__7674

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__7681

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__7681

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__7684

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__7684

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__7720

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__7720

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__7762

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__7762

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__7733

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__7733

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__7739

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__7739

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__7742

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__7742

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__7804

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__7804

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__7765

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__7765

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__7775

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__7775

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__7778

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__7778

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__7907

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__7907

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__7885

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__7885

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__7891

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__7891

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__7894

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__7894

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__7628

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__7628

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__7565

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__7565

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__7665

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__7665

#define kcg_comp_M_157_T_TM_radio_messages kcg_comp_struct__7580

#define kcg_copy_M_157_T_TM_radio_messages kcg_copy_struct__7580

#define kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_comp_array_int_50

#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_copy_array_int_50

#define kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_comp_struct__7592

#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_copy_struct__7592

#define kcg_comp_M_TrainTrack_Message_T_TM_radio_messages kcg_comp_struct__7603

#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages kcg_copy_struct__7603

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */


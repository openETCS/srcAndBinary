/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
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

/* Q_ORIENTATION */
typedef enum {
  _5_Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} Q_ORIENTATION;
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
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_STATUS */
typedef enum {
  Q_STATUS_Invalid = 0,
  Q_STATUS_Valid = 1,
  Q_STATUS_Unknown = 2
} Q_STATUS;
/* Q_OVERLAP */
typedef enum {
  Q_OVERLAP_No_overlap_information = 0,
  Q_OVERLAP_Overlap_information_to_follow = 1
} Q_OVERLAP;
/* Q_DANGERPOINT */
typedef enum {
  Q_DANGERPOINT_No_danger_point_information = 0,
  Q_DANGERPOINT_Danger_point_information_to_follow = 1
} Q_DANGERPOINT;
/* Q_ENDTIMER */
typedef enum {
  Q_ENDTIMER_No_End_section_timer_information = 0,
  Q_ENDTIMER_End_section_timer_information_to_follow = 1
} Q_ENDTIMER;
/* Q_SECTIONTIMER */
typedef enum {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* M_LEVELTR */
typedef enum {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_NEWCOUNTRY */
typedef enum {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_LINKORIENTATION */
typedef enum {
  _8_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_NVSBTSMPERM */
typedef enum { Q_NVSBTSMPERM_No = 0, Q_NVSBTSMPERM_Yes = 1 } Q_NVSBTSMPERM;
/* Q_NVEMRRLS */
typedef enum {
  _7_Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1
} Q_NVEMRRLS;
/* M_NVCONTACT */
typedef enum {
  M_NVCONTACT_Train_trip = 0,
  M_NVCONTACT_Apply_service_brake = 1,
  M_NVCONTACT_No_Reaction = 2
} M_NVCONTACT;
/* M_NVDERUN */
typedef enum { M_NVDERUN_No = 0, M_NVDERUN_Yes = 1 } M_NVDERUN;
/* Q_NVDRIVER_ADHES */
typedef enum {
  Q_NVDRIVER_ADHES_Not_allowed = 0,
  Q_NVDRIVER_ADHES_Allowed = 1
} Q_NVDRIVER_ADHES;
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
  _6_Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
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
/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* NID_EM */
typedef kcg_int NID_EM;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* D_DP */
typedef kcg_int D_DP;

/* D_OL */
typedef kcg_int D_OL;

/* V_LOA */
typedef kcg_int V_LOA;

/* T_ENDTIMER */
typedef kcg_int T_ENDTIMER;

/* L_SECTION */
typedef kcg_int L_SECTION;

/* T_SECTIONTIMER */
typedef kcg_int T_SECTIONTIMER;

/* D_SECTIONTIMERSTOPLOC */
typedef kcg_int D_SECTIONTIMERSTOPLOC;

/* T_LOA */
typedef kcg_int T_LOA;

/* N_ITER */
typedef kcg_int N_ITER;

/* L_ENDSECTION */
typedef kcg_int L_ENDSECTION;

/* D_ENDTIMERSTARTLOC */
typedef kcg_int D_ENDTIMERSTARTLOC;

/* V_RELEASEDP */
typedef kcg_int V_RELEASEDP;

/* D_STARTOL */
typedef kcg_int D_STARTOL;

/* T_OL */
typedef kcg_int T_OL;

/* V_RELEASEOL */
typedef kcg_int V_RELEASEOL;

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

/* D_LEVELTR */
typedef kcg_int D_LEVELTR;

/* D_LINK */
typedef kcg_int D_LINK;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* D_VALIDNV */
typedef kcg_int D_VALIDNV;

/* V_NVSHUNT */
typedef kcg_int V_NVSHUNT;

/* V_NVSTFF */
typedef kcg_int V_NVSTFF;

/* V_NVONSIGHT */
typedef kcg_int V_NVONSIGHT;

/* V_NVUNFIT */
typedef kcg_int V_NVUNFIT;

/* V_NVREL */
typedef kcg_int V_NVREL;

/* D_NVROLL */
typedef kcg_int D_NVROLL;

/* V_NVALLOWOVTRP */
typedef kcg_int V_NVALLOWOVTRP;

/* V_NVSUPOVTRP */
typedef kcg_int V_NVSUPOVTRP;

/* D_NVOVTRP */
typedef kcg_int D_NVOVTRP;

/* T_NVOVTRP */
typedef kcg_int T_NVOVTRP;

/* D_NVPOTRP */
typedef kcg_int D_NVPOTRP;

/* T_NVCONTACT */
typedef kcg_int T_NVCONTACT;

/* D_NVSTFF */
typedef kcg_int D_NVSTFF;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_XUSER */
typedef kcg_int NID_XUSER;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

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

/* NID_PRVLRBG */
typedef kcg_int NID_PRVLRBG;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

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
} struct__18877;

/* TM_TrainToTrack::P001 */
typedef struct__18877 P001_TM_TrainToTrack;

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
} struct__18898;

/* TM_TrainToTrack::P000 */
typedef struct__18898 P000_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} struct__18918;

/* TM_TrainToTrack::P005 */
typedef struct__18918 P005_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} struct__18925;

/* TM_TrainToTrack::P004 */
typedef struct__18925 P004_TM_TrainToTrack;

typedef struct { kcg_bool valid; NID_C nid_c; } struct__18932;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__18932 P003V1_section_enum_T_TM_baseline2;

typedef P003V1_section_enum_T_TM_baseline2 array__18937[32];

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__18937 P003V1_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  N_ITER n_iter;
  P003V1_sectionlist_enum_T_TM_baseline2 SECTIONS;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsopovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
} struct__18940;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__18940 P003V1_OBU_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__18967;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__18967 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__18973[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__18973 _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__18976;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__18976 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__18985[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__18985 _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__18988;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__18988 P027V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__18998;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__18998 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__19006[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__19006 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__19009;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__19009 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_int q_updown;
  kcg_int _1_m_version;
  kcg_int q_media;
  kcg_int n_pig;
  kcg_int n_total;
  kcg_int m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  kcg_int q_link;
} struct__19014;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__19014 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__19027;

/* TM::CompressedBaliseMessage */
typedef struct__19027 CompressedBaliseMessage_TM;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__19032;

/* TM::P005_section_enum_T */
typedef struct__19032 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__19043[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__19043 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__19046;

/* TM::P005_OBU_T */
typedef struct__19046 P005_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__19055;

/* TM::P041_section_enum_T */
typedef struct__19055 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__19062[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__19062 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__19065;

/* TM::P041_OBU_T */
typedef struct__19065 P041_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__19074;

/* TM::P021_section_enum_T */
typedef struct__19074 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__19081[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__19081 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__19084;

/* TM::P021_OBU_T */
typedef struct__19084 P021_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__19092;

/* TM::P015_section_enum_T */
typedef struct__19092 P015_section_enum_T_TM;

typedef P015_section_enum_T_TM array__19100[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__19100 P015_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_LOA v_loa;
  T_LOA t_loa;
  N_ITER n_iter;
  P015_OBU_sectionlist_enum_T_TM sections;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} struct__19103;

/* TM::P015_OBU_T */
typedef struct__19103 P015_OBU_T_TM;

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
} struct__19128;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__19128 M_TrackTrain_Radio_T_TM_radio_messages;

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
} struct__19146;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct__19146 M_TrainTrack_MessageHd_T_TM_radio_messages;

typedef struct {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} struct__19157;

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct__19157 M_TrainTrack_Message_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_STATUS q_status;
} struct__19162;

/* TM_radio_messages::M_157_T */
typedef struct__19162 M_157_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__19171;

/* TM_radio_messages::M_003_T */
typedef struct__19171 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_024_T */
typedef struct__19171 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__19171 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__19171 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__19171 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__19171 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__19171 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__19171 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__19171 M_038_T_TM_radio_messages;

typedef kcg_int array_int_1[1];

/* TM_TrainToTrack::P044_other_data */
typedef array_int_1 P044_other_data_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} struct__19183;

/* TM_TrainToTrack::P044 */
typedef struct__19183 P044_TM_TrainToTrack;

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P044_TrainTrack_int */
typedef array_int_25 P044_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToTrack;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__19200;

/* InfraLib::TrainPosRaw_T */
typedef struct__19200 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__19206;

/* InfraLib::TrackSectionData_T */
typedef struct__19206 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__19211;

/* TM::BaliseGroupData */
typedef struct__19211 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__19211 BaliseGroupData_Basics;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__19219;

/* InfraLib::B_data_internal_T */
typedef struct__19219 B_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__19228;

/* TM::P045_trackside_int_T */
typedef struct__19228 P045_trackside_int_T_TM;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__19236;

/* TM::P255_trackside_int_T */
typedef struct__19236 P255_trackside_int_T_TM;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__19241;

/* InfraLib::R_data_internal_T */
typedef struct__19241 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__19248;

/* TM_radio_messages::M_003_int_T */
typedef struct__19248 M_003_int_T_TM_radio_messages;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__19257;

/* TM::P015_section_int_T */
typedef struct__19257 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__19264[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__19264 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__19264 P015_OBU_sectionlist_int_T_TM;

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
} struct__19267;

/* TM::P015_trackside_int_T */
typedef struct__19267 P015_trackside_int_T_TM;

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
} struct__19303;

/* TM::P065_trackside_int_T */
typedef struct__19303 P065_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__19316;

/* TM::P041_section_int_T */
typedef struct__19316 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__19322[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__19322 P041_trackide_sectionlist_T_TM;

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
} struct__19325;

/* TM::P041_trackside_int_T */
typedef struct__19325 P041_trackside_int_T_TM;

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

typedef P041_section_int_T_TM array__19345[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__19345 P041_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__19348;

/* TM::P005_section_int_T */
typedef struct__19348 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__19358[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__19358 P005_trackide_sectionlist_T_TM;

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
} struct__19361;

/* TM::P005_trackside_int_T */
typedef struct__19361 P005_trackside_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__19387[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__19387 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

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
} struct__19393;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__19393 P003V1_trackside_int_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__19422;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__19422 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__19427[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__19427 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__19427 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__19430;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__19430 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__19447[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__19447 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__19450[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__19450 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__19453;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__19453 P027V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__19468;

/* TM::P021_section_int_T */
typedef struct__19468 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__19474[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__19474 P021_trackide_sectionlist_T_TM;

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
} struct__19477;

/* TM::P021_trackside_int_T */
typedef struct__19477 P021_trackside_int_T_TM;

typedef P021_section_int_T_TM array__19490[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__19490 P021_OBU_sectionlist_int_T_TM;

typedef M_TrainTrack_Message_T_TM_radio_messages array__19493[5];

/* TM_lib_internal::M_TrainTrackMessage_buffer_t */
typedef array__19493 M_TrainTrackMessage_buffer_t_TM_lib_internal;

/* TM_TrainTrack_Bus::M_TrainTrackMessageBus_t */
typedef array__19493 M_TrainTrackMessageBus_t_TM_TrainTrack_Bus;

typedef kcg_int array_int_24[24];

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__19499;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__19499 P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef kcg_int array_int_15[15];

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef kcg_int array_int_6[6];

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef struct {
  kcg_int radioDevice;
  T_internal_Type_Obu_BasicTypes_Pkg receivedSystemTime;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_reference;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_SR d_sr;
  T_TRAIN t_sh_rqst;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
  M_VERSION _1_m_version;
} struct__19514;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__19514 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__19532;

/* TM_radio_messages::M_027_T */
typedef struct__19532 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__19532 M_028_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION _1_m_version;
} struct__19542;

/* TM_radio_messages::M_032_T */
typedef struct__19542 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__19552;

/* TM_radio_messages::M_033_T */
typedef struct__19552 M_033_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_TAFDISPLAY d_tafdisplay;
  L_TAFDISPLAY l_tafdisplay;
} struct__19563;

/* TM_radio_messages::M_034_T */
typedef struct__19563 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__19577;

/* TM_radio_messages::M_045_T */
typedef struct__19577 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__19587;

/* TM_radio_messages::M_002_T */
typedef struct__19587 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__19598;

/* TM_radio_messages::M_008_T */
typedef struct__19598 M_008_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
} struct__19608;

/* TM_radio_messages::M_015_T */
typedef struct__19608 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__19622;

/* TM_radio_messages::M_018_T */
typedef struct__19622 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__19622 M_016_T_TM_radio_messages;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef P015_sections_array_flat_T_TM array_int_128_32[32];

typedef kcg_int array_int_33[33];

typedef array_int_99 array_int_99_33[33];

typedef P005_sections_array_flat_T_TM array_int_231_33[33];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef CompressedPackets_T_Common_Types_Pkg array__19656[33];

typedef P003V1_OBU_sectionlist_int_T_TM_baseline2 array_int_32_32[32];

typedef M_TrainTrack_Message_T_TM_radio_messages array__19662[4];

typedef M_TrainTrack_Message_T_TM_radio_messages array__19665[1];

typedef M_TrainTrackMessageBus_t_TM_TrainTrack_Bus array__19668[5];

typedef kcg_int array_int_23[23];

typedef kcg_int array_int_20[20];

typedef kcg_int array_int_48[48];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__19689[1];

typedef kcg_int array_int_494[494];

typedef P027V1_section_int_T_TM_baseline2 array__19695[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__19725[1];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__19737[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_21[21];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_22[22];

typedef kcg_int array_int_499[499];

typedef kcg_int array_int_496[496];

#ifndef kcg_copy_struct__18877
#define kcg_copy_struct__18877(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18877)))
#endif /* kcg_copy_struct__18877 */

#ifndef kcg_copy_struct__18898
#define kcg_copy_struct__18898(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18898)))
#endif /* kcg_copy_struct__18898 */

#ifndef kcg_copy_struct__18918
#define kcg_copy_struct__18918(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18918)))
#endif /* kcg_copy_struct__18918 */

#ifndef kcg_copy_struct__18925
#define kcg_copy_struct__18925(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18925)))
#endif /* kcg_copy_struct__18925 */

#ifndef kcg_copy_struct__18932
#define kcg_copy_struct__18932(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18932)))
#endif /* kcg_copy_struct__18932 */

#ifndef kcg_copy_struct__18940
#define kcg_copy_struct__18940(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18940)))
#endif /* kcg_copy_struct__18940 */

#ifndef kcg_copy_struct__18967
#define kcg_copy_struct__18967(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18967)))
#endif /* kcg_copy_struct__18967 */

#ifndef kcg_copy_struct__18976
#define kcg_copy_struct__18976(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18976)))
#endif /* kcg_copy_struct__18976 */

#ifndef kcg_copy_struct__18988
#define kcg_copy_struct__18988(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18988)))
#endif /* kcg_copy_struct__18988 */

#ifndef kcg_copy_struct__18998
#define kcg_copy_struct__18998(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__18998)))
#endif /* kcg_copy_struct__18998 */

#ifndef kcg_copy_struct__19009
#define kcg_copy_struct__19009(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19009)))
#endif /* kcg_copy_struct__19009 */

#ifndef kcg_copy_struct__19014
#define kcg_copy_struct__19014(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19014)))
#endif /* kcg_copy_struct__19014 */

#ifndef kcg_copy_struct__19027
#define kcg_copy_struct__19027(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19027)))
#endif /* kcg_copy_struct__19027 */

#ifndef kcg_copy_struct__19032
#define kcg_copy_struct__19032(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19032)))
#endif /* kcg_copy_struct__19032 */

#ifndef kcg_copy_struct__19046
#define kcg_copy_struct__19046(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19046)))
#endif /* kcg_copy_struct__19046 */

#ifndef kcg_copy_struct__19055
#define kcg_copy_struct__19055(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19055)))
#endif /* kcg_copy_struct__19055 */

#ifndef kcg_copy_struct__19065
#define kcg_copy_struct__19065(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19065)))
#endif /* kcg_copy_struct__19065 */

#ifndef kcg_copy_struct__19074
#define kcg_copy_struct__19074(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19074)))
#endif /* kcg_copy_struct__19074 */

#ifndef kcg_copy_struct__19084
#define kcg_copy_struct__19084(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19084)))
#endif /* kcg_copy_struct__19084 */

#ifndef kcg_copy_struct__19092
#define kcg_copy_struct__19092(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19092)))
#endif /* kcg_copy_struct__19092 */

#ifndef kcg_copy_struct__19103
#define kcg_copy_struct__19103(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19103)))
#endif /* kcg_copy_struct__19103 */

#ifndef kcg_copy_struct__19128
#define kcg_copy_struct__19128(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19128)))
#endif /* kcg_copy_struct__19128 */

#ifndef kcg_copy_struct__19146
#define kcg_copy_struct__19146(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19146)))
#endif /* kcg_copy_struct__19146 */

#ifndef kcg_copy_struct__19157
#define kcg_copy_struct__19157(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19157)))
#endif /* kcg_copy_struct__19157 */

#ifndef kcg_copy_struct__19162
#define kcg_copy_struct__19162(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19162)))
#endif /* kcg_copy_struct__19162 */

#ifndef kcg_copy_struct__19171
#define kcg_copy_struct__19171(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19171)))
#endif /* kcg_copy_struct__19171 */

#ifndef kcg_copy_struct__19183
#define kcg_copy_struct__19183(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19183)))
#endif /* kcg_copy_struct__19183 */

#ifndef kcg_copy_struct__19200
#define kcg_copy_struct__19200(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19200)))
#endif /* kcg_copy_struct__19200 */

#ifndef kcg_copy_struct__19206
#define kcg_copy_struct__19206(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19206)))
#endif /* kcg_copy_struct__19206 */

#ifndef kcg_copy_struct__19211
#define kcg_copy_struct__19211(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19211)))
#endif /* kcg_copy_struct__19211 */

#ifndef kcg_copy_struct__19219
#define kcg_copy_struct__19219(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19219)))
#endif /* kcg_copy_struct__19219 */

#ifndef kcg_copy_struct__19228
#define kcg_copy_struct__19228(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19228)))
#endif /* kcg_copy_struct__19228 */

#ifndef kcg_copy_struct__19236
#define kcg_copy_struct__19236(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19236)))
#endif /* kcg_copy_struct__19236 */

#ifndef kcg_copy_struct__19241
#define kcg_copy_struct__19241(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19241)))
#endif /* kcg_copy_struct__19241 */

#ifndef kcg_copy_struct__19248
#define kcg_copy_struct__19248(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19248)))
#endif /* kcg_copy_struct__19248 */

#ifndef kcg_copy_struct__19257
#define kcg_copy_struct__19257(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19257)))
#endif /* kcg_copy_struct__19257 */

#ifndef kcg_copy_struct__19267
#define kcg_copy_struct__19267(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19267)))
#endif /* kcg_copy_struct__19267 */

#ifndef kcg_copy_struct__19303
#define kcg_copy_struct__19303(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19303)))
#endif /* kcg_copy_struct__19303 */

#ifndef kcg_copy_struct__19316
#define kcg_copy_struct__19316(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19316)))
#endif /* kcg_copy_struct__19316 */

#ifndef kcg_copy_struct__19325
#define kcg_copy_struct__19325(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19325)))
#endif /* kcg_copy_struct__19325 */

#ifndef kcg_copy_struct__19348
#define kcg_copy_struct__19348(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19348)))
#endif /* kcg_copy_struct__19348 */

#ifndef kcg_copy_struct__19361
#define kcg_copy_struct__19361(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19361)))
#endif /* kcg_copy_struct__19361 */

#ifndef kcg_copy_struct__19393
#define kcg_copy_struct__19393(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19393)))
#endif /* kcg_copy_struct__19393 */

#ifndef kcg_copy_struct__19422
#define kcg_copy_struct__19422(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19422)))
#endif /* kcg_copy_struct__19422 */

#ifndef kcg_copy_struct__19430
#define kcg_copy_struct__19430(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19430)))
#endif /* kcg_copy_struct__19430 */

#ifndef kcg_copy_struct__19453
#define kcg_copy_struct__19453(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19453)))
#endif /* kcg_copy_struct__19453 */

#ifndef kcg_copy_struct__19468
#define kcg_copy_struct__19468(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19468)))
#endif /* kcg_copy_struct__19468 */

#ifndef kcg_copy_struct__19477
#define kcg_copy_struct__19477(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19477)))
#endif /* kcg_copy_struct__19477 */

#ifndef kcg_copy_struct__19499
#define kcg_copy_struct__19499(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19499)))
#endif /* kcg_copy_struct__19499 */

#ifndef kcg_copy_struct__19514
#define kcg_copy_struct__19514(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19514)))
#endif /* kcg_copy_struct__19514 */

#ifndef kcg_copy_struct__19532
#define kcg_copy_struct__19532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19532)))
#endif /* kcg_copy_struct__19532 */

#ifndef kcg_copy_struct__19542
#define kcg_copy_struct__19542(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19542)))
#endif /* kcg_copy_struct__19542 */

#ifndef kcg_copy_struct__19552
#define kcg_copy_struct__19552(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19552)))
#endif /* kcg_copy_struct__19552 */

#ifndef kcg_copy_struct__19563
#define kcg_copy_struct__19563(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19563)))
#endif /* kcg_copy_struct__19563 */

#ifndef kcg_copy_struct__19577
#define kcg_copy_struct__19577(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19577)))
#endif /* kcg_copy_struct__19577 */

#ifndef kcg_copy_struct__19587
#define kcg_copy_struct__19587(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19587)))
#endif /* kcg_copy_struct__19587 */

#ifndef kcg_copy_struct__19598
#define kcg_copy_struct__19598(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19598)))
#endif /* kcg_copy_struct__19598 */

#ifndef kcg_copy_struct__19608
#define kcg_copy_struct__19608(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19608)))
#endif /* kcg_copy_struct__19608 */

#ifndef kcg_copy_struct__19622
#define kcg_copy_struct__19622(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__19622)))
#endif /* kcg_copy_struct__19622 */

#ifndef kcg_copy_array__18937
#define kcg_copy_array__18937(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18937)))
#endif /* kcg_copy_array__18937 */

#ifndef kcg_copy_array__18973
#define kcg_copy_array__18973(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18973)))
#endif /* kcg_copy_array__18973 */

#ifndef kcg_copy_array__18985
#define kcg_copy_array__18985(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__18985)))
#endif /* kcg_copy_array__18985 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__19006
#define kcg_copy_array__19006(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19006)))
#endif /* kcg_copy_array__19006 */

#ifndef kcg_copy_array__19043
#define kcg_copy_array__19043(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19043)))
#endif /* kcg_copy_array__19043 */

#ifndef kcg_copy_array__19062
#define kcg_copy_array__19062(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19062)))
#endif /* kcg_copy_array__19062 */

#ifndef kcg_copy_array__19081
#define kcg_copy_array__19081(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19081)))
#endif /* kcg_copy_array__19081 */

#ifndef kcg_copy_array__19100
#define kcg_copy_array__19100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19100)))
#endif /* kcg_copy_array__19100 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array__19264
#define kcg_copy_array__19264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19264)))
#endif /* kcg_copy_array__19264 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__19322
#define kcg_copy_array__19322(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19322)))
#endif /* kcg_copy_array__19322 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__19345
#define kcg_copy_array__19345(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19345)))
#endif /* kcg_copy_array__19345 */

#ifndef kcg_copy_array__19358
#define kcg_copy_array__19358(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19358)))
#endif /* kcg_copy_array__19358 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__19387
#define kcg_copy_array__19387(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19387)))
#endif /* kcg_copy_array__19387 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__19427
#define kcg_copy_array__19427(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19427)))
#endif /* kcg_copy_array__19427 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__19447
#define kcg_copy_array__19447(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19447)))
#endif /* kcg_copy_array__19447 */

#ifndef kcg_copy_array__19450
#define kcg_copy_array__19450(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19450)))
#endif /* kcg_copy_array__19450 */

#ifndef kcg_copy_array__19474
#define kcg_copy_array__19474(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19474)))
#endif /* kcg_copy_array__19474 */

#ifndef kcg_copy_array__19490
#define kcg_copy_array__19490(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19490)))
#endif /* kcg_copy_array__19490 */

#ifndef kcg_copy_array__19493
#define kcg_copy_array__19493(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19493)))
#endif /* kcg_copy_array__19493 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_128_32
#define kcg_copy_array_int_128_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128_32)))
#endif /* kcg_copy_array_int_128_32 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_99_33
#define kcg_copy_array_int_99_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99_33)))
#endif /* kcg_copy_array_int_99_33 */

#ifndef kcg_copy_array_int_231_33
#define kcg_copy_array_int_231_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231_33)))
#endif /* kcg_copy_array_int_231_33 */

#ifndef kcg_copy_array_int_64_32
#define kcg_copy_array_int_64_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64_32)))
#endif /* kcg_copy_array_int_64_32 */

#ifndef kcg_copy_array__19656
#define kcg_copy_array__19656(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19656)))
#endif /* kcg_copy_array__19656 */

#ifndef kcg_copy_array_int_32_32
#define kcg_copy_array_int_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32_32)))
#endif /* kcg_copy_array_int_32_32 */

#ifndef kcg_copy_array__19662
#define kcg_copy_array__19662(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19662)))
#endif /* kcg_copy_array__19662 */

#ifndef kcg_copy_array__19665
#define kcg_copy_array__19665(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19665)))
#endif /* kcg_copy_array__19665 */

#ifndef kcg_copy_array__19668
#define kcg_copy_array__19668(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19668)))
#endif /* kcg_copy_array__19668 */

#ifndef kcg_copy_array_int_23
#define kcg_copy_array_int_23(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_23)))
#endif /* kcg_copy_array_int_23 */

#ifndef kcg_copy_array_int_20
#define kcg_copy_array_int_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_20)))
#endif /* kcg_copy_array_int_20 */

#ifndef kcg_copy_array_int_48
#define kcg_copy_array_int_48(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_48)))
#endif /* kcg_copy_array_int_48 */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array__19689
#define kcg_copy_array__19689(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19689)))
#endif /* kcg_copy_array__19689 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array__19695
#define kcg_copy_array__19695(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19695)))
#endif /* kcg_copy_array__19695 */

#ifndef kcg_copy_array_int_2_32_32
#define kcg_copy_array_int_2_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_32)))
#endif /* kcg_copy_array_int_2_32_32 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_68
#define kcg_copy_array_int_68(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_68)))
#endif /* kcg_copy_array_int_68 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_56
#define kcg_copy_array_int_56(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_56)))
#endif /* kcg_copy_array_int_56 */

#ifndef kcg_copy_array_int_18
#define kcg_copy_array_int_18(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_18)))
#endif /* kcg_copy_array_int_18 */

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array__19725
#define kcg_copy_array__19725(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19725)))
#endif /* kcg_copy_array__19725 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__19737
#define kcg_copy_array__19737(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__19737)))
#endif /* kcg_copy_array__19737 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_int_4_32_128
#define kcg_copy_array_int_4_32_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32_128)))
#endif /* kcg_copy_array_int_4_32_128 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_21
#define kcg_copy_array_int_21(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_21)))
#endif /* kcg_copy_array_int_21 */

#ifndef kcg_copy_array_int_150
#define kcg_copy_array_int_150(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_150)))
#endif /* kcg_copy_array_int_150 */

#ifndef kcg_copy_array_int_22
#define kcg_copy_array_int_22(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_22)))
#endif /* kcg_copy_array_int_22 */

#ifndef kcg_copy_array_int_499
#define kcg_copy_array_int_499(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_499)))
#endif /* kcg_copy_array_int_499 */

#ifndef kcg_copy_array_int_496
#define kcg_copy_array_int_496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_496)))
#endif /* kcg_copy_array_int_496 */

#ifndef kcg_comp_struct__18877
extern kcg_bool kcg_comp_struct__18877(
  struct__18877 *kcg_c1,
  struct__18877 *kcg_c2);
#endif /* kcg_comp_struct__18877 */

#ifndef kcg_comp_struct__18898
extern kcg_bool kcg_comp_struct__18898(
  struct__18898 *kcg_c1,
  struct__18898 *kcg_c2);
#endif /* kcg_comp_struct__18898 */

#ifndef kcg_comp_struct__18918
extern kcg_bool kcg_comp_struct__18918(
  struct__18918 *kcg_c1,
  struct__18918 *kcg_c2);
#endif /* kcg_comp_struct__18918 */

#ifndef kcg_comp_struct__18925
extern kcg_bool kcg_comp_struct__18925(
  struct__18925 *kcg_c1,
  struct__18925 *kcg_c2);
#endif /* kcg_comp_struct__18925 */

#ifndef kcg_comp_struct__18932
extern kcg_bool kcg_comp_struct__18932(
  struct__18932 *kcg_c1,
  struct__18932 *kcg_c2);
#endif /* kcg_comp_struct__18932 */

#ifndef kcg_comp_struct__18940
extern kcg_bool kcg_comp_struct__18940(
  struct__18940 *kcg_c1,
  struct__18940 *kcg_c2);
#endif /* kcg_comp_struct__18940 */

#ifndef kcg_comp_struct__18967
extern kcg_bool kcg_comp_struct__18967(
  struct__18967 *kcg_c1,
  struct__18967 *kcg_c2);
#endif /* kcg_comp_struct__18967 */

#ifndef kcg_comp_struct__18976
extern kcg_bool kcg_comp_struct__18976(
  struct__18976 *kcg_c1,
  struct__18976 *kcg_c2);
#endif /* kcg_comp_struct__18976 */

#ifndef kcg_comp_struct__18988
extern kcg_bool kcg_comp_struct__18988(
  struct__18988 *kcg_c1,
  struct__18988 *kcg_c2);
#endif /* kcg_comp_struct__18988 */

#ifndef kcg_comp_struct__18998
extern kcg_bool kcg_comp_struct__18998(
  struct__18998 *kcg_c1,
  struct__18998 *kcg_c2);
#endif /* kcg_comp_struct__18998 */

#ifndef kcg_comp_struct__19009
extern kcg_bool kcg_comp_struct__19009(
  struct__19009 *kcg_c1,
  struct__19009 *kcg_c2);
#endif /* kcg_comp_struct__19009 */

#ifndef kcg_comp_struct__19014
extern kcg_bool kcg_comp_struct__19014(
  struct__19014 *kcg_c1,
  struct__19014 *kcg_c2);
#endif /* kcg_comp_struct__19014 */

#ifndef kcg_comp_struct__19027
extern kcg_bool kcg_comp_struct__19027(
  struct__19027 *kcg_c1,
  struct__19027 *kcg_c2);
#endif /* kcg_comp_struct__19027 */

#ifndef kcg_comp_struct__19032
extern kcg_bool kcg_comp_struct__19032(
  struct__19032 *kcg_c1,
  struct__19032 *kcg_c2);
#endif /* kcg_comp_struct__19032 */

#ifndef kcg_comp_struct__19046
extern kcg_bool kcg_comp_struct__19046(
  struct__19046 *kcg_c1,
  struct__19046 *kcg_c2);
#endif /* kcg_comp_struct__19046 */

#ifndef kcg_comp_struct__19055
extern kcg_bool kcg_comp_struct__19055(
  struct__19055 *kcg_c1,
  struct__19055 *kcg_c2);
#endif /* kcg_comp_struct__19055 */

#ifndef kcg_comp_struct__19065
extern kcg_bool kcg_comp_struct__19065(
  struct__19065 *kcg_c1,
  struct__19065 *kcg_c2);
#endif /* kcg_comp_struct__19065 */

#ifndef kcg_comp_struct__19074
extern kcg_bool kcg_comp_struct__19074(
  struct__19074 *kcg_c1,
  struct__19074 *kcg_c2);
#endif /* kcg_comp_struct__19074 */

#ifndef kcg_comp_struct__19084
extern kcg_bool kcg_comp_struct__19084(
  struct__19084 *kcg_c1,
  struct__19084 *kcg_c2);
#endif /* kcg_comp_struct__19084 */

#ifndef kcg_comp_struct__19092
extern kcg_bool kcg_comp_struct__19092(
  struct__19092 *kcg_c1,
  struct__19092 *kcg_c2);
#endif /* kcg_comp_struct__19092 */

#ifndef kcg_comp_struct__19103
extern kcg_bool kcg_comp_struct__19103(
  struct__19103 *kcg_c1,
  struct__19103 *kcg_c2);
#endif /* kcg_comp_struct__19103 */

#ifndef kcg_comp_struct__19128
extern kcg_bool kcg_comp_struct__19128(
  struct__19128 *kcg_c1,
  struct__19128 *kcg_c2);
#endif /* kcg_comp_struct__19128 */

#ifndef kcg_comp_struct__19146
extern kcg_bool kcg_comp_struct__19146(
  struct__19146 *kcg_c1,
  struct__19146 *kcg_c2);
#endif /* kcg_comp_struct__19146 */

#ifndef kcg_comp_struct__19157
extern kcg_bool kcg_comp_struct__19157(
  struct__19157 *kcg_c1,
  struct__19157 *kcg_c2);
#endif /* kcg_comp_struct__19157 */

#ifndef kcg_comp_struct__19162
extern kcg_bool kcg_comp_struct__19162(
  struct__19162 *kcg_c1,
  struct__19162 *kcg_c2);
#endif /* kcg_comp_struct__19162 */

#ifndef kcg_comp_struct__19171
extern kcg_bool kcg_comp_struct__19171(
  struct__19171 *kcg_c1,
  struct__19171 *kcg_c2);
#endif /* kcg_comp_struct__19171 */

#ifndef kcg_comp_struct__19183
extern kcg_bool kcg_comp_struct__19183(
  struct__19183 *kcg_c1,
  struct__19183 *kcg_c2);
#endif /* kcg_comp_struct__19183 */

#ifndef kcg_comp_struct__19200
extern kcg_bool kcg_comp_struct__19200(
  struct__19200 *kcg_c1,
  struct__19200 *kcg_c2);
#endif /* kcg_comp_struct__19200 */

#ifndef kcg_comp_struct__19206
extern kcg_bool kcg_comp_struct__19206(
  struct__19206 *kcg_c1,
  struct__19206 *kcg_c2);
#endif /* kcg_comp_struct__19206 */

#ifndef kcg_comp_struct__19211
extern kcg_bool kcg_comp_struct__19211(
  struct__19211 *kcg_c1,
  struct__19211 *kcg_c2);
#endif /* kcg_comp_struct__19211 */

#ifndef kcg_comp_struct__19219
extern kcg_bool kcg_comp_struct__19219(
  struct__19219 *kcg_c1,
  struct__19219 *kcg_c2);
#endif /* kcg_comp_struct__19219 */

#ifndef kcg_comp_struct__19228
extern kcg_bool kcg_comp_struct__19228(
  struct__19228 *kcg_c1,
  struct__19228 *kcg_c2);
#endif /* kcg_comp_struct__19228 */

#ifndef kcg_comp_struct__19236
extern kcg_bool kcg_comp_struct__19236(
  struct__19236 *kcg_c1,
  struct__19236 *kcg_c2);
#endif /* kcg_comp_struct__19236 */

#ifndef kcg_comp_struct__19241
extern kcg_bool kcg_comp_struct__19241(
  struct__19241 *kcg_c1,
  struct__19241 *kcg_c2);
#endif /* kcg_comp_struct__19241 */

#ifndef kcg_comp_struct__19248
extern kcg_bool kcg_comp_struct__19248(
  struct__19248 *kcg_c1,
  struct__19248 *kcg_c2);
#endif /* kcg_comp_struct__19248 */

#ifndef kcg_comp_struct__19257
extern kcg_bool kcg_comp_struct__19257(
  struct__19257 *kcg_c1,
  struct__19257 *kcg_c2);
#endif /* kcg_comp_struct__19257 */

#ifndef kcg_comp_struct__19267
extern kcg_bool kcg_comp_struct__19267(
  struct__19267 *kcg_c1,
  struct__19267 *kcg_c2);
#endif /* kcg_comp_struct__19267 */

#ifndef kcg_comp_struct__19303
extern kcg_bool kcg_comp_struct__19303(
  struct__19303 *kcg_c1,
  struct__19303 *kcg_c2);
#endif /* kcg_comp_struct__19303 */

#ifndef kcg_comp_struct__19316
extern kcg_bool kcg_comp_struct__19316(
  struct__19316 *kcg_c1,
  struct__19316 *kcg_c2);
#endif /* kcg_comp_struct__19316 */

#ifndef kcg_comp_struct__19325
extern kcg_bool kcg_comp_struct__19325(
  struct__19325 *kcg_c1,
  struct__19325 *kcg_c2);
#endif /* kcg_comp_struct__19325 */

#ifndef kcg_comp_struct__19348
extern kcg_bool kcg_comp_struct__19348(
  struct__19348 *kcg_c1,
  struct__19348 *kcg_c2);
#endif /* kcg_comp_struct__19348 */

#ifndef kcg_comp_struct__19361
extern kcg_bool kcg_comp_struct__19361(
  struct__19361 *kcg_c1,
  struct__19361 *kcg_c2);
#endif /* kcg_comp_struct__19361 */

#ifndef kcg_comp_struct__19393
extern kcg_bool kcg_comp_struct__19393(
  struct__19393 *kcg_c1,
  struct__19393 *kcg_c2);
#endif /* kcg_comp_struct__19393 */

#ifndef kcg_comp_struct__19422
extern kcg_bool kcg_comp_struct__19422(
  struct__19422 *kcg_c1,
  struct__19422 *kcg_c2);
#endif /* kcg_comp_struct__19422 */

#ifndef kcg_comp_struct__19430
extern kcg_bool kcg_comp_struct__19430(
  struct__19430 *kcg_c1,
  struct__19430 *kcg_c2);
#endif /* kcg_comp_struct__19430 */

#ifndef kcg_comp_struct__19453
extern kcg_bool kcg_comp_struct__19453(
  struct__19453 *kcg_c1,
  struct__19453 *kcg_c2);
#endif /* kcg_comp_struct__19453 */

#ifndef kcg_comp_struct__19468
extern kcg_bool kcg_comp_struct__19468(
  struct__19468 *kcg_c1,
  struct__19468 *kcg_c2);
#endif /* kcg_comp_struct__19468 */

#ifndef kcg_comp_struct__19477
extern kcg_bool kcg_comp_struct__19477(
  struct__19477 *kcg_c1,
  struct__19477 *kcg_c2);
#endif /* kcg_comp_struct__19477 */

#ifndef kcg_comp_struct__19499
extern kcg_bool kcg_comp_struct__19499(
  struct__19499 *kcg_c1,
  struct__19499 *kcg_c2);
#endif /* kcg_comp_struct__19499 */

#ifndef kcg_comp_struct__19514
extern kcg_bool kcg_comp_struct__19514(
  struct__19514 *kcg_c1,
  struct__19514 *kcg_c2);
#endif /* kcg_comp_struct__19514 */

#ifndef kcg_comp_struct__19532
extern kcg_bool kcg_comp_struct__19532(
  struct__19532 *kcg_c1,
  struct__19532 *kcg_c2);
#endif /* kcg_comp_struct__19532 */

#ifndef kcg_comp_struct__19542
extern kcg_bool kcg_comp_struct__19542(
  struct__19542 *kcg_c1,
  struct__19542 *kcg_c2);
#endif /* kcg_comp_struct__19542 */

#ifndef kcg_comp_struct__19552
extern kcg_bool kcg_comp_struct__19552(
  struct__19552 *kcg_c1,
  struct__19552 *kcg_c2);
#endif /* kcg_comp_struct__19552 */

#ifndef kcg_comp_struct__19563
extern kcg_bool kcg_comp_struct__19563(
  struct__19563 *kcg_c1,
  struct__19563 *kcg_c2);
#endif /* kcg_comp_struct__19563 */

#ifndef kcg_comp_struct__19577
extern kcg_bool kcg_comp_struct__19577(
  struct__19577 *kcg_c1,
  struct__19577 *kcg_c2);
#endif /* kcg_comp_struct__19577 */

#ifndef kcg_comp_struct__19587
extern kcg_bool kcg_comp_struct__19587(
  struct__19587 *kcg_c1,
  struct__19587 *kcg_c2);
#endif /* kcg_comp_struct__19587 */

#ifndef kcg_comp_struct__19598
extern kcg_bool kcg_comp_struct__19598(
  struct__19598 *kcg_c1,
  struct__19598 *kcg_c2);
#endif /* kcg_comp_struct__19598 */

#ifndef kcg_comp_struct__19608
extern kcg_bool kcg_comp_struct__19608(
  struct__19608 *kcg_c1,
  struct__19608 *kcg_c2);
#endif /* kcg_comp_struct__19608 */

#ifndef kcg_comp_struct__19622
extern kcg_bool kcg_comp_struct__19622(
  struct__19622 *kcg_c1,
  struct__19622 *kcg_c2);
#endif /* kcg_comp_struct__19622 */

#ifndef kcg_comp_array__18937
extern kcg_bool kcg_comp_array__18937(
  array__18937 *kcg_c1,
  array__18937 *kcg_c2);
#endif /* kcg_comp_array__18937 */

#ifndef kcg_comp_array__18973
extern kcg_bool kcg_comp_array__18973(
  array__18973 *kcg_c1,
  array__18973 *kcg_c2);
#endif /* kcg_comp_array__18973 */

#ifndef kcg_comp_array__18985
extern kcg_bool kcg_comp_array__18985(
  array__18985 *kcg_c1,
  array__18985 *kcg_c2);
#endif /* kcg_comp_array__18985 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__19006
extern kcg_bool kcg_comp_array__19006(
  array__19006 *kcg_c1,
  array__19006 *kcg_c2);
#endif /* kcg_comp_array__19006 */

#ifndef kcg_comp_array__19043
extern kcg_bool kcg_comp_array__19043(
  array__19043 *kcg_c1,
  array__19043 *kcg_c2);
#endif /* kcg_comp_array__19043 */

#ifndef kcg_comp_array__19062
extern kcg_bool kcg_comp_array__19062(
  array__19062 *kcg_c1,
  array__19062 *kcg_c2);
#endif /* kcg_comp_array__19062 */

#ifndef kcg_comp_array__19081
extern kcg_bool kcg_comp_array__19081(
  array__19081 *kcg_c1,
  array__19081 *kcg_c2);
#endif /* kcg_comp_array__19081 */

#ifndef kcg_comp_array__19100
extern kcg_bool kcg_comp_array__19100(
  array__19100 *kcg_c1,
  array__19100 *kcg_c2);
#endif /* kcg_comp_array__19100 */

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

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

#ifndef kcg_comp_array__19264
extern kcg_bool kcg_comp_array__19264(
  array__19264 *kcg_c1,
  array__19264 *kcg_c2);
#endif /* kcg_comp_array__19264 */

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

#ifndef kcg_comp_array__19322
extern kcg_bool kcg_comp_array__19322(
  array__19322 *kcg_c1,
  array__19322 *kcg_c2);
#endif /* kcg_comp_array__19322 */

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

#ifndef kcg_comp_array__19345
extern kcg_bool kcg_comp_array__19345(
  array__19345 *kcg_c1,
  array__19345 *kcg_c2);
#endif /* kcg_comp_array__19345 */

#ifndef kcg_comp_array__19358
extern kcg_bool kcg_comp_array__19358(
  array__19358 *kcg_c1,
  array__19358 *kcg_c2);
#endif /* kcg_comp_array__19358 */

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

#ifndef kcg_comp_array__19387
extern kcg_bool kcg_comp_array__19387(
  array__19387 *kcg_c1,
  array__19387 *kcg_c2);
#endif /* kcg_comp_array__19387 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__19427
extern kcg_bool kcg_comp_array__19427(
  array__19427 *kcg_c1,
  array__19427 *kcg_c2);
#endif /* kcg_comp_array__19427 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__19447
extern kcg_bool kcg_comp_array__19447(
  array__19447 *kcg_c1,
  array__19447 *kcg_c2);
#endif /* kcg_comp_array__19447 */

#ifndef kcg_comp_array__19450
extern kcg_bool kcg_comp_array__19450(
  array__19450 *kcg_c1,
  array__19450 *kcg_c2);
#endif /* kcg_comp_array__19450 */

#ifndef kcg_comp_array__19474
extern kcg_bool kcg_comp_array__19474(
  array__19474 *kcg_c1,
  array__19474 *kcg_c2);
#endif /* kcg_comp_array__19474 */

#ifndef kcg_comp_array__19490
extern kcg_bool kcg_comp_array__19490(
  array__19490 *kcg_c1,
  array__19490 *kcg_c2);
#endif /* kcg_comp_array__19490 */

#ifndef kcg_comp_array__19493
extern kcg_bool kcg_comp_array__19493(
  array__19493 *kcg_c1,
  array__19493 *kcg_c2);
#endif /* kcg_comp_array__19493 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_128_32
extern kcg_bool kcg_comp_array_int_128_32(
  array_int_128_32 *kcg_c1,
  array_int_128_32 *kcg_c2);
#endif /* kcg_comp_array_int_128_32 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array_int_99_33
extern kcg_bool kcg_comp_array_int_99_33(
  array_int_99_33 *kcg_c1,
  array_int_99_33 *kcg_c2);
#endif /* kcg_comp_array_int_99_33 */

#ifndef kcg_comp_array_int_231_33
extern kcg_bool kcg_comp_array_int_231_33(
  array_int_231_33 *kcg_c1,
  array_int_231_33 *kcg_c2);
#endif /* kcg_comp_array_int_231_33 */

#ifndef kcg_comp_array_int_64_32
extern kcg_bool kcg_comp_array_int_64_32(
  array_int_64_32 *kcg_c1,
  array_int_64_32 *kcg_c2);
#endif /* kcg_comp_array_int_64_32 */

#ifndef kcg_comp_array__19656
extern kcg_bool kcg_comp_array__19656(
  array__19656 *kcg_c1,
  array__19656 *kcg_c2);
#endif /* kcg_comp_array__19656 */

#ifndef kcg_comp_array_int_32_32
extern kcg_bool kcg_comp_array_int_32_32(
  array_int_32_32 *kcg_c1,
  array_int_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_32_32 */

#ifndef kcg_comp_array__19662
extern kcg_bool kcg_comp_array__19662(
  array__19662 *kcg_c1,
  array__19662 *kcg_c2);
#endif /* kcg_comp_array__19662 */

#ifndef kcg_comp_array__19665
extern kcg_bool kcg_comp_array__19665(
  array__19665 *kcg_c1,
  array__19665 *kcg_c2);
#endif /* kcg_comp_array__19665 */

#ifndef kcg_comp_array__19668
extern kcg_bool kcg_comp_array__19668(
  array__19668 *kcg_c1,
  array__19668 *kcg_c2);
#endif /* kcg_comp_array__19668 */

#ifndef kcg_comp_array_int_23
extern kcg_bool kcg_comp_array_int_23(
  array_int_23 *kcg_c1,
  array_int_23 *kcg_c2);
#endif /* kcg_comp_array_int_23 */

#ifndef kcg_comp_array_int_20
extern kcg_bool kcg_comp_array_int_20(
  array_int_20 *kcg_c1,
  array_int_20 *kcg_c2);
#endif /* kcg_comp_array_int_20 */

#ifndef kcg_comp_array_int_48
extern kcg_bool kcg_comp_array_int_48(
  array_int_48 *kcg_c1,
  array_int_48 *kcg_c2);
#endif /* kcg_comp_array_int_48 */

#ifndef kcg_comp_array_int_3_33_231
extern kcg_bool kcg_comp_array_int_3_33_231(
  array_int_3_33_231 *kcg_c1,
  array_int_3_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_231 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */

#ifndef kcg_comp_array__19689
extern kcg_bool kcg_comp_array__19689(
  array__19689 *kcg_c1,
  array__19689 *kcg_c2);
#endif /* kcg_comp_array__19689 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array__19695
extern kcg_bool kcg_comp_array__19695(
  array__19695 *kcg_c1,
  array__19695 *kcg_c2);
#endif /* kcg_comp_array__19695 */

#ifndef kcg_comp_array_int_2_32_32
extern kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32_32 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_68
extern kcg_bool kcg_comp_array_int_68(
  array_int_68 *kcg_c1,
  array_int_68 *kcg_c2);
#endif /* kcg_comp_array_int_68 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_56
extern kcg_bool kcg_comp_array_int_56(
  array_int_56 *kcg_c1,
  array_int_56 *kcg_c2);
#endif /* kcg_comp_array_int_56 */

#ifndef kcg_comp_array_int_18
extern kcg_bool kcg_comp_array_int_18(
  array_int_18 *kcg_c1,
  array_int_18 *kcg_c2);
#endif /* kcg_comp_array_int_18 */

#ifndef kcg_comp_array_int_7_33_231
extern kcg_bool kcg_comp_array_int_7_33_231(
  array_int_7_33_231 *kcg_c1,
  array_int_7_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_7_33_231 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_236
extern kcg_bool kcg_comp_array_int_236(
  array_int_236 *kcg_c1,
  array_int_236 *kcg_c2);
#endif /* kcg_comp_array_int_236 */

#ifndef kcg_comp_array__19725
extern kcg_bool kcg_comp_array__19725(
  array__19725 *kcg_c1,
  array__19725 *kcg_c2);
#endif /* kcg_comp_array__19725 */

#ifndef kcg_comp_array_int_3_33_99
extern kcg_bool kcg_comp_array_int_3_33_99(
  array_int_3_33_99 *kcg_c1,
  array_int_3_33_99 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_99 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_105
extern kcg_bool kcg_comp_array_int_105(
  array_int_105 *kcg_c1,
  array_int_105 *kcg_c2);
#endif /* kcg_comp_array_int_105 */

#ifndef kcg_comp_array__19737
extern kcg_bool kcg_comp_array__19737(
  array__19737 *kcg_c1,
  array__19737 *kcg_c2);
#endif /* kcg_comp_array__19737 */

#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array_int_4_32_128
extern kcg_bool kcg_comp_array_int_4_32_128(
  array_int_4_32_128 *kcg_c1,
  array_int_4_32_128 *kcg_c2);
#endif /* kcg_comp_array_int_4_32_128 */

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_21
extern kcg_bool kcg_comp_array_int_21(
  array_int_21 *kcg_c1,
  array_int_21 *kcg_c2);
#endif /* kcg_comp_array_int_21 */

#ifndef kcg_comp_array_int_150
extern kcg_bool kcg_comp_array_int_150(
  array_int_150 *kcg_c1,
  array_int_150 *kcg_c2);
#endif /* kcg_comp_array_int_150 */

#ifndef kcg_comp_array_int_22
extern kcg_bool kcg_comp_array_int_22(
  array_int_22 *kcg_c1,
  array_int_22 *kcg_c2);
#endif /* kcg_comp_array_int_22 */

#ifndef kcg_comp_array_int_499
extern kcg_bool kcg_comp_array_int_499(
  array_int_499 *kcg_c1,
  array_int_499 *kcg_c2);
#endif /* kcg_comp_array_int_499 */

#ifndef kcg_comp_array_int_496
extern kcg_bool kcg_comp_array_int_496(
  array_int_496 *kcg_c1,
  array_int_496 *kcg_c2);
#endif /* kcg_comp_array_int_496 */

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__19393

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__19393

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__19427

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__19427

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__19447

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__19447

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__19430

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__19430

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__19450

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__19450

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__19422

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__19422

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__19427

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__19427

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__19453

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__19453

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__18940

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__18940

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__18937

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__18937

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__18932

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__18932

#define kcg_comp__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__18985

#define kcg_copy__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__18985

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__18988

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__18988

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__18967

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__18967

#define kcg_comp__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__18973

#define kcg_copy__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__18973

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__18976

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__18976

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__19499

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__19499

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__19009

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__19009

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__19006

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__19006

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__18998

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__18998

#define kcg_comp_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_comp_array__19493

#define kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_copy_array__19493

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__19211

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__19211

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__19228

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__19228

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__19236

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__19236

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__19264

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__19264

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__19257

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__19257

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__19264

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__19264

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__19267

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__19267

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__19303

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__19303

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__19345

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__19345

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__19316

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__19316

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__19322

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__19322

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__19325

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__19325

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__19387

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__19387

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__19348

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__19348

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__19358

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__19358

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__19361

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__19361

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__19490

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__19490

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__19468

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__19468

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__19474

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__19474

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__19477

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__19477

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__19014

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__19014

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__19027

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__19027

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__19046

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__19046

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__19043

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__19043

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__19032

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__19032

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__19065

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__19065

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__19062

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__19062

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__19055

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__19055

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__19084

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__19084

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__19081

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__19081

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__19514

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__19514

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__19074

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__19074

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__19103

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__19103

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__19100

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__19100

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__19092

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__19092

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__19248

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__19248

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__19532

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__19532

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__19542

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__19542

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__19552

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__19552

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__19563

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__19563

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__19577

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__19577

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__19587

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__19587

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__19211

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__19211

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__19598

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__19598

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__19608

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__19608

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__19622

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__19622

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__19622

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__19622

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__19128

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__19128

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__19532

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__19532

#define kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_comp_array_int_50

#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_copy_array_int_50

#define kcg_comp_M_TrainTrack_Message_T_TM_radio_messages kcg_comp_struct__19157

#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages kcg_copy_struct__19157

#define kcg_comp_M_157_T_TM_radio_messages kcg_comp_struct__19162

#define kcg_copy_M_157_T_TM_radio_messages kcg_copy_struct__19162

#define kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_comp_struct__19146

#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_copy_struct__19146

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__19171

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__19171

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__19200

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__19200

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__19206

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__19206

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__19219

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__19219

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__19241

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__19241

#define kcg_comp_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_comp_array__19493

#define kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_copy_array__19493

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TM_TrainToTrack kcg_comp_struct__18877

#define kcg_copy_P001_TM_TrainToTrack kcg_copy_struct__18877

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P000_TM_TrainToTrack kcg_comp_struct__18898

#define kcg_copy_P000_TM_TrainToTrack kcg_copy_struct__18898

#define kcg_comp_P044_other_data_TM_TrainToTrack kcg_comp_array_int_1

#define kcg_copy_P044_other_data_TM_TrainToTrack kcg_copy_array_int_1

#define kcg_comp_P044_TM_TrainToTrack kcg_comp_struct__19183

#define kcg_copy_P044_TM_TrainToTrack kcg_copy_struct__19183

#define kcg_comp_P044_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P044_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P005_TM_TrainToTrack kcg_comp_struct__18918

#define kcg_copy_P005_TM_TrainToTrack kcg_copy_struct__18918

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P004_TM_TrainToTrack kcg_comp_struct__18925

#define kcg_copy_P004_TM_TrainToTrack kcg_copy_struct__18925

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */


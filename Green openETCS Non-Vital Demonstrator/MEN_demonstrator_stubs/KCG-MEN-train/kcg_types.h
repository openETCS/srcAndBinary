/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
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

/* Q_STATUS */
typedef enum {
  Q_STATUS_Invalid = 0,
  Q_STATUS_Valid = 1,
  Q_STATUS_Unknown = 2
} Q_STATUS;
/* Q_ORIENTATION */
typedef enum {
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} Q_ORIENTATION;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
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
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
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
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
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
} struct__13759;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct__13759 M_TrainTrack_MessageHd_T_TM_radio_messages;

typedef struct {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} struct__13770;

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct__13770 M_TrainTrack_Message_T_TM_radio_messages;

typedef M_TrainTrack_Message_T_TM_radio_messages array__13775[5];

/* TM_lib_internal::M_TrainTrackMessage_buffer_t */
typedef array__13775 M_TrainTrackMessage_buffer_t_TM_lib_internal;

/* TM_TrainTrack_Bus::M_TrainTrackMessageBus_t */
typedef array__13775 M_TrainTrackMessageBus_t_TM_TrainTrack_Bus;

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
} struct__13778;

/* TM_TrainToTrack::P001 */
typedef struct__13778 P001_TM_TrainToTrack;

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
} struct__13799;

/* TM_TrainToTrack::P000 */
typedef struct__13799 P000_TM_TrainToTrack;

typedef kcg_int array_int_1[1];

/* TM_TrainToTrack::P044_other_data */
typedef array_int_1 P044_other_data_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} struct__13822;

/* TM_TrainToTrack::P044 */
typedef struct__13822 P044_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} struct__13830;

/* TM_TrainToTrack::P005 */
typedef struct__13830 P005_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} struct__13837;

/* TM_TrainToTrack::P004 */
typedef struct__13837 P004_TM_TrainToTrack;

typedef struct { kcg_bool valid; NID_C nid_c; } struct__13844;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__13844 P003V1_section_enum_T_TM_baseline2;

typedef P003V1_section_enum_T_TM_baseline2 array__13849[32];

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__13849 P003V1_sectionlist_enum_T_TM_baseline2;

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
} struct__13852;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__13852 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__13882;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__13882 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef MetadataElement_T_Common_Types_Pkg array__13896[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__13896 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__13899;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__13899 CompressedPackets_T_Common_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__13904;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__13904 P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__13913;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__13913 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__13919[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__13919 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__13922;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__13922 P027V1_section_enum_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToTrack;

typedef P027V1_section_enum_T_TM_baseline2 array__13937[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__13937 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__13940;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__13940 P027V1_OBU_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__13947;

/* TM::P005_section_enum_T */
typedef struct__13947 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__13958[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__13958 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__13961;

/* TM::P005_OBU_T */
typedef struct__13961 P005_OBU_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__13973;

/* TM::P041_section_enum_T */
typedef struct__13973 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__13980[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__13980 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__13983;

/* TM::P041_OBU_T */
typedef struct__13983 P041_OBU_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__13995;

/* TM::P021_section_enum_T */
typedef struct__13995 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__14002[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__14002 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__14005;

/* TM::P021_OBU_T */
typedef struct__14005 P021_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__14013;

/* TM::P015_section_enum_T */
typedef struct__14013 P015_section_enum_T_TM;

typedef P015_section_enum_T_TM array__14021[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__14021 P015_OBU_sectionlist_enum_T_TM;

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
} struct__14024;

/* TM::P015_OBU_T */
typedef struct__14024 P015_OBU_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef kcg_int array_int_15[15];

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef kcg_int array_int_6[6];

/* TM::Array06 */
typedef array_int_6 Array06_TM;

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
} struct__14058;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__14058 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__14071;

/* TM::CompressedBaliseMessage */
typedef struct__14071 CompressedBaliseMessage_TM;

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
} struct__14076;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__14076 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__14094;

/* TM_radio_messages::M_027_T */
typedef struct__14094 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__14094 M_028_T_TM_radio_messages;

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
} struct__14104;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__14104 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION _1_m_version;
} struct__14119;

/* TM_radio_messages::M_032_T */
typedef struct__14119 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__14129;

/* TM_radio_messages::M_033_T */
typedef struct__14129 M_033_T_TM_radio_messages;

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
} struct__14140;

/* TM_radio_messages::M_034_T */
typedef struct__14140 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__14154;

/* TM_radio_messages::M_003_T */
typedef struct__14154 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_024_T */
typedef struct__14154 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__14154 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__14154 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__14154 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__14154 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__14154 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__14154 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__14154 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__14163;

/* TM_radio_messages::M_045_T */
typedef struct__14163 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__14173;

/* TM_radio_messages::M_002_T */
typedef struct__14173 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__14184;

/* TM_radio_messages::M_008_T */
typedef struct__14184 M_008_T_TM_radio_messages;

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
} struct__14194;

/* TM_radio_messages::M_015_T */
typedef struct__14194 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__14208;

/* TM_radio_messages::M_018_T */
typedef struct__14208 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__14208 M_016_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_STATUS q_status;
} struct__14218;

/* TM_radio_messages::M_157_T */
typedef struct__14218 M_157_T_TM_radio_messages;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P044_TrainTrack_int */
typedef array_int_25 P044_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_2[2];

typedef M_TrainTrack_Message_T_TM_radio_messages array__14917[4];

#ifndef kcg_copy_struct__13759
#define kcg_copy_struct__13759(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13759)))
#endif /* kcg_copy_struct__13759 */

#ifndef kcg_copy_struct__13770
#define kcg_copy_struct__13770(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13770)))
#endif /* kcg_copy_struct__13770 */

#ifndef kcg_copy_struct__13778
#define kcg_copy_struct__13778(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13778)))
#endif /* kcg_copy_struct__13778 */

#ifndef kcg_copy_struct__13799
#define kcg_copy_struct__13799(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13799)))
#endif /* kcg_copy_struct__13799 */

#ifndef kcg_copy_struct__13822
#define kcg_copy_struct__13822(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13822)))
#endif /* kcg_copy_struct__13822 */

#ifndef kcg_copy_struct__13830
#define kcg_copy_struct__13830(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13830)))
#endif /* kcg_copy_struct__13830 */

#ifndef kcg_copy_struct__13837
#define kcg_copy_struct__13837(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13837)))
#endif /* kcg_copy_struct__13837 */

#ifndef kcg_copy_struct__13844
#define kcg_copy_struct__13844(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13844)))
#endif /* kcg_copy_struct__13844 */

#ifndef kcg_copy_struct__13852
#define kcg_copy_struct__13852(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13852)))
#endif /* kcg_copy_struct__13852 */

#ifndef kcg_copy_struct__13882
#define kcg_copy_struct__13882(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13882)))
#endif /* kcg_copy_struct__13882 */

#ifndef kcg_copy_struct__13899
#define kcg_copy_struct__13899(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13899)))
#endif /* kcg_copy_struct__13899 */

#ifndef kcg_copy_struct__13904
#define kcg_copy_struct__13904(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13904)))
#endif /* kcg_copy_struct__13904 */

#ifndef kcg_copy_struct__13913
#define kcg_copy_struct__13913(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13913)))
#endif /* kcg_copy_struct__13913 */

#ifndef kcg_copy_struct__13922
#define kcg_copy_struct__13922(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13922)))
#endif /* kcg_copy_struct__13922 */

#ifndef kcg_copy_struct__13940
#define kcg_copy_struct__13940(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13940)))
#endif /* kcg_copy_struct__13940 */

#ifndef kcg_copy_struct__13947
#define kcg_copy_struct__13947(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13947)))
#endif /* kcg_copy_struct__13947 */

#ifndef kcg_copy_struct__13961
#define kcg_copy_struct__13961(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13961)))
#endif /* kcg_copy_struct__13961 */

#ifndef kcg_copy_struct__13973
#define kcg_copy_struct__13973(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13973)))
#endif /* kcg_copy_struct__13973 */

#ifndef kcg_copy_struct__13983
#define kcg_copy_struct__13983(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13983)))
#endif /* kcg_copy_struct__13983 */

#ifndef kcg_copy_struct__13995
#define kcg_copy_struct__13995(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__13995)))
#endif /* kcg_copy_struct__13995 */

#ifndef kcg_copy_struct__14005
#define kcg_copy_struct__14005(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14005)))
#endif /* kcg_copy_struct__14005 */

#ifndef kcg_copy_struct__14013
#define kcg_copy_struct__14013(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14013)))
#endif /* kcg_copy_struct__14013 */

#ifndef kcg_copy_struct__14024
#define kcg_copy_struct__14024(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14024)))
#endif /* kcg_copy_struct__14024 */

#ifndef kcg_copy_struct__14058
#define kcg_copy_struct__14058(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14058)))
#endif /* kcg_copy_struct__14058 */

#ifndef kcg_copy_struct__14071
#define kcg_copy_struct__14071(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14071)))
#endif /* kcg_copy_struct__14071 */

#ifndef kcg_copy_struct__14076
#define kcg_copy_struct__14076(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14076)))
#endif /* kcg_copy_struct__14076 */

#ifndef kcg_copy_struct__14094
#define kcg_copy_struct__14094(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14094)))
#endif /* kcg_copy_struct__14094 */

#ifndef kcg_copy_struct__14104
#define kcg_copy_struct__14104(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14104)))
#endif /* kcg_copy_struct__14104 */

#ifndef kcg_copy_struct__14119
#define kcg_copy_struct__14119(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14119)))
#endif /* kcg_copy_struct__14119 */

#ifndef kcg_copy_struct__14129
#define kcg_copy_struct__14129(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14129)))
#endif /* kcg_copy_struct__14129 */

#ifndef kcg_copy_struct__14140
#define kcg_copy_struct__14140(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14140)))
#endif /* kcg_copy_struct__14140 */

#ifndef kcg_copy_struct__14154
#define kcg_copy_struct__14154(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14154)))
#endif /* kcg_copy_struct__14154 */

#ifndef kcg_copy_struct__14163
#define kcg_copy_struct__14163(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14163)))
#endif /* kcg_copy_struct__14163 */

#ifndef kcg_copy_struct__14173
#define kcg_copy_struct__14173(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14173)))
#endif /* kcg_copy_struct__14173 */

#ifndef kcg_copy_struct__14184
#define kcg_copy_struct__14184(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14184)))
#endif /* kcg_copy_struct__14184 */

#ifndef kcg_copy_struct__14194
#define kcg_copy_struct__14194(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14194)))
#endif /* kcg_copy_struct__14194 */

#ifndef kcg_copy_struct__14208
#define kcg_copy_struct__14208(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14208)))
#endif /* kcg_copy_struct__14208 */

#ifndef kcg_copy_struct__14218
#define kcg_copy_struct__14218(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__14218)))
#endif /* kcg_copy_struct__14218 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array__13775
#define kcg_copy_array__13775(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__13775)))
#endif /* kcg_copy_array__13775 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array__13849
#define kcg_copy_array__13849(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__13849)))
#endif /* kcg_copy_array__13849 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__13896
#define kcg_copy_array__13896(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__13896)))
#endif /* kcg_copy_array__13896 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__13919
#define kcg_copy_array__13919(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__13919)))
#endif /* kcg_copy_array__13919 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__13937
#define kcg_copy_array__13937(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__13937)))
#endif /* kcg_copy_array__13937 */

#ifndef kcg_copy_array__13958
#define kcg_copy_array__13958(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__13958)))
#endif /* kcg_copy_array__13958 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__13980
#define kcg_copy_array__13980(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__13980)))
#endif /* kcg_copy_array__13980 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__14002
#define kcg_copy_array__14002(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__14002)))
#endif /* kcg_copy_array__14002 */

#ifndef kcg_copy_array__14021
#define kcg_copy_array__14021(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__14021)))
#endif /* kcg_copy_array__14021 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array__14917
#define kcg_copy_array__14917(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__14917)))
#endif /* kcg_copy_array__14917 */

#ifndef kcg_comp_struct__13759
extern kcg_bool kcg_comp_struct__13759(
  struct__13759 *kcg_c1,
  struct__13759 *kcg_c2);
#endif /* kcg_comp_struct__13759 */

#ifndef kcg_comp_struct__13770
extern kcg_bool kcg_comp_struct__13770(
  struct__13770 *kcg_c1,
  struct__13770 *kcg_c2);
#endif /* kcg_comp_struct__13770 */

#ifndef kcg_comp_struct__13778
extern kcg_bool kcg_comp_struct__13778(
  struct__13778 *kcg_c1,
  struct__13778 *kcg_c2);
#endif /* kcg_comp_struct__13778 */

#ifndef kcg_comp_struct__13799
extern kcg_bool kcg_comp_struct__13799(
  struct__13799 *kcg_c1,
  struct__13799 *kcg_c2);
#endif /* kcg_comp_struct__13799 */

#ifndef kcg_comp_struct__13822
extern kcg_bool kcg_comp_struct__13822(
  struct__13822 *kcg_c1,
  struct__13822 *kcg_c2);
#endif /* kcg_comp_struct__13822 */

#ifndef kcg_comp_struct__13830
extern kcg_bool kcg_comp_struct__13830(
  struct__13830 *kcg_c1,
  struct__13830 *kcg_c2);
#endif /* kcg_comp_struct__13830 */

#ifndef kcg_comp_struct__13837
extern kcg_bool kcg_comp_struct__13837(
  struct__13837 *kcg_c1,
  struct__13837 *kcg_c2);
#endif /* kcg_comp_struct__13837 */

#ifndef kcg_comp_struct__13844
extern kcg_bool kcg_comp_struct__13844(
  struct__13844 *kcg_c1,
  struct__13844 *kcg_c2);
#endif /* kcg_comp_struct__13844 */

#ifndef kcg_comp_struct__13852
extern kcg_bool kcg_comp_struct__13852(
  struct__13852 *kcg_c1,
  struct__13852 *kcg_c2);
#endif /* kcg_comp_struct__13852 */

#ifndef kcg_comp_struct__13882
extern kcg_bool kcg_comp_struct__13882(
  struct__13882 *kcg_c1,
  struct__13882 *kcg_c2);
#endif /* kcg_comp_struct__13882 */

#ifndef kcg_comp_struct__13899
extern kcg_bool kcg_comp_struct__13899(
  struct__13899 *kcg_c1,
  struct__13899 *kcg_c2);
#endif /* kcg_comp_struct__13899 */

#ifndef kcg_comp_struct__13904
extern kcg_bool kcg_comp_struct__13904(
  struct__13904 *kcg_c1,
  struct__13904 *kcg_c2);
#endif /* kcg_comp_struct__13904 */

#ifndef kcg_comp_struct__13913
extern kcg_bool kcg_comp_struct__13913(
  struct__13913 *kcg_c1,
  struct__13913 *kcg_c2);
#endif /* kcg_comp_struct__13913 */

#ifndef kcg_comp_struct__13922
extern kcg_bool kcg_comp_struct__13922(
  struct__13922 *kcg_c1,
  struct__13922 *kcg_c2);
#endif /* kcg_comp_struct__13922 */

#ifndef kcg_comp_struct__13940
extern kcg_bool kcg_comp_struct__13940(
  struct__13940 *kcg_c1,
  struct__13940 *kcg_c2);
#endif /* kcg_comp_struct__13940 */

#ifndef kcg_comp_struct__13947
extern kcg_bool kcg_comp_struct__13947(
  struct__13947 *kcg_c1,
  struct__13947 *kcg_c2);
#endif /* kcg_comp_struct__13947 */

#ifndef kcg_comp_struct__13961
extern kcg_bool kcg_comp_struct__13961(
  struct__13961 *kcg_c1,
  struct__13961 *kcg_c2);
#endif /* kcg_comp_struct__13961 */

#ifndef kcg_comp_struct__13973
extern kcg_bool kcg_comp_struct__13973(
  struct__13973 *kcg_c1,
  struct__13973 *kcg_c2);
#endif /* kcg_comp_struct__13973 */

#ifndef kcg_comp_struct__13983
extern kcg_bool kcg_comp_struct__13983(
  struct__13983 *kcg_c1,
  struct__13983 *kcg_c2);
#endif /* kcg_comp_struct__13983 */

#ifndef kcg_comp_struct__13995
extern kcg_bool kcg_comp_struct__13995(
  struct__13995 *kcg_c1,
  struct__13995 *kcg_c2);
#endif /* kcg_comp_struct__13995 */

#ifndef kcg_comp_struct__14005
extern kcg_bool kcg_comp_struct__14005(
  struct__14005 *kcg_c1,
  struct__14005 *kcg_c2);
#endif /* kcg_comp_struct__14005 */

#ifndef kcg_comp_struct__14013
extern kcg_bool kcg_comp_struct__14013(
  struct__14013 *kcg_c1,
  struct__14013 *kcg_c2);
#endif /* kcg_comp_struct__14013 */

#ifndef kcg_comp_struct__14024
extern kcg_bool kcg_comp_struct__14024(
  struct__14024 *kcg_c1,
  struct__14024 *kcg_c2);
#endif /* kcg_comp_struct__14024 */

#ifndef kcg_comp_struct__14058
extern kcg_bool kcg_comp_struct__14058(
  struct__14058 *kcg_c1,
  struct__14058 *kcg_c2);
#endif /* kcg_comp_struct__14058 */

#ifndef kcg_comp_struct__14071
extern kcg_bool kcg_comp_struct__14071(
  struct__14071 *kcg_c1,
  struct__14071 *kcg_c2);
#endif /* kcg_comp_struct__14071 */

#ifndef kcg_comp_struct__14076
extern kcg_bool kcg_comp_struct__14076(
  struct__14076 *kcg_c1,
  struct__14076 *kcg_c2);
#endif /* kcg_comp_struct__14076 */

#ifndef kcg_comp_struct__14094
extern kcg_bool kcg_comp_struct__14094(
  struct__14094 *kcg_c1,
  struct__14094 *kcg_c2);
#endif /* kcg_comp_struct__14094 */

#ifndef kcg_comp_struct__14104
extern kcg_bool kcg_comp_struct__14104(
  struct__14104 *kcg_c1,
  struct__14104 *kcg_c2);
#endif /* kcg_comp_struct__14104 */

#ifndef kcg_comp_struct__14119
extern kcg_bool kcg_comp_struct__14119(
  struct__14119 *kcg_c1,
  struct__14119 *kcg_c2);
#endif /* kcg_comp_struct__14119 */

#ifndef kcg_comp_struct__14129
extern kcg_bool kcg_comp_struct__14129(
  struct__14129 *kcg_c1,
  struct__14129 *kcg_c2);
#endif /* kcg_comp_struct__14129 */

#ifndef kcg_comp_struct__14140
extern kcg_bool kcg_comp_struct__14140(
  struct__14140 *kcg_c1,
  struct__14140 *kcg_c2);
#endif /* kcg_comp_struct__14140 */

#ifndef kcg_comp_struct__14154
extern kcg_bool kcg_comp_struct__14154(
  struct__14154 *kcg_c1,
  struct__14154 *kcg_c2);
#endif /* kcg_comp_struct__14154 */

#ifndef kcg_comp_struct__14163
extern kcg_bool kcg_comp_struct__14163(
  struct__14163 *kcg_c1,
  struct__14163 *kcg_c2);
#endif /* kcg_comp_struct__14163 */

#ifndef kcg_comp_struct__14173
extern kcg_bool kcg_comp_struct__14173(
  struct__14173 *kcg_c1,
  struct__14173 *kcg_c2);
#endif /* kcg_comp_struct__14173 */

#ifndef kcg_comp_struct__14184
extern kcg_bool kcg_comp_struct__14184(
  struct__14184 *kcg_c1,
  struct__14184 *kcg_c2);
#endif /* kcg_comp_struct__14184 */

#ifndef kcg_comp_struct__14194
extern kcg_bool kcg_comp_struct__14194(
  struct__14194 *kcg_c1,
  struct__14194 *kcg_c2);
#endif /* kcg_comp_struct__14194 */

#ifndef kcg_comp_struct__14208
extern kcg_bool kcg_comp_struct__14208(
  struct__14208 *kcg_c1,
  struct__14208 *kcg_c2);
#endif /* kcg_comp_struct__14208 */

#ifndef kcg_comp_struct__14218
extern kcg_bool kcg_comp_struct__14218(
  struct__14218 *kcg_c1,
  struct__14218 *kcg_c2);
#endif /* kcg_comp_struct__14218 */

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array__13775
extern kcg_bool kcg_comp_array__13775(
  array__13775 *kcg_c1,
  array__13775 *kcg_c2);
#endif /* kcg_comp_array__13775 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array__13849
extern kcg_bool kcg_comp_array__13849(
  array__13849 *kcg_c1,
  array__13849 *kcg_c2);
#endif /* kcg_comp_array__13849 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__13896
extern kcg_bool kcg_comp_array__13896(
  array__13896 *kcg_c1,
  array__13896 *kcg_c2);
#endif /* kcg_comp_array__13896 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__13919
extern kcg_bool kcg_comp_array__13919(
  array__13919 *kcg_c1,
  array__13919 *kcg_c2);
#endif /* kcg_comp_array__13919 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__13937
extern kcg_bool kcg_comp_array__13937(
  array__13937 *kcg_c1,
  array__13937 *kcg_c2);
#endif /* kcg_comp_array__13937 */

#ifndef kcg_comp_array__13958
extern kcg_bool kcg_comp_array__13958(
  array__13958 *kcg_c1,
  array__13958 *kcg_c2);
#endif /* kcg_comp_array__13958 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__13980
extern kcg_bool kcg_comp_array__13980(
  array__13980 *kcg_c1,
  array__13980 *kcg_c2);
#endif /* kcg_comp_array__13980 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__14002
extern kcg_bool kcg_comp_array__14002(
  array__14002 *kcg_c1,
  array__14002 *kcg_c2);
#endif /* kcg_comp_array__14002 */

#ifndef kcg_comp_array__14021
extern kcg_bool kcg_comp_array__14021(
  array__14021 *kcg_c1,
  array__14021 *kcg_c2);
#endif /* kcg_comp_array__14021 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */

#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array__14917
extern kcg_bool kcg_comp_array__14917(
  array__14917 *kcg_c1,
  array__14917 *kcg_c2);
#endif /* kcg_comp_array__14917 */

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__14076

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__14076

#define kcg_comp_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_comp_array__13775

#define kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_copy_array__13775

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__14058

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__14058

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__14071

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__14071

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__13961

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__13961

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__13958

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__13958

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__13947

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__13947

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__13983

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__13983

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__13980

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__13980

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__13973

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__13973

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__14094

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__14094

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__14005

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__14005

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__14119

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__14119

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__14002

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__14002

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__14129

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__14129

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__14140

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__14140

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__13995

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__13995

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__14024

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__14024

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__14021

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__14021

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__14013

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__14013

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__14163

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__14163

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__14173

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__14173

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__14184

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__14184

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__14194

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__14194

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__14208

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__14208

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__14208

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__14208

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__14104

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__14104

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__14094

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__14094

#define kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_comp_array_int_50

#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_copy_array_int_50

#define kcg_comp_M_TrainTrack_Message_T_TM_radio_messages kcg_comp_struct__13770

#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages kcg_copy_struct__13770

#define kcg_comp_M_157_T_TM_radio_messages kcg_comp_struct__14218

#define kcg_copy_M_157_T_TM_radio_messages kcg_copy_struct__14218

#define kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_comp_struct__13759

#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_copy_struct__13759

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__14154

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__14154

#define kcg_comp_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_comp_array__13775

#define kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_copy_array__13775

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TM_TrainToTrack kcg_comp_struct__13778

#define kcg_copy_P001_TM_TrainToTrack kcg_copy_struct__13778

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P000_TM_TrainToTrack kcg_comp_struct__13799

#define kcg_copy_P000_TM_TrainToTrack kcg_copy_struct__13799

#define kcg_comp_P044_other_data_TM_TrainToTrack kcg_comp_array_int_1

#define kcg_copy_P044_other_data_TM_TrainToTrack kcg_copy_array_int_1

#define kcg_comp_P044_TM_TrainToTrack kcg_comp_struct__13822

#define kcg_copy_P044_TM_TrainToTrack kcg_copy_struct__13822

#define kcg_comp_P044_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P044_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P005_TM_TrainToTrack kcg_comp_struct__13830

#define kcg_copy_P005_TM_TrainToTrack kcg_copy_struct__13830

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P004_TM_TrainToTrack kcg_comp_struct__13837

#define kcg_copy_P004_TM_TrainToTrack kcg_copy_struct__13837

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__13852

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__13852

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__13849

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__13849

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__13844

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__13844

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__13937

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__13937

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__13940

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__13940

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__13913

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__13913

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__13919

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__13919

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__13922

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__13922

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__13904

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__13904

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__13899

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__13899

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__13896

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__13896

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__13882

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__13882

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */


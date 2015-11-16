/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/balise_semigeneric\kcg_s2c_config.txt
** Generation date: 2015-11-16T17:04:13
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

/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_TRACTION;
  kcg_int M_TRACTION;
} struct__50659;

/* TM_baseline2::P039V1_trackside_int_T */
typedef struct__50659 P039V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_255[255];

/* TM::X_TEXT_trackside_T */
typedef array_int_255 X_TEXT_trackside_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TEXTCLASS;
  kcg_int Q_TEXTDISPLAY;
  kcg_int D_TEXTDISPLAY_start;
  kcg_int M_MODETEXTDISPLAY_start;
  kcg_int M_LEVELTEXTDISPLAY_start;
  kcg_int NID_NTC_start;
  kcg_int L_TEXTDISPLAY_end;
  kcg_int T_TEXTDISPLAY_end;
  kcg_int M_MODETEXTDISPLAY_end;
  kcg_int M_LEVELTEXTDISPLAY_end;
  kcg_int NID_NTC_end;
  kcg_int Q_TEXTCONFIRM;
  kcg_int L_TEXT;
  X_TEXT_trackside_T_TM X_TEXT;
} struct__50672;

/* TM_baseline2::P072V1_trackside_int_T */
typedef struct__50672 P072V1_trackside_int_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__50694;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__50694 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__50699[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__50699 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__50699 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__50702;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__50702 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__50710[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__50710 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__50713;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__50713 P027V1_trackside_int_T_TM_baseline2;

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
} struct__50731;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__50731 P003V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__50763;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__50763 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__50771[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__50771 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__50774;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__50774 CompressedPackets_T_Common_Types_Pkg;

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
} struct__50779;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__50779 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__50792;

/* TM::CompressedBaliseMessage */
typedef struct__50792 CompressedBaliseMessage_TM;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__50797;

/* TM::P255_trackside_int_T */
typedef struct__50797 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RIU;
  kcg_int NID_C;
  kcg_int NID_RIU;
  kcg_int NID_RADIO;
} struct__50802;

/* TM::P143_trackside_int_T */
typedef struct__50802 P143_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
} struct__50813;

/* TM::P064_trackside_int_T */
typedef struct__50813 P064_trackside_int_T_TM;

/* TM::P135_trackside_int_T */
typedef struct__50813 P135_trackside_int_T_TM;

/* TM::P254_trackside_int_T */
typedef struct__50813 P254_trackside_int_T_TM;

/* TM::P145_trackside_int_T */
typedef struct__50813 P145_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_REVERSE;
  kcg_int V_REVERSE;
} struct__50820;

/* TM::P139_trackside_int_T */
typedef struct__50820 P139_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_OPERATIONAL;
} struct__50830;

/* TM::P140_trackside_int_T */
typedef struct__50830 P140_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_GDIR;
  kcg_int G_TSR;
} struct__50838;

/* TM::P141_trackside_int_T */
typedef struct__50838 P141_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
} struct__50847;

/* TM::P136_trackside_int_T */
typedef struct__50847 P136_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__50857;

/* TM::P137_trackside_int_T */
typedef struct__50857 P137_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STARTREVERSE;
  kcg_int L_REVERSEAREA;
} struct__50865;

/* TM::P138_trackside_int_T */
typedef struct__50865 P138_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_RIU;
  kcg_int NID_C;
  kcg_int NID_RIU;
  kcg_int NID_RADIO;
  kcg_int D_INFILL;
  kcg_int NID_C_next;
  kcg_int NID_BG_next;
} struct__50875;

/* TM::P133_trackside_int_T */
typedef struct__50875 P133_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_LOOP;
  kcg_int D_LOOP;
  kcg_int L_LOOP;
  kcg_int Q_LOOPDIR;
  kcg_int Q_SSCODE;
} struct__50890;

/* TM::P134_trackside_int_T */
typedef struct__50890 P134_trackside_int_T_TM;

typedef struct {
  kcg_int D_MAMODE;
  kcg_int M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
  kcg_int Q_MAMODE;
} struct__50903;

/* TM::P080_section_int_T */
typedef struct__50903 P080_section_int_T_TM;

typedef P080_section_int_T_TM array__50912[32];

/* TM::P080_trackide_sectionlist_T */
typedef array__50912 P080_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_MAMODE;
  kcg_int M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
  kcg_int Q_MAMODE;
  kcg_int N_ITER;
  P080_trackide_sectionlist_T_TM SECTIONS;
} struct__50915;

/* TM::P080_trackside_int_T */
typedef struct__50915 P080_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_RBCTR;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} struct__50931;

/* TM::P131_trackside_int_T */
typedef struct__50931 P131_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_ASPECT;
} struct__50944;

/* TM::P132_trackside_int_T */
typedef struct__50944 P132_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_TSR;
} struct__50952;

/* TM::P066_trackside_int_T */
typedef struct__50952 P066_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_ADHESION;
  kcg_int L_ADHESION;
  kcg_int M_ADHESION;
} struct__50960;

/* TM::P071_trackside_int_T */
typedef struct__50960 P071_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__50971;

/* TM::P058_section_int_T */
typedef struct__50971 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__50976[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__50976 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__50976 P058_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int T_CYCLOC;
  kcg_int D_CYCLOC;
  kcg_int M_LOC;
  kcg_int N_ITER;
  P058_trackide_sectionlist_T_TM SECTIONS;
} struct__50979;

/* TM::P058_trackside_int_T */
typedef struct__50979 P058_trackside_int_T_TM;

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
} struct__50992;

/* TM::P065_trackside_int_T */
typedef struct__50992 P065_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__51005;

/* TM::P045_trackside_int_T */
typedef struct__51005 P045_trackside_int_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__51013;

/* TM::P046_section_int_T */
typedef struct__51013 P046_section_int_T_TM;

typedef P046_section_int_T_TM array__51018[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__51018 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__51021;

/* TM::P046_trackside_int_T */
typedef struct__51021 P046_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__51032;

/* TM::P057_trackside_int_T */
typedef struct__51032 P057_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_CURRENT;
  kcg_int M_CURRENT;
} struct__51042;

/* TM::P040_trackside_int_T */
typedef struct__51042 P040_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__51052;

/* TM::P041_section_int_T */
typedef struct__51052 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__51058[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__51058 P041_trackide_sectionlist_T_TM;

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
} struct__51061;

/* TM::P041_trackside_int_T */
typedef struct__51061 P041_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} struct__51075;

/* TM::P042_trackside_int_T */
typedef struct__51075 P042_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int L_SECTION;
} struct__51087;

/* TM::P016_trackside_int_T */
typedef struct__51087 P016_trackside_int_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__51096;

/* TM::P021_section_int_T */
typedef struct__51096 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__51102[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__51102 P021_trackide_sectionlist_T_TM;

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
} struct__51105;

/* TM::P021_trackside_int_T */
typedef struct__51105 P021_trackside_int_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__51118;

/* TM::P015_section_int_T */
typedef struct__51118 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__51125[32];

/* TM::P012_trackide_sectionlist_T */
typedef array__51125 P012_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__51125 P015_OBU_sectionlist_int_T_TM;

/* TM::P015_trackide_sectionlist_T */
typedef array__51125 P015_trackide_sectionlist_T_TM;

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
} struct__51128;

/* TM::P015_trackside_int_T */
typedef struct__51128 P015_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_MAIN;
  kcg_int V_LOA;
  kcg_int T_LOA;
  kcg_int N_ITER;
  P012_trackide_sectionlist_T_TM SECTIONS;
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
} struct__51155;

/* TM::P012_trackside_int_T */
typedef struct__51155 P012_trackside_int_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__51183;

/* TM::P005_section_int_T */
typedef struct__51183 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__51193[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__51193 P005_trackide_sectionlist_T_TM;

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
} struct__51196;

/* TM::P005_trackside_int_T */
typedef struct__51196 P005_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_VERSION;
} struct__51213;

/* TM::P002_trackside_int_T */
typedef struct__51213 P002_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int NID_VBCMK;
} struct__51221;

/* TM::P001_trackside_int_T */
typedef struct__51221 P001_trackside_int_T_TM;

typedef P027V1_section_int_T_TM_baseline2 array__51227[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__51227 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_int array_int_198[198];

/* TM::P080_sections_array_flat_T */
typedef array_int_198 P080_sections_array_flat_T_TM;

typedef P080_section_int_T_TM array__51242[33];

/* TM::P080_OBU_sectionlist_int_T */
typedef array__51242 P080_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_6[6];

/* TM::P080_section_array_T */
typedef array_int_6 P080_section_array_T_TM;

typedef P080_section_array_T_TM array_int_6_33[33];

/* TM::P080_OBU_sectionlist_array_T */
typedef array_int_6_33 P080_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__51254[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__51254 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__51263[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__51263 P041_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef P021_section_int_T_TM array__51272[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__51272 P021_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__51287[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__51287 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_349[349];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_496[496];

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_228[228];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_297[297];

typedef kcg_int array_int_497[497];

typedef kcg_int array_int_495[495];

typedef kcg_int array_int_493[493];

typedef kcg_int array_int_494[494];

#ifndef kcg_copy_struct__50659
#define kcg_copy_struct__50659(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50659)))
#endif /* kcg_copy_struct__50659 */

#ifndef kcg_copy_struct__50672
#define kcg_copy_struct__50672(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50672)))
#endif /* kcg_copy_struct__50672 */

#ifndef kcg_copy_struct__50694
#define kcg_copy_struct__50694(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50694)))
#endif /* kcg_copy_struct__50694 */

#ifndef kcg_copy_struct__50702
#define kcg_copy_struct__50702(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50702)))
#endif /* kcg_copy_struct__50702 */

#ifndef kcg_copy_struct__50713
#define kcg_copy_struct__50713(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50713)))
#endif /* kcg_copy_struct__50713 */

#ifndef kcg_copy_struct__50731
#define kcg_copy_struct__50731(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50731)))
#endif /* kcg_copy_struct__50731 */

#ifndef kcg_copy_struct__50763
#define kcg_copy_struct__50763(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50763)))
#endif /* kcg_copy_struct__50763 */

#ifndef kcg_copy_struct__50774
#define kcg_copy_struct__50774(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50774)))
#endif /* kcg_copy_struct__50774 */

#ifndef kcg_copy_struct__50779
#define kcg_copy_struct__50779(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50779)))
#endif /* kcg_copy_struct__50779 */

#ifndef kcg_copy_struct__50792
#define kcg_copy_struct__50792(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50792)))
#endif /* kcg_copy_struct__50792 */

#ifndef kcg_copy_struct__50797
#define kcg_copy_struct__50797(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50797)))
#endif /* kcg_copy_struct__50797 */

#ifndef kcg_copy_struct__50802
#define kcg_copy_struct__50802(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50802)))
#endif /* kcg_copy_struct__50802 */

#ifndef kcg_copy_struct__50813
#define kcg_copy_struct__50813(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50813)))
#endif /* kcg_copy_struct__50813 */

#ifndef kcg_copy_struct__50820
#define kcg_copy_struct__50820(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50820)))
#endif /* kcg_copy_struct__50820 */

#ifndef kcg_copy_struct__50830
#define kcg_copy_struct__50830(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50830)))
#endif /* kcg_copy_struct__50830 */

#ifndef kcg_copy_struct__50838
#define kcg_copy_struct__50838(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50838)))
#endif /* kcg_copy_struct__50838 */

#ifndef kcg_copy_struct__50847
#define kcg_copy_struct__50847(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50847)))
#endif /* kcg_copy_struct__50847 */

#ifndef kcg_copy_struct__50857
#define kcg_copy_struct__50857(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50857)))
#endif /* kcg_copy_struct__50857 */

#ifndef kcg_copy_struct__50865
#define kcg_copy_struct__50865(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50865)))
#endif /* kcg_copy_struct__50865 */

#ifndef kcg_copy_struct__50875
#define kcg_copy_struct__50875(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50875)))
#endif /* kcg_copy_struct__50875 */

#ifndef kcg_copy_struct__50890
#define kcg_copy_struct__50890(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50890)))
#endif /* kcg_copy_struct__50890 */

#ifndef kcg_copy_struct__50903
#define kcg_copy_struct__50903(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50903)))
#endif /* kcg_copy_struct__50903 */

#ifndef kcg_copy_struct__50915
#define kcg_copy_struct__50915(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50915)))
#endif /* kcg_copy_struct__50915 */

#ifndef kcg_copy_struct__50931
#define kcg_copy_struct__50931(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50931)))
#endif /* kcg_copy_struct__50931 */

#ifndef kcg_copy_struct__50944
#define kcg_copy_struct__50944(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50944)))
#endif /* kcg_copy_struct__50944 */

#ifndef kcg_copy_struct__50952
#define kcg_copy_struct__50952(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50952)))
#endif /* kcg_copy_struct__50952 */

#ifndef kcg_copy_struct__50960
#define kcg_copy_struct__50960(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50960)))
#endif /* kcg_copy_struct__50960 */

#ifndef kcg_copy_struct__50971
#define kcg_copy_struct__50971(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50971)))
#endif /* kcg_copy_struct__50971 */

#ifndef kcg_copy_struct__50979
#define kcg_copy_struct__50979(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50979)))
#endif /* kcg_copy_struct__50979 */

#ifndef kcg_copy_struct__50992
#define kcg_copy_struct__50992(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__50992)))
#endif /* kcg_copy_struct__50992 */

#ifndef kcg_copy_struct__51005
#define kcg_copy_struct__51005(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51005)))
#endif /* kcg_copy_struct__51005 */

#ifndef kcg_copy_struct__51013
#define kcg_copy_struct__51013(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51013)))
#endif /* kcg_copy_struct__51013 */

#ifndef kcg_copy_struct__51021
#define kcg_copy_struct__51021(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51021)))
#endif /* kcg_copy_struct__51021 */

#ifndef kcg_copy_struct__51032
#define kcg_copy_struct__51032(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51032)))
#endif /* kcg_copy_struct__51032 */

#ifndef kcg_copy_struct__51042
#define kcg_copy_struct__51042(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51042)))
#endif /* kcg_copy_struct__51042 */

#ifndef kcg_copy_struct__51052
#define kcg_copy_struct__51052(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51052)))
#endif /* kcg_copy_struct__51052 */

#ifndef kcg_copy_struct__51061
#define kcg_copy_struct__51061(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51061)))
#endif /* kcg_copy_struct__51061 */

#ifndef kcg_copy_struct__51075
#define kcg_copy_struct__51075(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51075)))
#endif /* kcg_copy_struct__51075 */

#ifndef kcg_copy_struct__51087
#define kcg_copy_struct__51087(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51087)))
#endif /* kcg_copy_struct__51087 */

#ifndef kcg_copy_struct__51096
#define kcg_copy_struct__51096(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51096)))
#endif /* kcg_copy_struct__51096 */

#ifndef kcg_copy_struct__51105
#define kcg_copy_struct__51105(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51105)))
#endif /* kcg_copy_struct__51105 */

#ifndef kcg_copy_struct__51118
#define kcg_copy_struct__51118(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51118)))
#endif /* kcg_copy_struct__51118 */

#ifndef kcg_copy_struct__51128
#define kcg_copy_struct__51128(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51128)))
#endif /* kcg_copy_struct__51128 */

#ifndef kcg_copy_struct__51155
#define kcg_copy_struct__51155(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51155)))
#endif /* kcg_copy_struct__51155 */

#ifndef kcg_copy_struct__51183
#define kcg_copy_struct__51183(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51183)))
#endif /* kcg_copy_struct__51183 */

#ifndef kcg_copy_struct__51196
#define kcg_copy_struct__51196(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51196)))
#endif /* kcg_copy_struct__51196 */

#ifndef kcg_copy_struct__51213
#define kcg_copy_struct__51213(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51213)))
#endif /* kcg_copy_struct__51213 */

#ifndef kcg_copy_struct__51221
#define kcg_copy_struct__51221(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__51221)))
#endif /* kcg_copy_struct__51221 */

#ifndef kcg_copy_array_int_255
#define kcg_copy_array_int_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_255)))
#endif /* kcg_copy_array_int_255 */

#ifndef kcg_copy_array__50699
#define kcg_copy_array__50699(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__50699)))
#endif /* kcg_copy_array__50699 */

#ifndef kcg_copy_array__50710
#define kcg_copy_array__50710(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__50710)))
#endif /* kcg_copy_array__50710 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__50771
#define kcg_copy_array__50771(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__50771)))
#endif /* kcg_copy_array__50771 */

#ifndef kcg_copy_array__50912
#define kcg_copy_array__50912(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__50912)))
#endif /* kcg_copy_array__50912 */

#ifndef kcg_copy_array__50976
#define kcg_copy_array__50976(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__50976)))
#endif /* kcg_copy_array__50976 */

#ifndef kcg_copy_array__51018
#define kcg_copy_array__51018(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51018)))
#endif /* kcg_copy_array__51018 */

#ifndef kcg_copy_array__51058
#define kcg_copy_array__51058(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51058)))
#endif /* kcg_copy_array__51058 */

#ifndef kcg_copy_array__51102
#define kcg_copy_array__51102(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51102)))
#endif /* kcg_copy_array__51102 */

#ifndef kcg_copy_array__51125
#define kcg_copy_array__51125(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51125)))
#endif /* kcg_copy_array__51125 */

#ifndef kcg_copy_array__51193
#define kcg_copy_array__51193(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51193)))
#endif /* kcg_copy_array__51193 */

#ifndef kcg_copy_array__51227
#define kcg_copy_array__51227(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51227)))
#endif /* kcg_copy_array__51227 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array_int_198
#define kcg_copy_array_int_198(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_198)))
#endif /* kcg_copy_array_int_198 */

#ifndef kcg_copy_array__51242
#define kcg_copy_array__51242(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51242)))
#endif /* kcg_copy_array__51242 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_6_33
#define kcg_copy_array_int_6_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6_33)))
#endif /* kcg_copy_array_int_6_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__51254
#define kcg_copy_array__51254(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51254)))
#endif /* kcg_copy_array__51254 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__51263
#define kcg_copy_array__51263(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51263)))
#endif /* kcg_copy_array__51263 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array__51272
#define kcg_copy_array__51272(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51272)))
#endif /* kcg_copy_array__51272 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__51287
#define kcg_copy_array__51287(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51287)))
#endif /* kcg_copy_array__51287 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_349
#define kcg_copy_array_int_349(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_349)))
#endif /* kcg_copy_array_int_349 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array_int_496
#define kcg_copy_array_int_496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_496)))
#endif /* kcg_copy_array_int_496 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array_int_228
#define kcg_copy_array_int_228(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_228)))
#endif /* kcg_copy_array_int_228 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_297
#define kcg_copy_array_int_297(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_297)))
#endif /* kcg_copy_array_int_297 */

#ifndef kcg_copy_array_int_497
#define kcg_copy_array_int_497(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_497)))
#endif /* kcg_copy_array_int_497 */

#ifndef kcg_copy_array_int_495
#define kcg_copy_array_int_495(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_495)))
#endif /* kcg_copy_array_int_495 */

#ifndef kcg_copy_array_int_493
#define kcg_copy_array_int_493(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_493)))
#endif /* kcg_copy_array_int_493 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_comp_struct__50659
extern kcg_bool kcg_comp_struct__50659(
  struct__50659 *kcg_c1,
  struct__50659 *kcg_c2);
#endif /* kcg_comp_struct__50659 */

#ifndef kcg_comp_struct__50672
extern kcg_bool kcg_comp_struct__50672(
  struct__50672 *kcg_c1,
  struct__50672 *kcg_c2);
#endif /* kcg_comp_struct__50672 */

#ifndef kcg_comp_struct__50694
extern kcg_bool kcg_comp_struct__50694(
  struct__50694 *kcg_c1,
  struct__50694 *kcg_c2);
#endif /* kcg_comp_struct__50694 */

#ifndef kcg_comp_struct__50702
extern kcg_bool kcg_comp_struct__50702(
  struct__50702 *kcg_c1,
  struct__50702 *kcg_c2);
#endif /* kcg_comp_struct__50702 */

#ifndef kcg_comp_struct__50713
extern kcg_bool kcg_comp_struct__50713(
  struct__50713 *kcg_c1,
  struct__50713 *kcg_c2);
#endif /* kcg_comp_struct__50713 */

#ifndef kcg_comp_struct__50731
extern kcg_bool kcg_comp_struct__50731(
  struct__50731 *kcg_c1,
  struct__50731 *kcg_c2);
#endif /* kcg_comp_struct__50731 */

#ifndef kcg_comp_struct__50763
extern kcg_bool kcg_comp_struct__50763(
  struct__50763 *kcg_c1,
  struct__50763 *kcg_c2);
#endif /* kcg_comp_struct__50763 */

#ifndef kcg_comp_struct__50774
extern kcg_bool kcg_comp_struct__50774(
  struct__50774 *kcg_c1,
  struct__50774 *kcg_c2);
#endif /* kcg_comp_struct__50774 */

#ifndef kcg_comp_struct__50779
extern kcg_bool kcg_comp_struct__50779(
  struct__50779 *kcg_c1,
  struct__50779 *kcg_c2);
#endif /* kcg_comp_struct__50779 */

#ifndef kcg_comp_struct__50792
extern kcg_bool kcg_comp_struct__50792(
  struct__50792 *kcg_c1,
  struct__50792 *kcg_c2);
#endif /* kcg_comp_struct__50792 */

#ifndef kcg_comp_struct__50797
extern kcg_bool kcg_comp_struct__50797(
  struct__50797 *kcg_c1,
  struct__50797 *kcg_c2);
#endif /* kcg_comp_struct__50797 */

#ifndef kcg_comp_struct__50802
extern kcg_bool kcg_comp_struct__50802(
  struct__50802 *kcg_c1,
  struct__50802 *kcg_c2);
#endif /* kcg_comp_struct__50802 */

#ifndef kcg_comp_struct__50813
extern kcg_bool kcg_comp_struct__50813(
  struct__50813 *kcg_c1,
  struct__50813 *kcg_c2);
#endif /* kcg_comp_struct__50813 */

#ifndef kcg_comp_struct__50820
extern kcg_bool kcg_comp_struct__50820(
  struct__50820 *kcg_c1,
  struct__50820 *kcg_c2);
#endif /* kcg_comp_struct__50820 */

#ifndef kcg_comp_struct__50830
extern kcg_bool kcg_comp_struct__50830(
  struct__50830 *kcg_c1,
  struct__50830 *kcg_c2);
#endif /* kcg_comp_struct__50830 */

#ifndef kcg_comp_struct__50838
extern kcg_bool kcg_comp_struct__50838(
  struct__50838 *kcg_c1,
  struct__50838 *kcg_c2);
#endif /* kcg_comp_struct__50838 */

#ifndef kcg_comp_struct__50847
extern kcg_bool kcg_comp_struct__50847(
  struct__50847 *kcg_c1,
  struct__50847 *kcg_c2);
#endif /* kcg_comp_struct__50847 */

#ifndef kcg_comp_struct__50857
extern kcg_bool kcg_comp_struct__50857(
  struct__50857 *kcg_c1,
  struct__50857 *kcg_c2);
#endif /* kcg_comp_struct__50857 */

#ifndef kcg_comp_struct__50865
extern kcg_bool kcg_comp_struct__50865(
  struct__50865 *kcg_c1,
  struct__50865 *kcg_c2);
#endif /* kcg_comp_struct__50865 */

#ifndef kcg_comp_struct__50875
extern kcg_bool kcg_comp_struct__50875(
  struct__50875 *kcg_c1,
  struct__50875 *kcg_c2);
#endif /* kcg_comp_struct__50875 */

#ifndef kcg_comp_struct__50890
extern kcg_bool kcg_comp_struct__50890(
  struct__50890 *kcg_c1,
  struct__50890 *kcg_c2);
#endif /* kcg_comp_struct__50890 */

#ifndef kcg_comp_struct__50903
extern kcg_bool kcg_comp_struct__50903(
  struct__50903 *kcg_c1,
  struct__50903 *kcg_c2);
#endif /* kcg_comp_struct__50903 */

#ifndef kcg_comp_struct__50915
extern kcg_bool kcg_comp_struct__50915(
  struct__50915 *kcg_c1,
  struct__50915 *kcg_c2);
#endif /* kcg_comp_struct__50915 */

#ifndef kcg_comp_struct__50931
extern kcg_bool kcg_comp_struct__50931(
  struct__50931 *kcg_c1,
  struct__50931 *kcg_c2);
#endif /* kcg_comp_struct__50931 */

#ifndef kcg_comp_struct__50944
extern kcg_bool kcg_comp_struct__50944(
  struct__50944 *kcg_c1,
  struct__50944 *kcg_c2);
#endif /* kcg_comp_struct__50944 */

#ifndef kcg_comp_struct__50952
extern kcg_bool kcg_comp_struct__50952(
  struct__50952 *kcg_c1,
  struct__50952 *kcg_c2);
#endif /* kcg_comp_struct__50952 */

#ifndef kcg_comp_struct__50960
extern kcg_bool kcg_comp_struct__50960(
  struct__50960 *kcg_c1,
  struct__50960 *kcg_c2);
#endif /* kcg_comp_struct__50960 */

#ifndef kcg_comp_struct__50971
extern kcg_bool kcg_comp_struct__50971(
  struct__50971 *kcg_c1,
  struct__50971 *kcg_c2);
#endif /* kcg_comp_struct__50971 */

#ifndef kcg_comp_struct__50979
extern kcg_bool kcg_comp_struct__50979(
  struct__50979 *kcg_c1,
  struct__50979 *kcg_c2);
#endif /* kcg_comp_struct__50979 */

#ifndef kcg_comp_struct__50992
extern kcg_bool kcg_comp_struct__50992(
  struct__50992 *kcg_c1,
  struct__50992 *kcg_c2);
#endif /* kcg_comp_struct__50992 */

#ifndef kcg_comp_struct__51005
extern kcg_bool kcg_comp_struct__51005(
  struct__51005 *kcg_c1,
  struct__51005 *kcg_c2);
#endif /* kcg_comp_struct__51005 */

#ifndef kcg_comp_struct__51013
extern kcg_bool kcg_comp_struct__51013(
  struct__51013 *kcg_c1,
  struct__51013 *kcg_c2);
#endif /* kcg_comp_struct__51013 */

#ifndef kcg_comp_struct__51021
extern kcg_bool kcg_comp_struct__51021(
  struct__51021 *kcg_c1,
  struct__51021 *kcg_c2);
#endif /* kcg_comp_struct__51021 */

#ifndef kcg_comp_struct__51032
extern kcg_bool kcg_comp_struct__51032(
  struct__51032 *kcg_c1,
  struct__51032 *kcg_c2);
#endif /* kcg_comp_struct__51032 */

#ifndef kcg_comp_struct__51042
extern kcg_bool kcg_comp_struct__51042(
  struct__51042 *kcg_c1,
  struct__51042 *kcg_c2);
#endif /* kcg_comp_struct__51042 */

#ifndef kcg_comp_struct__51052
extern kcg_bool kcg_comp_struct__51052(
  struct__51052 *kcg_c1,
  struct__51052 *kcg_c2);
#endif /* kcg_comp_struct__51052 */

#ifndef kcg_comp_struct__51061
extern kcg_bool kcg_comp_struct__51061(
  struct__51061 *kcg_c1,
  struct__51061 *kcg_c2);
#endif /* kcg_comp_struct__51061 */

#ifndef kcg_comp_struct__51075
extern kcg_bool kcg_comp_struct__51075(
  struct__51075 *kcg_c1,
  struct__51075 *kcg_c2);
#endif /* kcg_comp_struct__51075 */

#ifndef kcg_comp_struct__51087
extern kcg_bool kcg_comp_struct__51087(
  struct__51087 *kcg_c1,
  struct__51087 *kcg_c2);
#endif /* kcg_comp_struct__51087 */

#ifndef kcg_comp_struct__51096
extern kcg_bool kcg_comp_struct__51096(
  struct__51096 *kcg_c1,
  struct__51096 *kcg_c2);
#endif /* kcg_comp_struct__51096 */

#ifndef kcg_comp_struct__51105
extern kcg_bool kcg_comp_struct__51105(
  struct__51105 *kcg_c1,
  struct__51105 *kcg_c2);
#endif /* kcg_comp_struct__51105 */

#ifndef kcg_comp_struct__51118
extern kcg_bool kcg_comp_struct__51118(
  struct__51118 *kcg_c1,
  struct__51118 *kcg_c2);
#endif /* kcg_comp_struct__51118 */

#ifndef kcg_comp_struct__51128
extern kcg_bool kcg_comp_struct__51128(
  struct__51128 *kcg_c1,
  struct__51128 *kcg_c2);
#endif /* kcg_comp_struct__51128 */

#ifndef kcg_comp_struct__51155
extern kcg_bool kcg_comp_struct__51155(
  struct__51155 *kcg_c1,
  struct__51155 *kcg_c2);
#endif /* kcg_comp_struct__51155 */

#ifndef kcg_comp_struct__51183
extern kcg_bool kcg_comp_struct__51183(
  struct__51183 *kcg_c1,
  struct__51183 *kcg_c2);
#endif /* kcg_comp_struct__51183 */

#ifndef kcg_comp_struct__51196
extern kcg_bool kcg_comp_struct__51196(
  struct__51196 *kcg_c1,
  struct__51196 *kcg_c2);
#endif /* kcg_comp_struct__51196 */

#ifndef kcg_comp_struct__51213
extern kcg_bool kcg_comp_struct__51213(
  struct__51213 *kcg_c1,
  struct__51213 *kcg_c2);
#endif /* kcg_comp_struct__51213 */

#ifndef kcg_comp_struct__51221
extern kcg_bool kcg_comp_struct__51221(
  struct__51221 *kcg_c1,
  struct__51221 *kcg_c2);
#endif /* kcg_comp_struct__51221 */

#ifndef kcg_comp_array_int_255
extern kcg_bool kcg_comp_array_int_255(
  array_int_255 *kcg_c1,
  array_int_255 *kcg_c2);
#endif /* kcg_comp_array_int_255 */

#ifndef kcg_comp_array__50699
extern kcg_bool kcg_comp_array__50699(
  array__50699 *kcg_c1,
  array__50699 *kcg_c2);
#endif /* kcg_comp_array__50699 */

#ifndef kcg_comp_array__50710
extern kcg_bool kcg_comp_array__50710(
  array__50710 *kcg_c1,
  array__50710 *kcg_c2);
#endif /* kcg_comp_array__50710 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__50771
extern kcg_bool kcg_comp_array__50771(
  array__50771 *kcg_c1,
  array__50771 *kcg_c2);
#endif /* kcg_comp_array__50771 */

#ifndef kcg_comp_array__50912
extern kcg_bool kcg_comp_array__50912(
  array__50912 *kcg_c1,
  array__50912 *kcg_c2);
#endif /* kcg_comp_array__50912 */

#ifndef kcg_comp_array__50976
extern kcg_bool kcg_comp_array__50976(
  array__50976 *kcg_c1,
  array__50976 *kcg_c2);
#endif /* kcg_comp_array__50976 */

#ifndef kcg_comp_array__51018
extern kcg_bool kcg_comp_array__51018(
  array__51018 *kcg_c1,
  array__51018 *kcg_c2);
#endif /* kcg_comp_array__51018 */

#ifndef kcg_comp_array__51058
extern kcg_bool kcg_comp_array__51058(
  array__51058 *kcg_c1,
  array__51058 *kcg_c2);
#endif /* kcg_comp_array__51058 */

#ifndef kcg_comp_array__51102
extern kcg_bool kcg_comp_array__51102(
  array__51102 *kcg_c1,
  array__51102 *kcg_c2);
#endif /* kcg_comp_array__51102 */

#ifndef kcg_comp_array__51125
extern kcg_bool kcg_comp_array__51125(
  array__51125 *kcg_c1,
  array__51125 *kcg_c2);
#endif /* kcg_comp_array__51125 */

#ifndef kcg_comp_array__51193
extern kcg_bool kcg_comp_array__51193(
  array__51193 *kcg_c1,
  array__51193 *kcg_c2);
#endif /* kcg_comp_array__51193 */

#ifndef kcg_comp_array__51227
extern kcg_bool kcg_comp_array__51227(
  array__51227 *kcg_c1,
  array__51227 *kcg_c2);
#endif /* kcg_comp_array__51227 */

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

#ifndef kcg_comp_array_int_198
extern kcg_bool kcg_comp_array_int_198(
  array_int_198 *kcg_c1,
  array_int_198 *kcg_c2);
#endif /* kcg_comp_array_int_198 */

#ifndef kcg_comp_array__51242
extern kcg_bool kcg_comp_array__51242(
  array__51242 *kcg_c1,
  array__51242 *kcg_c2);
#endif /* kcg_comp_array__51242 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array_int_6_33
extern kcg_bool kcg_comp_array_int_6_33(
  array_int_6_33 *kcg_c1,
  array_int_6_33 *kcg_c2);
#endif /* kcg_comp_array_int_6_33 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__51254
extern kcg_bool kcg_comp_array__51254(
  array__51254 *kcg_c1,
  array__51254 *kcg_c2);
#endif /* kcg_comp_array__51254 */

#ifndef kcg_comp_array_int_2_33
extern kcg_bool kcg_comp_array_int_2_33(
  array_int_2_33 *kcg_c1,
  array_int_2_33 *kcg_c2);
#endif /* kcg_comp_array_int_2_33 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__51263
extern kcg_bool kcg_comp_array__51263(
  array__51263 *kcg_c1,
  array__51263 *kcg_c2);
#endif /* kcg_comp_array__51263 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array__51272
extern kcg_bool kcg_comp_array__51272(
  array__51272 *kcg_c1,
  array__51272 *kcg_c2);
#endif /* kcg_comp_array__51272 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_4_32
extern kcg_bool kcg_comp_array_int_4_32(
  array_int_4_32 *kcg_c1,
  array_int_4_32 *kcg_c2);
#endif /* kcg_comp_array_int_4_32 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__51287
extern kcg_bool kcg_comp_array__51287(
  array__51287 *kcg_c1,
  array__51287 *kcg_c2);
#endif /* kcg_comp_array__51287 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

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

#ifndef kcg_comp_array_int_349
extern kcg_bool kcg_comp_array_int_349(
  array_int_349 *kcg_c1,
  array_int_349 *kcg_c2);
#endif /* kcg_comp_array_int_349 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */

#ifndef kcg_comp_array_int_496
extern kcg_bool kcg_comp_array_int_496(
  array_int_496 *kcg_c1,
  array_int_496 *kcg_c2);
#endif /* kcg_comp_array_int_496 */

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#ifndef kcg_comp_array_int_228
extern kcg_bool kcg_comp_array_int_228(
  array_int_228 *kcg_c1,
  array_int_228 *kcg_c2);
#endif /* kcg_comp_array_int_228 */

#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */

#ifndef kcg_comp_array_int_297
extern kcg_bool kcg_comp_array_int_297(
  array_int_297 *kcg_c1,
  array_int_297 *kcg_c2);
#endif /* kcg_comp_array_int_297 */

#ifndef kcg_comp_array_int_497
extern kcg_bool kcg_comp_array_int_497(
  array_int_497 *kcg_c1,
  array_int_497 *kcg_c2);
#endif /* kcg_comp_array_int_497 */

#ifndef kcg_comp_array_int_495
extern kcg_bool kcg_comp_array_int_495(
  array_int_495 *kcg_c1,
  array_int_495 *kcg_c2);
#endif /* kcg_comp_array_int_495 */

#ifndef kcg_comp_array_int_493
extern kcg_bool kcg_comp_array_int_493(
  array_int_493 *kcg_c1,
  array_int_493 *kcg_c2);
#endif /* kcg_comp_array_int_493 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__50774

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__50774

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__50763

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__50763

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__50771

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__50771

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__50779

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__50779

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__50792

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__50792

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__50797

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__50797

#define kcg_comp_P143_trackside_int_T_TM kcg_comp_struct__50802

#define kcg_copy_P143_trackside_int_T_TM kcg_copy_struct__50802

#define kcg_comp_P145_trackside_int_T_TM kcg_comp_struct__50813

#define kcg_copy_P145_trackside_int_T_TM kcg_copy_struct__50813

#define kcg_comp_P254_trackside_int_T_TM kcg_comp_struct__50813

#define kcg_copy_P254_trackside_int_T_TM kcg_copy_struct__50813

#define kcg_comp_P139_trackside_int_T_TM kcg_comp_struct__50820

#define kcg_copy_P139_trackside_int_T_TM kcg_copy_struct__50820

#define kcg_comp_P140_trackside_int_T_TM kcg_comp_struct__50830

#define kcg_copy_P140_trackside_int_T_TM kcg_copy_struct__50830

#define kcg_comp_P141_trackside_int_T_TM kcg_comp_struct__50838

#define kcg_copy_P141_trackside_int_T_TM kcg_copy_struct__50838

#define kcg_comp_P136_trackside_int_T_TM kcg_comp_struct__50847

#define kcg_copy_P136_trackside_int_T_TM kcg_copy_struct__50847

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__50857

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__50857

#define kcg_comp_P138_trackside_int_T_TM kcg_comp_struct__50865

#define kcg_copy_P138_trackside_int_T_TM kcg_copy_struct__50865

#define kcg_comp_P133_trackside_int_T_TM kcg_comp_struct__50875

#define kcg_copy_P133_trackside_int_T_TM kcg_copy_struct__50875

#define kcg_comp_P134_trackside_int_T_TM kcg_comp_struct__50890

#define kcg_copy_P134_trackside_int_T_TM kcg_copy_struct__50890

#define kcg_comp_P135_trackside_int_T_TM kcg_comp_struct__50813

#define kcg_copy_P135_trackside_int_T_TM kcg_copy_struct__50813

#define kcg_comp_P080_trackide_sectionlist_T_TM kcg_comp_array__50912

#define kcg_copy_P080_trackide_sectionlist_T_TM kcg_copy_array__50912

#define kcg_comp_P080_trackside_int_T_TM kcg_comp_struct__50915

#define kcg_copy_P080_trackside_int_T_TM kcg_copy_struct__50915

#define kcg_comp_P080_OBU_sectionlist_int_T_TM kcg_comp_array__51242

#define kcg_copy_P080_OBU_sectionlist_int_T_TM kcg_copy_array__51242

#define kcg_comp_P080_section_array_T_TM kcg_comp_array_int_6

#define kcg_copy_P080_section_array_T_TM kcg_copy_array_int_6

#define kcg_comp_P080_OBU_sectionlist_array_T_TM kcg_comp_array_int_6_33

#define kcg_copy_P080_OBU_sectionlist_array_T_TM kcg_copy_array_int_6_33

#define kcg_comp_P080_sections_array_flat_T_TM kcg_comp_array_int_198

#define kcg_copy_P080_sections_array_flat_T_TM kcg_copy_array_int_198

#define kcg_comp_P080_section_int_T_TM kcg_comp_struct__50903

#define kcg_copy_P080_section_int_T_TM kcg_copy_struct__50903

#define kcg_comp_P131_trackside_int_T_TM kcg_comp_struct__50931

#define kcg_copy_P131_trackside_int_T_TM kcg_copy_struct__50931

#define kcg_comp_P132_trackside_int_T_TM kcg_comp_struct__50944

#define kcg_copy_P132_trackside_int_T_TM kcg_copy_struct__50944

#define kcg_comp_P066_trackside_int_T_TM kcg_comp_struct__50952

#define kcg_copy_P066_trackside_int_T_TM kcg_copy_struct__50952

#define kcg_comp_P071_trackside_int_T_TM kcg_comp_struct__50960

#define kcg_copy_P071_trackside_int_T_TM kcg_copy_struct__50960

#define kcg_comp_X_TEXT_trackside_T_TM kcg_comp_array_int_255

#define kcg_copy_X_TEXT_trackside_T_TM kcg_copy_array_int_255

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__50976

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__50976

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__50971

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__50971

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__50976

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__50976

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__50979

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__50979

#define kcg_comp_P064_trackside_int_T_TM kcg_comp_struct__50813

#define kcg_copy_P064_trackside_int_T_TM kcg_copy_struct__50813

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__50992

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__50992

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__51005

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__51005

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__51254

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__51254

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__51013

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__51013

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__51018

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__51018

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__51021

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__51021

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__51032

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__51032

#define kcg_comp_P040_trackside_int_T_TM kcg_comp_struct__51042

#define kcg_copy_P040_trackside_int_T_TM kcg_copy_struct__51042

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__51263

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__51263

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__51052

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__51052

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__51058

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__51058

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__51061

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__51061

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__51075

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__51075

#define kcg_comp_P016_trackside_int_T_TM kcg_comp_struct__51087

#define kcg_copy_P016_trackside_int_T_TM kcg_copy_struct__51087

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__51272

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__51272

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__51096

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__51096

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__51102

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__51102

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__51105

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__51105

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__51125

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__51125

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__51128

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__51128

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__51125

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__51125

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__51118

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__51118

#define kcg_comp_P012_trackide_sectionlist_T_TM kcg_comp_array__51125

#define kcg_copy_P012_trackide_sectionlist_T_TM kcg_copy_array__51125

#define kcg_comp_P012_trackside_int_T_TM kcg_comp_struct__51155

#define kcg_copy_P012_trackside_int_T_TM kcg_copy_struct__51155

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__51287

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__51287

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__51183

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__51183

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__51193

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__51193

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__51196

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__51196

#define kcg_comp_P002_trackside_int_T_TM kcg_comp_struct__51213

#define kcg_copy_P002_trackside_int_T_TM kcg_copy_struct__51213

#define kcg_comp_P001_trackside_int_T_TM kcg_comp_struct__51221

#define kcg_copy_P001_trackside_int_T_TM kcg_copy_struct__51221

#define kcg_comp_P039V1_trackside_int_T_TM_baseline2 kcg_comp_struct__50659

#define kcg_copy_P039V1_trackside_int_T_TM_baseline2 kcg_copy_struct__50659

#define kcg_comp_P072V1_trackside_int_T_TM_baseline2 kcg_comp_struct__50672

#define kcg_copy_P072V1_trackside_int_T_TM_baseline2 kcg_copy_struct__50672

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__50699

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__50699

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__51227

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__51227

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__50702

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__50702

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__50710

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__50710

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__50694

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__50694

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__50699

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__50699

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__50713

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__50713

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__50731

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__50731

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-16T17:04:13
*************************************************************$ */


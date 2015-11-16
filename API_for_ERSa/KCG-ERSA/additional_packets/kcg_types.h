/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/additional_packets\kcg_s2c_config.txt
** Generation date: 2015-11-16T17:06:43
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
} struct__37963;

/* TM_baseline2::P039V1_trackside_int_T */
typedef struct__37963 P039V1_trackside_int_T_TM_baseline2;

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
} struct__37976;

/* TM_baseline2::P072V1_trackside_int_T */
typedef struct__37976 P072V1_trackside_int_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__37998;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__37998 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__38003[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__38003 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__38003 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__38006;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__38006 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__38014[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__38014 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__38017;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__38017 P027V1_trackside_int_T_TM_baseline2;

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
} struct__38035;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__38035 P003V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__38067;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__38067 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__38075[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__38075 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__38078;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__38078 CompressedPackets_T_Common_Types_Pkg;

typedef P027V1_section_int_T_TM_baseline2 array__38083[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__38083 P027V1_OBU_sectionlist_int_T_TM_baseline2;

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

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__38095;

/* TM::P255_trackside_int_T */
typedef struct__38095 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RIU;
  kcg_int NID_C;
  kcg_int NID_RIU;
  kcg_int NID_RADIO;
} struct__38100;

/* TM::P143_trackside_int_T */
typedef struct__38100 P143_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
} struct__38111;

/* TM::P064_trackside_int_T */
typedef struct__38111 P064_trackside_int_T_TM;

/* TM::P135_trackside_int_T */
typedef struct__38111 P135_trackside_int_T_TM;

/* TM::P254_trackside_int_T */
typedef struct__38111 P254_trackside_int_T_TM;

/* TM::P145_trackside_int_T */
typedef struct__38111 P145_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_REVERSE;
  kcg_int V_REVERSE;
} struct__38118;

/* TM::P139_trackside_int_T */
typedef struct__38118 P139_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_OPERATIONAL;
} struct__38128;

/* TM::P140_trackside_int_T */
typedef struct__38128 P140_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_GDIR;
  kcg_int G_TSR;
} struct__38136;

/* TM::P141_trackside_int_T */
typedef struct__38136 P141_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
} struct__38145;

/* TM::P136_trackside_int_T */
typedef struct__38145 P136_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__38155;

/* TM::P137_trackside_int_T */
typedef struct__38155 P137_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STARTREVERSE;
  kcg_int L_REVERSEAREA;
} struct__38163;

/* TM::P138_trackside_int_T */
typedef struct__38163 P138_trackside_int_T_TM;

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
} struct__38173;

/* TM::P133_trackside_int_T */
typedef struct__38173 P133_trackside_int_T_TM;

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
} struct__38188;

/* TM::P134_trackside_int_T */
typedef struct__38188 P134_trackside_int_T_TM;

typedef struct {
  kcg_int D_MAMODE;
  kcg_int M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
  kcg_int Q_MAMODE;
} struct__38201;

/* TM::P080_section_int_T */
typedef struct__38201 P080_section_int_T_TM;

typedef P080_section_int_T_TM array__38210[32];

/* TM::P080_trackide_sectionlist_T */
typedef array__38210 P080_trackide_sectionlist_T_TM;

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
} struct__38213;

/* TM::P080_trackside_int_T */
typedef struct__38213 P080_trackside_int_T_TM;

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
} struct__38229;

/* TM::P131_trackside_int_T */
typedef struct__38229 P131_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_ASPECT;
} struct__38242;

/* TM::P132_trackside_int_T */
typedef struct__38242 P132_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_TSR;
} struct__38250;

/* TM::P066_trackside_int_T */
typedef struct__38250 P066_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_ADHESION;
  kcg_int L_ADHESION;
  kcg_int M_ADHESION;
} struct__38258;

/* TM::P071_trackside_int_T */
typedef struct__38258 P071_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__38269;

/* TM::P058_section_int_T */
typedef struct__38269 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__38274[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__38274 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__38274 P058_OBU_sectionlist_int_T_TM;

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
} struct__38277;

/* TM::P058_trackside_int_T */
typedef struct__38277 P058_trackside_int_T_TM;

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
} struct__38290;

/* TM::P065_trackside_int_T */
typedef struct__38290 P065_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__38303;

/* TM::P045_trackside_int_T */
typedef struct__38303 P045_trackside_int_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__38311;

/* TM::P046_section_int_T */
typedef struct__38311 P046_section_int_T_TM;

typedef P046_section_int_T_TM array__38316[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__38316 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__38319;

/* TM::P046_trackside_int_T */
typedef struct__38319 P046_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__38330;

/* TM::P057_trackside_int_T */
typedef struct__38330 P057_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_CURRENT;
  kcg_int M_CURRENT;
} struct__38340;

/* TM::P040_trackside_int_T */
typedef struct__38340 P040_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__38350;

/* TM::P041_section_int_T */
typedef struct__38350 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__38356[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__38356 P041_trackide_sectionlist_T_TM;

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
} struct__38359;

/* TM::P041_trackside_int_T */
typedef struct__38359 P041_trackside_int_T_TM;

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
} struct__38373;

/* TM::P042_trackside_int_T */
typedef struct__38373 P042_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int L_SECTION;
} struct__38385;

/* TM::P016_trackside_int_T */
typedef struct__38385 P016_trackside_int_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__38394;

/* TM::P021_section_int_T */
typedef struct__38394 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__38400[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__38400 P021_trackide_sectionlist_T_TM;

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
} struct__38403;

/* TM::P021_trackside_int_T */
typedef struct__38403 P021_trackside_int_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__38416;

/* TM::P015_section_int_T */
typedef struct__38416 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__38423[32];

/* TM::P012_trackide_sectionlist_T */
typedef array__38423 P012_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__38423 P015_OBU_sectionlist_int_T_TM;

/* TM::P015_trackide_sectionlist_T */
typedef array__38423 P015_trackide_sectionlist_T_TM;

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
} struct__38426;

/* TM::P015_trackside_int_T */
typedef struct__38426 P015_trackside_int_T_TM;

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
} struct__38453;

/* TM::P012_trackside_int_T */
typedef struct__38453 P012_trackside_int_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__38481;

/* TM::P005_section_int_T */
typedef struct__38481 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__38491[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__38491 P005_trackide_sectionlist_T_TM;

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
} struct__38494;

/* TM::P005_trackside_int_T */
typedef struct__38494 P005_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_VERSION;
} struct__38511;

/* TM::P002_trackside_int_T */
typedef struct__38511 P002_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int NID_VBCMK;
} struct__38519;

/* TM::P001_trackside_int_T */
typedef struct__38519 P001_trackside_int_T_TM;

typedef kcg_int array_int_198[198];

/* TM::P080_sections_array_flat_T */
typedef array_int_198 P080_sections_array_flat_T_TM;

typedef P080_section_int_T_TM array__38528[33];

/* TM::P080_OBU_sectionlist_int_T */
typedef array__38528 P080_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_6[6];

/* TM::P080_section_array_T */
typedef array_int_6 P080_section_array_T_TM;

typedef P080_section_array_T_TM array_int_6_33[33];

/* TM::P080_OBU_sectionlist_array_T */
typedef array_int_6_33 P080_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__38540[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__38540 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__38549[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__38549 P041_OBU_sectionlist_int_T_TM;

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

typedef P021_section_int_T_TM array__38558[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__38558 P021_OBU_sectionlist_int_T_TM;

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

typedef P005_section_int_T_TM array__38573[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__38573 P005_OBU_sectionlist_int_T_TM;

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

#ifndef kcg_copy_struct__37963
#define kcg_copy_struct__37963(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__37963)))
#endif /* kcg_copy_struct__37963 */

#ifndef kcg_copy_struct__37976
#define kcg_copy_struct__37976(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__37976)))
#endif /* kcg_copy_struct__37976 */

#ifndef kcg_copy_struct__37998
#define kcg_copy_struct__37998(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__37998)))
#endif /* kcg_copy_struct__37998 */

#ifndef kcg_copy_struct__38006
#define kcg_copy_struct__38006(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38006)))
#endif /* kcg_copy_struct__38006 */

#ifndef kcg_copy_struct__38017
#define kcg_copy_struct__38017(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38017)))
#endif /* kcg_copy_struct__38017 */

#ifndef kcg_copy_struct__38035
#define kcg_copy_struct__38035(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38035)))
#endif /* kcg_copy_struct__38035 */

#ifndef kcg_copy_struct__38067
#define kcg_copy_struct__38067(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38067)))
#endif /* kcg_copy_struct__38067 */

#ifndef kcg_copy_struct__38078
#define kcg_copy_struct__38078(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38078)))
#endif /* kcg_copy_struct__38078 */

#ifndef kcg_copy_struct__38095
#define kcg_copy_struct__38095(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38095)))
#endif /* kcg_copy_struct__38095 */

#ifndef kcg_copy_struct__38100
#define kcg_copy_struct__38100(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38100)))
#endif /* kcg_copy_struct__38100 */

#ifndef kcg_copy_struct__38111
#define kcg_copy_struct__38111(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38111)))
#endif /* kcg_copy_struct__38111 */

#ifndef kcg_copy_struct__38118
#define kcg_copy_struct__38118(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38118)))
#endif /* kcg_copy_struct__38118 */

#ifndef kcg_copy_struct__38128
#define kcg_copy_struct__38128(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38128)))
#endif /* kcg_copy_struct__38128 */

#ifndef kcg_copy_struct__38136
#define kcg_copy_struct__38136(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38136)))
#endif /* kcg_copy_struct__38136 */

#ifndef kcg_copy_struct__38145
#define kcg_copy_struct__38145(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38145)))
#endif /* kcg_copy_struct__38145 */

#ifndef kcg_copy_struct__38155
#define kcg_copy_struct__38155(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38155)))
#endif /* kcg_copy_struct__38155 */

#ifndef kcg_copy_struct__38163
#define kcg_copy_struct__38163(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38163)))
#endif /* kcg_copy_struct__38163 */

#ifndef kcg_copy_struct__38173
#define kcg_copy_struct__38173(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38173)))
#endif /* kcg_copy_struct__38173 */

#ifndef kcg_copy_struct__38188
#define kcg_copy_struct__38188(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38188)))
#endif /* kcg_copy_struct__38188 */

#ifndef kcg_copy_struct__38201
#define kcg_copy_struct__38201(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38201)))
#endif /* kcg_copy_struct__38201 */

#ifndef kcg_copy_struct__38213
#define kcg_copy_struct__38213(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38213)))
#endif /* kcg_copy_struct__38213 */

#ifndef kcg_copy_struct__38229
#define kcg_copy_struct__38229(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38229)))
#endif /* kcg_copy_struct__38229 */

#ifndef kcg_copy_struct__38242
#define kcg_copy_struct__38242(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38242)))
#endif /* kcg_copy_struct__38242 */

#ifndef kcg_copy_struct__38250
#define kcg_copy_struct__38250(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38250)))
#endif /* kcg_copy_struct__38250 */

#ifndef kcg_copy_struct__38258
#define kcg_copy_struct__38258(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38258)))
#endif /* kcg_copy_struct__38258 */

#ifndef kcg_copy_struct__38269
#define kcg_copy_struct__38269(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38269)))
#endif /* kcg_copy_struct__38269 */

#ifndef kcg_copy_struct__38277
#define kcg_copy_struct__38277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38277)))
#endif /* kcg_copy_struct__38277 */

#ifndef kcg_copy_struct__38290
#define kcg_copy_struct__38290(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38290)))
#endif /* kcg_copy_struct__38290 */

#ifndef kcg_copy_struct__38303
#define kcg_copy_struct__38303(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38303)))
#endif /* kcg_copy_struct__38303 */

#ifndef kcg_copy_struct__38311
#define kcg_copy_struct__38311(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38311)))
#endif /* kcg_copy_struct__38311 */

#ifndef kcg_copy_struct__38319
#define kcg_copy_struct__38319(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38319)))
#endif /* kcg_copy_struct__38319 */

#ifndef kcg_copy_struct__38330
#define kcg_copy_struct__38330(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38330)))
#endif /* kcg_copy_struct__38330 */

#ifndef kcg_copy_struct__38340
#define kcg_copy_struct__38340(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38340)))
#endif /* kcg_copy_struct__38340 */

#ifndef kcg_copy_struct__38350
#define kcg_copy_struct__38350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38350)))
#endif /* kcg_copy_struct__38350 */

#ifndef kcg_copy_struct__38359
#define kcg_copy_struct__38359(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38359)))
#endif /* kcg_copy_struct__38359 */

#ifndef kcg_copy_struct__38373
#define kcg_copy_struct__38373(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38373)))
#endif /* kcg_copy_struct__38373 */

#ifndef kcg_copy_struct__38385
#define kcg_copy_struct__38385(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38385)))
#endif /* kcg_copy_struct__38385 */

#ifndef kcg_copy_struct__38394
#define kcg_copy_struct__38394(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38394)))
#endif /* kcg_copy_struct__38394 */

#ifndef kcg_copy_struct__38403
#define kcg_copy_struct__38403(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38403)))
#endif /* kcg_copy_struct__38403 */

#ifndef kcg_copy_struct__38416
#define kcg_copy_struct__38416(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38416)))
#endif /* kcg_copy_struct__38416 */

#ifndef kcg_copy_struct__38426
#define kcg_copy_struct__38426(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38426)))
#endif /* kcg_copy_struct__38426 */

#ifndef kcg_copy_struct__38453
#define kcg_copy_struct__38453(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38453)))
#endif /* kcg_copy_struct__38453 */

#ifndef kcg_copy_struct__38481
#define kcg_copy_struct__38481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38481)))
#endif /* kcg_copy_struct__38481 */

#ifndef kcg_copy_struct__38494
#define kcg_copy_struct__38494(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38494)))
#endif /* kcg_copy_struct__38494 */

#ifndef kcg_copy_struct__38511
#define kcg_copy_struct__38511(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38511)))
#endif /* kcg_copy_struct__38511 */

#ifndef kcg_copy_struct__38519
#define kcg_copy_struct__38519(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__38519)))
#endif /* kcg_copy_struct__38519 */

#ifndef kcg_copy_array_int_255
#define kcg_copy_array_int_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_255)))
#endif /* kcg_copy_array_int_255 */

#ifndef kcg_copy_array__38003
#define kcg_copy_array__38003(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38003)))
#endif /* kcg_copy_array__38003 */

#ifndef kcg_copy_array__38014
#define kcg_copy_array__38014(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38014)))
#endif /* kcg_copy_array__38014 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__38075
#define kcg_copy_array__38075(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38075)))
#endif /* kcg_copy_array__38075 */

#ifndef kcg_copy_array__38083
#define kcg_copy_array__38083(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38083)))
#endif /* kcg_copy_array__38083 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__38210
#define kcg_copy_array__38210(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38210)))
#endif /* kcg_copy_array__38210 */

#ifndef kcg_copy_array__38274
#define kcg_copy_array__38274(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38274)))
#endif /* kcg_copy_array__38274 */

#ifndef kcg_copy_array__38316
#define kcg_copy_array__38316(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38316)))
#endif /* kcg_copy_array__38316 */

#ifndef kcg_copy_array__38356
#define kcg_copy_array__38356(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38356)))
#endif /* kcg_copy_array__38356 */

#ifndef kcg_copy_array__38400
#define kcg_copy_array__38400(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38400)))
#endif /* kcg_copy_array__38400 */

#ifndef kcg_copy_array__38423
#define kcg_copy_array__38423(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38423)))
#endif /* kcg_copy_array__38423 */

#ifndef kcg_copy_array__38491
#define kcg_copy_array__38491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38491)))
#endif /* kcg_copy_array__38491 */

#ifndef kcg_copy_array_int_198
#define kcg_copy_array_int_198(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_198)))
#endif /* kcg_copy_array_int_198 */

#ifndef kcg_copy_array__38528
#define kcg_copy_array__38528(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38528)))
#endif /* kcg_copy_array__38528 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_6_33
#define kcg_copy_array_int_6_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6_33)))
#endif /* kcg_copy_array_int_6_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__38540
#define kcg_copy_array__38540(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38540)))
#endif /* kcg_copy_array__38540 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__38549
#define kcg_copy_array__38549(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38549)))
#endif /* kcg_copy_array__38549 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array__38558
#define kcg_copy_array__38558(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38558)))
#endif /* kcg_copy_array__38558 */

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

#ifndef kcg_copy_array__38573
#define kcg_copy_array__38573(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__38573)))
#endif /* kcg_copy_array__38573 */

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

#ifndef kcg_comp_struct__37963
extern kcg_bool kcg_comp_struct__37963(
  struct__37963 *kcg_c1,
  struct__37963 *kcg_c2);
#endif /* kcg_comp_struct__37963 */

#ifndef kcg_comp_struct__37976
extern kcg_bool kcg_comp_struct__37976(
  struct__37976 *kcg_c1,
  struct__37976 *kcg_c2);
#endif /* kcg_comp_struct__37976 */

#ifndef kcg_comp_struct__37998
extern kcg_bool kcg_comp_struct__37998(
  struct__37998 *kcg_c1,
  struct__37998 *kcg_c2);
#endif /* kcg_comp_struct__37998 */

#ifndef kcg_comp_struct__38006
extern kcg_bool kcg_comp_struct__38006(
  struct__38006 *kcg_c1,
  struct__38006 *kcg_c2);
#endif /* kcg_comp_struct__38006 */

#ifndef kcg_comp_struct__38017
extern kcg_bool kcg_comp_struct__38017(
  struct__38017 *kcg_c1,
  struct__38017 *kcg_c2);
#endif /* kcg_comp_struct__38017 */

#ifndef kcg_comp_struct__38035
extern kcg_bool kcg_comp_struct__38035(
  struct__38035 *kcg_c1,
  struct__38035 *kcg_c2);
#endif /* kcg_comp_struct__38035 */

#ifndef kcg_comp_struct__38067
extern kcg_bool kcg_comp_struct__38067(
  struct__38067 *kcg_c1,
  struct__38067 *kcg_c2);
#endif /* kcg_comp_struct__38067 */

#ifndef kcg_comp_struct__38078
extern kcg_bool kcg_comp_struct__38078(
  struct__38078 *kcg_c1,
  struct__38078 *kcg_c2);
#endif /* kcg_comp_struct__38078 */

#ifndef kcg_comp_struct__38095
extern kcg_bool kcg_comp_struct__38095(
  struct__38095 *kcg_c1,
  struct__38095 *kcg_c2);
#endif /* kcg_comp_struct__38095 */

#ifndef kcg_comp_struct__38100
extern kcg_bool kcg_comp_struct__38100(
  struct__38100 *kcg_c1,
  struct__38100 *kcg_c2);
#endif /* kcg_comp_struct__38100 */

#ifndef kcg_comp_struct__38111
extern kcg_bool kcg_comp_struct__38111(
  struct__38111 *kcg_c1,
  struct__38111 *kcg_c2);
#endif /* kcg_comp_struct__38111 */

#ifndef kcg_comp_struct__38118
extern kcg_bool kcg_comp_struct__38118(
  struct__38118 *kcg_c1,
  struct__38118 *kcg_c2);
#endif /* kcg_comp_struct__38118 */

#ifndef kcg_comp_struct__38128
extern kcg_bool kcg_comp_struct__38128(
  struct__38128 *kcg_c1,
  struct__38128 *kcg_c2);
#endif /* kcg_comp_struct__38128 */

#ifndef kcg_comp_struct__38136
extern kcg_bool kcg_comp_struct__38136(
  struct__38136 *kcg_c1,
  struct__38136 *kcg_c2);
#endif /* kcg_comp_struct__38136 */

#ifndef kcg_comp_struct__38145
extern kcg_bool kcg_comp_struct__38145(
  struct__38145 *kcg_c1,
  struct__38145 *kcg_c2);
#endif /* kcg_comp_struct__38145 */

#ifndef kcg_comp_struct__38155
extern kcg_bool kcg_comp_struct__38155(
  struct__38155 *kcg_c1,
  struct__38155 *kcg_c2);
#endif /* kcg_comp_struct__38155 */

#ifndef kcg_comp_struct__38163
extern kcg_bool kcg_comp_struct__38163(
  struct__38163 *kcg_c1,
  struct__38163 *kcg_c2);
#endif /* kcg_comp_struct__38163 */

#ifndef kcg_comp_struct__38173
extern kcg_bool kcg_comp_struct__38173(
  struct__38173 *kcg_c1,
  struct__38173 *kcg_c2);
#endif /* kcg_comp_struct__38173 */

#ifndef kcg_comp_struct__38188
extern kcg_bool kcg_comp_struct__38188(
  struct__38188 *kcg_c1,
  struct__38188 *kcg_c2);
#endif /* kcg_comp_struct__38188 */

#ifndef kcg_comp_struct__38201
extern kcg_bool kcg_comp_struct__38201(
  struct__38201 *kcg_c1,
  struct__38201 *kcg_c2);
#endif /* kcg_comp_struct__38201 */

#ifndef kcg_comp_struct__38213
extern kcg_bool kcg_comp_struct__38213(
  struct__38213 *kcg_c1,
  struct__38213 *kcg_c2);
#endif /* kcg_comp_struct__38213 */

#ifndef kcg_comp_struct__38229
extern kcg_bool kcg_comp_struct__38229(
  struct__38229 *kcg_c1,
  struct__38229 *kcg_c2);
#endif /* kcg_comp_struct__38229 */

#ifndef kcg_comp_struct__38242
extern kcg_bool kcg_comp_struct__38242(
  struct__38242 *kcg_c1,
  struct__38242 *kcg_c2);
#endif /* kcg_comp_struct__38242 */

#ifndef kcg_comp_struct__38250
extern kcg_bool kcg_comp_struct__38250(
  struct__38250 *kcg_c1,
  struct__38250 *kcg_c2);
#endif /* kcg_comp_struct__38250 */

#ifndef kcg_comp_struct__38258
extern kcg_bool kcg_comp_struct__38258(
  struct__38258 *kcg_c1,
  struct__38258 *kcg_c2);
#endif /* kcg_comp_struct__38258 */

#ifndef kcg_comp_struct__38269
extern kcg_bool kcg_comp_struct__38269(
  struct__38269 *kcg_c1,
  struct__38269 *kcg_c2);
#endif /* kcg_comp_struct__38269 */

#ifndef kcg_comp_struct__38277
extern kcg_bool kcg_comp_struct__38277(
  struct__38277 *kcg_c1,
  struct__38277 *kcg_c2);
#endif /* kcg_comp_struct__38277 */

#ifndef kcg_comp_struct__38290
extern kcg_bool kcg_comp_struct__38290(
  struct__38290 *kcg_c1,
  struct__38290 *kcg_c2);
#endif /* kcg_comp_struct__38290 */

#ifndef kcg_comp_struct__38303
extern kcg_bool kcg_comp_struct__38303(
  struct__38303 *kcg_c1,
  struct__38303 *kcg_c2);
#endif /* kcg_comp_struct__38303 */

#ifndef kcg_comp_struct__38311
extern kcg_bool kcg_comp_struct__38311(
  struct__38311 *kcg_c1,
  struct__38311 *kcg_c2);
#endif /* kcg_comp_struct__38311 */

#ifndef kcg_comp_struct__38319
extern kcg_bool kcg_comp_struct__38319(
  struct__38319 *kcg_c1,
  struct__38319 *kcg_c2);
#endif /* kcg_comp_struct__38319 */

#ifndef kcg_comp_struct__38330
extern kcg_bool kcg_comp_struct__38330(
  struct__38330 *kcg_c1,
  struct__38330 *kcg_c2);
#endif /* kcg_comp_struct__38330 */

#ifndef kcg_comp_struct__38340
extern kcg_bool kcg_comp_struct__38340(
  struct__38340 *kcg_c1,
  struct__38340 *kcg_c2);
#endif /* kcg_comp_struct__38340 */

#ifndef kcg_comp_struct__38350
extern kcg_bool kcg_comp_struct__38350(
  struct__38350 *kcg_c1,
  struct__38350 *kcg_c2);
#endif /* kcg_comp_struct__38350 */

#ifndef kcg_comp_struct__38359
extern kcg_bool kcg_comp_struct__38359(
  struct__38359 *kcg_c1,
  struct__38359 *kcg_c2);
#endif /* kcg_comp_struct__38359 */

#ifndef kcg_comp_struct__38373
extern kcg_bool kcg_comp_struct__38373(
  struct__38373 *kcg_c1,
  struct__38373 *kcg_c2);
#endif /* kcg_comp_struct__38373 */

#ifndef kcg_comp_struct__38385
extern kcg_bool kcg_comp_struct__38385(
  struct__38385 *kcg_c1,
  struct__38385 *kcg_c2);
#endif /* kcg_comp_struct__38385 */

#ifndef kcg_comp_struct__38394
extern kcg_bool kcg_comp_struct__38394(
  struct__38394 *kcg_c1,
  struct__38394 *kcg_c2);
#endif /* kcg_comp_struct__38394 */

#ifndef kcg_comp_struct__38403
extern kcg_bool kcg_comp_struct__38403(
  struct__38403 *kcg_c1,
  struct__38403 *kcg_c2);
#endif /* kcg_comp_struct__38403 */

#ifndef kcg_comp_struct__38416
extern kcg_bool kcg_comp_struct__38416(
  struct__38416 *kcg_c1,
  struct__38416 *kcg_c2);
#endif /* kcg_comp_struct__38416 */

#ifndef kcg_comp_struct__38426
extern kcg_bool kcg_comp_struct__38426(
  struct__38426 *kcg_c1,
  struct__38426 *kcg_c2);
#endif /* kcg_comp_struct__38426 */

#ifndef kcg_comp_struct__38453
extern kcg_bool kcg_comp_struct__38453(
  struct__38453 *kcg_c1,
  struct__38453 *kcg_c2);
#endif /* kcg_comp_struct__38453 */

#ifndef kcg_comp_struct__38481
extern kcg_bool kcg_comp_struct__38481(
  struct__38481 *kcg_c1,
  struct__38481 *kcg_c2);
#endif /* kcg_comp_struct__38481 */

#ifndef kcg_comp_struct__38494
extern kcg_bool kcg_comp_struct__38494(
  struct__38494 *kcg_c1,
  struct__38494 *kcg_c2);
#endif /* kcg_comp_struct__38494 */

#ifndef kcg_comp_struct__38511
extern kcg_bool kcg_comp_struct__38511(
  struct__38511 *kcg_c1,
  struct__38511 *kcg_c2);
#endif /* kcg_comp_struct__38511 */

#ifndef kcg_comp_struct__38519
extern kcg_bool kcg_comp_struct__38519(
  struct__38519 *kcg_c1,
  struct__38519 *kcg_c2);
#endif /* kcg_comp_struct__38519 */

#ifndef kcg_comp_array_int_255
extern kcg_bool kcg_comp_array_int_255(
  array_int_255 *kcg_c1,
  array_int_255 *kcg_c2);
#endif /* kcg_comp_array_int_255 */

#ifndef kcg_comp_array__38003
extern kcg_bool kcg_comp_array__38003(
  array__38003 *kcg_c1,
  array__38003 *kcg_c2);
#endif /* kcg_comp_array__38003 */

#ifndef kcg_comp_array__38014
extern kcg_bool kcg_comp_array__38014(
  array__38014 *kcg_c1,
  array__38014 *kcg_c2);
#endif /* kcg_comp_array__38014 */

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

#ifndef kcg_comp_array__38075
extern kcg_bool kcg_comp_array__38075(
  array__38075 *kcg_c1,
  array__38075 *kcg_c2);
#endif /* kcg_comp_array__38075 */

#ifndef kcg_comp_array__38083
extern kcg_bool kcg_comp_array__38083(
  array__38083 *kcg_c1,
  array__38083 *kcg_c2);
#endif /* kcg_comp_array__38083 */

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

#ifndef kcg_comp_array__38210
extern kcg_bool kcg_comp_array__38210(
  array__38210 *kcg_c1,
  array__38210 *kcg_c2);
#endif /* kcg_comp_array__38210 */

#ifndef kcg_comp_array__38274
extern kcg_bool kcg_comp_array__38274(
  array__38274 *kcg_c1,
  array__38274 *kcg_c2);
#endif /* kcg_comp_array__38274 */

#ifndef kcg_comp_array__38316
extern kcg_bool kcg_comp_array__38316(
  array__38316 *kcg_c1,
  array__38316 *kcg_c2);
#endif /* kcg_comp_array__38316 */

#ifndef kcg_comp_array__38356
extern kcg_bool kcg_comp_array__38356(
  array__38356 *kcg_c1,
  array__38356 *kcg_c2);
#endif /* kcg_comp_array__38356 */

#ifndef kcg_comp_array__38400
extern kcg_bool kcg_comp_array__38400(
  array__38400 *kcg_c1,
  array__38400 *kcg_c2);
#endif /* kcg_comp_array__38400 */

#ifndef kcg_comp_array__38423
extern kcg_bool kcg_comp_array__38423(
  array__38423 *kcg_c1,
  array__38423 *kcg_c2);
#endif /* kcg_comp_array__38423 */

#ifndef kcg_comp_array__38491
extern kcg_bool kcg_comp_array__38491(
  array__38491 *kcg_c1,
  array__38491 *kcg_c2);
#endif /* kcg_comp_array__38491 */

#ifndef kcg_comp_array_int_198
extern kcg_bool kcg_comp_array_int_198(
  array_int_198 *kcg_c1,
  array_int_198 *kcg_c2);
#endif /* kcg_comp_array_int_198 */

#ifndef kcg_comp_array__38528
extern kcg_bool kcg_comp_array__38528(
  array__38528 *kcg_c1,
  array__38528 *kcg_c2);
#endif /* kcg_comp_array__38528 */

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

#ifndef kcg_comp_array__38540
extern kcg_bool kcg_comp_array__38540(
  array__38540 *kcg_c1,
  array__38540 *kcg_c2);
#endif /* kcg_comp_array__38540 */

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

#ifndef kcg_comp_array__38549
extern kcg_bool kcg_comp_array__38549(
  array__38549 *kcg_c1,
  array__38549 *kcg_c2);
#endif /* kcg_comp_array__38549 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array__38558
extern kcg_bool kcg_comp_array__38558(
  array__38558 *kcg_c1,
  array__38558 *kcg_c2);
#endif /* kcg_comp_array__38558 */

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

#ifndef kcg_comp_array__38573
extern kcg_bool kcg_comp_array__38573(
  array__38573 *kcg_c1,
  array__38573 *kcg_c2);
#endif /* kcg_comp_array__38573 */

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

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__38017

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__38017

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__38035

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__38035

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__38078

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__38078

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__38067

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__38067

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__38075

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__38075

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__38095

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__38095

#define kcg_comp_P143_trackside_int_T_TM kcg_comp_struct__38100

#define kcg_copy_P143_trackside_int_T_TM kcg_copy_struct__38100

#define kcg_comp_P145_trackside_int_T_TM kcg_comp_struct__38111

#define kcg_copy_P145_trackside_int_T_TM kcg_copy_struct__38111

#define kcg_comp_P254_trackside_int_T_TM kcg_comp_struct__38111

#define kcg_copy_P254_trackside_int_T_TM kcg_copy_struct__38111

#define kcg_comp_P139_trackside_int_T_TM kcg_comp_struct__38118

#define kcg_copy_P139_trackside_int_T_TM kcg_copy_struct__38118

#define kcg_comp_P140_trackside_int_T_TM kcg_comp_struct__38128

#define kcg_copy_P140_trackside_int_T_TM kcg_copy_struct__38128

#define kcg_comp_P141_trackside_int_T_TM kcg_comp_struct__38136

#define kcg_copy_P141_trackside_int_T_TM kcg_copy_struct__38136

#define kcg_comp_P136_trackside_int_T_TM kcg_comp_struct__38145

#define kcg_copy_P136_trackside_int_T_TM kcg_copy_struct__38145

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__38155

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__38155

#define kcg_comp_P138_trackside_int_T_TM kcg_comp_struct__38163

#define kcg_copy_P138_trackside_int_T_TM kcg_copy_struct__38163

#define kcg_comp_P133_trackside_int_T_TM kcg_comp_struct__38173

#define kcg_copy_P133_trackside_int_T_TM kcg_copy_struct__38173

#define kcg_comp_P134_trackside_int_T_TM kcg_comp_struct__38188

#define kcg_copy_P134_trackside_int_T_TM kcg_copy_struct__38188

#define kcg_comp_P135_trackside_int_T_TM kcg_comp_struct__38111

#define kcg_copy_P135_trackside_int_T_TM kcg_copy_struct__38111

#define kcg_comp_P080_trackide_sectionlist_T_TM kcg_comp_array__38210

#define kcg_copy_P080_trackide_sectionlist_T_TM kcg_copy_array__38210

#define kcg_comp_P080_trackside_int_T_TM kcg_comp_struct__38213

#define kcg_copy_P080_trackside_int_T_TM kcg_copy_struct__38213

#define kcg_comp_P080_OBU_sectionlist_int_T_TM kcg_comp_array__38528

#define kcg_copy_P080_OBU_sectionlist_int_T_TM kcg_copy_array__38528

#define kcg_comp_P080_section_array_T_TM kcg_comp_array_int_6

#define kcg_copy_P080_section_array_T_TM kcg_copy_array_int_6

#define kcg_comp_P080_OBU_sectionlist_array_T_TM kcg_comp_array_int_6_33

#define kcg_copy_P080_OBU_sectionlist_array_T_TM kcg_copy_array_int_6_33

#define kcg_comp_P080_sections_array_flat_T_TM kcg_comp_array_int_198

#define kcg_copy_P080_sections_array_flat_T_TM kcg_copy_array_int_198

#define kcg_comp_P080_section_int_T_TM kcg_comp_struct__38201

#define kcg_copy_P080_section_int_T_TM kcg_copy_struct__38201

#define kcg_comp_P131_trackside_int_T_TM kcg_comp_struct__38229

#define kcg_copy_P131_trackside_int_T_TM kcg_copy_struct__38229

#define kcg_comp_P132_trackside_int_T_TM kcg_comp_struct__38242

#define kcg_copy_P132_trackside_int_T_TM kcg_copy_struct__38242

#define kcg_comp_P066_trackside_int_T_TM kcg_comp_struct__38250

#define kcg_copy_P066_trackside_int_T_TM kcg_copy_struct__38250

#define kcg_comp_P071_trackside_int_T_TM kcg_comp_struct__38258

#define kcg_copy_P071_trackside_int_T_TM kcg_copy_struct__38258

#define kcg_comp_X_TEXT_trackside_T_TM kcg_comp_array_int_255

#define kcg_copy_X_TEXT_trackside_T_TM kcg_copy_array_int_255

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__38274

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__38274

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__38269

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__38269

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__38274

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__38274

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__38277

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__38277

#define kcg_comp_P064_trackside_int_T_TM kcg_comp_struct__38111

#define kcg_copy_P064_trackside_int_T_TM kcg_copy_struct__38111

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__38290

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__38290

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__38303

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__38303

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__38540

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__38540

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__38311

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__38311

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__38316

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__38316

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__38319

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__38319

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__38330

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__38330

#define kcg_comp_P040_trackside_int_T_TM kcg_comp_struct__38340

#define kcg_copy_P040_trackside_int_T_TM kcg_copy_struct__38340

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__38549

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__38549

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__38350

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__38350

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__38356

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__38356

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__38359

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__38359

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__38373

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__38373

#define kcg_comp_P016_trackside_int_T_TM kcg_comp_struct__38385

#define kcg_copy_P016_trackside_int_T_TM kcg_copy_struct__38385

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__38558

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__38558

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__38394

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__38394

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__38400

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__38400

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__38403

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__38403

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__38423

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__38423

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__38426

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__38426

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__38423

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__38423

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__38416

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__38416

#define kcg_comp_P012_trackide_sectionlist_T_TM kcg_comp_array__38423

#define kcg_copy_P012_trackide_sectionlist_T_TM kcg_copy_array__38423

#define kcg_comp_P012_trackside_int_T_TM kcg_comp_struct__38453

#define kcg_copy_P012_trackside_int_T_TM kcg_copy_struct__38453

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__38573

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__38573

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__38481

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__38481

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__38491

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__38491

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__38494

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__38494

#define kcg_comp_P002_trackside_int_T_TM kcg_comp_struct__38511

#define kcg_copy_P002_trackside_int_T_TM kcg_copy_struct__38511

#define kcg_comp_P001_trackside_int_T_TM kcg_comp_struct__38519

#define kcg_copy_P001_trackside_int_T_TM kcg_copy_struct__38519

#define kcg_comp_P039V1_trackside_int_T_TM_baseline2 kcg_comp_struct__37963

#define kcg_copy_P039V1_trackside_int_T_TM_baseline2 kcg_copy_struct__37963

#define kcg_comp_P072V1_trackside_int_T_TM_baseline2 kcg_comp_struct__37976

#define kcg_copy_P072V1_trackside_int_T_TM_baseline2 kcg_copy_struct__37976

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__38003

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__38003

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__38083

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__38083

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__38006

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__38006

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__38014

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__38014

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__37998

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__37998

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__38003

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__38003

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-16T17:06:43
*************************************************************$ */


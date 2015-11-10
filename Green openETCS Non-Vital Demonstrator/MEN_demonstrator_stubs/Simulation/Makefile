#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\.

SHELL=cmd.exe

C_FLAGS = -pedantic

all: Test_TrainTrack.exe Test_TrainTrack.dll 

win32/Test_TrainTrack.o: Test_TrainTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Test_TrainTrack.c" -o "win32\Test_TrainTrack.o"

win32/Track.o: Track.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Track.c" -o "win32\Track.o"

win32/SendBalises.o: SendBalises.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SendBalises.c" -o "win32\SendBalises.o"

win32/TrackClose_InfraLib.o: TrackClose_InfraLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrackClose_InfraLib.c" -o "win32\TrackClose_InfraLib.o"

win32/TrackInit_InfraLib.o: TrackInit_InfraLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrackInit_InfraLib.c" -o "win32\TrackInit_InfraLib.o"

win32/TrackDiscontinuity_InfraLib.o: TrackDiscontinuity_InfraLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrackDiscontinuity_InfraLib.c" -o "win32\TrackDiscontinuity_InfraLib.o"

win32/TrackDiscontinuity_CalcTr_InfraLib.o: TrackDiscontinuity_CalcTr_InfraLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrackDiscontinuity_CalcTr_InfraLib.c" -o "win32\TrackDiscontinuity_CalcTr_InfraLib.o"

win32/Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o: Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c" -o "win32\Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o"

win32/Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o: Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c" -o "win32\Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o"

win32/Balise_352_0_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o: Balise_352_0_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Balise_352_0_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c" -o "win32\Balise_352_0_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o"

win32/Balise_Group_Close_InfraLib.o: Balise_Group_Close_InfraLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Balise_Group_Close_InfraLib.c" -o "win32\Balise_Group_Close_InfraLib.o"

win32/Balise_Group_Init_InfraLib.o: Balise_Group_Init_InfraLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Balise_Group_Init_InfraLib.c" -o "win32\Balise_Group_Init_InfraLib.o"

win32/Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o: Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c" -o "win32\Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o"

win32/Packets_BG352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o: Packets_BG352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Packets_BG352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.c" -o "win32\Packets_BG352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o"

win32/Send_P045_MessageLibBaseline2.o: Send_P045_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P045_MessageLibBaseline2.c" -o "win32\Send_P045_MessageLibBaseline2.o"

win32/Write_P045_TM_trackside.o: Write_P045_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P045_TM_trackside.c" -o "win32\Write_P045_TM_trackside.o"

win32/C_P045_tracksim_compr_TM_conversions.o: C_P045_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P045_tracksim_compr_TM_conversions.c" -o "win32\C_P045_tracksim_compr_TM_conversions.o"

win32/Send_P255_MessageLibBaseline2.o: Send_P255_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P255_MessageLibBaseline2.c" -o "win32\Send_P255_MessageLibBaseline2.o"

win32/Write_P255_TM_trackside.o: Write_P255_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P255_TM_trackside.c" -o "win32\Write_P255_TM_trackside.o"

win32/C_P255_tracksim_compr_TM_conversions.o: C_P255_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P255_tracksim_compr_TM_conversions.c" -o "win32\C_P255_tracksim_compr_TM_conversions.o"

win32/Balise_Localisation_InfraLib.o: Balise_Localisation_InfraLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Balise_Localisation_InfraLib.c" -o "win32\Balise_Localisation_InfraLib.o"

win32/TOOLS_convert_engineering_TM_conversions.o: TOOLS_convert_engineering_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TOOLS_convert_engineering_TM_conversions.c" -o "win32\TOOLS_convert_engineering_TM_conversions.o"

win32/Balise_Interdistance_InfraLib.o: Balise_Interdistance_InfraLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Balise_Interdistance_InfraLib.c" -o "win32\Balise_Interdistance_InfraLib.o"

win32/SendRBC.o: SendRBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SendRBC.c" -o "win32\SendRBC.o"

win32/RBC_close_RadioLib.o: RBC_close_RadioLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RBC_close_RadioLib.c" -o "win32\RBC_close_RadioLib.o"

win32/RBC_init_RadioLib.o: RBC_init_RadioLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RBC_init_RadioLib.c" -o "win32\RBC_init_RadioLib.o"

win32/Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Send_M003_JRU_MessageLibBaseline2.o: Send_M003_JRU_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_M003_JRU_MessageLibBaseline2.c" -o "win32\Send_M003_JRU_MessageLibBaseline2.o"

win32/C_M003_int__to_header_TM_RBC_conversions.o: C_M003_int__to_header_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_M003_int__to_header_TM_RBC_conversions.c" -o "win32\C_M003_int__to_header_TM_RBC_conversions.o"

win32/SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Send_P015_MessageLibBaseline2.o: Send_P015_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P015_MessageLibBaseline2.c" -o "win32\Send_P015_MessageLibBaseline2.o"

win32/Write_P015_TM_trackside.o: Write_P015_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P015_TM_trackside.c" -o "win32\Write_P015_TM_trackside.o"

win32/C_P015_tracksim_compr_TM_conversions.o: C_P015_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_tracksim_compr_TM_conversions.c" -o "win32\C_P015_tracksim_compr_TM_conversions.o"

win32/C_P015_flatten_sections_TM_lib_internal.o: C_P015_flatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_flatten_sections_TM_lib_internal.c" -o "win32\C_P015_flatten_sections_TM_lib_internal.o"

win32/C_P015_fs_struct_to_array_TM_lib_internal.o: C_P015_fs_struct_to_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_fs_struct_to_array_TM_lib_internal.c" -o "win32\C_P015_fs_struct_to_array_TM_lib_internal.o"

win32/C_P015_fs_flatten_array_TM_lib_internal.o: C_P015_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P015_fs_flatten_array_TM_lib_internal.o"

win32/Send_P065_MessageLibBaseline2.o: Send_P065_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P065_MessageLibBaseline2.c" -o "win32\Send_P065_MessageLibBaseline2.o"

win32/Write_P065_TM_trackside.o: Write_P065_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P065_TM_trackside.c" -o "win32\Write_P065_TM_trackside.o"

win32/C_P065_tracksim_compr_TM_conversions.o: C_P065_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P065_tracksim_compr_TM_conversions.c" -o "win32\C_P065_tracksim_compr_TM_conversions.o"

win32/Send_P041_MessageLibBaseline2.o: Send_P041_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P041_MessageLibBaseline2.c" -o "win32\Send_P041_MessageLibBaseline2.o"

win32/Write_P041_TM_trackside.o: Write_P041_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P041_TM_trackside.c" -o "win32\Write_P041_TM_trackside.o"

win32/C_P041_tracksim_compr_TM_conversions.o: C_P041_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_tracksim_compr_TM_conversions.c" -o "win32\C_P041_tracksim_compr_TM_conversions.o"

win32/C_P041_flatten_sections_TM_lib_internal.o: C_P041_flatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_flatten_sections_TM_lib_internal.c" -o "win32\C_P041_flatten_sections_TM_lib_internal.o"

win32/C_P041_fs_struct_to_array_TM_lib_internal.o: C_P041_fs_struct_to_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_fs_struct_to_array_TM_lib_internal.c" -o "win32\C_P041_fs_struct_to_array_TM_lib_internal.o"

win32/C_P041_fs_flatten_array_TM_lib_internal.o: C_P041_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P041_fs_flatten_array_TM_lib_internal.o"

win32/Send_P005_MessageLibBaseline2.o: Send_P005_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P005_MessageLibBaseline2.c" -o "win32\Send_P005_MessageLibBaseline2.o"

win32/Write_P005_TM_trackside.o: Write_P005_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P005_TM_trackside.c" -o "win32\Write_P005_TM_trackside.o"

win32/C_P005_tracksim_compr_TM_conversions.o: C_P005_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_tracksim_compr_TM_conversions.c" -o "win32\C_P005_tracksim_compr_TM_conversions.o"

win32/C_P005_flatten_sections_TM_lib_internal.o: C_P005_flatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_flatten_sections_TM_lib_internal.c" -o "win32\C_P005_flatten_sections_TM_lib_internal.o"

win32/C_P005_fs_struct_to_array_TM_lib_internal.o: C_P005_fs_struct_to_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_fs_struct_to_array_TM_lib_internal.c" -o "win32\C_P005_fs_struct_to_array_TM_lib_internal.o"

win32/C_P005_fs_flatten_array_TM_lib_internal.o: C_P005_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P005_fs_flatten_array_TM_lib_internal.o"

win32/Send_P003V1_MessageLibBaseline2.o: Send_P003V1_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P003V1_MessageLibBaseline2.c" -o "win32\Send_P003V1_MessageLibBaseline2.o"

win32/Write_P003V1_TM_trackside_baseline2.o: Write_P003V1_TM_trackside_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P003V1_TM_trackside_baseline2.c" -o "win32\Write_P003V1_TM_trackside_baseline2.o"

win32/C_P003V1_tracksim_compr_TM_conversions_baseline2.o: C_P003V1_tracksim_compr_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_tracksim_compr_TM_conversions_baseline2.c" -o "win32\C_P003V1_tracksim_compr_TM_conversions_baseline2.o"

win32/Send_P027V1_MessageLibBaseline2.o: Send_P027V1_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P027V1_MessageLibBaseline2.c" -o "win32\Send_P027V1_MessageLibBaseline2.o"

win32/Write_P027V1_TM_trackside_baseline2.o: Write_P027V1_TM_trackside_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P027V1_TM_trackside_baseline2.c" -o "win32\Write_P027V1_TM_trackside_baseline2.o"

win32/C_P027V1_tracksim_merge_s_TM_conversions_baseline2.o: C_P027V1_tracksim_merge_s_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_tracksim_merge_s_TM_conversions_baseline2.c" -o "win32\C_P027V1_tracksim_merge_s_TM_conversions_baseline2.o"

win32/C_P027V1_tracksim_compr_o_TM_conversions_baseline2.o: C_P027V1_tracksim_compr_o_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_tracksim_compr_o_TM_conversions_baseline2.c" -o "win32\C_P027V1_tracksim_compr_o_TM_conversions_baseline2.o"

win32/C_P027_flatten_sections_qdiff_TM_lib_internal.o: C_P027_flatten_sections_qdiff_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027_flatten_sections_qdiff_TM_lib_internal.c" -o "win32\C_P027_flatten_sections_qdiff_TM_lib_internal.o"

win32/C_P027V1_fs_struct_to_arr_TM_lib_internal.o: C_P027V1_fs_struct_to_arr_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_fs_struct_to_arr_TM_lib_internal.c" -o "win32\C_P027V1_fs_struct_to_arr_TM_lib_internal.o"

win32/C_P027V1_fs_flatten_array_TM_lib_internal.o: C_P027V1_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P027V1_fs_flatten_array_TM_lib_internal.o"

win32/C_P027V1_tracksim_compr_body_TM_conversions_baseline2.o: C_P027V1_tracksim_compr_body_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_tracksim_compr_body_TM_conversions_baseline2.c" -o "win32\C_P027V1_tracksim_compr_body_TM_conversions_baseline2.o"

win32/SEND_WriteMessageHeader_TM_lib_internal.o: SEND_WriteMessageHeader_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_WriteMessageHeader_TM_lib_internal.c" -o "win32\SEND_WriteMessageHeader_TM_lib_internal.o"

win32/Send_P021_MessageLibBaseline2.o: Send_P021_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P021_MessageLibBaseline2.c" -o "win32\Send_P021_MessageLibBaseline2.o"

win32/Write_P021_TM_trackside.o: Write_P021_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P021_TM_trackside.c" -o "win32\Write_P021_TM_trackside.o"

win32/C_P021_tracksim_compr_TM_conversions.o: C_P021_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_tracksim_compr_TM_conversions.c" -o "win32\C_P021_tracksim_compr_TM_conversions.o"

win32/T_Build_Metadata_Packet_ID_TM_lib_internal.o: T_Build_Metadata_Packet_ID_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Build_Metadata_Packet_ID_TM_lib_internal.c" -o "win32\T_Build_Metadata_Packet_ID_TM_lib_internal.o"

win32/C_P021_flatten_sections_TM_lib_internal.o: C_P021_flatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_flatten_sections_TM_lib_internal.c" -o "win32\C_P021_flatten_sections_TM_lib_internal.o"

win32/C_P021_fs_struct_to_array_TM_lib_internal.o: C_P021_fs_struct_to_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_fs_struct_to_array_TM_lib_internal.c" -o "win32\C_P021_fs_struct_to_array_TM_lib_internal.o"

win32/C_P021_fs_flatten_array_TM_lib_internal.o: C_P021_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P021_fs_flatten_array_TM_lib_internal.o"

win32/T_DeterminePacketSizeInt_TM_lib_internal.o: T_DeterminePacketSizeInt_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_DeterminePacketSizeInt_TM_lib_internal.c" -o "win32\T_DeterminePacketSizeInt_TM_lib_internal.o"

win32/SEND_MessageData_TM_lib_internal.o: SEND_MessageData_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_MessageData_TM_lib_internal.c" -o "win32\SEND_MessageData_TM_lib_internal.o"

win32/SEND_WriteBaliseDataElement_TM_lib_internal.o: SEND_WriteBaliseDataElement_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_WriteBaliseDataElement_TM_lib_internal.c" -o "win32\SEND_WriteBaliseDataElement_TM_lib_internal.o"

win32/SEND_WriteBaliseMessageHeader_TM_lib_internal.o: SEND_WriteBaliseMessageHeader_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_WriteBaliseMessageHeader_TM_lib_internal.c" -o "win32\SEND_WriteBaliseMessageHeader_TM_lib_internal.o"

win32/SEND_FindSlot_TM_lib_internal.o: SEND_FindSlot_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_FindSlot_TM_lib_internal.c" -o "win32\SEND_FindSlot_TM_lib_internal.o"

win32/Read_M157_TM_radio_messages_trackside.o: Read_M157_TM_radio_messages_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_M157_TM_radio_messages_trackside.c" -o "win32\Read_M157_TM_radio_messages_trackside.o"

win32/C_compr_P044_TM_TrainToTrack.o: C_compr_P044_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_compr_P044_TM_TrainToTrack.c" -o "win32\C_compr_P044_TM_TrainToTrack.o"

win32/C_compr_P005_TM_TrainToTrack.o: C_compr_P005_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_compr_P005_TM_TrainToTrack.c" -o "win32\C_compr_P005_TM_TrainToTrack.o"

win32/CAST_Int_to_NID_OPERATIONAL_TM_conversions.o: CAST_Int_to_NID_OPERATIONAL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_OPERATIONAL_TM_conversions.c" -o "win32\CAST_Int_to_NID_OPERATIONAL_TM_conversions.o"

win32/C_compr_P004_TM_TrainToTrack.o: C_compr_P004_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_compr_P004_TM_TrainToTrack.c" -o "win32\C_compr_P004_TM_TrainToTrack.o"

win32/CAST_Int_to_M_ERROR_TM_conversions.o: CAST_Int_to_M_ERROR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_ERROR_TM_conversions.c" -o "win32\CAST_Int_to_M_ERROR_TM_conversions.o"

win32/C_compr_P000_TM_TrainToTrack.o: C_compr_P000_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_compr_P000_TM_TrainToTrack.c" -o "win32\C_compr_P000_TM_TrainToTrack.o"

win32/C_compr_P001_TM_TrainToTrack.o: C_compr_P001_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_compr_P001_TM_TrainToTrack.c" -o "win32\C_compr_P001_TM_TrainToTrack.o"

win32/CAST_Int_to_NID_PRVLRBG_TM_conversions.o: CAST_Int_to_NID_PRVLRBG_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_PRVLRBG_TM_conversions.c" -o "win32\CAST_Int_to_NID_PRVLRBG_TM_conversions.o"

win32/CAST_Int_to_D_LRBG_TM_conversions.o: CAST_Int_to_D_LRBG_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_LRBG_TM_conversions.c" -o "win32\CAST_Int_to_D_LRBG_TM_conversions.o"

win32/Filter_Variable_TM_TrainToTrack.o: Filter_Variable_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Filter_Variable_TM_TrainToTrack.c" -o "win32\Filter_Variable_TM_TrainToTrack.o"

win32/Decode_NID_PACKET_TM_TrainToTrack.o: Decode_NID_PACKET_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Decode_NID_PACKET_TM_TrainToTrack.c" -o "win32\Decode_NID_PACKET_TM_TrainToTrack.o"

win32/CAST_Int_to_M_LEVEL_TM_conversions.o: CAST_Int_to_M_LEVEL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_LEVEL_TM_conversions.c" -o "win32\CAST_Int_to_M_LEVEL_TM_conversions.o"

win32/CAST_Int_to_M_MODE_TM_conversions.o: CAST_Int_to_M_MODE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_MODE_TM_conversions.c" -o "win32\CAST_Int_to_M_MODE_TM_conversions.o"

win32/CAST_Int_to_Q_DIRTRAIN_TM_conversions.o: CAST_Int_to_Q_DIRTRAIN_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_DIRTRAIN_TM_conversions.c" -o "win32\CAST_Int_to_Q_DIRTRAIN_TM_conversions.o"

win32/CAST_Int_to_V_TRAIN_TM_conversions.o: CAST_Int_to_V_TRAIN_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_TRAIN_TM_conversions.c" -o "win32\CAST_Int_to_V_TRAIN_TM_conversions.o"

win32/CAST_Int_to_L_TRAININT_TM_conversions.o: CAST_Int_to_L_TRAININT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_TRAININT_TM_conversions.c" -o "win32\CAST_Int_to_L_TRAININT_TM_conversions.o"

win32/CAST_Int_to_Q_LENGTH_TM_conversions.o: CAST_Int_to_Q_LENGTH_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_LENGTH_TM_conversions.c" -o "win32\CAST_Int_to_Q_LENGTH_TM_conversions.o"

win32/CAST_Int_to_L_DOUBTUNDER_TM_conversions.o: CAST_Int_to_L_DOUBTUNDER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_DOUBTUNDER_TM_conversions.c" -o "win32\CAST_Int_to_L_DOUBTUNDER_TM_conversions.o"

win32/CAST_Int_to_L_DOUBTOVER_TM_conversions.o: CAST_Int_to_L_DOUBTOVER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_DOUBTOVER_TM_conversions.c" -o "win32\CAST_Int_to_L_DOUBTOVER_TM_conversions.o"

win32/CAST_Int_to_Q_DRLRBG_TM_conversions.o: CAST_Int_to_Q_DRLRBG_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_DRLRBG_TM_conversions.c" -o "win32\CAST_Int_to_Q_DRLRBG_TM_conversions.o"

win32/CAST_Int_to_Q_DIRLRBG_TM_conversions.o: CAST_Int_to_Q_DIRLRBG_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_DIRLRBG_TM_conversions.c" -o "win32\CAST_Int_to_Q_DIRLRBG_TM_conversions.o"

win32/C_header_to_M157_TM_RBC_conversions.o: C_header_to_M157_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M157_TM_RBC_conversions.c" -o "win32\C_header_to_M157_TM_RBC_conversions.o"

win32/CAST_Int_to_NID_ENGINE_TM_conversions.o: CAST_Int_to_NID_ENGINE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_ENGINE_TM_conversions.c" -o "win32\CAST_Int_to_NID_ENGINE_TM_conversions.o"

win32/CAST_Int_to_Q_STATUS_TM_conversions.o: CAST_Int_to_Q_STATUS_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_STATUS_TM_conversions.c" -o "win32\CAST_Int_to_Q_STATUS_TM_conversions.o"

win32/Train.o: Train.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Train.c" -o "win32\Train.o"

win32/compressed_to_Radio_Track_TM_RBC_conversions_legacy.o: compressed_to_Radio_Track_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "compressed_to_Radio_Track_TM_RBC_conversions_legacy.c" -o "win32\compressed_to_Radio_Track_TM_RBC_conversions_legacy.o"

win32/M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M028_TM_RBC_conversions.o: C_header_to_M028_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M028_TM_RBC_conversions.c" -o "win32\C_header_to_M028_TM_RBC_conversions.o"

win32/M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M032_TM_RBC_conversions.o: C_header_to_M032_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M032_TM_RBC_conversions.c" -o "win32\C_header_to_M032_TM_RBC_conversions.o"

win32/CAST_Int_to_M_VERSION_TM_conversions.o: CAST_Int_to_M_VERSION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_VERSION_TM_conversions.c" -o "win32\CAST_Int_to_M_VERSION_TM_conversions.o"

win32/C_header_to_M033_TM_RBC_conversions.o: C_header_to_M033_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M033_TM_RBC_conversions.c" -o "win32\C_header_to_M033_TM_RBC_conversions.o"

win32/M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M034_TM_RBC_conversions.o: C_header_to_M034_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M034_TM_RBC_conversions.c" -o "win32\C_header_to_M034_TM_RBC_conversions.o"

win32/CAST_Int_to_D_TAFDISPLAY_TM_conversions.o: CAST_Int_to_D_TAFDISPLAY_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_TAFDISPLAY_TM_conversions.c" -o "win32\CAST_Int_to_D_TAFDISPLAY_TM_conversions.o"

win32/CAST_Int_to_L_TAFDISPLAY_TM_conversions.o: CAST_Int_to_L_TAFDISPLAY_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_TAFDISPLAY_TM_conversions.c" -o "win32\CAST_Int_to_L_TAFDISPLAY_TM_conversions.o"

win32/M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M038_TM_RBC_conversions.o: C_header_to_M038_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M038_TM_RBC_conversions.c" -o "win32\C_header_to_M038_TM_RBC_conversions.o"

win32/M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M039_TM_RBC_conversions.o: C_header_to_M039_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M039_TM_RBC_conversions.c" -o "win32\C_header_to_M039_TM_RBC_conversions.o"

win32/M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M040_TM_RBC_conversions.o: C_header_to_M040_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M040_TM_RBC_conversions.c" -o "win32\C_header_to_M040_TM_RBC_conversions.o"

win32/M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M041_TM_RBC_conversions.o: C_header_to_M041_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M041_TM_RBC_conversions.c" -o "win32\C_header_to_M041_TM_RBC_conversions.o"

win32/C_header_to_M043_TM_RBC_conversions.o: C_header_to_M043_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M043_TM_RBC_conversions.c" -o "win32\C_header_to_M043_TM_RBC_conversions.o"

win32/M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M045_TM_RBC_conversions.o: C_header_to_M045_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M045_TM_RBC_conversions.c" -o "win32\C_header_to_M045_TM_RBC_conversions.o"

win32/CAST_Int_to_Q_ORIENTATION_TM_conversions.o: CAST_Int_to_Q_ORIENTATION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_ORIENTATION_TM_conversions.c" -o "win32\CAST_Int_to_Q_ORIENTATION_TM_conversions.o"

win32/M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M002_TM_RBC_conversions.o: C_header_to_M002_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M002_TM_RBC_conversions.c" -o "win32\C_header_to_M002_TM_RBC_conversions.o"

win32/CAST_Int_to_D_SR_TM_conversions.o: CAST_Int_to_D_SR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_SR_TM_conversions.c" -o "win32\CAST_Int_to_D_SR_TM_conversions.o"

win32/C_header_to_M003_TM_RBC_conversions.o: C_header_to_M003_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M003_TM_RBC_conversions.c" -o "win32\C_header_to_M003_TM_RBC_conversions.o"

win32/M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M006_TM_RBC_conversions.o: C_header_to_M006_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M006_TM_RBC_conversions.c" -o "win32\C_header_to_M006_TM_RBC_conversions.o"

win32/M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M008_TM_RBC_conversions.o: C_header_to_M008_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M008_TM_RBC_conversions.c" -o "win32\C_header_to_M008_TM_RBC_conversions.o"

win32/M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M009_TM_RBC_conversions.o: C_header_to_M009_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M009_TM_RBC_conversions.c" -o "win32\C_header_to_M009_TM_RBC_conversions.o"

win32/M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M015_TM_RBC_conversions.o: C_header_to_M015_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M015_TM_RBC_conversions.c" -o "win32\C_header_to_M015_TM_RBC_conversions.o"

win32/CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.o: CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.c" -o "win32\CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.o"

win32/CAST_Int_to_D_REF_TM_conversions.o: CAST_Int_to_D_REF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_REF_TM_conversions.c" -o "win32\CAST_Int_to_D_REF_TM_conversions.o"

win32/M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M016_TM_RBC_conversions.o: C_header_to_M016_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M016_TM_RBC_conversions.c" -o "win32\C_header_to_M016_TM_RBC_conversions.o"

win32/C_header_to_M018_TM_RBC_conversions.o: C_header_to_M018_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M018_TM_RBC_conversions.c" -o "win32\C_header_to_M018_TM_RBC_conversions.o"

win32/CAST_Int_to_NID_EM_TM_conversions.o: CAST_Int_to_NID_EM_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_EM_TM_conversions.c" -o "win32\CAST_Int_to_NID_EM_TM_conversions.o"

win32/M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M024_TM_RBC_conversions.o: C_header_to_M024_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M024_TM_RBC_conversions.c" -o "win32\C_header_to_M024_TM_RBC_conversions.o"

win32/M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M027_TM_RBC_conversions.o: C_header_to_M027_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M027_TM_RBC_conversions.c" -o "win32\C_header_to_M027_TM_RBC_conversions.o"

win32/CAST_Int_to_L_MESSAGE_TM_conversions.o: CAST_Int_to_L_MESSAGE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_MESSAGE_TM_conversions.c" -o "win32\CAST_Int_to_L_MESSAGE_TM_conversions.o"

win32/CAST_Int_to_NID_MESSAGE_TM_conversions.o: CAST_Int_to_NID_MESSAGE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_MESSAGE_TM_conversions.c" -o "win32\CAST_Int_to_NID_MESSAGE_TM_conversions.o"

win32/CAST_Int_to_T_TRAIN_TM_conversions.o: CAST_Int_to_T_TRAIN_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_TRAIN_TM_conversions.c" -o "win32\CAST_Int_to_T_TRAIN_TM_conversions.o"

win32/CAST_Int_to_NID_LRBG_TM_conversions.o: CAST_Int_to_NID_LRBG_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_LRBG_TM_conversions.c" -o "win32\CAST_Int_to_NID_LRBG_TM_conversions.o"

win32/CAST_Int_to_M_ACK_TM_conversions.o: CAST_Int_to_M_ACK_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_ACK_TM_conversions.c" -o "win32\CAST_Int_to_M_ACK_TM_conversions.o"

win32/M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/Send_M157_TM_radio_messages.o: Send_M157_TM_radio_messages.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_M157_TM_radio_messages.c" -o "win32\Send_M157_TM_radio_messages.o"

win32/CheckSpace_TM_TrainTrack_Bus.o: CheckSpace_TM_TrainTrack_Bus.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CheckSpace_TM_TrainTrack_Bus.c" -o "win32\CheckSpace_TM_TrainTrack_Bus.o"

win32/CheckSpaceLoop_TM_TrainTrack_Bus.o: CheckSpaceLoop_TM_TrainTrack_Bus.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CheckSpaceLoop_TM_TrainTrack_Bus.c" -o "win32\CheckSpaceLoop_TM_TrainTrack_Bus.o"

win32/BufferMsg_TM_lib_internal.o: BufferMsg_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "BufferMsg_TM_lib_internal.c" -o "win32\BufferMsg_TM_lib_internal.o"

win32/BufferMsg_read_only_TM_lib_internal.o: BufferMsg_read_only_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "BufferMsg_read_only_TM_lib_internal.c" -o "win32\BufferMsg_read_only_TM_lib_internal.o"

win32/BufferMsg_read_write_TM_lib_internal.o: BufferMsg_read_write_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "BufferMsg_read_write_TM_lib_internal.c" -o "win32\BufferMsg_read_write_TM_lib_internal.o"

win32/BufferMsg_write_only_TM_lib_internal.o: BufferMsg_write_only_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "BufferMsg_write_only_TM_lib_internal.c" -o "win32\BufferMsg_write_only_TM_lib_internal.o"

win32/MergeMessageToBus_TM_TrainTrack_Bus.o: MergeMessageToBus_TM_TrainTrack_Bus.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MergeMessageToBus_TM_TrainTrack_Bus.c" -o "win32\MergeMessageToBus_TM_TrainTrack_Bus.o"

win32/Merge_PacketsToMessage_TM_TrainToTrack.o: Merge_PacketsToMessage_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Merge_PacketsToMessage_TM_TrainToTrack.c" -o "win32\Merge_PacketsToMessage_TM_TrainToTrack.o"

win32/C_P001_train_compr_TM_TrainToTrack.o: C_P001_train_compr_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P001_train_compr_TM_TrainToTrack.c" -o "win32\C_P001_train_compr_TM_TrainToTrack.o"

win32/CAST_NID_PRVLRBG_to_int_TM_conversions.o: CAST_NID_PRVLRBG_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_PRVLRBG_to_int_TM_conversions.c" -o "win32\CAST_NID_PRVLRBG_to_int_TM_conversions.o"

win32/C_P000_train_compr_TM_TrainToTrack.o: C_P000_train_compr_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P000_train_compr_TM_TrainToTrack.c" -o "win32\C_P000_train_compr_TM_TrainToTrack.o"

win32/CAST_D_LRBG_to_int_TM_conversions.o: CAST_D_LRBG_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_D_LRBG_to_int_TM_conversions.c" -o "win32\CAST_D_LRBG_to_int_TM_conversions.o"

win32/CAST_NID_NTC_to_int_TM_conversions.o: CAST_NID_NTC_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_NTC_to_int_TM_conversions.c" -o "win32\CAST_NID_NTC_to_int_TM_conversions.o"

win32/CAST_M_LEVEL_to_int_TM_conversions.o: CAST_M_LEVEL_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_M_LEVEL_to_int_TM_conversions.c" -o "win32\CAST_M_LEVEL_to_int_TM_conversions.o"

win32/CAST_M_MODE_to_int_TM_conversions.o: CAST_M_MODE_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_M_MODE_to_int_TM_conversions.c" -o "win32\CAST_M_MODE_to_int_TM_conversions.o"

win32/CAST_Q_DIRTRAIN_to_int_TM_conversions.o: CAST_Q_DIRTRAIN_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Q_DIRTRAIN_to_int_TM_conversions.c" -o "win32\CAST_Q_DIRTRAIN_to_int_TM_conversions.o"

win32/CAST_V_TRAIN_to_int_TM_conversions.o: CAST_V_TRAIN_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_V_TRAIN_to_int_TM_conversions.c" -o "win32\CAST_V_TRAIN_to_int_TM_conversions.o"

win32/CAST_L_TRAININT_to_int_TM_conversions.o: CAST_L_TRAININT_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_L_TRAININT_to_int_TM_conversions.c" -o "win32\CAST_L_TRAININT_to_int_TM_conversions.o"

win32/CAST_Q_LENGTH_to_int_TM_conversions.o: CAST_Q_LENGTH_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Q_LENGTH_to_int_TM_conversions.c" -o "win32\CAST_Q_LENGTH_to_int_TM_conversions.o"

win32/CAST_L_DOUBTUNDER_to_int_TM_conversions.o: CAST_L_DOUBTUNDER_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_L_DOUBTUNDER_to_int_TM_conversions.c" -o "win32\CAST_L_DOUBTUNDER_to_int_TM_conversions.o"

win32/CAST_L_DOUBTOVER_to_int_TM_conversions.o: CAST_L_DOUBTOVER_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_L_DOUBTOVER_to_int_TM_conversions.c" -o "win32\CAST_L_DOUBTOVER_to_int_TM_conversions.o"

win32/CAST_Q_DRLRBG_to_int_TM_conversions.o: CAST_Q_DRLRBG_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Q_DRLRBG_to_int_TM_conversions.c" -o "win32\CAST_Q_DRLRBG_to_int_TM_conversions.o"

win32/CAST_Q_DIRLRBG_to_int_TM_conversions.o: CAST_Q_DIRLRBG_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Q_DIRLRBG_to_int_TM_conversions.c" -o "win32\CAST_Q_DIRLRBG_to_int_TM_conversions.o"

win32/CAST_NID_LRBG_to_int_TM_conversions.o: CAST_NID_LRBG_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_LRBG_to_int_TM_conversions.c" -o "win32\CAST_NID_LRBG_to_int_TM_conversions.o"

win32/CAST_Q_SCALE_to_int_TM_conversions.o: CAST_Q_SCALE_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Q_SCALE_to_int_TM_conversions.c" -o "win32\CAST_Q_SCALE_to_int_TM_conversions.o"

win32/C_M157_to_header_TM_RBC_conversions.o: C_M157_to_header_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_M157_to_header_TM_RBC_conversions.c" -o "win32\C_M157_to_header_TM_RBC_conversions.o"

win32/CAST_T_TRAIN_to_int_TM_conversions.o: CAST_T_TRAIN_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_T_TRAIN_to_int_TM_conversions.c" -o "win32\CAST_T_TRAIN_to_int_TM_conversions.o"

win32/CAST_NID_ENGINE_to_int_TM_conversions.o: CAST_NID_ENGINE_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_ENGINE_to_int_TM_conversions.c" -o "win32\CAST_NID_ENGINE_to_int_TM_conversions.o"

win32/CAST_L_MESSAGE_to_int_TM_conversions.o: CAST_L_MESSAGE_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_L_MESSAGE_to_int_TM_conversions.c" -o "win32\CAST_L_MESSAGE_to_int_TM_conversions.o"

win32/CAST_Q_STATUS_to_int_TM_conversions.o: CAST_Q_STATUS_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Q_STATUS_to_int_TM_conversions.c" -o "win32\CAST_Q_STATUS_to_int_TM_conversions.o"

win32/C_P044_train_compr_TM_TrainToTrack.o: C_P044_train_compr_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P044_train_compr_TM_TrainToTrack.c" -o "win32\C_P044_train_compr_TM_TrainToTrack.o"

win32/C_P005_train_compr_TM_TrainToTrack.o: C_P005_train_compr_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_train_compr_TM_TrainToTrack.c" -o "win32\C_P005_train_compr_TM_TrainToTrack.o"

win32/CAST_NID_OPERATIONAL_to_int_TM_conversions.o: CAST_NID_OPERATIONAL_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_OPERATIONAL_to_int_TM_conversions.c" -o "win32\CAST_NID_OPERATIONAL_to_int_TM_conversions.o"

win32/C_P004_train_compr_TM_TrainToTrack.o: C_P004_train_compr_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P004_train_compr_TM_TrainToTrack.c" -o "win32\C_P004_train_compr_TM_TrainToTrack.o"

win32/Encode_NID_PACKET_TM_TrainToTrack.o: Encode_NID_PACKET_TM_TrainToTrack.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Encode_NID_PACKET_TM_TrainToTrack.c" -o "win32\Encode_NID_PACKET_TM_TrainToTrack.o"

win32/CAST_M_ERROR_to_int_TM_conversions.o: CAST_M_ERROR_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_M_ERROR_to_int_TM_conversions.c" -o "win32\CAST_M_ERROR_to_int_TM_conversions.o"

win32/CAST_L_PACKET_to_int_TM_conversions.o: CAST_L_PACKET_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_L_PACKET_to_int_TM_conversions.c" -o "win32\CAST_L_PACKET_to_int_TM_conversions.o"

win32/CAST_NID_PACKET_to_int_TM_conversions.o: CAST_NID_PACKET_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_PACKET_to_int_TM_conversions.c" -o "win32\CAST_NID_PACKET_to_int_TM_conversions.o"

win32/Read_P003V1_TM_baseline2.o: Read_P003V1_TM_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P003V1_TM_baseline2.c" -o "win32\Read_P003V1_TM_baseline2.o"

win32/C_P003V1_compr_onboard_TM_conversions_baseline2.o: C_P003V1_compr_onboard_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_compr_onboard_TM_conversions_baseline2.c" -o "win32\C_P003V1_compr_onboard_TM_conversions_baseline2.o"

win32/CAST_Int_to_D_NVSTFF_TM_conversions.o: CAST_Int_to_D_NVSTFF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_NVSTFF_TM_conversions.c" -o "win32\CAST_Int_to_D_NVSTFF_TM_conversions.o"

win32/CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.o: CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.c" -o "win32\CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.o"

win32/CAST_Int_to_M_NVDERUN_TM_conversions.o: CAST_Int_to_M_NVDERUN_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_NVDERUN_TM_conversions.c" -o "win32\CAST_Int_to_M_NVDERUN_TM_conversions.o"

win32/CAST_Int_to_T_NVCONTACT_TM_conversions.o: CAST_Int_to_T_NVCONTACT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_NVCONTACT_TM_conversions.c" -o "win32\CAST_Int_to_T_NVCONTACT_TM_conversions.o"

win32/CAST_Int_to_M_NVCONTACT_TM_conversions.o: CAST_Int_to_M_NVCONTACT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_NVCONTACT_TM_conversions.c" -o "win32\CAST_Int_to_M_NVCONTACT_TM_conversions.o"

win32/CAST_Int_to_D_NVPOTRP_TM_conversions.o: CAST_Int_to_D_NVPOTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_NVPOTRP_TM_conversions.c" -o "win32\CAST_Int_to_D_NVPOTRP_TM_conversions.o"

win32/CAST_Int_to_Q_NVEMRRLS_TM_conversions.o: CAST_Int_to_Q_NVEMRRLS_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_NVEMRRLS_TM_conversions.c" -o "win32\CAST_Int_to_Q_NVEMRRLS_TM_conversions.o"

win32/CAST_Int_to_T_NVOVTRP_TM_conversions.o: CAST_Int_to_T_NVOVTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_NVOVTRP_TM_conversions.c" -o "win32\CAST_Int_to_T_NVOVTRP_TM_conversions.o"

win32/CAST_Int_to_D_NVOVTRP_TM_conversions.o: CAST_Int_to_D_NVOVTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_NVOVTRP_TM_conversions.c" -o "win32\CAST_Int_to_D_NVOVTRP_TM_conversions.o"

win32/CAST_Int_to_V_NVSUPOVTRP_TM_conversions.o: CAST_Int_to_V_NVSUPOVTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVSUPOVTRP_TM_conversions.c" -o "win32\CAST_Int_to_V_NVSUPOVTRP_TM_conversions.o"

win32/CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.o: CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.c" -o "win32\CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.o"

win32/CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.o: CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.c" -o "win32\CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.o"

win32/CAST_Int_to_D_NVROLL_TM_conversions.o: CAST_Int_to_D_NVROLL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_NVROLL_TM_conversions.c" -o "win32\CAST_Int_to_D_NVROLL_TM_conversions.o"

win32/CAST_Int_to_V_NVREL_TM_conversions.o: CAST_Int_to_V_NVREL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVREL_TM_conversions.c" -o "win32\CAST_Int_to_V_NVREL_TM_conversions.o"

win32/CAST_Int_to_V_NVUNFIT_TM_conversions.o: CAST_Int_to_V_NVUNFIT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVUNFIT_TM_conversions.c" -o "win32\CAST_Int_to_V_NVUNFIT_TM_conversions.o"

win32/CAST_Int_to_V_NVONSIGHT_TM_conversions.o: CAST_Int_to_V_NVONSIGHT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVONSIGHT_TM_conversions.c" -o "win32\CAST_Int_to_V_NVONSIGHT_TM_conversions.o"

win32/CAST_Int_to_V_NVSTFF_TM_conversions.o: CAST_Int_to_V_NVSTFF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVSTFF_TM_conversions.c" -o "win32\CAST_Int_to_V_NVSTFF_TM_conversions.o"

win32/CAST_Int_to_V_NVSHUNT_TM_conversions.o: CAST_Int_to_V_NVSHUNT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVSHUNT_TM_conversions.c" -o "win32\CAST_Int_to_V_NVSHUNT_TM_conversions.o"

win32/CAST_Int_to_D_VALIDNV_TM_conversions.o: CAST_Int_to_D_VALIDNV_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_VALIDNV_TM_conversions.c" -o "win32\CAST_Int_to_D_VALIDNV_TM_conversions.o"

win32/C_P003V1_unflatten_sections_TM_lib_internal.o: C_P003V1_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_unflatten_sections_TM_lib_internal.c" -o "win32\C_P003V1_unflatten_sections_TM_lib_internal.o"

win32/C_P003V1_us_array_TM_lib_internal.o: C_P003V1_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_us_array_TM_lib_internal.c" -o "win32\C_P003V1_us_array_TM_lib_internal.o"

win32/C_P003V1_extract_el_section_TM_lib_internal.o: C_P003V1_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_extract_el_section_TM_lib_internal.c" -o "win32\C_P003V1_extract_el_section_TM_lib_internal.o"

win32/Read_P027V1_TM_baseline2.o: Read_P027V1_TM_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P027V1_TM_baseline2.c" -o "win32\Read_P027V1_TM_baseline2.o"

win32/Read_P027V1_sections_TM_baseline2.o: Read_P027V1_sections_TM_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P027V1_sections_TM_baseline2.c" -o "win32\Read_P027V1_sections_TM_baseline2.o"

win32/C_P027V1_compr_onboard_se_TM_conversions_baseline2.o: C_P027V1_compr_onboard_se_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_compr_onboard_se_TM_conversions_baseline2.c" -o "win32\C_P027V1_compr_onboard_se_TM_conversions_baseline2.o"

win32/CAST_Int_to_V_STATIC_TM_conversions.o: CAST_Int_to_V_STATIC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_STATIC_TM_conversions.c" -o "win32\CAST_Int_to_V_STATIC_TM_conversions.o"

win32/CAST_Int_to_Q_FRONT_TM_conversions.o: CAST_Int_to_Q_FRONT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_FRONT_TM_conversions.c" -o "win32\CAST_Int_to_Q_FRONT_TM_conversions.o"

win32/CAST_Int_to_D_STATIC_TM_conversions.o: CAST_Int_to_D_STATIC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_STATIC_TM_conversions.c" -o "win32\CAST_Int_to_D_STATIC_TM_conversions.o"

win32/C_P027V1_us_array_qdiff_TM_lib_internal.o: C_P027V1_us_array_qdiff_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_us_array_qdiff_TM_lib_internal.c" -o "win32\C_P027V1_us_array_qdiff_TM_lib_internal.o"

win32/CAST_Int_to_V_DIFF_TM_conversions.o: CAST_Int_to_V_DIFF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_DIFF_TM_conversions.c" -o "win32\CAST_Int_to_V_DIFF_TM_conversions.o"

win32/CAST_Int_to_NC_DIFF_TM_conversions.o: CAST_Int_to_NC_DIFF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NC_DIFF_TM_conversions.c" -o "win32\CAST_Int_to_NC_DIFF_TM_conversions.o"

win32/C_P027V1_extract_el_section_TM_lib_internal.o: C_P027V1_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_extract_el_section_TM_lib_internal.c" -o "win32\C_P027V1_extract_el_section_TM_lib_internal.o"

win32/T_Decode_Metadata_L2_TM_lib_internal.o: T_Decode_Metadata_L2_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Decode_Metadata_L2_TM_lib_internal.c" -o "win32\T_Decode_Metadata_L2_TM_lib_internal.o"

win32/Read_P005_TM.o: Read_P005_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P005_TM.c" -o "win32\Read_P005_TM.o"

win32/C_P005_compr_onboard_TM_conversions.o: C_P005_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_compr_onboard_TM_conversions.c" -o "win32\C_P005_compr_onboard_TM_conversions.o"

win32/C_P005_unflatten_sections_TM_lib_internal.o: C_P005_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_unflatten_sections_TM_lib_internal.c" -o "win32\C_P005_unflatten_sections_TM_lib_internal.o"

win32/C_P005_us_array_TM_lib_internal.o: C_P005_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_us_array_TM_lib_internal.c" -o "win32\C_P005_us_array_TM_lib_internal.o"

win32/CAST_Int_to_NID_BG_TM_conversions.o: CAST_Int_to_NID_BG_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_BG_TM_conversions.c" -o "win32\CAST_Int_to_NID_BG_TM_conversions.o"

win32/CAST_Int_to_Q_LINKORIENTATION_TM_conversions.o: CAST_Int_to_Q_LINKORIENTATION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.c" -o "win32\CAST_Int_to_Q_LINKORIENTATION_TM_conversions.o"

win32/CAST_Int_to_Q_LINKREACTION_TM_conversions.o: CAST_Int_to_Q_LINKREACTION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_LINKREACTION_TM_conversions.c" -o "win32\CAST_Int_to_Q_LINKREACTION_TM_conversions.o"

win32/CAST_Int_to_Q_LOCACC_TM_conversions.o: CAST_Int_to_Q_LOCACC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_LOCACC_TM_conversions.c" -o "win32\CAST_Int_to_Q_LOCACC_TM_conversions.o"

win32/CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.o: CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.c" -o "win32\CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.o"

win32/CAST_Int_to_NID_C_TM_conversions.o: CAST_Int_to_NID_C_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_C_TM_conversions.c" -o "win32\CAST_Int_to_NID_C_TM_conversions.o"

win32/CAST_Int_to_D_LINK_TM_conversions.o: CAST_Int_to_D_LINK_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_LINK_TM_conversions.c" -o "win32\CAST_Int_to_D_LINK_TM_conversions.o"

win32/C_P005_extract_el_section_TM_lib_internal.o: C_P005_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_extract_el_section_TM_lib_internal.c" -o "win32\C_P005_extract_el_section_TM_lib_internal.o"

win32/Read_P041_TM.o: Read_P041_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P041_TM.c" -o "win32\Read_P041_TM.o"

win32/C_P041_compr_onboard_TM_conversions.o: C_P041_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_compr_onboard_TM_conversions.c" -o "win32\C_P041_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_D_LEVELTR_TM_conversions.o: CAST_Int_to_D_LEVELTR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_LEVELTR_TM_conversions.c" -o "win32\CAST_Int_to_D_LEVELTR_TM_conversions.o"

win32/C_P041_unflatten_sections_TM_lib_internal.o: C_P041_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_unflatten_sections_TM_lib_internal.c" -o "win32\C_P041_unflatten_sections_TM_lib_internal.o"

win32/C_P041_us_array_TM_lib_internal.o: C_P041_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_us_array_TM_lib_internal.c" -o "win32\C_P041_us_array_TM_lib_internal.o"

win32/CAST_Int_to_NID_NTC_TM_conversions.o: CAST_Int_to_NID_NTC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_NTC_TM_conversions.c" -o "win32\CAST_Int_to_NID_NTC_TM_conversions.o"

win32/CAST_Int_to_L_ACKLEVELTR_TM_conversions.o: CAST_Int_to_L_ACKLEVELTR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_ACKLEVELTR_TM_conversions.c" -o "win32\CAST_Int_to_L_ACKLEVELTR_TM_conversions.o"

win32/CAST_Int_to_M_LEVELTR_TM_conversions.o: CAST_Int_to_M_LEVELTR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_LEVELTR_TM_conversions.c" -o "win32\CAST_Int_to_M_LEVELTR_TM_conversions.o"

win32/C_P041_extract_el_section_TM_lib_internal.o: C_P041_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_extract_el_section_TM_lib_internal.c" -o "win32\C_P041_extract_el_section_TM_lib_internal.o"

win32/Read_P021_TM.o: Read_P021_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P021_TM.c" -o "win32\Read_P021_TM.o"

win32/C_P021_compr_onboard_TM_conversions.o: C_P021_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_compr_onboard_TM_conversions.c" -o "win32\C_P021_compr_onboard_TM_conversions.o"

win32/C_P021_unflatten_sections_TM_lib_internal.o: C_P021_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_unflatten_sections_TM_lib_internal.c" -o "win32\C_P021_unflatten_sections_TM_lib_internal.o"

win32/C_P021_us_array_TM_lib_internal.o: C_P021_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_us_array_TM_lib_internal.c" -o "win32\C_P021_us_array_TM_lib_internal.o"

win32/CAST_Int_to_Q_GDIR_TM_conversions.o: CAST_Int_to_Q_GDIR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_GDIR_TM_conversions.c" -o "win32\CAST_Int_to_Q_GDIR_TM_conversions.o"

win32/CAST_Int_to_G_A_TM_conversions.o: CAST_Int_to_G_A_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_G_A_TM_conversions.c" -o "win32\CAST_Int_to_G_A_TM_conversions.o"

win32/CAST_Int_to_D_GRADIENT_TM_conversions.o: CAST_Int_to_D_GRADIENT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_GRADIENT_TM_conversions.c" -o "win32\CAST_Int_to_D_GRADIENT_TM_conversions.o"

win32/C_P021_extract_el_section_TM_lib_internal.o: C_P021_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_extract_el_section_TM_lib_internal.c" -o "win32\C_P021_extract_el_section_TM_lib_internal.o"

win32/Read_P015_TM.o: Read_P015_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P015_TM.c" -o "win32\Read_P015_TM.o"

win32/C_P015_compr_onboard_TM_conversions.o: C_P015_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_compr_onboard_TM_conversions.c" -o "win32\C_P015_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_D_STARTOL_TM_conversions.o: CAST_Int_to_D_STARTOL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_STARTOL_TM_conversions.c" -o "win32\CAST_Int_to_D_STARTOL_TM_conversions.o"

win32/CAST_Int_to_D_ENDTIMERSTA_TM_conversions.o: CAST_Int_to_D_ENDTIMERSTA_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_ENDTIMERSTA_TM_conversions.c" -o "win32\CAST_Int_to_D_ENDTIMERSTA_TM_conversions.o"

win32/CAST_Int_to_V_RELEASEOL_TM_conversions.o: CAST_Int_to_V_RELEASEOL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_RELEASEOL_TM_conversions.c" -o "win32\CAST_Int_to_V_RELEASEOL_TM_conversions.o"

win32/CAST_Int_to_L_ENDSECTION_TM_conversions.o: CAST_Int_to_L_ENDSECTION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_ENDSECTION_TM_conversions.c" -o "win32\CAST_Int_to_L_ENDSECTION_TM_conversions.o"

win32/CAST_Int_to_V_RELEASEDP_TM_conversions.o: CAST_Int_to_V_RELEASEDP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_RELEASEDP_TM_conversions.c" -o "win32\CAST_Int_to_V_RELEASEDP_TM_conversions.o"

win32/CAST_Int_to_Q_ENDTIMER_TM_conversions.o: CAST_Int_to_Q_ENDTIMER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_ENDTIMER_TM_conversions.c" -o "win32\CAST_Int_to_Q_ENDTIMER_TM_conversions.o"

win32/CAST_Int_to_T_OL_TM_conversions.o: CAST_Int_to_T_OL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_OL_TM_conversions.c" -o "win32\CAST_Int_to_T_OL_TM_conversions.o"

win32/CAST_Int_to_T_LOA_TM_conversions.o: CAST_Int_to_T_LOA_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_LOA_TM_conversions.c" -o "win32\CAST_Int_to_T_LOA_TM_conversions.o"

win32/CAST_Int_to_Q_DANGERPOINT_TM_conversions.o: CAST_Int_to_Q_DANGERPOINT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_DANGERPOINT_TM_conversions.c" -o "win32\CAST_Int_to_Q_DANGERPOINT_TM_conversions.o"

win32/CAST_Int_to_Q_OVERLAP_TM_conversions.o: CAST_Int_to_Q_OVERLAP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_OVERLAP_TM_conversions.c" -o "win32\CAST_Int_to_Q_OVERLAP_TM_conversions.o"

win32/C_P015_unflatten_sections_TM_lib_internal.o: C_P015_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_unflatten_sections_TM_lib_internal.c" -o "win32\C_P015_unflatten_sections_TM_lib_internal.o"

win32/C_P015_us_array_TM_lib_internal.o: C_P015_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_us_array_TM_lib_internal.c" -o "win32\C_P015_us_array_TM_lib_internal.o"

win32/CAST_Int_to_D_SECTIONTIME_TM_conversions.o: CAST_Int_to_D_SECTIONTIME_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_SECTIONTIME_TM_conversions.c" -o "win32\CAST_Int_to_D_SECTIONTIME_TM_conversions.o"

win32/CAST_Int_to_Q_SECTIONTIMER_TM_conversions.o: CAST_Int_to_Q_SECTIONTIMER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_SECTIONTIMER_TM_conversions.c" -o "win32\CAST_Int_to_Q_SECTIONTIMER_TM_conversions.o"

win32/CAST_Int_to_T_SECTIONTIMER_TM_conversions.o: CAST_Int_to_T_SECTIONTIMER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_SECTIONTIMER_TM_conversions.c" -o "win32\CAST_Int_to_T_SECTIONTIMER_TM_conversions.o"

win32/CAST_Int_to_L_SECTION_TM_conversions.o: CAST_Int_to_L_SECTION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_SECTION_TM_conversions.c" -o "win32\CAST_Int_to_L_SECTION_TM_conversions.o"

win32/C_P015_extract_el_section_TM_lib_internal.o: C_P015_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_extract_el_section_TM_lib_internal.c" -o "win32\C_P015_extract_el_section_TM_lib_internal.o"

win32/CAST_Int_to_T_ENDTIMER_TM_conversions.o: CAST_Int_to_T_ENDTIMER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_ENDTIMER_TM_conversions.c" -o "win32\CAST_Int_to_T_ENDTIMER_TM_conversions.o"

win32/CAST_Int_to_V_LOA_TM_conversions.o: CAST_Int_to_V_LOA_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_LOA_TM_conversions.c" -o "win32\CAST_Int_to_V_LOA_TM_conversions.o"

win32/CAST_Int_to_D_OL_TM_conversions.o: CAST_Int_to_D_OL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_OL_TM_conversions.c" -o "win32\CAST_Int_to_D_OL_TM_conversions.o"

win32/CAST_Int_to_D_DP_TM_conversions.o: CAST_Int_to_D_DP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_DP_TM_conversions.c" -o "win32\CAST_Int_to_D_DP_TM_conversions.o"

win32/RECV_ReadPackets_TM_lib_internal.o: RECV_ReadPackets_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_ReadPackets_TM_lib_internal.c" -o "win32\RECV_ReadPackets_TM_lib_internal.o"

win32/RECV_ReadPacketKernel_TM_lib_internal.o: RECV_ReadPacketKernel_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_ReadPacketKernel_TM_lib_internal.c" -o "win32\RECV_ReadPacketKernel_TM_lib_internal.o"

win32/RECV_ReadPacketKernelLoop_TM_lib_internal.o: RECV_ReadPacketKernelLoop_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_ReadPacketKernelLoop_TM_lib_internal.c" -o "win32\RECV_ReadPacketKernelLoop_TM_lib_internal.o"

win32/RECV_LookupPacket_TM_lib_internal.o: RECV_LookupPacket_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_LookupPacket_TM_lib_internal.c" -o "win32\RECV_LookupPacket_TM_lib_internal.o"

win32/RECV_LookupPacketLoop_TM_lib_internal.o: RECV_LookupPacketLoop_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_LookupPacketLoop_TM_lib_internal.c" -o "win32\RECV_LookupPacketLoop_TM_lib_internal.o"

win32/T_Filter_Metadata_TM_lib_internal.o: T_Filter_Metadata_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Filter_Metadata_TM_lib_internal.c" -o "win32\T_Filter_Metadata_TM_lib_internal.o"

win32/T_Filter_Metadata_Element_TM_lib_internal.o: T_Filter_Metadata_Element_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Filter_Metadata_Element_TM_lib_internal.c" -o "win32\T_Filter_Metadata_Element_TM_lib_internal.o"

win32/T_Decode_metadata_new_TM_lib_internal.o: T_Decode_metadata_new_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Decode_metadata_new_TM_lib_internal.c" -o "win32\T_Decode_metadata_new_TM_lib_internal.o"

win32/Read_M003_TM_radio_messages.o: Read_M003_TM_radio_messages.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_M003_TM_radio_messages.c" -o "win32\Read_M003_TM_radio_messages.o"

win32/CAST_NID_MESSAGE_to_int_TM_conversions.o: CAST_NID_MESSAGE_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_MESSAGE_to_int_TM_conversions.c" -o "win32\CAST_NID_MESSAGE_to_int_TM_conversions.o"

win32/Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.o: Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.c" -o "win32\Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_consts.c" -o "win32\kcg_consts.o"

win32/MEN_Demonstrator_newtype.o: MEN_Demonstrator_newtype.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MEN_Demonstrator_newtype.c" -o "win32\MEN_Demonstrator_newtype.o"

win32/MEN_Demonstrator_newmapping.o: MEN_Demonstrator_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MEN_Demonstrator_newmapping.c" -o "win32\MEN_Demonstrator_newmapping.o"

win32/MEN_Demonstrator_newinterface.o: MEN_Demonstrator_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MEN_Demonstrator_newinterface.c" -o "win32\MEN_Demonstrator_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

Test_TrainTrack.dll: win32/Test_TrainTrack.o win32/Track.o win32/SendBalises.o win32/TrackClose_InfraLib.o win32/TrackInit_InfraLib.o win32/TrackDiscontinuity_InfraLib.o win32/TrackDiscontinuity_CalcTr_InfraLib.o win32/Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o win32/Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o win32/Balise_352_0_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o win32/Balise_Group_Close_InfraLib.o win32/Balise_Group_Init_InfraLib.o win32/Balise_352_1_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o win32/Packets_BG352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.o win32/Send_P045_MessageLibBaseline2.o win32/Write_P045_TM_trackside.o win32/C_P045_tracksim_compr_TM_conversions.o win32/Send_P255_MessageLibBaseline2.o win32/Write_P255_TM_trackside.o win32/C_P255_tracksim_compr_TM_conversions.o win32/Balise_Localisation_InfraLib.o win32/TOOLS_convert_engineering_TM_conversions.o win32/Balise_Interdistance_InfraLib.o win32/SendRBC.o win32/RBC_close_RadioLib.o win32/RBC_init_RadioLib.o win32/Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Send_M003_JRU_MessageLibBaseline2.o win32/C_M003_int__to_header_TM_RBC_conversions.o win32/SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Send_P015_MessageLibBaseline2.o win32/Write_P015_TM_trackside.o win32/C_P015_tracksim_compr_TM_conversions.o win32/C_P015_flatten_sections_TM_lib_internal.o win32/C_P015_fs_struct_to_array_TM_lib_internal.o win32/C_P015_fs_flatten_array_TM_lib_internal.o win32/Send_P065_MessageLibBaseline2.o win32/Write_P065_TM_trackside.o win32/C_P065_tracksim_compr_TM_conversions.o win32/Send_P041_MessageLibBaseline2.o win32/Write_P041_TM_trackside.o win32/C_P041_tracksim_compr_TM_conversions.o win32/C_P041_flatten_sections_TM_lib_internal.o win32/C_P041_fs_struct_to_array_TM_lib_internal.o win32/C_P041_fs_flatten_array_TM_lib_internal.o win32/Send_P005_MessageLibBaseline2.o win32/Write_P005_TM_trackside.o win32/C_P005_tracksim_compr_TM_conversions.o win32/C_P005_flatten_sections_TM_lib_internal.o win32/C_P005_fs_struct_to_array_TM_lib_internal.o win32/C_P005_fs_flatten_array_TM_lib_internal.o win32/Send_P003V1_MessageLibBaseline2.o win32/Write_P003V1_TM_trackside_baseline2.o win32/C_P003V1_tracksim_compr_TM_conversions_baseline2.o win32/Send_P027V1_MessageLibBaseline2.o win32/Write_P027V1_TM_trackside_baseline2.o win32/C_P027V1_tracksim_merge_s_TM_conversions_baseline2.o win32/C_P027V1_tracksim_compr_o_TM_conversions_baseline2.o win32/C_P027_flatten_sections_qdiff_TM_lib_internal.o win32/C_P027V1_fs_struct_to_arr_TM_lib_internal.o win32/C_P027V1_fs_flatten_array_TM_lib_internal.o win32/C_P027V1_tracksim_compr_body_TM_conversions_baseline2.o win32/SEND_WriteMessageHeader_TM_lib_internal.o win32/Send_P021_MessageLibBaseline2.o win32/Write_P021_TM_trackside.o win32/C_P021_tracksim_compr_TM_conversions.o win32/T_Build_Metadata_Packet_ID_TM_lib_internal.o win32/C_P021_flatten_sections_TM_lib_internal.o win32/C_P021_fs_struct_to_array_TM_lib_internal.o win32/C_P021_fs_flatten_array_TM_lib_internal.o win32/T_DeterminePacketSizeInt_TM_lib_internal.o win32/SEND_MessageData_TM_lib_internal.o win32/SEND_WriteBaliseDataElement_TM_lib_internal.o win32/SEND_WriteBaliseMessageHeader_TM_lib_internal.o win32/SEND_FindSlot_TM_lib_internal.o win32/Read_M157_TM_radio_messages_trackside.o win32/C_compr_P044_TM_TrainToTrack.o win32/C_compr_P005_TM_TrainToTrack.o win32/CAST_Int_to_NID_OPERATIONAL_TM_conversions.o win32/C_compr_P004_TM_TrainToTrack.o win32/CAST_Int_to_M_ERROR_TM_conversions.o win32/C_compr_P000_TM_TrainToTrack.o win32/C_compr_P001_TM_TrainToTrack.o win32/CAST_Int_to_NID_PRVLRBG_TM_conversions.o win32/CAST_Int_to_D_LRBG_TM_conversions.o win32/Filter_Variable_TM_TrainToTrack.o win32/Decode_NID_PACKET_TM_TrainToTrack.o win32/CAST_Int_to_M_LEVEL_TM_conversions.o win32/CAST_Int_to_M_MODE_TM_conversions.o win32/CAST_Int_to_Q_DIRTRAIN_TM_conversions.o win32/CAST_Int_to_V_TRAIN_TM_conversions.o win32/CAST_Int_to_L_TRAININT_TM_conversions.o win32/CAST_Int_to_Q_LENGTH_TM_conversions.o win32/CAST_Int_to_L_DOUBTUNDER_TM_conversions.o win32/CAST_Int_to_L_DOUBTOVER_TM_conversions.o win32/CAST_Int_to_Q_DRLRBG_TM_conversions.o win32/CAST_Int_to_Q_DIRLRBG_TM_conversions.o win32/C_header_to_M157_TM_RBC_conversions.o win32/CAST_Int_to_NID_ENGINE_TM_conversions.o win32/CAST_Int_to_Q_STATUS_TM_conversions.o win32/Train.o win32/compressed_to_Radio_Track_TM_RBC_conversions_legacy.o win32/M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M028_TM_RBC_conversions.o win32/M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M032_TM_RBC_conversions.o win32/CAST_Int_to_M_VERSION_TM_conversions.o win32/C_header_to_M033_TM_RBC_conversions.o win32/M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M034_TM_RBC_conversions.o win32/CAST_Int_to_D_TAFDISPLAY_TM_conversions.o win32/CAST_Int_to_L_TAFDISPLAY_TM_conversions.o win32/M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M038_TM_RBC_conversions.o win32/M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M039_TM_RBC_conversions.o win32/M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M040_TM_RBC_conversions.o win32/M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M041_TM_RBC_conversions.o win32/C_header_to_M043_TM_RBC_conversions.o win32/M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M045_TM_RBC_conversions.o win32/CAST_Int_to_Q_ORIENTATION_TM_conversions.o win32/M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M002_TM_RBC_conversions.o win32/CAST_Int_to_D_SR_TM_conversions.o win32/C_header_to_M003_TM_RBC_conversions.o win32/M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M006_TM_RBC_conversions.o win32/M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M008_TM_RBC_conversions.o win32/M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M009_TM_RBC_conversions.o win32/M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M015_TM_RBC_conversions.o win32/CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.o win32/CAST_Int_to_D_REF_TM_conversions.o win32/M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M016_TM_RBC_conversions.o win32/C_header_to_M018_TM_RBC_conversions.o win32/CAST_Int_to_NID_EM_TM_conversions.o win32/M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M024_TM_RBC_conversions.o win32/M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M027_TM_RBC_conversions.o win32/CAST_Int_to_L_MESSAGE_TM_conversions.o win32/CAST_Int_to_NID_MESSAGE_TM_conversions.o win32/CAST_Int_to_T_TRAIN_TM_conversions.o win32/CAST_Int_to_NID_LRBG_TM_conversions.o win32/CAST_Int_to_M_ACK_TM_conversions.o win32/M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/Send_M157_TM_radio_messages.o win32/CheckSpace_TM_TrainTrack_Bus.o win32/CheckSpaceLoop_TM_TrainTrack_Bus.o win32/BufferMsg_TM_lib_internal.o win32/BufferMsg_read_only_TM_lib_internal.o win32/BufferMsg_read_write_TM_lib_internal.o win32/BufferMsg_write_only_TM_lib_internal.o win32/MergeMessageToBus_TM_TrainTrack_Bus.o win32/Merge_PacketsToMessage_TM_TrainToTrack.o win32/C_P001_train_compr_TM_TrainToTrack.o win32/CAST_NID_PRVLRBG_to_int_TM_conversions.o win32/C_P000_train_compr_TM_TrainToTrack.o win32/CAST_D_LRBG_to_int_TM_conversions.o win32/CAST_NID_NTC_to_int_TM_conversions.o win32/CAST_M_LEVEL_to_int_TM_conversions.o win32/CAST_M_MODE_to_int_TM_conversions.o win32/CAST_Q_DIRTRAIN_to_int_TM_conversions.o win32/CAST_V_TRAIN_to_int_TM_conversions.o win32/CAST_L_TRAININT_to_int_TM_conversions.o win32/CAST_Q_LENGTH_to_int_TM_conversions.o win32/CAST_L_DOUBTUNDER_to_int_TM_conversions.o win32/CAST_L_DOUBTOVER_to_int_TM_conversions.o win32/CAST_Q_DRLRBG_to_int_TM_conversions.o win32/CAST_Q_DIRLRBG_to_int_TM_conversions.o win32/CAST_NID_LRBG_to_int_TM_conversions.o win32/CAST_Q_SCALE_to_int_TM_conversions.o win32/C_M157_to_header_TM_RBC_conversions.o win32/CAST_T_TRAIN_to_int_TM_conversions.o win32/CAST_NID_ENGINE_to_int_TM_conversions.o win32/CAST_L_MESSAGE_to_int_TM_conversions.o win32/CAST_Q_STATUS_to_int_TM_conversions.o win32/C_P044_train_compr_TM_TrainToTrack.o win32/C_P005_train_compr_TM_TrainToTrack.o win32/CAST_NID_OPERATIONAL_to_int_TM_conversions.o win32/C_P004_train_compr_TM_TrainToTrack.o win32/Encode_NID_PACKET_TM_TrainToTrack.o win32/CAST_M_ERROR_to_int_TM_conversions.o win32/CAST_L_PACKET_to_int_TM_conversions.o win32/CAST_NID_PACKET_to_int_TM_conversions.o win32/Read_P003V1_TM_baseline2.o win32/C_P003V1_compr_onboard_TM_conversions_baseline2.o win32/CAST_Int_to_D_NVSTFF_TM_conversions.o win32/CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.o win32/CAST_Int_to_M_NVDERUN_TM_conversions.o win32/CAST_Int_to_T_NVCONTACT_TM_conversions.o win32/CAST_Int_to_M_NVCONTACT_TM_conversions.o win32/CAST_Int_to_D_NVPOTRP_TM_conversions.o win32/CAST_Int_to_Q_NVEMRRLS_TM_conversions.o win32/CAST_Int_to_T_NVOVTRP_TM_conversions.o win32/CAST_Int_to_D_NVOVTRP_TM_conversions.o win32/CAST_Int_to_V_NVSUPOVTRP_TM_conversions.o win32/CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.o win32/CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.o win32/CAST_Int_to_D_NVROLL_TM_conversions.o win32/CAST_Int_to_V_NVREL_TM_conversions.o win32/CAST_Int_to_V_NVUNFIT_TM_conversions.o win32/CAST_Int_to_V_NVONSIGHT_TM_conversions.o win32/CAST_Int_to_V_NVSTFF_TM_conversions.o win32/CAST_Int_to_V_NVSHUNT_TM_conversions.o win32/CAST_Int_to_D_VALIDNV_TM_conversions.o win32/C_P003V1_unflatten_sections_TM_lib_internal.o win32/C_P003V1_us_array_TM_lib_internal.o win32/C_P003V1_extract_el_section_TM_lib_internal.o win32/Read_P027V1_TM_baseline2.o win32/Read_P027V1_sections_TM_baseline2.o win32/C_P027V1_compr_onboard_se_TM_conversions_baseline2.o win32/CAST_Int_to_V_STATIC_TM_conversions.o win32/CAST_Int_to_Q_FRONT_TM_conversions.o win32/CAST_Int_to_D_STATIC_TM_conversions.o win32/C_P027V1_us_array_qdiff_TM_lib_internal.o win32/CAST_Int_to_V_DIFF_TM_conversions.o win32/CAST_Int_to_NC_DIFF_TM_conversions.o win32/C_P027V1_extract_el_section_TM_lib_internal.o win32/T_Decode_Metadata_L2_TM_lib_internal.o win32/Read_P005_TM.o win32/C_P005_compr_onboard_TM_conversions.o win32/C_P005_unflatten_sections_TM_lib_internal.o win32/C_P005_us_array_TM_lib_internal.o win32/CAST_Int_to_NID_BG_TM_conversions.o win32/CAST_Int_to_Q_LINKORIENTATION_TM_conversions.o win32/CAST_Int_to_Q_LINKREACTION_TM_conversions.o win32/CAST_Int_to_Q_LOCACC_TM_conversions.o win32/CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.o win32/CAST_Int_to_NID_C_TM_conversions.o win32/CAST_Int_to_D_LINK_TM_conversions.o win32/C_P005_extract_el_section_TM_lib_internal.o win32/Read_P041_TM.o win32/C_P041_compr_onboard_TM_conversions.o win32/CAST_Int_to_D_LEVELTR_TM_conversions.o win32/C_P041_unflatten_sections_TM_lib_internal.o win32/C_P041_us_array_TM_lib_internal.o win32/CAST_Int_to_NID_NTC_TM_conversions.o win32/CAST_Int_to_L_ACKLEVELTR_TM_conversions.o win32/CAST_Int_to_M_LEVELTR_TM_conversions.o win32/C_P041_extract_el_section_TM_lib_internal.o win32/Read_P021_TM.o win32/C_P021_compr_onboard_TM_conversions.o win32/C_P021_unflatten_sections_TM_lib_internal.o win32/C_P021_us_array_TM_lib_internal.o win32/CAST_Int_to_Q_GDIR_TM_conversions.o win32/CAST_Int_to_G_A_TM_conversions.o win32/CAST_Int_to_D_GRADIENT_TM_conversions.o win32/C_P021_extract_el_section_TM_lib_internal.o win32/Read_P015_TM.o win32/C_P015_compr_onboard_TM_conversions.o win32/CAST_Int_to_D_STARTOL_TM_conversions.o win32/CAST_Int_to_D_ENDTIMERSTA_TM_conversions.o win32/CAST_Int_to_V_RELEASEOL_TM_conversions.o win32/CAST_Int_to_L_ENDSECTION_TM_conversions.o win32/CAST_Int_to_V_RELEASEDP_TM_conversions.o win32/CAST_Int_to_Q_ENDTIMER_TM_conversions.o win32/CAST_Int_to_T_OL_TM_conversions.o win32/CAST_Int_to_T_LOA_TM_conversions.o win32/CAST_Int_to_Q_DANGERPOINT_TM_conversions.o win32/CAST_Int_to_Q_OVERLAP_TM_conversions.o win32/C_P015_unflatten_sections_TM_lib_internal.o win32/C_P015_us_array_TM_lib_internal.o win32/CAST_Int_to_D_SECTIONTIME_TM_conversions.o win32/CAST_Int_to_Q_SECTIONTIMER_TM_conversions.o win32/CAST_Int_to_T_SECTIONTIMER_TM_conversions.o win32/CAST_Int_to_L_SECTION_TM_conversions.o win32/C_P015_extract_el_section_TM_lib_internal.o win32/CAST_Int_to_T_ENDTIMER_TM_conversions.o win32/CAST_Int_to_V_LOA_TM_conversions.o win32/CAST_Int_to_D_OL_TM_conversions.o win32/CAST_Int_to_D_DP_TM_conversions.o win32/RECV_ReadPackets_TM_lib_internal.o win32/RECV_ReadPacketKernel_TM_lib_internal.o win32/RECV_ReadPacketKernelLoop_TM_lib_internal.o win32/RECV_LookupPacket_TM_lib_internal.o win32/RECV_LookupPacketLoop_TM_lib_internal.o win32/T_Filter_Metadata_TM_lib_internal.o win32/T_Filter_Metadata_Element_TM_lib_internal.o win32/T_Decode_metadata_new_TM_lib_internal.o win32/Read_M003_TM_radio_messages.o win32/CAST_NID_MESSAGE_to_int_TM_conversions.o win32/Radio_Track_Train_Hd_to_M003_TM_RBC_conversions_legacy.o win32/kcg_types.o win32/kcg_consts.o win32/MEN_Demonstrator_newtype.o win32/MEN_Demonstrator_newmapping.o win32/MEN_Demonstrator_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	gcc -mwindows -mwin32 -shared -static-libgcc  "@Makefile_Test_TrainTrack_objects.txt" -Wl,--output-def,"SmuExport.def" -lm -lwsock32 -m32 -o "Test_TrainTrack.dll" 

SmuExport.def: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuExport.def
	copy "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/Test_TrainTrack_dll.o: Test_TrainTrack_dll.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Test_TrainTrack_dll.c" -o "win32\Test_TrainTrack_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

Test_TrainTrack.exe: win32/Test_TrainTrack_dll.o win32/SmuMainWindows.o 
	gcc "win32\Test_TrainTrack_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -m32 -o "Test_TrainTrack.exe" 

#############################################################
######    End of Makefile
#############################################################

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*inclusion of unistd.h for access to access function*/
#include <unistd.h>
#include "Amsterdam_Utrecht_US_Integration_June.h"

/* US_Integration_June::Amsterdam_Utrecht::TrainPos */
kcg_real TrainPos;
/* US_Integration_June::Amsterdam_Utrecht::Trigger_in */
kcg_int Trigger_in;

/* US_Integration_June::Amsterdam_Utrecht::Balise_Packets */
CompressedPackets_T_Common_Types_Pkg Balise_Packets;
/* US_Integration_June::Amsterdam_Utrecht::Balise_Header */
TelegramHeader_T_BG_Types_Pkg Balise_Header;
/* US_Integration_June::Amsterdam_Utrecht::RadioTrackTrainHeader_out */
Radio_TrackTrain_Header_T_Radio_Types_Pkg RadioTrackTrainHeader_out;
/* US_Integration_June::Amsterdam_Utrecht::Compressed_Packets_out */
CompressedPackets_T_Common_Types_Pkg Compressed_Packets_out;
/* US_Integration_June::Amsterdam_Utrecht::Compressed_Radio_Message_out */
CompressedRadioMessage_TM Compressed_Radio_Message_out;


const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

int main(int argc, char **argv)
{
	if (access("train_input.csv" , F_OK ) != -1 ) { 
		//FILE* stream = fopen("train_input.csv", "r");
	} else {
		printf("Input file does not exist. This program expects train_input.csv in the same folder\n");
		return 0;
	}
	//SCADE reset function call
	Amsterdam_Utrecht_reset_US_Integration_June();
	
	FILE* stream = fopen("train_input.csv", "r");
	char line[1024];
	int cycle = 0;
	while (fgets(line, 1024, stream))
	{
		cycle++;
		printf("Cycle %d : ", cycle);
        	char* tmp = strdup(line); //strok trashes line, hence repeated tmp use for each call to getfield 
		TrainPos = atof( getfield(tmp, 1) );
		printf("Train_pos %f : ", TrainPos);
        	tmp = strdup(line); //strok trashes line, hence repeated tmp use  for each call to getfield
		Trigger_in = atoi( getfield(tmp, 2) );
		printf("Trigger_in %d\n", Trigger_in);
		Amsterdam_Utrecht_US_Integration_June();
        	free(tmp);
	}
	printf("Execution of %d cycles complete\n" , cycle);
	return 0;
}

